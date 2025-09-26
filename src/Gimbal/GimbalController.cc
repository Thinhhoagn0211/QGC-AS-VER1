#include "GimbalController.h"

#include "MAVLinkProtocol.h"
#include "Vehicle.h"
#include "QGCApplication.h"
#include "SettingsManager.h"
#include "ParameterManager.h"
#include <cmath>
#include <Eigen/Eigen>
#include <QtGlobal>
QGC_LOGGING_CATEGORY(GimbalLog, "GimbalLog")

// const char* GimbalController::_gimbalFactGroupNamePrefix =  "gimbal";
const char* Gimbal::_absoluteRollFactName =                 "gimbalRoll";
const char* Gimbal::_absolutePitchFactName =                "gimbalPitch";
const char* Gimbal::_bodyYawFactName =                      "gimbalYaw";
const char* Gimbal::_absoluteYawFactName =                  "gimbalAzimuth";
const char* Gimbal::_deviceIdFactName =                     "deviceId";
const char* Gimbal::_managerCompidFactName =                "managerCompid";

Gimbal::Gimbal(QObject* parent)
    : FactGroup(100, ":/json/Vehicle/GimbalFact.json", parent) // pass parent to QObject
{
    _initFacts();
}

Gimbal::Gimbal(const Gimbal& other)
    : FactGroup(100, ":/json/Vehicle/GimbalFact.json") // No need to set parent as this will be deleted by gimbalController destructor
{
    _initFacts();
    *this = other;
}

const Gimbal& Gimbal::operator=(const Gimbal& other)
{
    _requestInformationRetries = other._requestInformationRetries;
    _requestStatusRetries      = other._requestStatusRetries;
    _requestAttitudeRetries    = other._requestAttitudeRetries;
    _receivedInformation       = other._receivedInformation;
    _receivedStatus            = other._receivedStatus;
    _receivedAttitude          = other._receivedAttitude;
    _isComplete                = other._isComplete;
    _retracted                 = other._retracted;
    _neutral                   = other._neutral;
    _haveControl               = other._haveControl;
    _othersHaveControl         = other._othersHaveControl;
    _absoluteRollFact          = other._absoluteRollFact;
    _absolutePitchFact         = other._absolutePitchFact;
    _bodyYawFact               = other._bodyYawFact;
    _absoluteYawFact           = other._absoluteYawFact;
    _deviceIdFact              = other._deviceIdFact;
    _yawLock                   = other._yawLock;
    _haveControl               = other._haveControl;
    _othersHaveControl         = other._othersHaveControl;

    return *this;
}

// To be called EXCLUSIVELY in Gimbal constructors
void Gimbal::_initFacts()
{
    _absoluteRollFact =     Fact(0, _absoluteRollFactName,  FactMetaData::valueTypeFloat);
    _absolutePitchFact =    Fact(0, _absolutePitchFactName, FactMetaData::valueTypeFloat);
    _bodyYawFact =          Fact(0, _bodyYawFactName,       FactMetaData::valueTypeFloat);
    _absoluteYawFact =      Fact(0, _absoluteYawFactName,   FactMetaData::valueTypeFloat);
    _deviceIdFact =         Fact(0, _deviceIdFactName,      FactMetaData::valueTypeUint8);
    _managerCompidFact =    Fact(0, _managerCompidFactName, FactMetaData::valueTypeUint8);

    _addFact(&_absoluteRollFact,    _absoluteRollFactName);
    _addFact(&_absolutePitchFact,   _absolutePitchFactName);
    _addFact(&_bodyYawFact,         _bodyYawFactName);
    _addFact(&_absoluteYawFact,     _absoluteYawFactName);
    _addFact(&_deviceIdFact,        _deviceIdFactName);
    _addFact(&_managerCompidFact,   _managerCompidFactName);

    _absoluteRollFact.setRawValue   (0.0f);
    _absolutePitchFact.setRawValue  (0.0f);
    _bodyYawFact.setRawValue        (0.0f);
    _absoluteYawFact.setRawValue    (0.0f);
    _deviceIdFact.setRawValue       (0);
    _managerCompidFact.setRawValue  (0);
}

#define MAVLINK_VERSION 2

QGC_LOGGING_CATEGORY(GimbalControllerLog, "qgc.gimbal.gimbalcontroller")

GimbalController::GimbalController(Vehicle *vehicle)
    : QObject(vehicle)
    , _vehicle(vehicle)
    , _gimbals(new QmlObjectListModel(this))
{
    // qCDebug(GimbalControllerLog) << Q_FUNC_INFO << this;


    _laserDistanceTimer = new QTimer(this);
    _laserDistanceTimer->setInterval(1000);
    connect(_laserDistanceTimer, &QTimer::timeout, this, &GimbalController::requestLaserDistanceMeasurement);

    _attitudeRequestTimer = new QTimer(this);
    _attitudeRequestTimer->setInterval(1000); // 500ms
    connect(_attitudeRequestTimer, &QTimer::timeout, this, &GimbalController::getGimbalAttitudeData);
    _attitudeRequestTimer->start();
    setupSocket();
}

GimbalController::~GimbalController()
{
    _attitudeRequestTimer->stop();
    // qCDebug(GimbalControllerLog) << Q_FUNC_INFO << this;
}

void GimbalController::setupSocket()
{
    if (!_udpSocket) {
        _udpSocket = new QUdpSocket(this);
    }

    const QString hostName = qgcApp()->toolbox()->settingsManager()->appSettings()->forwardRaspherriMavlinkHostName()->rawValue().toString();
    QString host = "127.0.0.1";
    quint16 port = 14445;

    QStringList parts = hostName.split(":");
    if (parts.size() == 2) {
        host = parts[0];
        bool ok = false;
        quint16 parsedPort = parts[1].toUShort(&ok);
        if (ok) {
            port = parsedPort;
        }
    }
    _udpSocket->connectToHost(host, port);
    connect(_udpSocket, &QUdpSocket::readyRead, this, &GimbalController::readPendingDatagrams);

    QTimer::singleShot(0,   Qt::PreciseTimer, this, [this]{ getStitchingMode(); });
    // QTimer::singleShot(20,  Qt::PreciseTimer, this, [this]{ getGimbalAttitudeData(); });
    QTimer::singleShot(40,  Qt::PreciseTimer, this, [this]{ requestLaserRangingState(); });
    QTimer::singleShot(60,  Qt::PreciseTimer, this, [this]{ requestCameraSystemInformation(); });
    QTimer::singleShot(80,  Qt::PreciseTimer, this, [this]{ requestCurrentThermalPseudoColor(); });
    QTimer::singleShot(100, Qt::PreciseTimer, this, [this]{ requestCameraEncodingParamaters(1); });
    QTimer::singleShot(120, Qt::PreciseTimer, this, [this]{ requestCurrentGimbalMode(); });
}


