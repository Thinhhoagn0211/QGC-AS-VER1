#pragma once
// MESSAGE REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA PACKING

#define MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA 80037


typedef struct __mavlink_request_gimbal_motor_voltage_data_t {
 int16_t weak_control_limit_value; /*<  Weak_control_limit_value*/
 int16_t voltage_threshold; /*<   Voltage threshold*/
 int16_t angular_error_threshold; /*<   Angular error threshold*/
} mavlink_request_gimbal_motor_voltage_data_t;

#define MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN 6
#define MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_MIN_LEN 6
#define MAVLINK_MSG_ID_80037_LEN 6
#define MAVLINK_MSG_ID_80037_MIN_LEN 6

#define MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_CRC 192
#define MAVLINK_MSG_ID_80037_CRC 192



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA { \
    80037, \
    "REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA", \
    3, \
    {  { "weak_control_limit_value", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_request_gimbal_motor_voltage_data_t, weak_control_limit_value) }, \
         { "voltage_threshold", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_request_gimbal_motor_voltage_data_t, voltage_threshold) }, \
         { "angular_error_threshold", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_request_gimbal_motor_voltage_data_t, angular_error_threshold) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA { \
    "REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA", \
    3, \
    {  { "weak_control_limit_value", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_request_gimbal_motor_voltage_data_t, weak_control_limit_value) }, \
         { "voltage_threshold", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_request_gimbal_motor_voltage_data_t, voltage_threshold) }, \
         { "angular_error_threshold", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_request_gimbal_motor_voltage_data_t, angular_error_threshold) }, \
         } \
}
#endif

