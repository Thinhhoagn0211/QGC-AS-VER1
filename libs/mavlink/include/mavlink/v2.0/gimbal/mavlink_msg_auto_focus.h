#pragma once
// MESSAGE AUTO_FOCUS PACKING

#define MAVLINK_MSG_ID_AUTO_FOCUS 80004


typedef struct __mavlink_auto_focus_t {
 uint16_t touch_x; /*<  Touch X coordinate in pixels*/
 uint16_t touch_y; /*<  Touch Y coordinate in pixels*/
 uint8_t auto_focus; /*<  1 to enable, 0 to disable*/
} mavlink_auto_focus_t;

#define MAVLINK_MSG_ID_AUTO_FOCUS_LEN 5
#define MAVLINK_MSG_ID_AUTO_FOCUS_MIN_LEN 5
#define MAVLINK_MSG_ID_80004_LEN 5
#define MAVLINK_MSG_ID_80004_MIN_LEN 5

#define MAVLINK_MSG_ID_AUTO_FOCUS_CRC 135
#define MAVLINK_MSG_ID_80004_CRC 135



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AUTO_FOCUS { \
    80004, \
    "AUTO_FOCUS", \
    3, \
    {  { "auto_focus", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_auto_focus_t, auto_focus) }, \
         { "touch_x", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_auto_focus_t, touch_x) }, \
         { "touch_y", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_auto_focus_t, touch_y) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AUTO_FOCUS { \
    "AUTO_FOCUS", \
    3, \
    {  { "auto_focus", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_auto_focus_t, auto_focus) }, \
         { "touch_x", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_auto_focus_t, touch_x) }, \
         { "touch_y", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_auto_focus_t, touch_y) }, \
         } \
}
#endif