/*
    All functions below to send mavlink command into raspherri PI
*/


void GimbalController::requestCameraSystemInformation()
{
    mavlink_message_t msg;
    mavlink_msg_request_camera_system_information_pack(1, 1, &msg, 1);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}


void GimbalController::autoFocus(int touch_x, int touch_y)
{
    mavlink_message_t msg;
    mavlink_msg_auto_focus_pack(1, 1, &msg, 1, touch_x, touch_y);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}


void GimbalController::manualZoom(int zoom)
{
    mavlink_message_t msg;
        mavlink_msg_manual_zoom_with_autofocus_pack(1, 1, &msg, zoom);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}

void GimbalController::manualFocus(int focus)
{
    mavlink_message_t msg;
    mavlink_msg_manual_focus_pack(1, 1, &msg, focus);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}

void GimbalController::gimbalRotationControl(int turn_yaw, int turn_pitch)
{
    mavlink_message_t msg;
    mavlink_msg_gimbal_rotation_control_pack(1, 1, &msg, turn_yaw, turn_pitch);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}

void GimbalController::getTemperatureAtSelectedPoint(int x, int y, int get_temp_flag)
{
    mavlink_message_t msg;
    mavlink_msg_get_temperature_at_selected_point_pack(1, 1, &msg, x, y, get_temp_flag);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}

void GimbalController::localTemperatureMeasurement(int startx, int starty, int endx, int endy, int get_temp_flag)
{
    mavlink_message_t msg;
    mavlink_msg_local_temperature_measurement_pack(1, 1, &msg, startx, starty, endx, endy, get_temp_flag);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}

void GimbalController::globalTemperatureMeasurement(int get_temp_flag)
{
    mavlink_message_t msg;
    mavlink_msg_global_temperature_measurement_pack(1, 1, &msg, get_temp_flag);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}

void GimbalController::requestCameraEncodingParamaters(int req_stream_type)
{
    mavlink_message_t msg;
    mavlink_msg_request_camera_encoding_parameters_pack(1, 1, &msg, req_stream_type);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}

void GimbalController::requestLaserRangingState()
{
    mavlink_message_t msg;
    mavlink_msg_request_system_info_pack(1, 1, &msg, 0);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}

void GimbalController::setLaserRangingState(int laser_state)
{
    mavlink_message_t msg;
    mavlink_msg_set_laser_state_pack(1, 1, &msg, laser_state);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}

void GimbalController::requestLaserDistanceMeasurement()
{
    mavlink_message_t msg;
    mavlink_msg_request_laser_distance_measurement_pack(1, 1, &msg, 0);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}

void GimbalController::gimbalCameraReboot(int camera_reboot, int gimbal_reset)
{   
    if (camera_reboot != _cameraSoftReboot) {
        _cameraSoftReboot = camera_reboot;
        emit cameraSoftRebootChanged();
    }
    if (gimbal_reset != _gimbalSoftReboot) {
        _gimbalSoftReboot = gimbal_reset;
        emit gimbalSoftRebootChanged();
    }
    mavlink_message_t msg;
    mavlink_msg_gimbal_camera_soft_reboot_pack(1, 1, &msg, camera_reboot, gimbal_reset);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}


void GimbalController::getStitchingMode()
{
    mavlink_message_t msg;
    mavlink_msg_request_video_stitching_mode_pack(1, 1, &msg, 0);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    } else {
        qDebug() << "Request stitching mode on main stream successfully, bytes:" << bytesSent;
    }
}

void GimbalController::setStitchingMode(uint8_t vdisp_mode)
{
    mavlink_message_t msg;
    mavlink_msg_set_video_stitching_mode_pack(1, 1, &msg, vdisp_mode);

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    } else {
        qDebug() << "Request stitching mode on main stream successfully, bytes:" << bytesSent;
    }
}

int GimbalController::findVdispMode(const QString& main, const QString& sub) const {
    for (const auto& mode : kMainStreamModes) {
        if (mode.mainStream == main && mode.subStream == sub) {
            return mode.vdisp_mode;
        }
    }
    return -1; // not found
}


void GimbalController::setMainStreamIndex(int index) {
    QStringList uniqueMainStreams;
    QSet<QString> seen;

    for (const auto& mode : kMainStreamModes) {
        if (!seen.contains(mode.mainStream)) {
            seen.insert(mode.mainStream);
            uniqueMainStreams << mode.mainStream;
        }
    }

    if (index < 0 || index >= uniqueMainStreams.size()) return;

    mainStreamMode = uniqueMainStreams[index]; // get actual string
    _mainStreamIndex = index;

    // find corresponding vdisp_mode from mainStream + current subStream
    _vdispMode = findVdispMode(mainStreamMode, subStreamMode);

    if (_vdispMode != -1) {
        setStitchingMode(_vdispMode);
    }

    qDebug() << "[GimbalController] mainStream:" << mainStreamMode
             << "[GimbalController] subStream:" << subStreamMode
             << "=> vdisp_mode:" << _vdispMode;

    emit mainStreamIndexChanged();
    emit vdispModeChanged();
}


void GimbalController::setSubStreamIndex(int index) {
    QStringList uniqueSubStreams;
    QSet<QString> seen;

    for (const auto& mode : kMainStreamModes) {
        if (!seen.contains(mode.subStream)) {
            seen.insert(mode.subStream);
            uniqueSubStreams << mode.subStream;
        }
    }

    if (index < 0 || index >= uniqueSubStreams.size()) return;

    subStreamMode = uniqueSubStreams[index]; // get actual string
    _subStreamIndex = index;

    // find corresponding vdisp_mode from mainStream + current subStream
    _vdispMode = findVdispMode(mainStreamMode, subStreamMode);

    if (_vdispMode != -1) {
        setStitchingMode(_vdispMode);
    }

    qDebug() << "[GimbalController] mainStream:" << mainStreamMode
             << "[GimbalController] subStream:" << subStreamMode
             << "=> vdisp_mode:" << _vdispMode;

    emit subStreamIndexChanged();
    emit vdispModeChanged();
}

QStringList GimbalController::mainStreamModes() const
{
    QSet<QString> seen;
    QStringList list;

    for (const auto& mode : kMainStreamModes) {
        if (!seen.contains(mode.mainStream)) {
            seen.insert(mode.mainStream);
            list << mode.mainStream;
        }
    }

    return list;
}

