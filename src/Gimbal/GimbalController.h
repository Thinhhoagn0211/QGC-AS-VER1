/// @file GimbalController.h
/// @brief Class talking to gimbal managers based on the MAVLink gimbal v2 protocol.

#pragma once

#include <QLoggingCategory>
#include <cstdint>
#include "Vehicle.h"
#include "QmlObjectListModel.h"
#include <QtNetwork/QUdpSocket>
Q_DECLARE_LOGGING_CATEGORY(GimbalLog)

class MavlinkProtocol;

class Gimbal : public FactGroup
{
    Q_OBJECT

    friend class GimbalController; // so it can set private members of gimbal, it is the only class that will need to modify them

public:
    Gimbal();
    Gimbal(const Gimbal& other);
    explicit Gimbal(QObject* parent = nullptr);
    const Gimbal& operator=(const Gimbal& other);

    Q_PROPERTY(float    yawRate                 READ yawRate                    NOTIFY yawRateChanged)
    Q_PROPERTY(Fact* absoluteRoll               READ absoluteRoll               CONSTANT)
    Q_PROPERTY(Fact* absolutePitch              READ absolutePitch              CONSTANT)
    Q_PROPERTY(Fact* bodyYaw                    READ bodyYaw                    CONSTANT)
    Q_PROPERTY(Fact* absoluteYaw                READ absoluteYaw                CONSTANT)
    Q_PROPERTY(Fact* deviceId                   READ deviceId                   CONSTANT)
    Q_PROPERTY(Fact* managerCompid              READ managerCompid              CONSTANT)
    Q_PROPERTY(bool  yawLock                    READ yawLock                    NOTIFY yawLockChanged)
    Q_PROPERTY(bool  retracted                  READ retracted                  NOTIFY retractedChanged)
    Q_PROPERTY(bool  gimbalHaveControl          READ gimbalHaveControl          NOTIFY gimbalHaveControlChanged)
    Q_PROPERTY(bool  gimbalOthersHaveControl    READ gimbalOthersHaveControl    NOTIFY gimbalOthersHaveControlChanged)
    Q_PROPERTY(float    pitchRate               READ pitchRate                  NOTIFY pitchRateChanged)

    Fact* absoluteRoll()                  { return &_absoluteRollFact;  }
    Fact* absolutePitch()                 { return &_absolutePitchFact; }
    Fact* bodyYaw()                       { return &_bodyYawFact;       }
    Fact* absoluteYaw()                   { return &_absoluteYawFact;   }
    Fact* deviceId()                      { return &_deviceIdFact;      }
    Fact* managerCompid()                 { return &_managerCompidFact; }
    bool  yawLock() const                 { return _yawLock;            }
    bool  retracted() const               { return _retracted;          }
    bool  gimbalHaveControl() const       { return _haveControl;        }
    bool  gimbalOthersHaveControl() const { return _othersHaveControl;  }
    float pitchRate() const { return _pitchRate; }
    float yawRate() const { return _yawRate; }

    void  setAbsoluteRoll(float absoluteRoll)   { _absoluteRollFact.setRawValue(absoluteRoll);                     }
    void  setAbsolutePitch(float absolutePitch) { _absolutePitchFact.setRawValue(absolutePitch);                   }
    void  setBodyYaw(float bodyYaw)             { _bodyYawFact.setRawValue(bodyYaw);                               }
    void  setAbsoluteYaw(float absoluteYaw)     { _absoluteYawFact.setRawValue(absoluteYaw);                       }
    void  setDeviceId(uint id)                  { _deviceIdFact.setRawValue(id);                                   }
    void  setManagerCompid(uint id)             { _managerCompidFact.setRawValue(id);                              }
    void  setYawLock(bool yawLock)              { _yawLock = yawLock;       emit yawLockChanged();                 }
    void  setRetracted(bool retracted)          { _retracted = retracted;   emit retractedChanged();               }
    void  setGimbalHaveControl(bool set)        { _haveControl = set;       emit gimbalHaveControlChanged();       }
    void  setGimbalOthersHaveControl(bool set)  { _othersHaveControl = set; emit gimbalOthersHaveControlChanged(); }
    void setYawRate(float yawRate) { if (yawRate != _yawRate) { _yawRate = yawRate; emit yawRateChanged(); } }
    void setPitchRate(float pitchRate) { if (pitchRate != _pitchRate) { _pitchRate = pitchRate; emit pitchRateChanged(); } }

signals:
    void yawLockChanged();
    void retractedChanged();
    void gimbalHaveControlChanged();
    void gimbalOthersHaveControlChanged();
    void yawRateChanged();
    void pitchRateChanged();

private:
    void _initFacts(); // To be called EXCLUSIVELY in Gimbal constructors

