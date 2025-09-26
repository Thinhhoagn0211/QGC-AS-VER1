#pragma once
// MESSAGE GET_TEMPERATURE_AT_SELECTED_POINT PACKING

#define MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT 80018


typedef struct __mavlink_get_temperature_at_selected_point_t {
 uint16_t x; /*<  X coordinate*/
 uint16_t y; /*<  Y coordinate*/
 uint8_t get_temp_flag; /*<  Temperature retrieval flag*/
} mavlink_get_temperature_at_selected_point_t;

#define MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN 5
#define MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN 5
#define MAVLINK_MSG_ID_80018_LEN 5
#define MAVLINK_MSG_ID_80018_MIN_LEN 5

#define MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_CRC 13
#define MAVLINK_MSG_ID_80018_CRC 13



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GET_TEMPERATURE_AT_SELECTED_POINT { \
    80018, \
    "GET_TEMPERATURE_AT_SELECTED_POINT", \
    3, \
    {  { "x", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_get_temperature_at_selected_point_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_get_temperature_at_selected_point_t, y) }, \
         { "get_temp_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_get_temperature_at_selected_point_t, get_temp_flag) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GET_TEMPERATURE_AT_SELECTED_POINT { \
    "GET_TEMPERATURE_AT_SELECTED_POINT", \
    3, \
    {  { "x", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_get_temperature_at_selected_point_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_get_temperature_at_selected_point_t, y) }, \
         { "get_temp_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_get_temperature_at_selected_point_t, get_temp_flag) }, \
         } \
}
#endif