/**
 * @brief Pack a request_gimbal_motor_voltage_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param weak_control_limit_value  Weak_control_limit_value
 * @param voltage_threshold   Voltage threshold
 * @param angular_error_threshold   Angular error threshold
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_gimbal_motor_voltage_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t weak_control_limit_value, int16_t voltage_threshold, int16_t angular_error_threshold)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN];
    _mav_put_int16_t(buf, 0, weak_control_limit_value);
    _mav_put_int16_t(buf, 2, voltage_threshold);
    _mav_put_int16_t(buf, 4, angular_error_threshold);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN);
#else
    mavlink_request_gimbal_motor_voltage_data_t packet;
    packet.weak_control_limit_value = weak_control_limit_value;
    packet.voltage_threshold = voltage_threshold;
    packet.angular_error_threshold = angular_error_threshold;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_CRC);
}

/**
 * @brief Pack a request_gimbal_motor_voltage_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param weak_control_limit_value  Weak_control_limit_value
 * @param voltage_threshold   Voltage threshold
 * @param angular_error_threshold   Angular error threshold
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_gimbal_motor_voltage_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t weak_control_limit_value, int16_t voltage_threshold, int16_t angular_error_threshold)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN];
    _mav_put_int16_t(buf, 0, weak_control_limit_value);
    _mav_put_int16_t(buf, 2, voltage_threshold);
    _mav_put_int16_t(buf, 4, angular_error_threshold);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN);
#else
    mavlink_request_gimbal_motor_voltage_data_t packet;
    packet.weak_control_limit_value = weak_control_limit_value;
    packet.voltage_threshold = voltage_threshold;
    packet.angular_error_threshold = angular_error_threshold;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN);
#endif
}

/**
 * @brief Pack a request_gimbal_motor_voltage_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param weak_control_limit_value  Weak_control_limit_value
 * @param voltage_threshold   Voltage threshold
 * @param angular_error_threshold   Angular error threshold
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_gimbal_motor_voltage_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t weak_control_limit_value,int16_t voltage_threshold,int16_t angular_error_threshold)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN];
    _mav_put_int16_t(buf, 0, weak_control_limit_value);
    _mav_put_int16_t(buf, 2, voltage_threshold);
    _mav_put_int16_t(buf, 4, angular_error_threshold);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN);
#else
    mavlink_request_gimbal_motor_voltage_data_t packet;
    packet.weak_control_limit_value = weak_control_limit_value;
    packet.voltage_threshold = voltage_threshold;
    packet.angular_error_threshold = angular_error_threshold;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_CRC);
}

/**
 * @brief Encode a request_gimbal_motor_voltage_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param request_gimbal_motor_voltage_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_gimbal_motor_voltage_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_request_gimbal_motor_voltage_data_t* request_gimbal_motor_voltage_data)
{
    return mavlink_msg_request_gimbal_motor_voltage_data_pack(system_id, component_id, msg, request_gimbal_motor_voltage_data->weak_control_limit_value, request_gimbal_motor_voltage_data->voltage_threshold, request_gimbal_motor_voltage_data->angular_error_threshold);
}

/**
 * @brief Encode a request_gimbal_motor_voltage_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_gimbal_motor_voltage_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_gimbal_motor_voltage_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_request_gimbal_motor_voltage_data_t* request_gimbal_motor_voltage_data)
{
    return mavlink_msg_request_gimbal_motor_voltage_data_pack_chan(system_id, component_id, chan, msg, request_gimbal_motor_voltage_data->weak_control_limit_value, request_gimbal_motor_voltage_data->voltage_threshold, request_gimbal_motor_voltage_data->angular_error_threshold);
}

/**
 * @brief Encode a request_gimbal_motor_voltage_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param request_gimbal_motor_voltage_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_gimbal_motor_voltage_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_request_gimbal_motor_voltage_data_t* request_gimbal_motor_voltage_data)
{
    return mavlink_msg_request_gimbal_motor_voltage_data_pack_status(system_id, component_id, _status, msg,  request_gimbal_motor_voltage_data->weak_control_limit_value, request_gimbal_motor_voltage_data->voltage_threshold, request_gimbal_motor_voltage_data->angular_error_threshold);
}

/**
 * @brief Send a request_gimbal_motor_voltage_data message
 * @param chan MAVLink channel to send the message
 *
 * @param weak_control_limit_value  Weak_control_limit_value
 * @param voltage_threshold   Voltage threshold
 * @param angular_error_threshold   Angular error threshold
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_request_gimbal_motor_voltage_data_send(mavlink_channel_t chan, int16_t weak_control_limit_value, int16_t voltage_threshold, int16_t angular_error_threshold)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN];
    _mav_put_int16_t(buf, 0, weak_control_limit_value);
    _mav_put_int16_t(buf, 2, voltage_threshold);
    _mav_put_int16_t(buf, 4, angular_error_threshold);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA, buf, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_CRC);
#else
    mavlink_request_gimbal_motor_voltage_data_t packet;
    packet.weak_control_limit_value = weak_control_limit_value;
    packet.voltage_threshold = voltage_threshold;
    packet.angular_error_threshold = angular_error_threshold;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA, (const char *)&packet, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_CRC);
#endif
}

/**
 * @brief Send a request_gimbal_motor_voltage_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_request_gimbal_motor_voltage_data_send_struct(mavlink_channel_t chan, const mavlink_request_gimbal_motor_voltage_data_t* request_gimbal_motor_voltage_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_request_gimbal_motor_voltage_data_send(chan, request_gimbal_motor_voltage_data->weak_control_limit_value, request_gimbal_motor_voltage_data->voltage_threshold, request_gimbal_motor_voltage_data->angular_error_threshold);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA, (const char *)request_gimbal_motor_voltage_data, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_request_gimbal_motor_voltage_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t weak_control_limit_value, int16_t voltage_threshold, int16_t angular_error_threshold)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, weak_control_limit_value);
    _mav_put_int16_t(buf, 2, voltage_threshold);
    _mav_put_int16_t(buf, 4, angular_error_threshold);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA, buf, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_CRC);
#else
    mavlink_request_gimbal_motor_voltage_data_t *packet = (mavlink_request_gimbal_motor_voltage_data_t *)msgbuf;
    packet->weak_control_limit_value = weak_control_limit_value;
    packet->voltage_threshold = voltage_threshold;
    packet->angular_error_threshold = angular_error_threshold;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA, (const char *)packet, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA UNPACKING


/**
 * @brief Get field weak_control_limit_value from request_gimbal_motor_voltage_data message
 *
 * @return  Weak_control_limit_value
 */
static inline int16_t mavlink_msg_request_gimbal_motor_voltage_data_get_weak_control_limit_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field voltage_threshold from request_gimbal_motor_voltage_data message
 *
 * @return   Voltage threshold
 */
static inline int16_t mavlink_msg_request_gimbal_motor_voltage_data_get_voltage_threshold(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field angular_error_threshold from request_gimbal_motor_voltage_data message
 *
 * @return   Angular error threshold
 */
static inline int16_t mavlink_msg_request_gimbal_motor_voltage_data_get_angular_error_threshold(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Decode a request_gimbal_motor_voltage_data message into a struct
 *
 * @param msg The message to decode
 * @param request_gimbal_motor_voltage_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_request_gimbal_motor_voltage_data_decode(const mavlink_message_t* msg, mavlink_request_gimbal_motor_voltage_data_t* request_gimbal_motor_voltage_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    request_gimbal_motor_voltage_data->weak_control_limit_value = mavlink_msg_request_gimbal_motor_voltage_data_get_weak_control_limit_value(msg);
    request_gimbal_motor_voltage_data->voltage_threshold = mavlink_msg_request_gimbal_motor_voltage_data_get_voltage_threshold(msg);
    request_gimbal_motor_voltage_data->angular_error_threshold = mavlink_msg_request_gimbal_motor_voltage_data_get_angular_error_threshold(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN? msg->len : MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN;
        memset(request_gimbal_motor_voltage_data, 0, MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_LEN);
    memcpy(request_gimbal_motor_voltage_data, _MAV_PAYLOAD(msg), len);
#endif
}