    // Private members only accesed by friend class GimbalController
    unsigned _requestInformationRetries = 3;
    unsigned _requestStatusRetries = 6;
    unsigned _requestAttitudeRetries = 3;
    bool _receivedInformation = false;
    bool _receivedStatus = false;
    bool _receivedAttitude = false;
    bool _isComplete = false;
    bool _neutral = false;

    float _pitchRate = 0.f;
    float _yawRate = 0.f;
    // Q_PROPERTIES
    Fact _absoluteRollFact;
    Fact _absolutePitchFact;
    Fact _bodyYawFact;
    Fact _absoluteYawFact;
    Fact _deviceIdFact; // Component ID of gimbal device (or 1-6 for non-MAVLink gimbal)
    Fact _managerCompidFact;
    bool _yawLock = false;
    bool _retracted = false;
    bool _haveControl = false;
    bool _othersHaveControl = false;

    // Fact names
    static const char* _absoluteRollFactName;
    static const char* _absolutePitchFactName;
    static const char* _bodyYawFactName;
    static const char* _absoluteYawFactName;
    static const char* _deviceIdFactName;
    static const char* _managerCompidFactName;
};

class GimbalController : public QObject
{
    Q_OBJECT
    // Q_MOC_INCLUDE("QmlObjectListModel.h")
    Q_PROPERTY(Gimbal *activeGimbal READ activeGimbal WRITE setActiveGimbal NOTIFY activeGimbalChanged)
    Q_PROPERTY(QmlObjectListModel *gimbals READ gimbals CONSTANT)
    Q_PROPERTY(qreal                zoomLevel               READ zoomLevel              WRITE  setZoomLevel         NOTIFY zoomLevelChanged)

    Q_PROPERTY(bool rangeFinderEnabled READ rangeFinderEnabled WRITE setRangeFinderEnabled NOTIFY rangeFinderEnabledChanged)
    Q_PROPERTY(bool temperatureEnabled READ temperatureEnabled WRITE setTemperatureEnabled NOTIFY temperatureEnabledChanged)

    Q_PROPERTY(bool distanceCalculatorEnabled READ distanceCalculatorEnabled WRITE setDistanceCalculatorEnabled NOTIFY distanceCalculatorEnabledChanged)
    Q_PROPERTY(float targetDistance READ targetDistance NOTIFY targetDistanceChanged)
    Q_PROPERTY(float targetTemperature READ targetTemperature NOTIFY targetTemperatureChanged)
    Q_PROPERTY(float targetTemperaturePointX READ targetTemperaturePointX WRITE setTargetTemperaturePointX NOTIFY targetTemperaturePointXChanged)
    Q_PROPERTY(float targetTemperaturePointY READ targetTemperaturePointY WRITE setTargetTemperaturePointY NOTIFY targetTemperaturePointYChanged)

    Q_PROPERTY(float targetTemperatureMax READ targetTemperatureMax NOTIFY targetTemperatureMaxChanged)
    Q_PROPERTY(float targetTemperatureMaxX READ targetTemperatureMaxX NOTIFY targetTemperatureMaxXChanged)
    Q_PROPERTY(float targetTemperatureMaxY READ targetTemperatureMaxY NOTIFY targetTemperatureMaxYChanged)
    Q_PROPERTY(float targetTemperatureMin READ targetTemperatureMin NOTIFY targetTemperatureMinChanged)
    Q_PROPERTY(float targetTemperatureMinX READ targetTemperatureMinX NOTIFY targetTemperatureMinXChanged)
    Q_PROPERTY(float targetTemperatureMinY READ targetTemperatureMinY NOTIFY targetTemperatureMinYChanged)

