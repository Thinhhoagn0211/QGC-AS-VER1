#pragma once
// MESSAGE RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT PACKING

#define MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT 90018


typedef struct __mavlink_response_get_temperature_at_selected_point_t {
 int16_t temperature; /*<  Temperature in °C (divide by 10)*/
 int16_t x; /*<  X coordinate*/
 int16_t y; /*<  Y coordinate*/
} mavlink_response_get_temperature_at_selected_point_t;

#define MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN 6
#define MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN 6
#define MAVLINK_MSG_ID_90018_LEN 6
#define MAVLINK_MSG_ID_90018_MIN_LEN 6

#define MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_CRC 61
#define MAVLINK_MSG_ID_90018_CRC 61



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT { \
    90018, \
    "RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT", \
    3, \
    {  { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_response_get_temperature_at_selected_point_t, temperature) }, \
         { "x", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_response_get_temperature_at_selected_point_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_response_get_temperature_at_selected_point_t, y) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT { \
    "RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT", \
    3, \
    {  { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_response_get_temperature_at_selected_point_t, temperature) }, \
         { "x", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_response_get_temperature_at_selected_point_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_response_get_temperature_at_selected_point_t, y) }, \
         } \
}
#endif

/**
 * @brief Pack a response_get_temperature_at_selected_point message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param temperature  Temperature in °C (divide by 10)
 * @param x  X coordinate
 * @param y  Y coordinate
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_get_temperature_at_selected_point_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t temperature, int16_t x, int16_t y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN];
    _mav_put_int16_t(buf, 0, temperature);
    _mav_put_int16_t(buf, 2, x);
    _mav_put_int16_t(buf, 4, y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#else
    mavlink_response_get_temperature_at_selected_point_t packet;
    packet.temperature = temperature;
    packet.x = x;
    packet.y = y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
}

/**
 * @brief Pack a response_get_temperature_at_selected_point message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param temperature  Temperature in °C (divide by 10)
 * @param x  X coordinate
 * @param y  Y coordinate
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_get_temperature_at_selected_point_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t temperature, int16_t x, int16_t y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN];
    _mav_put_int16_t(buf, 0, temperature);
    _mav_put_int16_t(buf, 2, x);
    _mav_put_int16_t(buf, 4, y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#else
    mavlink_response_get_temperature_at_selected_point_t packet;
    packet.temperature = temperature;
    packet.x = x;
    packet.y = y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#endif
}

/**
 * @brief Pack a response_get_temperature_at_selected_point message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param temperature  Temperature in °C (divide by 10)
 * @param x  X coordinate
 * @param y  Y coordinate
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_get_temperature_at_selected_point_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t temperature,int16_t x,int16_t y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN];
    _mav_put_int16_t(buf, 0, temperature);
    _mav_put_int16_t(buf, 2, x);
    _mav_put_int16_t(buf, 4, y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#else
    mavlink_response_get_temperature_at_selected_point_t packet;
    packet.temperature = temperature;
    packet.x = x;
    packet.y = y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
}

/**
 * @brief Encode a response_get_temperature_at_selected_point struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_get_temperature_at_selected_point C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_get_temperature_at_selected_point_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_get_temperature_at_selected_point_t* response_get_temperature_at_selected_point)
{
    return mavlink_msg_response_get_temperature_at_selected_point_pack(system_id, component_id, msg, response_get_temperature_at_selected_point->temperature, response_get_temperature_at_selected_point->x, response_get_temperature_at_selected_point->y);
}

/**
 * @brief Encode a response_get_temperature_at_selected_point struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_get_temperature_at_selected_point C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_get_temperature_at_selected_point_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_get_temperature_at_selected_point_t* response_get_temperature_at_selected_point)
{
    return mavlink_msg_response_get_temperature_at_selected_point_pack_chan(system_id, component_id, chan, msg, response_get_temperature_at_selected_point->temperature, response_get_temperature_at_selected_point->x, response_get_temperature_at_selected_point->y);
}

/**
 * @brief Encode a response_get_temperature_at_selected_point struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_get_temperature_at_selected_point C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_get_temperature_at_selected_point_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_get_temperature_at_selected_point_t* response_get_temperature_at_selected_point)
{
    return mavlink_msg_response_get_temperature_at_selected_point_pack_status(system_id, component_id, _status, msg,  response_get_temperature_at_selected_point->temperature, response_get_temperature_at_selected_point->x, response_get_temperature_at_selected_point->y);
}

/**
 * @brief Send a response_get_temperature_at_selected_point message
 * @param chan MAVLink channel to send the message
 *
 * @param temperature  Temperature in °C (divide by 10)
 * @param x  X coordinate
 * @param y  Y coordinate
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_get_temperature_at_selected_point_send(mavlink_channel_t chan, int16_t temperature, int16_t x, int16_t y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN];
    _mav_put_int16_t(buf, 0, temperature);
    _mav_put_int16_t(buf, 2, x);
    _mav_put_int16_t(buf, 4, y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT, buf, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
#else
    mavlink_response_get_temperature_at_selected_point_t packet;
    packet.temperature = temperature;
    packet.x = x;
    packet.y = y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
#endif
}

/**
 * @brief Send a response_get_temperature_at_selected_point message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_get_temperature_at_selected_point_send_struct(mavlink_channel_t chan, const mavlink_response_get_temperature_at_selected_point_t* response_get_temperature_at_selected_point)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_get_temperature_at_selected_point_send(chan, response_get_temperature_at_selected_point->temperature, response_get_temperature_at_selected_point->x, response_get_temperature_at_selected_point->y);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT, (const char *)response_get_temperature_at_selected_point, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_get_temperature_at_selected_point_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t temperature, int16_t x, int16_t y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, temperature);
    _mav_put_int16_t(buf, 2, x);
    _mav_put_int16_t(buf, 4, y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT, buf, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
#else
    mavlink_response_get_temperature_at_selected_point_t *packet = (mavlink_response_get_temperature_at_selected_point_t *)msgbuf;
    packet->temperature = temperature;
    packet->x = x;
    packet->y = y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT UNPACKING


/**
 * @brief Get field temperature from response_get_temperature_at_selected_point message
 *
 * @return  Temperature in °C (divide by 10)
 */
static inline int16_t mavlink_msg_response_get_temperature_at_selected_point_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field x from response_get_temperature_at_selected_point message
 *
 * @return  X coordinate
 */
static inline int16_t mavlink_msg_response_get_temperature_at_selected_point_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field y from response_get_temperature_at_selected_point message
 *
 * @return  Y coordinate
 */
static inline int16_t mavlink_msg_response_get_temperature_at_selected_point_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Decode a response_get_temperature_at_selected_point message into a struct
 *
 * @param msg The message to decode
 * @param response_get_temperature_at_selected_point C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_get_temperature_at_selected_point_decode(const mavlink_message_t* msg, mavlink_response_get_temperature_at_selected_point_t* response_get_temperature_at_selected_point)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_get_temperature_at_selected_point->temperature = mavlink_msg_response_get_temperature_at_selected_point_get_temperature(msg);
    response_get_temperature_at_selected_point->x = mavlink_msg_response_get_temperature_at_selected_point_get_x(msg);
    response_get_temperature_at_selected_point->y = mavlink_msg_response_get_temperature_at_selected_point_get_y(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN;
        memset(response_get_temperature_at_selected_point, 0, MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
    memcpy(response_get_temperature_at_selected_point, _MAV_PAYLOAD(msg), len);
#endif
}