QStringList GimbalController::subStreamModes() const
{
    QSet<QString> seen;
    QStringList list;

    for (const auto& mode : kMainStreamModes) {
        if (!seen.contains(mode.subStream)) {
            seen.insert(mode.subStream);
            list << mode.subStream;
        }
    }

    return list;
}


void GimbalController::setZoomLevel(qreal level)
{
    level = std::clamp(level, 0.0, 30.0);
    int zoomInt = static_cast<int>(level);                           
    int zoomDecimal = static_cast<int>((level - zoomInt) * 100);
    mavlink_message_t msg;
    mavlink_msg_absolute_zoom_auto_focus_pack(
        1,
        1,
        &msg,
        zoomInt,
        zoomDecimal
    );
    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
    if (qFuzzyCompare(_zoomLevel, level))
        return; // No change
    _zoomLevel = level;
    emit zoomLevelChanged();
}


void GimbalController::getGimbalAttitudeData()
{
    mavlink_message_t msg;
    mavlink_msg_request_gimbal_attitude_data_pack(
        1,
        1,
        &msg,
        0
    );
    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}


void GimbalController::requestCurrentThermalPseudoColor()
{
    mavlink_message_t msg;
    mavlink_msg_request_current_thermal_image_pseudocolor_pack(1,1, &msg, 0);
    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}


void GimbalController::setCurrentThermalPseudoColor(int pseudo_color)
{
    mavlink_message_t msg;
    mavlink_msg_set_current_thermal_image_pseudocolor_pack(1,1, &msg, pseudo_color);
    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}


void GimbalController::setCurrentGimbalMode(int gimbal_mode)
{
    int tmp_gimbal_mode = 0;
    switch (gimbal_mode)
    {
    case 0:
        _gimbalCurrentMode = 0;
        tmp_gimbal_mode = 3;
        emit gimbalCurrentModeChanged();
        break;
    case 1:
        _gimbalCurrentMode = 1;
        tmp_gimbal_mode = 4;
        emit gimbalCurrentModeChanged();
        break;
    case 2:
        _gimbalCurrentMode = 2;
        tmp_gimbal_mode = 5;
        emit gimbalCurrentModeChanged();
        break;
    default:
        break;
    }

    mavlink_message_t msg;
    mavlink_msg_capture_photo_record_video_pack(1,1, &msg, tmp_gimbal_mode);
    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    
    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}

void GimbalController::requestCurrentGimbalMode()
{

    mavlink_message_t msg;
    mavlink_msg_request_current_gimbal_mode_pack(1,1, &msg, _gimbalCurrentMode);
    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}

void GimbalController::toggleGimbalRetracted(bool set)
{
    getGimbalAttitudeData();

    // retractedGimbalData();
}

void GimbalController::sendPitchBodyYaw(float pitch, float yaw, bool showError)
{

    _rateSenderTimer.stop();

    // _currentYaw = 0;
    // _currentPitch = 0;

    mavlink_message_t msg;
    mavlink_msg_set_gimbal_attitude_angles_pack(
        1,
        1,
        &msg,
        yaw * 10,
        pitch * 10
    );
    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = _udpSocket->write(reinterpret_cast<const char*>(buffer), len);

    if (bytesSent == -1) {
        qCritical() << "Failed to send MAVLink message:" << _udpSocket->errorString();
    }
}


void GimbalController::sendPitchAbsoluteYaw(float pitch, float yaw, bool showError)
{
    if (!_tryGetGimbalControl()) {
        return;
    }

    _rateSenderTimer.stop();
    _activeGimbal->setAbsolutePitch(0.0f);
    _activeGimbal->setYawRate(0.0f);

    if (yaw > 180.0f) {
        yaw -= 360.0f;
    }

    if (yaw < -180.0f) {
        yaw += 360.0f;
    }

    // qCDebug() << "sendPitch: " << pitch << " absoluteYaw: " << yaw;

    const unsigned flags = GIMBAL_MANAGER_FLAGS_ROLL_LOCK
                         | GIMBAL_MANAGER_FLAGS_PITCH_LOCK
                         | GIMBAL_MANAGER_FLAGS_YAW_LOCK
                         | GIMBAL_MANAGER_FLAGS_YAW_IN_EARTH_FRAME;

    _vehicle->sendMavCommand(
        _activeGimbal->managerCompid()->rawValue().toUInt(),
        MAV_CMD_DO_GIMBAL_MANAGER_PITCHYAW,
        showError,
        pitch,
        yaw,
        std::numeric_limits<double>::quiet_NaN(),
        std::numeric_limits<double>::quiet_NaN(),
        flags,
        0,
        _activeGimbal->deviceId()->rawValue().toUInt());
}



void GimbalController::readPendingDatagrams()
{
    while (_udpSocket->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(int(_udpSocket->pendingDatagramSize()));
        _udpSocket->readDatagram(datagram.data(), datagram.size());

        mavlink_message_t msg;
        mavlink_status_t status;
        for (int i = 0; i < datagram.size(); ++i) {
            if (mavlink_parse_char(MAVLINK_COMM_0, static_cast<uint8_t>(datagram[i]), &msg, &status)) {
                handleMavlinkMessage(msg);
                break;
            }
        }
    }
}