    Q_PROPERTY(int mainStreamResolutionW READ mainStreamResolutionW NOTIFY mainStreamResolutionWChanged)
    Q_PROPERTY(float mainStreamResolutionH READ mainStreamResolutionH NOTIFY mainStreamResolutionHChanged)

    Q_PROPERTY(QStringList gimbalModeList READ gimbalModeList CONSTANT)
    Q_PROPERTY(int gimbalCurrentMode READ gimbalCurrentMode NOTIFY gimbalCurrentModeChanged)

    Q_PROPERTY(int cameraSoftReboot READ cameraSoftReboot NOTIFY cameraSoftRebootChanged)
    Q_PROPERTY(int gimbalSoftReboot READ gimbalSoftReboot NOTIFY gimbalSoftRebootChanged)

    Q_PROPERTY(int currentThermalPseudoColor READ currentThermalPseudoColor NOTIFY currentThermalPseudoColorChanged)

    Q_PROPERTY(bool temperatureCalculatorEnabled READ temperatureCalculatorEnabled WRITE setTemperatureCalculatorEnabled NOTIFY temperatureCalculatorEnabledChanged)
    Q_PROPERTY(bool autoFocusEnabled READ autoFocusEnabled WRITE setAutoFocusEnabled NOTIFY autoFocusEnabledChanged)
    Q_PROPERTY(int manualZoomState READ manualZoomState WRITE setManualZoomState NOTIFY manualZoomStateChanged)
    Q_PROPERTY(int manualFocusState READ manualFocusState WRITE setManualFocusState NOTIFY manualFocusStateChanged)
    Q_PROPERTY(int mainStreamIndex READ mainStreamIndex WRITE setMainStreamIndex NOTIFY mainStreamIndexChanged)
    Q_PROPERTY(int subStreamIndex READ subStreamIndex WRITE setSubStreamIndex NOTIFY subStreamIndexChanged)
    Q_PROPERTY(int vdispMode READ vdispMode NOTIFY vdispModeChanged)
    Q_PROPERTY(QStringList mainStreamModes READ mainStreamModes CONSTANT)
    Q_PROPERTY(QStringList subStreamModes READ subStreamModes CONSTANT)
    Q_PROPERTY(bool calculatedTempPointEnabled READ calculatedTempPointEnabled WRITE setCalculatedTempPointEnabled NOTIFY calculatedTempPointEnabledChanged)
    Q_PROPERTY(bool calculatedTempAreaEnabled READ calculatedTempAreaEnabled WRITE setCalculatedTempAreaEnabled NOTIFY calculatedTempAreaEnabledChanged)
    Q_PROPERTY(bool calculatedTempScreenEnabled READ calculatedTempScreenEnabled WRITE setCalculatedTempScreenEnabled NOTIFY calculatedTempScreenEnabledChanged)

    Q_PROPERTY(float currentYaw                    READ currentYaw                  WRITE setCurrentYaw          NOTIFY currentYawChanged)
    Q_PROPERTY(float currentPitch                  READ currentPitch                WRITE setCurrentPitch        NOTIFY currentPitchChanged)
    Q_PROPERTY(float currentRoll                  READ currentRoll                WRITE setCurrentRoll        NOTIFY currentRollChanged)
public:
    GimbalController(Vehicle *vehicle);
    ~GimbalController();

    Gimbal *activeGimbal() const { return _activeGimbal; }
    QmlObjectListModel *gimbals() const { return _gimbals; }

    float targetDistance() const { return _targetDistance; }
    int targetTemperaturePointX() const { return _targetTemperaturePointX; }
    int targetTemperaturePointY() const { return _targetTemperaturePointY; }
    float targetTemperature() const { return _targetTemperature; }

    float targetTemperatureMax() const { return _targetTemperatureMax; } 
    int targetTemperatureMaxX() const { return _targetTemperatureMaxX; } 
    int targetTemperatureMaxY() const { return _targetTemperatureMaxY; } 

