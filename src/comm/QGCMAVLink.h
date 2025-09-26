/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#pragma once

#include <QObject>
#include <QString>
#include <QList>

#define MAVLINK_USE_MESSAGE_INFO
#define MAVLINK_EXTERNAL_RX_STATUS  // Single m_mavlink_status instance is in QGCApplication.cc
#include <stddef.h>                 // Hack workaround for Mav 2.0 header problem with respect to offsetof usage

// Ignore warnings from mavlink headers for both GCC/Clang and MSVC
#ifdef __GNUC__

#if __GNUC__ > 8
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Waddress-of-packed-member"
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wall"
#endif

#else
#pragma warning(push, 0)
#endif

#include <mavlink_types.h>
extern mavlink_status_t m_mavlink_status[MAVLINK_COMM_NUM_BUFFERS];
#include <mavlink.h>

#ifdef __GNUC__
#pragma GCC diagnostic pop
#else
#pragma warning(pop, 0)
#endif

#ifdef __GNUC__
#define PACKED_STRUCT( __Declaration__ ) __Declaration__ __attribute__((packed))
#else
#define PACKED_STRUCT( __Declaration__ ) __pragma( pack(push, 1) ) __Declaration__ __pragma( pack(pop) )
#endif

class QGCMAVLink : public QObject
{
    Q_OBJECT

public:
    // Creating an instance of QGCMAVLink is only meant to be used for the Qml Singleton
    QGCMAVLink(QObject* parent = nullptr);

    typedef int FirmwareClass_t;
    typedef int VehicleClass_t;

    static constexpr FirmwareClass_t FirmwareClassPX4       = MAV_AUTOPILOT_PX4;
    static constexpr FirmwareClass_t FirmwareClassArduPilot = MAV_AUTOPILOT_ARDUPILOTMEGA;
    static constexpr FirmwareClass_t FirmwareClassGeneric   = MAV_AUTOPILOT_GENERIC;

    static constexpr VehicleClass_t VehicleClassAirship     = MAV_TYPE_AIRSHIP;
    static constexpr VehicleClass_t VehicleClassFixedWing   = MAV_TYPE_FIXED_WING;
    static constexpr VehicleClass_t VehicleClassRoverBoat   = MAV_TYPE_GROUND_ROVER;
    static constexpr VehicleClass_t VehicleClassSub         = MAV_TYPE_SUBMARINE;
    static constexpr VehicleClass_t VehicleClassSpacecraft  = MAV_TYPE_SPACECRAFT_ORBITER;
    static constexpr VehicleClass_t VehicleClassMultiRotor  = MAV_TYPE_QUADROTOR;
    static constexpr VehicleClass_t VehicleClassVTOL        = MAV_TYPE_VTOL_TAILSITTER_QUADROTOR;
    static constexpr VehicleClass_t VehicleClassGeneric     = MAV_TYPE_GENERIC;

    static bool                     isPX4FirmwareClass          (MAV_AUTOPILOT autopilot) { return autopilot == MAV_AUTOPILOT_PX4; }
    static bool                     isArduPilotFirmwareClass    (MAV_AUTOPILOT autopilot) { return autopilot == MAV_AUTOPILOT_ARDUPILOTMEGA; }
    static bool                     isGenericFirmwareClass      (MAV_AUTOPILOT autopilot) { return !isPX4FirmwareClass(autopilot) && ! isArduPilotFirmwareClass(autopilot); }
    static FirmwareClass_t          firmwareClass               (MAV_AUTOPILOT autopilot);
    static MAV_AUTOPILOT            firmwareClassToAutopilot    (FirmwareClass_t firmwareClass) { return static_cast<MAV_AUTOPILOT>(firmwareClass); }
    static QString                  firmwareClassToString       (FirmwareClass_t firmwareClass);
    static MAV_AUTOPILOT            firmwareTypeFromString      (const QString &firmwareTypeStr);
    static QList<FirmwareClass_t>   allFirmwareClasses          ();