void GimbalController::handleMavlinkMessage(const mavlink_message_t& msg)
{
    // qDebug() << "Received MAVLink message ID:" << msg.msgid;

    switch (msg.msgid)
    {
    case MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION:
    {
        mavlink_response_request_camera_system_information_t decoded;
        mavlink_msg_response_request_camera_system_information_decode(&msg, &decoded);
        
        if (_gimbalCurrentMode != decoded.gimbal_motion_mode)
        {
            _gimbalCurrentMode = decoded.gimbal_motion_mode;
            emit gimbalCurrentModeChanged();
        }
        break;   
    }
    case MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA:
    {
        mavlink_response_request_gimbal_attitude_data_t decoded;
        mavlink_msg_response_request_gimbal_attitude_data_decode(&msg, &decoded);
        if (decoded.pitch != 0 || decoded.yaw != 0){
            setCurrentPitch(decoded.pitch / 10.0f); 
            setCurrentYaw(decoded.yaw / 10.0f);     
            setCurrentRoll(decoded.roll / 10.0f);   
        }
        break;
    }
    case MAVLINK_MSG_ID_RESPONSE_REQUEST_VIDEO_STITCHING_MODE:
    {
        mavlink_response_request_video_stitching_mode_t decoded;
        mavlink_msg_response_request_video_stitching_mode_decode(&msg, &decoded);

        // qDebug() << "Decoded Gimbal Attitude:";
        // qDebug() << "  Video Stitching Mode:" << decoded.vdisp_mode;
        getStreamModesFromVdisp(decoded.vdisp_mode);
        break;
    }
    case MAVLINK_MSG_ID_RESPONSE_SET_VIDEO_STITCHING_MODE:
    {
        mavlink_response_set_video_stitching_mode_t decoded;
        mavlink_msg_response_set_video_stitching_mode_decode(&msg, &decoded);
        // qDebug() << "Decoded Gimbal Attitude:";
        // qDebug() << "  Video Stitching Mode:" << decoded.vdisp_mode;
        break;
    }
    case MAVLINK_MSG_ID_RESPONSE_REQUEST_SYSTEM_INFO:
    {
        mavlink_response_request_system_info_t decoded;
        mavlink_msg_response_request_system_info_decode(&msg, &decoded);
        // qDebug() <<"Laser range finder state: " << decoded.laser_state;
        if (decoded.laser_state == 1) {
            _rangeFinderEnabled = true;
        } else if (decoded.laser_state == 0) {
            _rangeFinderEnabled = false;
        }
        emit rangeFinderEnabledChanged();
        break;
    }
    case MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_MEASUREMENT:
    {
        mavlink_response_request_laser_distance_measurement_t decoded;
        mavlink_msg_response_request_laser_distance_measurement_decode(&msg, &decoded);
        _targetDistance = decoded.laser_distance / 10.0f;
        emit targetDistanceChanged();
        break;
    }
    case MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT:
    {
        mavlink_response_get_temperature_at_selected_point_t decoded;
        mavlink_msg_response_get_temperature_at_selected_point_decode(&msg, &decoded);
        _targetTemperature = decoded.temperature / 100.0f;
        _targetTemperaturePointX = decoded.x;
        _targetTemperaturePointY = decoded.y;
        emit targetTemperatureChanged();
        break;
    }
    case MAVLINK_MSG_ID_RESPONSE_LOCAL_TEMPERATURE_MEASUREMENT:
    {
        mavlink_response_local_temperature_measurement_t decoded;
        mavlink_msg_response_local_temperature_measurement_decode(&msg, &decoded);
        _targetTemperatureMax = decoded.temp_max / 100.0f;
        _targetTemperatureMin = decoded.temp_min / 100.0f;
        _targetTemperatureMinX = decoded.temp_min_x;
        _targetTemperatureMinY = decoded.temp_min_y;
        _targetTemperatureMaxX = decoded.temp_max_x;
        _targetTemperatureMaxY = decoded.temp_max_y;

        emit targetTemperatureMaxChanged();
        emit targetTemperatureMaxXChanged();
        emit targetTemperatureMaxYChanged();
        emit targetTemperatureMinChanged();
        emit targetTemperatureMinXChanged();
        emit targetTemperatureMinYChanged();
        break;
    }
    case MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT:
    {
        mavlink_response_global_temperature_measurement_t decoded;
        mavlink_msg_response_global_temperature_measurement_decode(&msg, &decoded);
        _targetTemperatureMax = decoded.temp_max / 100.0f;
        _targetTemperatureMin = decoded.temp_min / 100.0f;
        _targetTemperatureMinX = decoded.temp_min_x;
        _targetTemperatureMinY = decoded.temp_min_y;
        _targetTemperatureMaxX = decoded.temp_max_x;
        _targetTemperatureMaxY = decoded.temp_max_y;

        emit targetTemperatureMaxChanged();
        emit targetTemperatureMaxXChanged();
        emit targetTemperatureMaxYChanged();
        emit targetTemperatureMinChanged();
        emit targetTemperatureMinXChanged();
        emit targetTemperatureMinYChanged();
        break;
    }
    case MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_ENCODING_PARAMETERS:
    {
        mavlink_response_request_camera_encoding_parameters_t decoded;
        mavlink_msg_response_request_camera_encoding_parameters_decode(&msg, &decoded);
        
        _mainStreamResolutionW = decoded.resolution_width;
        _mainStreamResolutionH = decoded.resolution_height;

        emit mainStreamResolutionHChanged();
        emit mainStreamResolutionWChanged();
        break;   
    }
    case MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR:
    {
        mavlink_response_request_current_thermal_image_pseudocolor_t decoded;
        mavlink_msg_response_request_current_thermal_image_pseudocolor_decode(&msg, &decoded);
        
        if (_currentThermalPseudoColor != decoded.pseudo_color)
        {
            _currentThermalPseudoColor = decoded.pseudo_color;
            emit currentThermalPseudoColorChanged();
        }
        break; 
    }
    case MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR:
    {
        mavlink_response_set_current_thermal_image_pseudocolor_t decoded;
        mavlink_msg_response_set_current_thermal_image_pseudocolor_decode(&msg, &decoded);
        
        if (_currentThermalPseudoColor != decoded.pseudo_color)
        {
            _currentThermalPseudoColor = decoded.pseudo_color;
            emit currentThermalPseudoColorChanged();
        }
        break; 
    }
    case MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_GIMBAL_MODE:
    {
        mavlink_response_request_current_gimbal_mode_t decoded;
        mavlink_msg_response_request_current_gimbal_mode_decode(&msg, &decoded);

        if (_gimbalCurrentMode != decoded.gimbal_mode)
        {
            _gimbalCurrentMode = decoded.gimbal_mode;
            emit gimbalCurrentModeChanged();
        }
        if (_activeGimbal) {
            _activeGimbal->setGimbalHaveControl(true);
            qCDebug(GimbalControllerLog) << "Received current gimbal mode, setting control to true.";
        }
        break;   
    }
    default:
        break;
    }
}

void GimbalController::getStreamModesFromVdisp(int vdisp_mode)
{
    for (const auto& mode : kMainStreamModes) {
        if (mode.vdisp_mode == vdisp_mode) {
            mainStreamMode = mode.mainStream;
            subStreamMode = mode.subStream;
            return;
        }
    }

    // fallback if vdisp_mode not found
    mainStreamMode = "Unknown";
    subStreamMode = "Unknown";
}


void GimbalController::setActiveGimbal(Gimbal *gimbal)
{
    if (!gimbal) {
        qCDebug(GimbalControllerLog) << "Set active gimbal: attempted to set a nullptr, returning";
        return;
    }

    if (gimbal != _activeGimbal) {
        qCDebug(GimbalControllerLog) << "Set active gimbal:" << gimbal;
        _activeGimbal = gimbal;
        emit activeGimbalChanged();
    }
}