    float targetTemperatureMin() const { return _targetTemperatureMin; } 
    int targetTemperatureMinX() const { return _targetTemperatureMinX; } 
    int targetTemperatureMinY() const { return _targetTemperatureMinY; } 

    int mainStreamResolutionW() const { return _mainStreamResolutionW; } 
    int mainStreamResolutionH() const { return _mainStreamResolutionH; } 

    int gimbalCurrentMode() const { return _gimbalCurrentMode; }

    int cameraSoftReboot() const { return _cameraSoftReboot; }
    int gimbalSoftReboot() const { return _gimbalSoftReboot; }

    int currentThermalPseudoColor() const { return _currentThermalPseudoColor; }

    bool rangeFinderEnabled() const { return _rangeFinderEnabled; }
    bool temperatureEnabled() const { return _temperatureEnabled; }

    bool distanceCalculatorEnabled() const { return _distanceCalculatorEnabled; }
    bool temperatureCalculatorEnabled() const { return _temperatureCalculatorEnabled; }
    bool autoFocusEnabled() const { return _autoFocusEnabled; }
    int manualZoomState() const { return _manualZoomState; }
    int manualFocusState() const { return _manualFocusState; }
    bool calculatedTempPointEnabled() const { return _calculatedTempPointEnabled; }
    bool calculatedTempAreaEnabled() const { return _calculatedTempAreaEnabled; }
    bool calculatedTempScreenEnabled() const { return _calculatedTempScreenEnabled; }

    void setRangeFinderEnabled(bool enabled);
    void setTemperatureEnabled(bool enabled);
    void setDistanceCalculatorEnabled(bool enabled);
    void setTemperatureCalculatorEnabled(bool enabled);
    void setManualZoomState(int value);
    void setManualFocusState(int value);
    void setAutoFocusEnabled(bool enabled);
    void setActiveGimbal(Gimbal *gimbal);
    qreal zoomLevel() const { return _zoomLevel; }
    void setZoomLevel(qreal level);
    void setCalculatedTempPointEnabled(bool enabled);
    void setCalculatedTempAreaEnabled(bool enabled);
    void setCalculatedTempScreenEnabled(bool enabled);
    void setTargetTemperaturePointX(int x);
    void setTargetTemperaturePointY(int y);

    int mainStreamIndex() const { return _mainStreamIndex; }
    int subStreamIndex() const { return _subStreamIndex; }
    void setMainStreamIndex(int index);
    void setSubStreamIndex(int index);
    int vdispMode() const { return _vdispMode; }
    float currentYaw() const { return _currentYaw; }         
    float currentPitch() const { return _currentPitch; }    
    float currentRoll() const { return _currentRoll; }     

    void setCurrentYaw(float yaw);
    void setCurrentPitch(float pitch);
    void setCurrentRoll(float roll);

    QStringList mainStreamModes() const;
    QStringList subStreamModes() const;
    QStringList gimbalModeList() const { return { "Lock Mode", "Follow Mode", "FPV" }; }

