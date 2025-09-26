#pragma once
// MESSAGE RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT PACKING

#define MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT 90020


typedef struct __mavlink_response_global_temperature_measurement_t {
 int16_t temp_max; /*<  Global temperature in °C (divide by 10)*/
 int16_t temp_min; /*<  Global temperature in °C (divide by 10)*/
 int16_t temp_max_x; /*<   X coordinate of max temp*/
 int16_t temp_max_y; /*<  Y coordinate of max temp*/
 int16_t temp_min_x; /*<  X coordinate of min temp*/
 int16_t temp_min_y; /*<  Y coordinate of min temp*/
} mavlink_response_global_temperature_measurement_t;

#define MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN 12
#define MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN 12
#define MAVLINK_MSG_ID_90020_LEN 12
#define MAVLINK_MSG_ID_90020_MIN_LEN 12

#define MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_CRC 20
#define MAVLINK_MSG_ID_90020_CRC 20



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT { \
    90020, \
    "RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT", \
    6, \
    {  { "temp_max", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_response_global_temperature_measurement_t, temp_max) }, \
         { "temp_min", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_response_global_temperature_measurement_t, temp_min) }, \
         { "temp_max_x", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_response_global_temperature_measurement_t, temp_max_x) }, \
         { "temp_max_y", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_response_global_temperature_measurement_t, temp_max_y) }, \
         { "temp_min_x", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_response_global_temperature_measurement_t, temp_min_x) }, \
         { "temp_min_y", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_response_global_temperature_measurement_t, temp_min_y) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT { \
    "RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT", \
    6, \
    {  { "temp_max", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_response_global_temperature_measurement_t, temp_max) }, \
         { "temp_min", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_response_global_temperature_measurement_t, temp_min) }, \
         { "temp_max_x", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_response_global_temperature_measurement_t, temp_max_x) }, \
         { "temp_max_y", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_response_global_temperature_measurement_t, temp_max_y) }, \
         { "temp_min_x", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_response_global_temperature_measurement_t, temp_min_x) }, \
         { "temp_min_y", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_response_global_temperature_measurement_t, temp_min_y) }, \
         } \
}
#endif

