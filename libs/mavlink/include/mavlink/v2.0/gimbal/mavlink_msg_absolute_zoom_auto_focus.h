#pragma once
// MESSAGE ABSOLUTE_ZOOM_AUTO_FOCUS PACKING

#define MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS 80015


typedef struct __mavlink_absolute_zoom_auto_focus_t {
 uint8_t absolute_movement_int; /*<  Integer zoom part*/
 uint8_t absolute_movement_float; /*<  Decimal zoom part*/
} mavlink_absolute_zoom_auto_focus_t;

#define MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN 2
#define MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN 2
#define MAVLINK_MSG_ID_80015_LEN 2
#define MAVLINK_MSG_ID_80015_MIN_LEN 2

#define MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_CRC 86
#define MAVLINK_MSG_ID_80015_CRC 86



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ABSOLUTE_ZOOM_AUTO_FOCUS { \
    80015, \
    "ABSOLUTE_ZOOM_AUTO_FOCUS", \
    2, \
    {  { "absolute_movement_int", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_absolute_zoom_auto_focus_t, absolute_movement_int) }, \
         { "absolute_movement_float", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_absolute_zoom_auto_focus_t, absolute_movement_float) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ABSOLUTE_ZOOM_AUTO_FOCUS { \
    "ABSOLUTE_ZOOM_AUTO_FOCUS", \
    2, \
    {  { "absolute_movement_int", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_absolute_zoom_auto_focus_t, absolute_movement_int) }, \
         { "absolute_movement_float", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_absolute_zoom_auto_focus_t, absolute_movement_float) }, \
         } \
}
#endif