    void sendPitchYawFlags(uint32_t flags);
    Q_INVOKABLE void gimbalOnScreenControl(float panpct, float tiltpct, bool clickAndPoint, bool clickAndDrag, bool rateControl, bool retract = false, bool neutral = false, bool yawlock = false);
    Q_INVOKABLE void sendPitchBodyYaw(float pitch, float yaw, bool showError = true);
    Q_INVOKABLE void sendPitchAbsoluteYaw(float pitch, float yaw, bool showError = true);
    Q_INVOKABLE void toggleGimbalRetracted(bool set = false);
    Q_INVOKABLE void toggleGimbalYawLock(bool set = false);
    Q_INVOKABLE void acquireGimbalControl();
    Q_INVOKABLE void releaseGimbalControl();
    Q_INVOKABLE void sendRate();
    Q_INVOKABLE void autoFocus(int touch_x, int touch_y);
    Q_INVOKABLE void manualZoom(int zoom);
    Q_INVOKABLE void manualFocus(int focus);
    Q_INVOKABLE void setLaserRangingState(int laser_state);
    Q_INVOKABLE void getTemperatureAtSelectedPoint(int x, int y, int get_temp_flag);
    Q_INVOKABLE void globalTemperatureMeasurement(int get_temp_flag);
    Q_INVOKABLE void localTemperatureMeasurement(int startx, int starty, int endx, int endy, int get_temp_flag);
    Q_INVOKABLE void requestCameraEncodingParamaters( int req_stream_type);
    Q_INVOKABLE void setCurrentThermalPseudoColor(int pseudo_color);
    Q_INVOKABLE void setCurrentGimbalMode(int gimbal_mode);
    Q_INVOKABLE void gimbalCameraReboot(int camera_reboot, int gimbal_reset);

signals:    
    void activeGimbalChanged();
    void showAcquireGimbalControlPopup(); // This triggers a popup in QML asking the user for aproval to take control
    void zoomLevelChanged();
    void mainStreamIndexChanged();
    void subStreamIndexChanged();
    void vdispModeChanged();
    void autoFocusEnabledChanged();
    void manualZoomStateChanged();
    void manualFocusStateChanged();

    void rangeFinderEnabledChanged();
    void temperatureEnabledChanged();

    void distanceCalculatorEnabledChanged();
    void targetDistanceChanged();
    void temperatureCalculatorEnabledChanged();
    void calculatedTempPointEnabledChanged();
    void calculatedTempAreaEnabledChanged();
    void calculatedTempScreenEnabledChanged();
    void targetTemperatureChanged();
    void targetTemperaturePointXChanged();
    void targetTemperaturePointYChanged();

    void targetTemperatureMaxChanged();
    void targetTemperatureMinChanged();
    void targetTemperatureMaxXChanged();
    void targetTemperatureMinXChanged();
    void targetTemperatureMaxYChanged();
    void targetTemperatureMinYChanged();

    void mainStreamResolutionWChanged();
    void mainStreamResolutionHChanged();

    void gimbalCurrentModeChanged();

    void currentThermalPseudoColorChanged();
    void cameraSoftRebootChanged();
    void gimbalSoftRebootChanged();

    void currentYawChanged();
    void currentPitchChanged();
    void currentRollChanged();

public slots:
    // These slots are conected with joysticks for button control
    void gimbalYawLock(bool yawLock) { toggleGimbalYawLock(yawLock); }
    Q_INVOKABLE void centerGimbal();
    void gimbalPitchStart(int direction);
    void gimbalYawStart(int direction);
    void gimbalPitchStop();
    void gimbalYawStop();

private slots:
    void _mavlinkMessageReceived(const mavlink_message_t& message);
    void requestLaserDistanceMeasurement();
    void _rateSenderTimeout();

private:
    struct GimbalPairId {
        GimbalPairId() = default;
        GimbalPairId(uint8_t _managerCompid, uint8_t _deviceId)
            : managerCompid(_managerCompid)
            , deviceId(_deviceId) {}

        // In order to use this as a key, we need to implement <,
        bool operator<(const GimbalPairId &other) const {
            // We compare managerCompid primarily, if they are equal, we compare the deviceId
            if (managerCompid < other.managerCompid) {
                return true;
            } else if (managerCompid > other.managerCompid) {
                return false;
            } else if (deviceId < other.deviceId) {
                return true;
            } else {
                return false;
            }
        }

        bool operator==(const GimbalPairId &other) const {
            return (managerCompid == other.managerCompid) && (deviceId == other.deviceId);
        }

        uint8_t managerCompid = 0;
        uint8_t deviceId = 0;
    };

    struct StreamMode {
        QString mainStream;
        QString subStream;
        uint8_t vdisp_mode;
    };

    int _mainStreamResolutionW = 0;
    int _mainStreamResolutionH = 0;
    
    int _gimbalCurrentMode = -1;
    int _cameraSoftReboot = 0;
    int _gimbalSoftReboot = 0;
    int _currentThermalPseudoColor = -1;