void GimbalController::setCurrentYaw(float yaw)
{
    _currentYaw = yaw;
    emit currentYawChanged();
}

void GimbalController::setCurrentPitch(float pitch)
{
    _currentPitch = pitch;
    emit currentPitchChanged();
}

void GimbalController::setCurrentRoll(float roll)
{
    _currentRoll = roll;
    emit currentRollChanged();
}


void GimbalController::_mavlinkMessageReceived(const mavlink_message_t &message)
{
    // Don't proceed until parameters are ready, otherwise the gimbal controller handshake
    // could potentially not work due to the high traffic for parameters, mission download, etc
    if (!_vehicle->parameterManager()->parametersReady()) {
        return;
    }

    switch (message.msgid) {
    case MAVLINK_MSG_ID_HEARTBEAT:
        _handleHeartbeat(message);
        break;
    case MAVLINK_MSG_ID_GIMBAL_MANAGER_INFORMATION:
        _handleGimbalManagerInformation(message);
        break;
    case MAVLINK_MSG_ID_GIMBAL_MANAGER_STATUS:
        _handleGimbalManagerStatus(message);
        break;
    case MAVLINK_MSG_ID_GIMBAL_DEVICE_ATTITUDE_STATUS:
           _handleGimbalDeviceAttitudeStatus(message);
        break;
    default:
        break;
    }
}

void GimbalController::_handleHeartbeat(const mavlink_message_t &message)
{
    if (!_potentialGimbalManagers.contains(message.compid)) {
        qCDebug(GimbalControllerLog) << "new potential gimbal manager component:" << message.compid;
    }

    PotentialGimbalManager &gimbalManager = _potentialGimbalManagers[message.compid];

    // Note that we are working over potential gimbal managers here, instead of potential gimbals.
    // This is because we address the gimbal manager by compid, but a gimbal device might have an
    // id different than the message compid it comes from. For more information see https://mavlink.io/en/services/gimbal_v2.html
    if (!gimbalManager.receivedInformation && (gimbalManager.requestGimbalManagerInformationRetries > 0)) {
        _requestGimbalInformation(message.compid);
        --gimbalManager.requestGimbalManagerInformationRetries;
    }
}

void GimbalController::_handleGimbalManagerInformation(const mavlink_message_t &message)
{
    mavlink_gimbal_manager_information_t information{};
    mavlink_msg_gimbal_manager_information_decode(&message, &information);

    if (information.gimbal_device_id == 0) {
        qCWarning(GimbalControllerLog) << "_handleGimbalManagerInformation for invalid gimbal device:"
                             << information.gimbal_device_id << ", from component id:" << message.compid;
        return;
    }

    qCDebug(GimbalControllerLog) << "_handleGimbalManagerInformation for gimbal device:" << information.gimbal_device_id << ", component id:" << message.compid;

    const GimbalPairId pairId{message.compid, information.gimbal_device_id};

    auto gimbalIt = _potentialGimbals.find(pairId);
    if (gimbalIt == _potentialGimbals.constEnd()) {
        gimbalIt = _potentialGimbals.insert(pairId, new Gimbal(this));
    }

    Gimbal *const gimbal = gimbalIt.value();
    gimbal->setManagerCompid(message.compid);
    gimbal->setDeviceId(information.gimbal_device_id);

    if (!gimbal->_receivedInformation) {
        qCDebug(GimbalControllerLog) << "gimbal manager with compId:" << message.compid
                           << " is responsible for gimbal device:" << information.gimbal_device_id;
    }

    gimbal->_receivedInformation = true;
    // It is important to flag our potential gimbal manager as well, so we stop requesting gimbal_manger_information message
    PotentialGimbalManager &gimbalManager = _potentialGimbalManagers[message.compid];
    gimbalManager.receivedInformation = true;

    _checkComplete(*gimbal, pairId);
}

void GimbalController::_handleGimbalManagerStatus(const mavlink_message_t &message)
{
    mavlink_gimbal_manager_status_t status{};
    mavlink_msg_gimbal_manager_status_decode(&message, &status);

    // qCDebug(GimbalControllerLog) << "_handleGimbalManagerStatus for gimbal device:" << status.gimbal_device_id << ", component id:" << message.compid;

    if (status.gimbal_device_id == 0) {
        qCDebug(GimbalControllerLog) << "gimbal manager with compId:" << message.compid
        << "reported status of gimbal device id:" << status.gimbal_device_id << "which is not a valid gimbal device id";
        return;
    }

    const GimbalPairId pairId{message.compid, status.gimbal_device_id};

    auto gimbalIt = _potentialGimbals.find(pairId);
    if (gimbalIt == _potentialGimbals.constEnd()) {
        gimbalIt = _potentialGimbals.insert(pairId, new Gimbal(this));
    }

    Gimbal *const gimbal = gimbalIt.value();
    if (gimbal->deviceId()->rawValue().toUInt() == 0) {
        gimbal->setDeviceId(status.gimbal_device_id);
    } else if (gimbal->deviceId()->rawValue().toUInt() != status.gimbal_device_id) {
        qCWarning(GimbalControllerLog) << "conflicting GIMBAL_MANAGER_STATUS.gimbal_device_id:" << status.gimbal_device_id;
    }

    if (gimbal->managerCompid()->rawValue().toUInt() == 0) {
        gimbal->setManagerCompid(message.compid);
    } else if (gimbal->managerCompid()->rawValue().toUInt() != message.compid) {
        qCWarning(GimbalControllerLog) << "conflicting GIMBAL_MANAGER_STATUS compid:" << message.compid;
    }

    // Only log this message once
    if (!gimbal->_receivedStatus) {
        qCDebug(GimbalControllerLog) << "_handleGimbalManagerStatus: gimbal manager with compId" << message.compid
                                     << "is responsible for gimbal device" << status.gimbal_device_id;
    }

    gimbal->_receivedStatus = true;

    const bool haveControl =
        (status.primary_control_sysid == qgcApp()->toolbox()->mavlinkProtocol()->getSystemId()) &&
        (status.primary_control_compid == qgcApp()->toolbox()->mavlinkProtocol()->getComponentId());

    const bool othersHaveControl = !haveControl &&
        (status.primary_control_sysid != 0 && status.primary_control_compid != 0);

    if (gimbal->gimbalHaveControl() != haveControl) {
        gimbal->setGimbalHaveControl(haveControl);
    }

    if (gimbal->gimbalOthersHaveControl() != othersHaveControl) {
        gimbal->setGimbalOthersHaveControl(othersHaveControl);
    }

    _checkComplete(*gimbal, pairId);
}