/**
 * @brief Pack a absolute_zoom_auto_focus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param absolute_movement_int  Integer zoom part
 * @param absolute_movement_float  Decimal zoom part
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_absolute_zoom_auto_focus_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t absolute_movement_int, uint8_t absolute_movement_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN];
    _mav_put_uint8_t(buf, 0, absolute_movement_int);
    _mav_put_uint8_t(buf, 1, absolute_movement_float);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN);
#else
    mavlink_absolute_zoom_auto_focus_t packet;
    packet.absolute_movement_int = absolute_movement_int;
    packet.absolute_movement_float = absolute_movement_float;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_CRC);
}

/**
 * @brief Pack a absolute_zoom_auto_focus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param absolute_movement_int  Integer zoom part
 * @param absolute_movement_float  Decimal zoom part
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_absolute_zoom_auto_focus_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t absolute_movement_int, uint8_t absolute_movement_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN];
    _mav_put_uint8_t(buf, 0, absolute_movement_int);
    _mav_put_uint8_t(buf, 1, absolute_movement_float);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN);
#else
    mavlink_absolute_zoom_auto_focus_t packet;
    packet.absolute_movement_int = absolute_movement_int;
    packet.absolute_movement_float = absolute_movement_float;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN);
#endif
}

/**
 * @brief Pack a absolute_zoom_auto_focus message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param absolute_movement_int  Integer zoom part
 * @param absolute_movement_float  Decimal zoom part
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_absolute_zoom_auto_focus_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t absolute_movement_int,uint8_t absolute_movement_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN];
    _mav_put_uint8_t(buf, 0, absolute_movement_int);
    _mav_put_uint8_t(buf, 1, absolute_movement_float);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN);
#else
    mavlink_absolute_zoom_auto_focus_t packet;
    packet.absolute_movement_int = absolute_movement_int;
    packet.absolute_movement_float = absolute_movement_float;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_CRC);
}

/**
 * @brief Encode a absolute_zoom_auto_focus struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param absolute_zoom_auto_focus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_absolute_zoom_auto_focus_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_absolute_zoom_auto_focus_t* absolute_zoom_auto_focus)
{
    return mavlink_msg_absolute_zoom_auto_focus_pack(system_id, component_id, msg, absolute_zoom_auto_focus->absolute_movement_int, absolute_zoom_auto_focus->absolute_movement_float);
}

/**
 * @brief Encode a absolute_zoom_auto_focus struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param absolute_zoom_auto_focus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_absolute_zoom_auto_focus_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_absolute_zoom_auto_focus_t* absolute_zoom_auto_focus)
{
    return mavlink_msg_absolute_zoom_auto_focus_pack_chan(system_id, component_id, chan, msg, absolute_zoom_auto_focus->absolute_movement_int, absolute_zoom_auto_focus->absolute_movement_float);
}

/**
 * @brief Encode a absolute_zoom_auto_focus struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param absolute_zoom_auto_focus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_absolute_zoom_auto_focus_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_absolute_zoom_auto_focus_t* absolute_zoom_auto_focus)
{
    return mavlink_msg_absolute_zoom_auto_focus_pack_status(system_id, component_id, _status, msg,  absolute_zoom_auto_focus->absolute_movement_int, absolute_zoom_auto_focus->absolute_movement_float);
}

/**
 * @brief Send a absolute_zoom_auto_focus message
 * @param chan MAVLink channel to send the message
 *
 * @param absolute_movement_int  Integer zoom part
 * @param absolute_movement_float  Decimal zoom part
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_absolute_zoom_auto_focus_send(mavlink_channel_t chan, uint8_t absolute_movement_int, uint8_t absolute_movement_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN];
    _mav_put_uint8_t(buf, 0, absolute_movement_int);
    _mav_put_uint8_t(buf, 1, absolute_movement_float);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS, buf, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_CRC);
#else
    mavlink_absolute_zoom_auto_focus_t packet;
    packet.absolute_movement_int = absolute_movement_int;
    packet.absolute_movement_float = absolute_movement_float;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS, (const char *)&packet, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_CRC);
#endif
}

/**
 * @brief Send a absolute_zoom_auto_focus message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_absolute_zoom_auto_focus_send_struct(mavlink_channel_t chan, const mavlink_absolute_zoom_auto_focus_t* absolute_zoom_auto_focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_absolute_zoom_auto_focus_send(chan, absolute_zoom_auto_focus->absolute_movement_int, absolute_zoom_auto_focus->absolute_movement_float);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS, (const char *)absolute_zoom_auto_focus, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_absolute_zoom_auto_focus_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t absolute_movement_int, uint8_t absolute_movement_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, absolute_movement_int);
    _mav_put_uint8_t(buf, 1, absolute_movement_float);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS, buf, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_CRC);
#else
    mavlink_absolute_zoom_auto_focus_t *packet = (mavlink_absolute_zoom_auto_focus_t *)msgbuf;
    packet->absolute_movement_int = absolute_movement_int;
    packet->absolute_movement_float = absolute_movement_float;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS, (const char *)packet, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ABSOLUTE_ZOOM_AUTO_FOCUS UNPACKING


/**
 * @brief Get field absolute_movement_int from absolute_zoom_auto_focus message
 *
 * @return  Integer zoom part
 */
static inline uint8_t mavlink_msg_absolute_zoom_auto_focus_get_absolute_movement_int(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field absolute_movement_float from absolute_zoom_auto_focus message
 *
 * @return  Decimal zoom part
 */
static inline uint8_t mavlink_msg_absolute_zoom_auto_focus_get_absolute_movement_float(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a absolute_zoom_auto_focus message into a struct
 *
 * @param msg The message to decode
 * @param absolute_zoom_auto_focus C-struct to decode the message contents into
 */
static inline void mavlink_msg_absolute_zoom_auto_focus_decode(const mavlink_message_t* msg, mavlink_absolute_zoom_auto_focus_t* absolute_zoom_auto_focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    absolute_zoom_auto_focus->absolute_movement_int = mavlink_msg_absolute_zoom_auto_focus_get_absolute_movement_int(msg);
    absolute_zoom_auto_focus->absolute_movement_float = mavlink_msg_absolute_zoom_auto_focus_get_absolute_movement_float(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN? msg->len : MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN;
        memset(absolute_zoom_auto_focus, 0, MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_LEN);
    memcpy(absolute_zoom_auto_focus, _MAV_PAYLOAD(msg), len);
#endif
}