/**
 * @brief Pack a auto_focus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param auto_focus  1 to enable, 0 to disable
 * @param touch_x  Touch X coordinate in pixels
 * @param touch_y  Touch Y coordinate in pixels
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_auto_focus_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t auto_focus, uint16_t touch_x, uint16_t touch_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUTO_FOCUS_LEN];
    _mav_put_uint16_t(buf, 0, touch_x);
    _mav_put_uint16_t(buf, 2, touch_y);
    _mav_put_uint8_t(buf, 4, auto_focus);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUTO_FOCUS_LEN);
#else
    mavlink_auto_focus_t packet;
    packet.touch_x = touch_x;
    packet.touch_y = touch_y;
    packet.auto_focus = auto_focus;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUTO_FOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AUTO_FOCUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_CRC);
}

/**
 * @brief Pack a auto_focus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param auto_focus  1 to enable, 0 to disable
 * @param touch_x  Touch X coordinate in pixels
 * @param touch_y  Touch Y coordinate in pixels
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_auto_focus_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t auto_focus, uint16_t touch_x, uint16_t touch_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUTO_FOCUS_LEN];
    _mav_put_uint16_t(buf, 0, touch_x);
    _mav_put_uint16_t(buf, 2, touch_y);
    _mav_put_uint8_t(buf, 4, auto_focus);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUTO_FOCUS_LEN);
#else
    mavlink_auto_focus_t packet;
    packet.touch_x = touch_x;
    packet.touch_y = touch_y;
    packet.auto_focus = auto_focus;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUTO_FOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AUTO_FOCUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_LEN);
#endif
}

/**
 * @brief Pack a auto_focus message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param auto_focus  1 to enable, 0 to disable
 * @param touch_x  Touch X coordinate in pixels
 * @param touch_y  Touch Y coordinate in pixels
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_auto_focus_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t auto_focus,uint16_t touch_x,uint16_t touch_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUTO_FOCUS_LEN];
    _mav_put_uint16_t(buf, 0, touch_x);
    _mav_put_uint16_t(buf, 2, touch_y);
    _mav_put_uint8_t(buf, 4, auto_focus);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUTO_FOCUS_LEN);
#else
    mavlink_auto_focus_t packet;
    packet.touch_x = touch_x;
    packet.touch_y = touch_y;
    packet.auto_focus = auto_focus;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUTO_FOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AUTO_FOCUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_CRC);
}

/**
 * @brief Encode a auto_focus struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param auto_focus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_auto_focus_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_auto_focus_t* auto_focus)
{
    return mavlink_msg_auto_focus_pack(system_id, component_id, msg, auto_focus->auto_focus, auto_focus->touch_x, auto_focus->touch_y);
}

/**
 * @brief Encode a auto_focus struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param auto_focus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_auto_focus_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_auto_focus_t* auto_focus)
{
    return mavlink_msg_auto_focus_pack_chan(system_id, component_id, chan, msg, auto_focus->auto_focus, auto_focus->touch_x, auto_focus->touch_y);
}

/**
 * @brief Encode a auto_focus struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param auto_focus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_auto_focus_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_auto_focus_t* auto_focus)
{
    return mavlink_msg_auto_focus_pack_status(system_id, component_id, _status, msg,  auto_focus->auto_focus, auto_focus->touch_x, auto_focus->touch_y);
}

/**
 * @brief Send a auto_focus message
 * @param chan MAVLink channel to send the message
 *
 * @param auto_focus  1 to enable, 0 to disable
 * @param touch_x  Touch X coordinate in pixels
 * @param touch_y  Touch Y coordinate in pixels
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_auto_focus_send(mavlink_channel_t chan, uint8_t auto_focus, uint16_t touch_x, uint16_t touch_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUTO_FOCUS_LEN];
    _mav_put_uint16_t(buf, 0, touch_x);
    _mav_put_uint16_t(buf, 2, touch_y);
    _mav_put_uint8_t(buf, 4, auto_focus);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTO_FOCUS, buf, MAVLINK_MSG_ID_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_CRC);
#else
    mavlink_auto_focus_t packet;
    packet.touch_x = touch_x;
    packet.touch_y = touch_y;
    packet.auto_focus = auto_focus;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTO_FOCUS, (const char *)&packet, MAVLINK_MSG_ID_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_CRC);
#endif
}

/**
 * @brief Send a auto_focus message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_auto_focus_send_struct(mavlink_channel_t chan, const mavlink_auto_focus_t* auto_focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_auto_focus_send(chan, auto_focus->auto_focus, auto_focus->touch_x, auto_focus->touch_y);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTO_FOCUS, (const char *)auto_focus, MAVLINK_MSG_ID_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_AUTO_FOCUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_auto_focus_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t auto_focus, uint16_t touch_x, uint16_t touch_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, touch_x);
    _mav_put_uint16_t(buf, 2, touch_y);
    _mav_put_uint8_t(buf, 4, auto_focus);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTO_FOCUS, buf, MAVLINK_MSG_ID_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_CRC);
#else
    mavlink_auto_focus_t *packet = (mavlink_auto_focus_t *)msgbuf;
    packet->touch_x = touch_x;
    packet->touch_y = touch_y;
    packet->auto_focus = auto_focus;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTO_FOCUS, (const char *)packet, MAVLINK_MSG_ID_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_AUTO_FOCUS_CRC);
#endif
}
#endif

#endif

// MESSAGE AUTO_FOCUS UNPACKING


/**
 * @brief Get field auto_focus from auto_focus message
 *
 * @return  1 to enable, 0 to disable
 */
static inline uint8_t mavlink_msg_auto_focus_get_auto_focus(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field touch_x from auto_focus message
 *
 * @return  Touch X coordinate in pixels
 */
static inline uint16_t mavlink_msg_auto_focus_get_touch_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field touch_y from auto_focus message
 *
 * @return  Touch Y coordinate in pixels
 */
static inline uint16_t mavlink_msg_auto_focus_get_touch_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Decode a auto_focus message into a struct
 *
 * @param msg The message to decode
 * @param auto_focus C-struct to decode the message contents into
 */
static inline void mavlink_msg_auto_focus_decode(const mavlink_message_t* msg, mavlink_auto_focus_t* auto_focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    auto_focus->touch_x = mavlink_msg_auto_focus_get_touch_x(msg);
    auto_focus->touch_y = mavlink_msg_auto_focus_get_touch_y(msg);
    auto_focus->auto_focus = mavlink_msg_auto_focus_get_auto_focus(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AUTO_FOCUS_LEN? msg->len : MAVLINK_MSG_ID_AUTO_FOCUS_LEN;
        memset(auto_focus, 0, MAVLINK_MSG_ID_AUTO_FOCUS_LEN);
    memcpy(auto_focus, _MAV_PAYLOAD(msg), len);
#endif
}
