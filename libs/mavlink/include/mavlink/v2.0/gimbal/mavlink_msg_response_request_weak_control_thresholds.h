#pragma once
// MESSAGE RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS PACKING

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS 90040


typedef struct __mavlink_response_request_weak_control_thresholds_t {
 int16_t weak_control_limit_value; /*<  Range (divide by 10)*/
 int16_t voltage_threshold; /*<  Voltage threshold (divide by 10)*/
 int16_t angular_error_threshold; /*<  Angular error threshold (divide by 10)*/
} mavlink_response_request_weak_control_thresholds_t;

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN 6
#define MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN 6
#define MAVLINK_MSG_ID_90040_LEN 6
#define MAVLINK_MSG_ID_90040_MIN_LEN 6

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_CRC 66
#define MAVLINK_MSG_ID_90040_CRC 66



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS { \
    90040, \
    "RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS", \
    3, \
    {  { "weak_control_limit_value", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_response_request_weak_control_thresholds_t, weak_control_limit_value) }, \
         { "voltage_threshold", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_response_request_weak_control_thresholds_t, voltage_threshold) }, \
         { "angular_error_threshold", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_response_request_weak_control_thresholds_t, angular_error_threshold) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS { \
    "RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS", \
    3, \
    {  { "weak_control_limit_value", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_response_request_weak_control_thresholds_t, weak_control_limit_value) }, \
         { "voltage_threshold", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_response_request_weak_control_thresholds_t, voltage_threshold) }, \
         { "angular_error_threshold", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_response_request_weak_control_thresholds_t, angular_error_threshold) }, \
         } \
}
#endif