/**
 * @brief Pack a response_global_temperature_measurement message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param temp_max  Global temperature in °C (divide by 10)
 * @param temp_min  Global temperature in °C (divide by 10)
 * @param temp_max_x   X coordinate of max temp
 * @param temp_max_y  Y coordinate of max temp
 * @param temp_min_x  X coordinate of min temp
 * @param temp_min_y  Y coordinate of min temp
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_global_temperature_measurement_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t temp_max, int16_t temp_min, int16_t temp_max_x, int16_t temp_max_y, int16_t temp_min_x, int16_t temp_min_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN];
    _mav_put_int16_t(buf, 0, temp_max);
    _mav_put_int16_t(buf, 2, temp_min);
    _mav_put_int16_t(buf, 4, temp_max_x);
    _mav_put_int16_t(buf, 6, temp_max_y);
    _mav_put_int16_t(buf, 8, temp_min_x);
    _mav_put_int16_t(buf, 10, temp_min_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN);
#else
    mavlink_response_global_temperature_measurement_t packet;
    packet.temp_max = temp_max;
    packet.temp_min = temp_min;
    packet.temp_max_x = temp_max_x;
    packet.temp_max_y = temp_max_y;
    packet.temp_min_x = temp_min_x;
    packet.temp_min_y = temp_min_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_CRC);
}

/**
 * @brief Pack a response_global_temperature_measurement message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param temp_max  Global temperature in °C (divide by 10)
 * @param temp_min  Global temperature in °C (divide by 10)
 * @param temp_max_x   X coordinate of max temp
 * @param temp_max_y  Y coordinate of max temp
 * @param temp_min_x  X coordinate of min temp
 * @param temp_min_y  Y coordinate of min temp
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_global_temperature_measurement_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t temp_max, int16_t temp_min, int16_t temp_max_x, int16_t temp_max_y, int16_t temp_min_x, int16_t temp_min_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN];
    _mav_put_int16_t(buf, 0, temp_max);
    _mav_put_int16_t(buf, 2, temp_min);
    _mav_put_int16_t(buf, 4, temp_max_x);
    _mav_put_int16_t(buf, 6, temp_max_y);
    _mav_put_int16_t(buf, 8, temp_min_x);
    _mav_put_int16_t(buf, 10, temp_min_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN);
#else
    mavlink_response_global_temperature_measurement_t packet;
    packet.temp_max = temp_max;
    packet.temp_min = temp_min;
    packet.temp_max_x = temp_max_x;
    packet.temp_max_y = temp_max_y;
    packet.temp_min_x = temp_min_x;
    packet.temp_min_y = temp_min_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN);
#endif
}

/**
 * @brief Pack a response_global_temperature_measurement message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param temp_max  Global temperature in °C (divide by 10)
 * @param temp_min  Global temperature in °C (divide by 10)
 * @param temp_max_x   X coordinate of max temp
 * @param temp_max_y  Y coordinate of max temp
 * @param temp_min_x  X coordinate of min temp
 * @param temp_min_y  Y coordinate of min temp
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_global_temperature_measurement_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t temp_max,int16_t temp_min,int16_t temp_max_x,int16_t temp_max_y,int16_t temp_min_x,int16_t temp_min_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN];
    _mav_put_int16_t(buf, 0, temp_max);
    _mav_put_int16_t(buf, 2, temp_min);
    _mav_put_int16_t(buf, 4, temp_max_x);
    _mav_put_int16_t(buf, 6, temp_max_y);
    _mav_put_int16_t(buf, 8, temp_min_x);
    _mav_put_int16_t(buf, 10, temp_min_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN);
#else
    mavlink_response_global_temperature_measurement_t packet;
    packet.temp_max = temp_max;
    packet.temp_min = temp_min;
    packet.temp_max_x = temp_max_x;
    packet.temp_max_y = temp_max_y;
    packet.temp_min_x = temp_min_x;
    packet.temp_min_y = temp_min_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_CRC);
}

/**
 * @brief Encode a response_global_temperature_measurement struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_global_temperature_measurement C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_global_temperature_measurement_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_global_temperature_measurement_t* response_global_temperature_measurement)
{
    return mavlink_msg_response_global_temperature_measurement_pack(system_id, component_id, msg, response_global_temperature_measurement->temp_max, response_global_temperature_measurement->temp_min, response_global_temperature_measurement->temp_max_x, response_global_temperature_measurement->temp_max_y, response_global_temperature_measurement->temp_min_x, response_global_temperature_measurement->temp_min_y);
}

/**
 * @brief Encode a response_global_temperature_measurement struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_global_temperature_measurement C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_global_temperature_measurement_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_global_temperature_measurement_t* response_global_temperature_measurement)
{
    return mavlink_msg_response_global_temperature_measurement_pack_chan(system_id, component_id, chan, msg, response_global_temperature_measurement->temp_max, response_global_temperature_measurement->temp_min, response_global_temperature_measurement->temp_max_x, response_global_temperature_measurement->temp_max_y, response_global_temperature_measurement->temp_min_x, response_global_temperature_measurement->temp_min_y);
}

/**
 * @brief Encode a response_global_temperature_measurement struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_global_temperature_measurement C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_global_temperature_measurement_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_global_temperature_measurement_t* response_global_temperature_measurement)
{
    return mavlink_msg_response_global_temperature_measurement_pack_status(system_id, component_id, _status, msg,  response_global_temperature_measurement->temp_max, response_global_temperature_measurement->temp_min, response_global_temperature_measurement->temp_max_x, response_global_temperature_measurement->temp_max_y, response_global_temperature_measurement->temp_min_x, response_global_temperature_measurement->temp_min_y);
}

/**
 * @brief Send a response_global_temperature_measurement message
 * @param chan MAVLink channel to send the message
 *
 * @param temp_max  Global temperature in °C (divide by 10)
 * @param temp_min  Global temperature in °C (divide by 10)
 * @param temp_max_x   X coordinate of max temp
 * @param temp_max_y  Y coordinate of max temp
 * @param temp_min_x  X coordinate of min temp
 * @param temp_min_y  Y coordinate of min temp
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_global_temperature_measurement_send(mavlink_channel_t chan, int16_t temp_max, int16_t temp_min, int16_t temp_max_x, int16_t temp_max_y, int16_t temp_min_x, int16_t temp_min_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN];
    _mav_put_int16_t(buf, 0, temp_max);
    _mav_put_int16_t(buf, 2, temp_min);
    _mav_put_int16_t(buf, 4, temp_max_x);
    _mav_put_int16_t(buf, 6, temp_max_y);
    _mav_put_int16_t(buf, 8, temp_min_x);
    _mav_put_int16_t(buf, 10, temp_min_y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT, buf, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_CRC);
#else
    mavlink_response_global_temperature_measurement_t packet;
    packet.temp_max = temp_max;
    packet.temp_min = temp_min;
    packet.temp_max_x = temp_max_x;
    packet.temp_max_y = temp_max_y;
    packet.temp_min_x = temp_min_x;
    packet.temp_min_y = temp_min_y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_CRC);
#endif
}

/**
 * @brief Send a response_global_temperature_measurement message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_global_temperature_measurement_send_struct(mavlink_channel_t chan, const mavlink_response_global_temperature_measurement_t* response_global_temperature_measurement)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_global_temperature_measurement_send(chan, response_global_temperature_measurement->temp_max, response_global_temperature_measurement->temp_min, response_global_temperature_measurement->temp_max_x, response_global_temperature_measurement->temp_max_y, response_global_temperature_measurement->temp_min_x, response_global_temperature_measurement->temp_min_y);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT, (const char *)response_global_temperature_measurement, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_global_temperature_measurement_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t temp_max, int16_t temp_min, int16_t temp_max_x, int16_t temp_max_y, int16_t temp_min_x, int16_t temp_min_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, temp_max);
    _mav_put_int16_t(buf, 2, temp_min);
    _mav_put_int16_t(buf, 4, temp_max_x);
    _mav_put_int16_t(buf, 6, temp_max_y);
    _mav_put_int16_t(buf, 8, temp_min_x);
    _mav_put_int16_t(buf, 10, temp_min_y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT, buf, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_CRC);
#else
    mavlink_response_global_temperature_measurement_t *packet = (mavlink_response_global_temperature_measurement_t *)msgbuf;
    packet->temp_max = temp_max;
    packet->temp_min = temp_min;
    packet->temp_max_x = temp_max_x;
    packet->temp_max_y = temp_max_y;
    packet->temp_min_x = temp_min_x;
    packet->temp_min_y = temp_min_y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT UNPACKING


/**
 * @brief Get field temp_max from response_global_temperature_measurement message
 *
 * @return  Global temperature in °C (divide by 10)
 */
