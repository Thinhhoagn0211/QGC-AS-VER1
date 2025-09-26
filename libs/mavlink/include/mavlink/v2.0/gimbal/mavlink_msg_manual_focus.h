#pragma once
// MESSAGE MANUAL_FOCUS PACKING

#define MAVLINK_MSG_ID_MANUAL_FOCUS 80006


typedef struct __mavlink_manual_focus_t {
 int8_t focus; /*<  1: Far, 0: Stop, -1: Near*/
} mavlink_manual_focus_t;

#define MAVLINK_MSG_ID_MANUAL_FOCUS_LEN 1
#define MAVLINK_MSG_ID_MANUAL_FOCUS_MIN_LEN 1
#define MAVLINK_MSG_ID_80006_LEN 1
#define MAVLINK_MSG_ID_80006_MIN_LEN 1

#define MAVLINK_MSG_ID_MANUAL_FOCUS_CRC 91
#define MAVLINK_MSG_ID_80006_CRC 91



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MANUAL_FOCUS { \
    80006, \
    "MANUAL_FOCUS", \
    1, \
    {  { "focus", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_manual_focus_t, focus) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MANUAL_FOCUS { \
    "MANUAL_FOCUS", \
    1, \
    {  { "focus", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_manual_focus_t, focus) }, \
         } \
}
#endif

/**
 * @brief Pack a manual_focus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param focus  1: Far, 0: Stop, -1: Near
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_manual_focus_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_FOCUS_LEN];
    _mav_put_int8_t(buf, 0, focus);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN);
#else
    mavlink_manual_focus_t packet;
    packet.focus = focus;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MANUAL_FOCUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_CRC);
}

/**
 * @brief Pack a manual_focus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param focus  1: Far, 0: Stop, -1: Near
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_manual_focus_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int8_t focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_FOCUS_LEN];
    _mav_put_int8_t(buf, 0, focus);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN);
#else
    mavlink_manual_focus_t packet;
    packet.focus = focus;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MANUAL_FOCUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN);
#endif
}

/**
 * @brief Pack a manual_focus message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param focus  1: Far, 0: Stop, -1: Near
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_manual_focus_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_FOCUS_LEN];
    _mav_put_int8_t(buf, 0, focus);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN);
#else
    mavlink_manual_focus_t packet;
    packet.focus = focus;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MANUAL_FOCUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_CRC);
}

/**
 * @brief Encode a manual_focus struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param manual_focus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_manual_focus_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_manual_focus_t* manual_focus)
{
    return mavlink_msg_manual_focus_pack(system_id, component_id, msg, manual_focus->focus);
}

/**
 * @brief Encode a manual_focus struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param manual_focus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_manual_focus_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_manual_focus_t* manual_focus)
{
    return mavlink_msg_manual_focus_pack_chan(system_id, component_id, chan, msg, manual_focus->focus);
}

/**
 * @brief Encode a manual_focus struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param manual_focus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_manual_focus_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_manual_focus_t* manual_focus)
{
    return mavlink_msg_manual_focus_pack_status(system_id, component_id, _status, msg,  manual_focus->focus);
}

/**
 * @brief Send a manual_focus message
 * @param chan MAVLink channel to send the message
 *
 * @param focus  1: Far, 0: Stop, -1: Near
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_manual_focus_send(mavlink_channel_t chan, int8_t focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_FOCUS_LEN];
    _mav_put_int8_t(buf, 0, focus);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_FOCUS, buf, MAVLINK_MSG_ID_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_CRC);
#else
    mavlink_manual_focus_t packet;
    packet.focus = focus;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_FOCUS, (const char *)&packet, MAVLINK_MSG_ID_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_CRC);
#endif
}

/**
 * @brief Send a manual_focus message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_manual_focus_send_struct(mavlink_channel_t chan, const mavlink_manual_focus_t* manual_focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_manual_focus_send(chan, manual_focus->focus);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_FOCUS, (const char *)manual_focus, MAVLINK_MSG_ID_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_MANUAL_FOCUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_manual_focus_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int8_t(buf, 0, focus);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_FOCUS, buf, MAVLINK_MSG_ID_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_CRC);
#else
    mavlink_manual_focus_t *packet = (mavlink_manual_focus_t *)msgbuf;
    packet->focus = focus;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_FOCUS, (const char *)packet, MAVLINK_MSG_ID_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_MANUAL_FOCUS_CRC);
#endif
}
#endif

#endif

// MESSAGE MANUAL_FOCUS UNPACKING


/**
 * @brief Get field focus from manual_focus message
 *
 * @return  1: Far, 0: Stop, -1: Near
 */
static inline int8_t mavlink_msg_manual_focus_get_focus(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  0);
}

/**
 * @brief Decode a manual_focus message into a struct
 *
 * @param msg The message to decode
 * @param manual_focus C-struct to decode the message contents into
 */
static inline void mavlink_msg_manual_focus_decode(const mavlink_message_t* msg, mavlink_manual_focus_t* manual_focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    manual_focus->focus = mavlink_msg_manual_focus_get_focus(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MANUAL_FOCUS_LEN? msg->len : MAVLINK_MSG_ID_MANUAL_FOCUS_LEN;
        memset(manual_focus, 0, MAVLINK_MSG_ID_MANUAL_FOCUS_LEN);
    memcpy(manual_focus, _MAV_PAYLOAD(msg), len);
#endif
}