    static bool                     isAirship                   (MAV_TYPE mavType);
    static bool                     isFixedWing                 (MAV_TYPE mavType);
    static bool                     isRoverBoat                 (MAV_TYPE mavType);
    static bool                     isSub                       (MAV_TYPE mavType);
    static bool                     isSpacecraft                (MAV_TYPE mavType);
    static bool                     isMultiRotor                (MAV_TYPE mavType);
    static bool                     isVTOL                      (MAV_TYPE mavType);
    static VehicleClass_t           vehicleClass                (MAV_TYPE mavType);
    static MAV_TYPE                 vehicleClassToMavType       (VehicleClass_t vehicleClass) { return static_cast<MAV_TYPE>(vehicleClass); }
    static QString                  vehicleClassToUserVisibleString(VehicleClass_t vehicleClass);
    static QString                  vehicleClassToInternalString(VehicleClass_t vehicleClass);
    static MAV_TYPE                 vehicleTypeFromString(const QString &vehicleStr);
    static QList<VehicleClass_t>    allVehicleClasses           (void);

    static QString                  mavResultToString           (MAV_RESULT result);
    static QString                  mavSysStatusSensorToString  (MAV_SYS_STATUS_SENSOR sysStatusSensor);
    static QString                  mavTypeToString             (MAV_TYPE mavType);
    static QString                  firmwareVersionTypeToString (FIRMWARE_VERSION_TYPE firmwareVersionType);
    static FIRMWARE_VERSION_TYPE    firmwareVersionTypeFromString(const QString &typeStr);
    static int                      motorCount                  (MAV_TYPE mavType, uint8_t frameType = 0);
    static uint32_t                 highLatencyFailuresToMavSysStatus(mavlink_high_latency2_t& highLatency2);

    // Expose mavlink enums to Qml. I've tried various way to make this work without duping, but haven't found anything that works.

    enum MAV_BATTERY_FUNCTION {
        MAV_BATTERY_FUNCTION_UNKNOWN=0, /* Battery function is unknown | */
        MAV_BATTERY_FUNCTION_ALL=1, /* Battery supports all flight systems | */
        MAV_BATTERY_FUNCTION_PROPULSION=2, /* Battery for the propulsion system | */
        MAV_BATTERY_FUNCTION_AVIONICS=3, /* Avionics battery | */
        MAV_BATTERY_TYPE_PAYLOAD=4, /* Payload battery | */
    };
    Q_ENUM(MAV_BATTERY_FUNCTION)