/**
 * @brief Pack a get_temperature_at_selected_point message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x  X coordinate
 * @param y  Y coordinate
 * @param get_temp_flag  Temperature retrieval flag
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_get_temperature_at_selected_point_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t x, uint16_t y, uint8_t get_temp_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN];
    _mav_put_uint16_t(buf, 0, x);
    _mav_put_uint16_t(buf, 2, y);
    _mav_put_uint8_t(buf, 4, get_temp_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#else
    mavlink_get_temperature_at_selected_point_t packet;
    packet.x = x;
    packet.y = y;
    packet.get_temp_flag = get_temp_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
}

/**
 * @brief Pack a get_temperature_at_selected_point message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param x  X coordinate
 * @param y  Y coordinate
 * @param get_temp_flag  Temperature retrieval flag
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_get_temperature_at_selected_point_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t x, uint16_t y, uint8_t get_temp_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN];
    _mav_put_uint16_t(buf, 0, x);
    _mav_put_uint16_t(buf, 2, y);
    _mav_put_uint8_t(buf, 4, get_temp_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#else
    mavlink_get_temperature_at_selected_point_t packet;
    packet.x = x;
    packet.y = y;
    packet.get_temp_flag = get_temp_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#endif
}

/**
 * @brief Pack a get_temperature_at_selected_point message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x  X coordinate
 * @param y  Y coordinate
 * @param get_temp_flag  Temperature retrieval flag
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_get_temperature_at_selected_point_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t x,uint16_t y,uint8_t get_temp_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN];
    _mav_put_uint16_t(buf, 0, x);
    _mav_put_uint16_t(buf, 2, y);
    _mav_put_uint8_t(buf, 4, get_temp_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#else
    mavlink_get_temperature_at_selected_point_t packet;
    packet.x = x;
    packet.y = y;
    packet.get_temp_flag = get_temp_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
}

/**
 * @brief Encode a get_temperature_at_selected_point struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param get_temperature_at_selected_point C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_get_temperature_at_selected_point_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_get_temperature_at_selected_point_t* get_temperature_at_selected_point)
{
    return mavlink_msg_get_temperature_at_selected_point_pack(system_id, component_id, msg, get_temperature_at_selected_point->x, get_temperature_at_selected_point->y, get_temperature_at_selected_point->get_temp_flag);
}

/**
 * @brief Encode a get_temperature_at_selected_point struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param get_temperature_at_selected_point C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_get_temperature_at_selected_point_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_get_temperature_at_selected_point_t* get_temperature_at_selected_point)
{
    return mavlink_msg_get_temperature_at_selected_point_pack_chan(system_id, component_id, chan, msg, get_temperature_at_selected_point->x, get_temperature_at_selected_point->y, get_temperature_at_selected_point->get_temp_flag);
}

/**
 * @brief Encode a get_temperature_at_selected_point struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param get_temperature_at_selected_point C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_get_temperature_at_selected_point_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_get_temperature_at_selected_point_t* get_temperature_at_selected_point)
{
    return mavlink_msg_get_temperature_at_selected_point_pack_status(system_id, component_id, _status, msg,  get_temperature_at_selected_point->x, get_temperature_at_selected_point->y, get_temperature_at_selected_point->get_temp_flag);
}

/**
 * @brief Send a get_temperature_at_selected_point message
 * @param chan MAVLink channel to send the message
 *
 * @param x  X coordinate
 * @param y  Y coordinate
 * @param get_temp_flag  Temperature retrieval flag
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_get_temperature_at_selected_point_send(mavlink_channel_t chan, uint16_t x, uint16_t y, uint8_t get_temp_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN];
    _mav_put_uint16_t(buf, 0, x);
    _mav_put_uint16_t(buf, 2, y);
    _mav_put_uint8_t(buf, 4, get_temp_flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT, buf, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
#else
    mavlink_get_temperature_at_selected_point_t packet;
    packet.x = x;
    packet.y = y;
    packet.get_temp_flag = get_temp_flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT, (const char *)&packet, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
#endif
}

/**
 * @brief Send a get_temperature_at_selected_point message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_get_temperature_at_selected_point_send_struct(mavlink_channel_t chan, const mavlink_get_temperature_at_selected_point_t* get_temperature_at_selected_point)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_get_temperature_at_selected_point_send(chan, get_temperature_at_selected_point->x, get_temperature_at_selected_point->y, get_temperature_at_selected_point->get_temp_flag);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT, (const char *)get_temperature_at_selected_point, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
#endif
}

#if MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_get_temperature_at_selected_point_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t x, uint16_t y, uint8_t get_temp_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, x);
    _mav_put_uint16_t(buf, 2, y);
    _mav_put_uint8_t(buf, 4, get_temp_flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT, buf, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
#else
    mavlink_get_temperature_at_selected_point_t *packet = (mavlink_get_temperature_at_selected_point_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->get_temp_flag = get_temp_flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT, (const char *)packet, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_CRC);
#endif
}
#endif

#endif

// MESSAGE GET_TEMPERATURE_AT_SELECTED_POINT UNPACKING


/**
 * @brief Get field x from get_temperature_at_selected_point message
 *
 * @return  X coordinate
 */
static inline uint16_t mavlink_msg_get_temperature_at_selected_point_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field y from get_temperature_at_selected_point message
 *
 * @return  Y coordinate
 */
static inline uint16_t mavlink_msg_get_temperature_at_selected_point_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field get_temp_flag from get_temperature_at_selected_point message
 *
 * @return  Temperature retrieval flag
 */
static inline uint8_t mavlink_msg_get_temperature_at_selected_point_get_get_temp_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a get_temperature_at_selected_point message into a struct
 *
 * @param msg The message to decode
 * @param get_temperature_at_selected_point C-struct to decode the message contents into
 */
static inline void mavlink_msg_get_temperature_at_selected_point_decode(const mavlink_message_t* msg, mavlink_get_temperature_at_selected_point_t* get_temperature_at_selected_point)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    get_temperature_at_selected_point->x = mavlink_msg_get_temperature_at_selected_point_get_x(msg);
    get_temperature_at_selected_point->y = mavlink_msg_get_temperature_at_selected_point_get_y(msg);
    get_temperature_at_selected_point->get_temp_flag = mavlink_msg_get_temperature_at_selected_point_get_get_temp_flag(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN? msg->len : MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN;
        memset(get_temperature_at_selected_point, 0, MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_LEN);
    memcpy(get_temperature_at_selected_point, _MAV_PAYLOAD(msg), len);
#endif
}