void GimbalController::_handleGimbalDeviceAttitudeStatus(const mavlink_message_t &message)
{
    mavlink_gimbal_device_attitude_status_t attitude_status{};
    mavlink_msg_gimbal_device_attitude_status_decode(&message, &attitude_status);

    GimbalPairId pairId{};

    if (attitude_status.gimbal_device_id == 0) {
        // If gimbal_device_id is 0, we must take the compid of the message
        pairId.deviceId = message.compid;

        // We do a reverse lookup here
        const auto foundGimbal = std::find_if(_potentialGimbals.begin(), _potentialGimbals.end(),
                     [ pairId](Gimbal *gimbal) { return (gimbal->deviceId()->rawValue().toUInt() == pairId.deviceId); });

        if (foundGimbal == _potentialGimbals.constEnd()) {
            qCDebug(GimbalControllerLog) << "_handleGimbalDeviceAttitudeStatus for unknown device id:"
                               << pairId.deviceId << "from component id:" << message.compid;
            return;
        }

        pairId.managerCompid = foundGimbal.key().managerCompid;
    } else if (attitude_status.gimbal_device_id <= 6) {
         // If the gimbal_device_id field is set to 1-6, we must use this device id instead
        pairId.deviceId = attitude_status.gimbal_device_id;
        pairId.managerCompid = message.compid;
    } else {
        // Otherwise, this is invalid and we don't know how to deal with it.
        qCDebug(GimbalControllerLog) << "_handleGimbalDeviceAttitudeStatus for invalid device id: "
                           << attitude_status.gimbal_device_id << " from component id: " << message.compid;
        return;
    }

    auto gimbalIt = _potentialGimbals.find(pairId);
    if (gimbalIt == _potentialGimbals.end()) {
        gimbalIt = _potentialGimbals.insert(pairId, new Gimbal(this));
    }

    Gimbal *const gimbal = gimbalIt.value();

    gimbal->setRetracted((attitude_status.flags & GIMBAL_DEVICE_FLAGS_RETRACT) > 0);
    gimbal->setYawLock((attitude_status.flags & GIMBAL_DEVICE_FLAGS_YAW_LOCK) > 0);
    gimbal->_neutral = (attitude_status.flags & GIMBAL_DEVICE_FLAGS_NEUTRAL) > 0;

    float roll, pitch, yaw;
    mavlink_quaternion_to_euler(attitude_status.q, &roll, &pitch, &yaw);

    gimbal->setAbsoluteRoll(qRadiansToDegrees(roll));
    gimbal->setAbsolutePitch(qRadiansToDegrees(pitch));

    const bool yaw_in_vehicle_frame = _yawInVehicleFrame(attitude_status.flags);
    if (yaw_in_vehicle_frame) {
        const float bodyYaw = qRadiansToDegrees(yaw);
        float absoluteYaw = bodyYaw + _vehicle->heading()->rawValue().toFloat();
        if (absoluteYaw > 180.0f) {
            absoluteYaw -= 360.0f;
        }

        gimbal->setBodyYaw(bodyYaw);
        gimbal->setAbsoluteYaw(absoluteYaw);

    } else {
        const float absoluteYaw = qRadiansToDegrees(yaw);
        float bodyYaw = absoluteYaw - _vehicle->heading()->rawValue().toFloat();
        if (bodyYaw < -180.0f) {
            bodyYaw += 360.0f;
        }

        gimbal->setBodyYaw(bodyYaw);
        gimbal->setAbsoluteYaw(absoluteYaw);
    }

    gimbal->_receivedAttitude = true;

    _checkComplete(*gimbal, pairId);
}

void GimbalController::_requestGimbalInformation(uint8_t compid)
{
    qCDebug(GimbalControllerLog) << "_requestGimbalInformation(" << compid << ")";

    if (_vehicle) {
        _vehicle->sendMavCommand(compid,
                                 MAV_CMD_REQUEST_MESSAGE,
                                 false /* no error */,
                                 MAVLINK_MSG_ID_GIMBAL_MANAGER_INFORMATION);
    }
}

void GimbalController::_checkComplete(Gimbal &gimbal, GimbalPairId pairId)
{
    if (gimbal._isComplete) {
        // Already complete, nothing to do.
        return;
    }

    if (!gimbal._receivedInformation && gimbal._requestInformationRetries > 0) {
        _requestGimbalInformation(pairId.managerCompid);
        --gimbal._requestInformationRetries;
    }
    // Limit to 1 second between set message interface requests
    static qint64 lastRequestStatusMessage = 0;
    qint64 now = QDateTime::currentMSecsSinceEpoch();
    if (!gimbal._receivedStatus && (gimbal._requestStatusRetries > 0) && (now - lastRequestStatusMessage > 1000)) {
        lastRequestStatusMessage = now;
        _vehicle->sendMavCommand(pairId.managerCompid,
                                 MAV_CMD_SET_MESSAGE_INTERVAL,
                                 false /* no error */,
                                 MAVLINK_MSG_ID_GIMBAL_MANAGER_STATUS,
                                 (gimbal._requestStatusRetries > 2) ? 0 : 5000000); // request default rate, if we don't succeed, last attempt is fixed 0.2 Hz instead
        --gimbal._requestStatusRetries;
        qCDebug(GimbalControllerLog) << "attempt to set GIMBAL_MANAGER_STATUS message at"
                           << (gimbal._requestStatusRetries > 2 ? "default rate" : "0.2 Hz") << "interval for device:"
                           << gimbal.deviceId()->rawValue().toUInt() << "manager compID:" << pairId.managerCompid
                           << ", retries remaining:" << gimbal._requestStatusRetries;
    }

    if (!gimbal._receivedAttitude && (gimbal._requestAttitudeRetries > 0) &&
        gimbal._receivedInformation && (pairId.deviceId != 0)) {
        // We request the attitude directly from the gimbal device component.
        // We can only do that once we have received the gimbal manager information
        // telling us which gimbal device it is responsible for.
        uint8_t gimbalDeviceCompid = pairId.deviceId;
        // If the device ID is 1-6, we need to request the message from the manager itself.
        if (gimbalDeviceCompid <= 6) {
            gimbalDeviceCompid = pairId.managerCompid;
        }
        _vehicle->sendMavCommand(gimbalDeviceCompid,
                                 MAV_CMD_SET_MESSAGE_INTERVAL,
                                 false /* no error */,
                                 MAVLINK_MSG_ID_GIMBAL_DEVICE_ATTITUDE_STATUS,
                                 0 /* request default rate */);

        --gimbal._requestAttitudeRetries;
    }

    if (!gimbal._receivedInformation || !gimbal._receivedStatus || !gimbal._receivedAttitude) {
        // Not complete yet.
        return;
    }

    gimbal._isComplete = true;

    // If there is no current active gimbal, set this one as active
    if (!_activeGimbal) {
        setActiveGimbal(&gimbal);
    }

    _gimbals->append(&gimbal);
    // This is needed for new Gimbals telemetry to be available for the user to show in flyview telemetry panel
    _vehicle->_addFactGroup(&gimbal, QStringLiteral("%1%2%3").arg(_gimbalFactGroupNamePrefix).arg(pairId.managerCompid).arg(pairId.deviceId));
}