    enum MAV_BATTERY_CHARGE_STATE
    {
       MAV_BATTERY_CHARGE_STATE_UNDEFINED=0, /* Low battery state is not provided | */
       MAV_BATTERY_CHARGE_STATE_OK=1, /* Battery is not in low state. Normal operation. | */
       MAV_BATTERY_CHARGE_STATE_LOW=2, /* Battery state is low, warn and monitor close. | */
       MAV_BATTERY_CHARGE_STATE_CRITICAL=3, /* Battery state is critical, return or abort immediately. | */
       MAV_BATTERY_CHARGE_STATE_EMERGENCY=4, /* Battery state is too low for ordinary abort sequence. Perform fastest possible emergency stop to prevent damage. | */
       MAV_BATTERY_CHARGE_STATE_FAILED=5, /* Battery failed, damage unavoidable. | */
       MAV_BATTERY_CHARGE_STATE_UNHEALTHY=6, /* Battery is diagnosed to be defective or an error occurred, usage is discouraged / prohibited. | */
       MAV_BATTERY_CHARGE_STATE_CHARGING=7, /* Battery is charging. | */
    };
    Q_ENUM(MAV_BATTERY_CHARGE_STATE)

    
    /// Sensor bits from sensors*Bits properties
    enum MavlinkSysStatus {
        SysStatusSensor3dGyro =                 MAV_SYS_STATUS_SENSOR_3D_GYRO,
        SysStatusSensor3dAccel =                MAV_SYS_STATUS_SENSOR_3D_ACCEL,
        SysStatusSensor3dMag =                  MAV_SYS_STATUS_SENSOR_3D_MAG,
        SysStatusSensorAbsolutePressure =       MAV_SYS_STATUS_SENSOR_ABSOLUTE_PRESSURE,
        SysStatusSensorDifferentialPressure =   MAV_SYS_STATUS_SENSOR_DIFFERENTIAL_PRESSURE,
        SysStatusSensorGPS =                    MAV_SYS_STATUS_SENSOR_GPS,
        SysStatusSensorOpticalFlow =            MAV_SYS_STATUS_SENSOR_OPTICAL_FLOW,
        SysStatusSensorVisionPosition =         MAV_SYS_STATUS_SENSOR_VISION_POSITION,
        SysStatusSensorLaserPosition =          MAV_SYS_STATUS_SENSOR_LASER_POSITION,
        SysStatusSensorExternalGroundTruth =    MAV_SYS_STATUS_SENSOR_EXTERNAL_GROUND_TRUTH,
        SysStatusSensorAngularRateControl =     MAV_SYS_STATUS_SENSOR_ANGULAR_RATE_CONTROL,
        SysStatusSensorAttitudeStabilization =  MAV_SYS_STATUS_SENSOR_ATTITUDE_STABILIZATION,
        SysStatusSensorYawPosition =            MAV_SYS_STATUS_SENSOR_YAW_POSITION,
        SysStatusSensorZAltitudeControl =       MAV_SYS_STATUS_SENSOR_Z_ALTITUDE_CONTROL,
        SysStatusSensorXYPositionControl =      MAV_SYS_STATUS_SENSOR_XY_POSITION_CONTROL,
        SysStatusSensorMotorOutputs =           MAV_SYS_STATUS_SENSOR_MOTOR_OUTPUTS,
        SysStatusSensorRCReceiver =             MAV_SYS_STATUS_SENSOR_RC_RECEIVER,
        SysStatusSensor3dGyro2 =                MAV_SYS_STATUS_SENSOR_3D_GYRO2,
        SysStatusSensor3dAccel2 =               MAV_SYS_STATUS_SENSOR_3D_ACCEL2,
        SysStatusSensor3dMag2 =                 MAV_SYS_STATUS_SENSOR_3D_MAG2,
        SysStatusSensorGeoFence =               MAV_SYS_STATUS_GEOFENCE,
        SysStatusSensorAHRS =                   MAV_SYS_STATUS_AHRS,
        SysStatusSensorTerrain =                MAV_SYS_STATUS_TERRAIN,
        SysStatusSensorReverseMotor =           MAV_SYS_STATUS_REVERSE_MOTOR,
        SysStatusSensorLogging =                MAV_SYS_STATUS_LOGGING,
        SysStatusSensorBattery =                MAV_SYS_STATUS_SENSOR_BATTERY,
    };
    Q_ENUM(MavlinkSysStatus)

    enum GRIPPER_OPTIONS {
        Gripper_release = GRIPPER_ACTION_RELEASE,
        Gripper_grab    = GRIPPER_ACTION_GRAB,
        Invalid_option  = GRIPPER_ACTIONS_ENUM_END,
    };
    Q_ENUM(GRIPPER_OPTIONS)

    enum CalibrationType {
        CalibrationNone,
        CalibrationRadio,
        CalibrationGyro,
        CalibrationMag,
        CalibrationAccel,
        CalibrationLevel,
        CalibrationEsc,
        CalibrationCopyTrims,
        CalibrationAPMCompassMot,
        CalibrationAPMPressureAirspeed,
        CalibrationAPMPreFlight,
        CalibrationPX4Airspeed,
        CalibrationPX4Pressure,
        CalibrationAPMAccelSimple,
    };
    Q_ENUM(CalibrationType)

    MAVPACKED(
    typedef struct param_ext_union {
        union {
            float param_float;
            double param_double;
            int64_t param_int64;
            uint64_t param_uint64;
            int32_t param_int32;
            uint32_t param_uint32;
            int16_t param_int16;
            uint16_t param_uint16;
            int8_t param_int8;
            uint8_t param_uint8;
            uint8_t bytes[MAVLINK_MSG_PARAM_EXT_SET_FIELD_PARAM_VALUE_LEN];
        };
        uint8_t type;
    }) param_ext_union_t;

    static bool isValidChannel(uint8_t channel) { return (channel < MAVLINK_COMM_NUM_BUFFERS); }
    static bool isValidChannel(mavlink_channel_t channel) { return isValidChannel(static_cast<uint8_t>(channel)); }