static inline int16_t mavlink_msg_response_global_temperature_measurement_get_temp_max(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field temp_min from response_global_temperature_measurement message
 *
 * @return  Global temperature in °C (divide by 10)
 */
static inline int16_t mavlink_msg_response_global_temperature_measurement_get_temp_min(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field temp_max_x from response_global_temperature_measurement message
 *
 * @return   X coordinate of max temp
 */
static inline int16_t mavlink_msg_response_global_temperature_measurement_get_temp_max_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field temp_max_y from response_global_temperature_measurement message
 *
 * @return  Y coordinate of max temp
 */
static inline int16_t mavlink_msg_response_global_temperature_measurement_get_temp_max_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field temp_min_x from response_global_temperature_measurement message
 *
 * @return  X coordinate of min temp
 */
static inline int16_t mavlink_msg_response_global_temperature_measurement_get_temp_min_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field temp_min_y from response_global_temperature_measurement message
 *
 * @return  Y coordinate of min temp
 */
static inline int16_t mavlink_msg_response_global_temperature_measurement_get_temp_min_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Decode a response_global_temperature_measurement message into a struct
 *
 * @param msg The message to decode
 * @param response_global_temperature_measurement C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_global_temperature_measurement_decode(const mavlink_message_t* msg, mavlink_response_global_temperature_measurement_t* response_global_temperature_measurement)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_global_temperature_measurement->temp_max = mavlink_msg_response_global_temperature_measurement_get_temp_max(msg);
    response_global_temperature_measurement->temp_min = mavlink_msg_response_global_temperature_measurement_get_temp_min(msg);
    response_global_temperature_measurement->temp_max_x = mavlink_msg_response_global_temperature_measurement_get_temp_max_x(msg);
    response_global_temperature_measurement->temp_max_y = mavlink_msg_response_global_temperature_measurement_get_temp_max_y(msg);
    response_global_temperature_measurement->temp_min_x = mavlink_msg_response_global_temperature_measurement_get_temp_min_x(msg);
    response_global_temperature_measurement->temp_min_y = mavlink_msg_response_global_temperature_measurement_get_temp_min_y(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN;
        memset(response_global_temperature_measurement, 0, MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_LEN);
    memcpy(response_global_temperature_measurement, _MAV_PAYLOAD(msg), len);
#endif
}