bool GimbalController::_tryGetGimbalControl()
{
    if (!_activeGimbal) {
        qCDebug(GimbalControllerLog) << "_tryGetGimbalControl: active gimbal is nullptr, returning";
        return false;
    }

    if (_activeGimbal->gimbalOthersHaveControl()) {
        qCDebug(GimbalControllerLog) << "Others in control, showing popup for user to confirm control..";
        emit showAcquireGimbalControlPopup();
        return false;
    } else if (!_activeGimbal->gimbalHaveControl()) {
        qCDebug(GimbalControllerLog) << "Nobody in control, acquiring control ourselves..";
        acquireGimbalControl();
    }

    return true;
}

bool GimbalController::_yawInVehicleFrame(uint32_t flags)
{
    if ((flags & GIMBAL_DEVICE_FLAGS_YAW_IN_VEHICLE_FRAME) > 0) {
        return true;
    } else if ((flags & GIMBAL_DEVICE_FLAGS_YAW_IN_EARTH_FRAME) > 0) {
        return false;
    } else {
        // For backwards compatibility: if both new flags are 0, yaw lock defines the frame.
        return ((flags & GIMBAL_DEVICE_FLAGS_YAW_LOCK) == 0);
    }
}

void GimbalController::gimbalPitchStart(int direction)
{
    if (!_activeGimbal) {
        qCDebug(GimbalControllerLog) << "gimbalPitchStart: active gimbal is nullptr, returning";
        return;
    }

    const float speed = qgcApp()->toolbox()->settingsManager()->gimbalControllerSettings()->joystickButtonsSpeed()->rawValue().toInt();
    activeGimbal()->setPitchRate(direction * speed);

    sendRate();
}

void GimbalController::gimbalYawStart(int direction)
{
    if (!_activeGimbal) {
        qCDebug(GimbalControllerLog) << "gimbalYawStart: active gimbal is nullptr, returning";
        return;
    }

    const float speed = qgcApp()->toolbox()->settingsManager()->gimbalControllerSettings()->joystickButtonsSpeed()->rawValue().toInt();
    activeGimbal()->setYawRate(direction * speed);
    sendRate();
}

void GimbalController::gimbalPitchStop()
{
    if (!_activeGimbal) {
        qCDebug(GimbalControllerLog) << "gimbalPitchStop: active gimbal is nullptr, returning";
        return;
    }

    activeGimbal()->setPitchRate(0.0f);
    sendRate();
}

void GimbalController::gimbalYawStop()
{
    if (!_activeGimbal) {
        qCDebug(GimbalControllerLog) << "gimbalYawStop: active gimbal is nullptr, returning";
        return;
    }

    activeGimbal()->setYawRate(0.0f);
    sendRate();
}

void GimbalController::centerGimbal()
{
    sendPitchBodyYaw(0.0, 0.0);
}

void GimbalController::gimbalOnScreenControl(float panPct, float tiltPct, bool clickAndPoint, bool clickAndDrag, bool rateControl, bool retract, bool neutral, bool yawlock)
{
    // Pan and tilt comes as +-(0-1)
    // getGimbalAttitudeData();
    if (clickAndPoint) { // based on FOV
        const float hFov = qgcApp()->toolbox()->settingsManager()->gimbalControllerSettings()->CameraHFov()->rawValue().toFloat();
        const float vFov = qgcApp()->toolbox()->settingsManager()->gimbalControllerSettings()->CameraVFov()->rawValue().toFloat();

        const float panIncDesired = -panPct * hFov * 0.5f;
        const float tiltIncDesired = tiltPct * vFov * 0.5f;

        const float panDesired = panIncDesired + _currentYaw;
        const float tiltDesired = tiltIncDesired + _currentPitch;

        _currentYaw = panDesired;
        _currentPitch = tiltDesired;
        // if (_activeGimbal->yawLock()) {
        //     sendPitchAbsoluteYaw(tiltDesired, panDesired + _vehicle->heading()->rawValue().toFloat(), false);
        // } else {
        sendPitchBodyYaw(tiltDesired, panDesired, false);
        // }
    }  else if (clickAndDrag) { // based on maximum speed
        // Should send rate commands, but it seems for some reason it is not working on AP side.
        // Pitch works ok but yaw doesn't stop, it keeps like inertia, like if it was buffering the messages.
        // So we do a workaround with angle targets
        const float maxSpeed = qgcApp()->toolbox()->settingsManager()->gimbalControllerSettings()->CameraSlideSpeed()->rawValue().toFloat();

        const float panIncDesired = -panPct * maxSpeed * 0.1f;
        const float tiltIncDesired = tiltPct * maxSpeed * 0.1f;

        const float panDesired = panIncDesired + _currentYaw;
        const float tiltDesired = tiltIncDesired + _currentPitch;
        
        // Gửi lệnh điều khiển gimbal
        sendPitchBodyYaw(tiltDesired, panDesired, false);

        // Cập nhật góc hiện tại để lần sau không gửi lại nếu không cần
        _currentYaw = panDesired;
        _currentPitch = tiltDesired;

    }
}



void GimbalController::sendRate()
{
    if (!_tryGetGimbalControl()) {
        return;
    }

    unsigned flags = GIMBAL_MANAGER_FLAGS_ROLL_LOCK | GIMBAL_MANAGER_FLAGS_PITCH_LOCK;

    if (_activeGimbal->yawLock()) {
        flags |= GIMBAL_MANAGER_FLAGS_YAW_LOCK;
    }

    _vehicle->sendMavCommand(
        _activeGimbal->managerCompid()->rawValue().toUInt(),
        MAV_CMD_DO_GIMBAL_MANAGER_PITCHYAW,
        false,
        std::numeric_limits<double>::quiet_NaN(),
        std::numeric_limits<double>::quiet_NaN(),
        _activeGimbal->pitchRate(),
        _activeGimbal->yawRate(),
        flags,
        0,
        _activeGimbal->deviceId()->rawValue().toUInt());

    qCDebug(GimbalControllerLog) << "Gimbal rate sent!";

    // Stop timeout if both unset.
    if ((_activeGimbal->pitchRate() == 0.f) && (_activeGimbal->yawRate() == 0.f)) {
        _rateSenderTimer.stop();
    } else {
        _rateSenderTimer.start();
    }
}