    float _targetTemperatureMax = 0;
    float _targetTemperatureMin = 0;
    int _targetTemperatureMinX = 0;
    int _targetTemperatureMinY = 0;
    int _targetTemperatureMaxX = 0;
    int _targetTemperatureMaxY = 0; 
    int _targetTemperaturePointX = 0;
    int _targetTemperaturePointY = 0;
    int _mainStreamIndex = 0;
    int _subStreamIndex = 0;
    bool _rangeFinderEnabled = false;
    bool _temperatureEnabled = false;
    bool _distanceCalculatorEnabled = false;
    bool _temperatureCalculatorEnabled = false;
    bool _autoFocusEnabled = false;
    bool _calculatedTempPointEnabled = false;
    bool _calculatedTempAreaEnabled = false;
    bool _calculatedTempScreenEnabled = false;
    int _manualZoomState = 0;
    int _manualFocusState = 0;
    QTimer* _laserDistanceTimer = nullptr;
    float _targetDistance = 0;
    float _targetTemperature = 0;


    float _currentYaw = 0;
    float _currentPitch = 0;
    float _currentRoll = 0;
    QString mainStreamMode;
    QString subStreamMode;
    const QList<StreamMode> kMainStreamModes = {
        { "Camera Zoom và Tầm nhiệt",        "Camera Góc rộng",  0 },
        { "Camera Góc rộng và Tầm nhiệt",  "Camera Zoom",        1 },
        { "Camera Zoom và Góc rộng",     "Camera Tầm nhiệt",     2 },
        { "Camera Zoom",                  "Camera Tầm nhiệt",     3 },
        { "Camera Zoom",                  "Camera Góc rộng",  4 },
        { "Camera Góc rộng",            "Camera Tầm nhiệt",     5 },
        { "Camera Góc rộng",            "Camera Zoom",        6 },
        { "Camera Tầm nhiệt",               "Camera Zoom",        7 },
        { "Camera Tầm nhiệt",               "Camera Góc rộng",  8 }
    };

    int _vdispMode = -1;
    qreal _zoomLevel = 0.0;
    QUdpSocket* _udpSocket = nullptr;
    // sockaddr_in _gimbalAddr{};
    int findVdispMode(const QString& main, const QString& sub) const;
    void getStreamModesFromVdisp(int vdisp_mode);
    void setupSocket();
    void getGimbalAttitudeData();
    void gimbalRotationControl(int turn_yaw, int turn_pitch);
    void requestLaserRangingState();
    // void requestLaserDistanceMeasurement();
    
    void requestCameraSystemInformation();
    void requestCurrentGimbalMode();
    void readPendingDatagrams();
    void getStitchingMode();
    void requestCurrentThermalPseudoColor();
    void setStitchingMode(uint8_t vdisp_mode);
    void insertStitchingMode(uint8_t vdisp_mode);
    void handleMavlinkMessage(const mavlink_message_t& msg);
    void _requestGimbalInformation(uint8_t compid);
    void _handleHeartbeat(const mavlink_message_t &message);
    void _handleGimbalManagerInformation(const mavlink_message_t &message);
    void _handleGimbalManagerStatus(const mavlink_message_t &message);
    void _handleGimbalDeviceAttitudeStatus(const mavlink_message_t &message);
    void _checkComplete(Gimbal &gimbal, GimbalPairId pairId);
    bool _tryGetGimbalControl();
    bool _yawInVehicleFrame(uint32_t flags);

    QTimer _rateSenderTimer;
    QTimer* _attitudeRequestTimer = nullptr; 
    Vehicle *_vehicle = nullptr;
    Gimbal *_activeGimbal = nullptr;

    struct PotentialGimbalManager {
        unsigned requestGimbalManagerInformationRetries = 6;
        bool receivedInformation = false;
    };
    QMap<uint8_t, PotentialGimbalManager> _potentialGimbalManagers; // key is compid

    QMap<GimbalPairId, Gimbal*> _potentialGimbals;
    QmlObjectListModel *_gimbals = nullptr;

    static constexpr const char *_gimbalFactGroupNamePrefix = "gimbal";
};