/**
 * @brief Pack a response_request_weak_control_thresholds message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param weak_control_limit_value  Range (divide by 10)
 * @param voltage_threshold  Voltage threshold (divide by 10)
 * @param angular_error_threshold  Angular error threshold (divide by 10)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_weak_control_thresholds_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t weak_control_limit_value, int16_t voltage_threshold, int16_t angular_error_threshold)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN];
    _mav_put_int16_t(buf, 0, weak_control_limit_value);
    _mav_put_int16_t(buf, 2, voltage_threshold);
    _mav_put_int16_t(buf, 4, angular_error_threshold);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN);
#else
    mavlink_response_request_weak_control_thresholds_t packet;
    packet.weak_control_limit_value = weak_control_limit_value;
    packet.voltage_threshold = voltage_threshold;
    packet.angular_error_threshold = angular_error_threshold;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_CRC);
}

/**
 * @brief Pack a response_request_weak_control_thresholds message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param weak_control_limit_value  Range (divide by 10)
 * @param voltage_threshold  Voltage threshold (divide by 10)
 * @param angular_error_threshold  Angular error threshold (divide by 10)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_weak_control_thresholds_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t weak_control_limit_value, int16_t voltage_threshold, int16_t angular_error_threshold)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN];
    _mav_put_int16_t(buf, 0, weak_control_limit_value);
    _mav_put_int16_t(buf, 2, voltage_threshold);
    _mav_put_int16_t(buf, 4, angular_error_threshold);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN);
#else
    mavlink_response_request_weak_control_thresholds_t packet;
    packet.weak_control_limit_value = weak_control_limit_value;
    packet.voltage_threshold = voltage_threshold;
    packet.angular_error_threshold = angular_error_threshold;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN);
#endif
}

/**
 * @brief Pack a response_request_weak_control_thresholds message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param weak_control_limit_value  Range (divide by 10)
 * @param voltage_threshold  Voltage threshold (divide by 10)
 * @param angular_error_threshold  Angular error threshold (divide by 10)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_weak_control_thresholds_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t weak_control_limit_value,int16_t voltage_threshold,int16_t angular_error_threshold)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN];
    _mav_put_int16_t(buf, 0, weak_control_limit_value);
    _mav_put_int16_t(buf, 2, voltage_threshold);
    _mav_put_int16_t(buf, 4, angular_error_threshold);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN);
#else
    mavlink_response_request_weak_control_thresholds_t packet;
    packet.weak_control_limit_value = weak_control_limit_value;
    packet.voltage_threshold = voltage_threshold;
    packet.angular_error_threshold = angular_error_threshold;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_CRC);
}

/**
 * @brief Encode a response_request_weak_control_thresholds struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_request_weak_control_thresholds C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_weak_control_thresholds_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_request_weak_control_thresholds_t* response_request_weak_control_thresholds)
{
    return mavlink_msg_response_request_weak_control_thresholds_pack(system_id, component_id, msg, response_request_weak_control_thresholds->weak_control_limit_value, response_request_weak_control_thresholds->voltage_threshold, response_request_weak_control_thresholds->angular_error_threshold);
}

/**
 * @brief Encode a response_request_weak_control_thresholds struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_request_weak_control_thresholds C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_weak_control_thresholds_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_request_weak_control_thresholds_t* response_request_weak_control_thresholds)
{
    return mavlink_msg_response_request_weak_control_thresholds_pack_chan(system_id, component_id, chan, msg, response_request_weak_control_thresholds->weak_control_limit_value, response_request_weak_control_thresholds->voltage_threshold, response_request_weak_control_thresholds->angular_error_threshold);
}

/**
 * @brief Encode a response_request_weak_control_thresholds struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_request_weak_control_thresholds C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_weak_control_thresholds_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_request_weak_control_thresholds_t* response_request_weak_control_thresholds)
{
    return mavlink_msg_response_request_weak_control_thresholds_pack_status(system_id, component_id, _status, msg,  response_request_weak_control_thresholds->weak_control_limit_value, response_request_weak_control_thresholds->voltage_threshold, response_request_weak_control_thresholds->angular_error_threshold);
}

/**
 * @brief Send a response_request_weak_control_thresholds message
 * @param chan MAVLink channel to send the message
 *
 * @param weak_control_limit_value  Range (divide by 10)
 * @param voltage_threshold  Voltage threshold (divide by 10)
 * @param angular_error_threshold  Angular error threshold (divide by 10)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_request_weak_control_thresholds_send(mavlink_channel_t chan, int16_t weak_control_limit_value, int16_t voltage_threshold, int16_t angular_error_threshold)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN];
    _mav_put_int16_t(buf, 0, weak_control_limit_value);
    _mav_put_int16_t(buf, 2, voltage_threshold);
    _mav_put_int16_t(buf, 4, angular_error_threshold);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_CRC);
#else
    mavlink_response_request_weak_control_thresholds_t packet;
    packet.weak_control_limit_value = weak_control_limit_value;
    packet.voltage_threshold = voltage_threshold;
    packet.angular_error_threshold = angular_error_threshold;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_CRC);
#endif
}

/**
 * @brief Send a response_request_weak_control_thresholds message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_request_weak_control_thresholds_send_struct(mavlink_channel_t chan, const mavlink_response_request_weak_control_thresholds_t* response_request_weak_control_thresholds)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_request_weak_control_thresholds_send(chan, response_request_weak_control_thresholds->weak_control_limit_value, response_request_weak_control_thresholds->voltage_threshold, response_request_weak_control_thresholds->angular_error_threshold);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS, (const char *)response_request_weak_control_thresholds, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_request_weak_control_thresholds_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t weak_control_limit_value, int16_t voltage_threshold, int16_t angular_error_threshold)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, weak_control_limit_value);
    _mav_put_int16_t(buf, 2, voltage_threshold);
    _mav_put_int16_t(buf, 4, angular_error_threshold);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_CRC);
#else
    mavlink_response_request_weak_control_thresholds_t *packet = (mavlink_response_request_weak_control_thresholds_t *)msgbuf;
    packet->weak_control_limit_value = weak_control_limit_value;
    packet->voltage_threshold = voltage_threshold;
    packet->angular_error_threshold = angular_error_threshold;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS UNPACKING


/**
 * @brief Get field weak_control_limit_value from response_request_weak_control_thresholds message
 *
 * @return  Range (divide by 10)
 */
static inline int16_t mavlink_msg_response_request_weak_control_thresholds_get_weak_control_limit_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field voltage_threshold from response_request_weak_control_thresholds message
 *
 * @return  Voltage threshold (divide by 10)
 */
static inline int16_t mavlink_msg_response_request_weak_control_thresholds_get_voltage_threshold(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field angular_error_threshold from response_request_weak_control_thresholds message
 *
 * @return  Angular error threshold (divide by 10)
 */
static inline int16_t mavlink_msg_response_request_weak_control_thresholds_get_angular_error_threshold(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Decode a response_request_weak_control_thresholds message into a struct
 *
 * @param msg The message to decode
 * @param response_request_weak_control_thresholds C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_request_weak_control_thresholds_decode(const mavlink_message_t* msg, mavlink_response_request_weak_control_thresholds_t* response_request_weak_control_thresholds)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_request_weak_control_thresholds->weak_control_limit_value = mavlink_msg_response_request_weak_control_thresholds_get_weak_control_limit_value(msg);
    response_request_weak_control_thresholds->voltage_threshold = mavlink_msg_response_request_weak_control_thresholds_get_voltage_threshold(msg);
    response_request_weak_control_thresholds->angular_error_threshold = mavlink_msg_response_request_weak_control_thresholds_get_angular_error_threshold(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN;
        memset(response_request_weak_control_thresholds, 0, MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_LEN);
    memcpy(response_request_weak_control_thresholds, _MAV_PAYLOAD(msg), len);
#endif
}