void GimbalController::_rateSenderTimeout()
{
    // Send rate again to avoid timeout on autopilot side.
    sendRate();
}

void GimbalController::toggleGimbalYawLock(bool set)
{
    // if (!_tryGetGimbalControl()) {
    //     return;
    // }

    // Roll and pitch are usually "locked", so with horizon and not with aircraft.
    uint32_t flags = GIMBAL_DEVICE_FLAGS_ROLL_LOCK | GIMBAL_DEVICE_FLAGS_PITCH_LOCK;
    if (set) {
        flags |= GIMBAL_DEVICE_FLAGS_YAW_LOCK;
    }

    sendPitchYawFlags(flags);
}

void GimbalController::sendPitchYawFlags(uint32_t flags)
{
    const bool yaw_in_vehicle_frame = _yawInVehicleFrame(flags);

    _vehicle->sendMavCommand(
        _activeGimbal->managerCompid()->rawValue().toUInt(),
        MAV_CMD_DO_GIMBAL_MANAGER_PITCHYAW,
        true,
        _activeGimbal->absolutePitch()->rawValue().toFloat(),
        yaw_in_vehicle_frame ? _activeGimbal->bodyYaw()->rawValue().toFloat() : _activeGimbal->absoluteYaw()->rawValue().toFloat(),
        std::numeric_limits<double>::quiet_NaN(),
        std::numeric_limits<double>::quiet_NaN(),
        flags,
        0,
        _activeGimbal->deviceId()->rawValue().toUInt());
}

void GimbalController::acquireGimbalControl()
{
    if (!_activeGimbal) {
        qCDebug(GimbalControllerLog) << "acquireGimbalControl: active gimbal is nullptr, returning";
        return;
    }

    _vehicle->sendMavCommand(
        _activeGimbal->managerCompid()->rawValue().toUInt(),
        MAV_CMD_DO_GIMBAL_MANAGER_CONFIGURE,
        true,
        qgcApp()->toolbox()->mavlinkProtocol()->getSystemId(), // Set us in primary control.
        qgcApp()->toolbox()->mavlinkProtocol()->getComponentId(), // Set us in primary control
        -1.f, // Leave secondary unchanged
        -1.f, // Leave secondary unchanged
        std::numeric_limits<double>::quiet_NaN(), // Reserved
        std::numeric_limits<double>::quiet_NaN(), // Reserved
        _activeGimbal->deviceId()->rawValue().toUInt());
}

void GimbalController::releaseGimbalControl()
{
    if (!_activeGimbal) {
        qCDebug(GimbalControllerLog) << "releaseGimbalControl: active gimbal is nullptr, returning";
        return;
    }

    _vehicle->sendMavCommand(
        _activeGimbal->managerCompid()->rawValue().toUInt(),
        MAV_CMD_DO_GIMBAL_MANAGER_CONFIGURE,
        true,
        -3.f, // Release primary control if we have control
        -3.f, // Release primary control if we have control
        -1.f, // Leave secondary control unchanged
        -1.f, // Leave secondary control unchanged
        std::numeric_limits<double>::quiet_NaN(), // Reserved
        std::numeric_limits<double>::quiet_NaN(), // Reserved
        _activeGimbal->deviceId()->rawValue().toUInt());
}



void GimbalController::setCalculatedTempPointEnabled(bool enabled) {
        if (_calculatedTempPointEnabled != enabled) {
            _calculatedTempPointEnabled = enabled;
            emit calculatedTempPointEnabledChanged();
        }
}

void GimbalController::setCalculatedTempAreaEnabled(bool enabled) {
    if (_calculatedTempAreaEnabled != enabled) {
        _calculatedTempAreaEnabled = enabled;
        emit calculatedTempAreaEnabledChanged();
    }
}

void GimbalController::setCalculatedTempScreenEnabled(bool enabled) {
    if (_calculatedTempScreenEnabled != enabled) {
        _calculatedTempScreenEnabled = enabled;
        emit calculatedTempScreenEnabledChanged();
    }
}


void GimbalController::setAutoFocusEnabled(bool enabled) {
    if (_autoFocusEnabled != enabled) {
        _autoFocusEnabled = enabled;
        emit autoFocusEnabledChanged();
    }
}

void GimbalController::setRangeFinderEnabled(bool enabled) {
    if (_rangeFinderEnabled != enabled) {
        _rangeFinderEnabled = enabled;
        emit rangeFinderEnabledChanged();

        // Only send command if changed
        if (enabled) {
            setLaserRangingState(1);
        } else {
            setLaserRangingState(0);
        }
    }
}


void GimbalController::setTemperatureEnabled(bool enabled) {
    if (_temperatureEnabled != enabled) {
        _temperatureEnabled = enabled;
        emit temperatureEnabled();
    }
}


void GimbalController::setDistanceCalculatorEnabled(bool enabled) {
    if (_distanceCalculatorEnabled != enabled) {
        _distanceCalculatorEnabled = enabled;
        emit distanceCalculatorEnabledChanged();

        if (enabled) {
            _laserDistanceTimer->start();
        } else {
            _laserDistanceTimer->stop();
            _targetDistance = 0;
            emit targetDistanceChanged();
        }
    }
}

void GimbalController::setTemperatureCalculatorEnabled(bool enabled) {
    if (_temperatureCalculatorEnabled != enabled) {
        _temperatureCalculatorEnabled = enabled;
        emit temperatureCalculatorEnabledChanged();
    }
}


void GimbalController::setManualZoomState(int value) {
    if (_manualZoomState != value) {
        _manualZoomState = value;
        emit manualZoomStateChanged();
    }
}

void GimbalController::setManualFocusState(int value) {
    if (_manualFocusState != value) {
        _manualFocusState = value;
        emit manualFocusStateChanged();
    }
}

void GimbalController::setTargetTemperaturePointX(int x) {
    _targetTemperaturePointX = x;
    emit targetTemperaturePointXChanged();
}


void GimbalController::setTargetTemperaturePointY(int y) {
    _targetTemperaturePointY = y;
    emit targetTemperaturePointYChanged();
}