    static mavlink_status_t* getChannelStatus(mavlink_channel_t channel) { return mavlink_get_channel_status(static_cast<uint8_t>(channel)); }

    static const QHash<int, QString> mavlinkCompIdHash;
};

class MavlinkFTP {
public:
    /// This is the fixed length portion of the protocol data.
    /// This needs to be packed, because it's typecasted from mavlink_file_transfer_protocol_t.payload, which starts
    /// at a 3 byte offset, causing an unaligned access to seq_number and offset
    PACKED_STRUCT(
            typedef struct RequestHeader {
                uint16_t    seqNumber;      ///< sequence number for message
                uint8_t     session;        ///< Session id for read and write commands
                uint8_t     opcode;         ///< Command opcode
                uint8_t     size;           ///< Size of data
                uint8_t     req_opcode;     ///< Request opcode returned in kRspAck, kRspNak message
                uint8_t     burstComplete;  ///< Only used if req_opcode=kCmdBurstReadFile - 1: set of burst packets complete, 0: More burst packets coming.
                uint8_t     paddng;        ///< 32 bit aligment padding
                uint32_t    offset;         ///< Offsets for List and Read commands
            }) RequestHeader;

    PACKED_STRUCT(
            typedef struct Request{
                RequestHeader hdr;

                // We use a union here instead of just casting (uint32_t)&payload[0] to not break strict aliasing rules
                union {
                    // The entire Request must fit into the payload member of the mavlink_file_transfer_protocol_t structure. We use as many leftover bytes
                    // after we use up space for the RequestHeader for the data portion of the Request.
                    uint8_t data[sizeof(((mavlink_file_transfer_protocol_t*)0)->payload) - sizeof(RequestHeader)];

                    // File length returned by Open command
                    uint32_t openFileLength;

                    // Length of file chunk written by write command
                    uint32_t writeFileLength;
                };
            }) Request;

    typedef enum {
        kCmdNone = 0,           ///< ignored, always acked
        kCmdTerminateSession,	///< Terminates open Read session
        kCmdResetSessions,		///< Terminates all open Read sessions
        kCmdListDirectory,		///< List files in <path> from <offset>
        kCmdOpenFileRO,			///< Opens file at <path> for reading, returns <session>
        kCmdReadFile,			///< Reads <size> bytes from <offset> in <session>
        kCmdCreateFile,			///< Creates file at <path> for writing, returns <session>
        kCmdWriteFile,			///< Writes <size> bytes to <offset> in <session>
        kCmdRemoveFile,			///< Remove file at <path>
        kCmdCreateDirectory,	///< Creates directory at <path>
        kCmdRemoveDirectory,	///< Removes Directory at <path>, must be empty
        kCmdOpenFileWO,			///< Opens file at <path> for writing, returns <session>
        kCmdTruncateFile,		///< Truncate file at <path> to <offset> length
        kCmdRename,				///< Rename <path1> to <path2>
        kCmdCalcFileCRC32,		///< Calculate CRC32 for file at <path>
        kCmdBurstReadFile,      ///< Burst download session file

        kRspAck = 128,          ///< Ack response
        kRspNak,                ///< Nak response
    } OpCode_t;

    /// @brief Error codes returned in Nak response PayloadHeader.data[0].
   typedef enum {
        kErrNone = 0,
        kErrFail,                   ///< Unknown failure
        kErrFailErrno,              ///< errno sent back in PayloadHeader.data[1]
        kErrInvalidDataSize,		///< PayloadHeader.size is invalid
        kErrInvalidSession,         ///< Session is not currently open
        kErrNoSessionsAvailable,	///< All available Sessions in use
        kErrEOF,                    ///< Offset past end of file for List and Read commands
        kErrUnknownCommand,         ///< Unknown command opcode
        kErrFailFileExists,         ///< File exists already
        kErrFailFileProtected,      ///< File is write protected
        kErrFailFileNotFound
    } ErrorCode_t;

    static QString opCodeToString   (OpCode_t opCode);
    static QString errorCodeToString(ErrorCode_t errorCode);
};
