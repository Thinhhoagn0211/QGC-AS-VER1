#pragma once
// MESSAGE RESPONSE_MANUAL_FOCUS PACKING

#define MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS 90006


typedef struct __mavlink_response_manual_focus_t {
 uint8_t sta; /*<  1: Success, 0: Error*/
} mavlink_response_manual_focus_t;

#define MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN 1
#define MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_MIN_LEN 1
#define MAVLINK_MSG_ID_90006_LEN 1
#define MAVLINK_MSG_ID_90006_MIN_LEN 1

#define MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_CRC 210
#define MAVLINK_MSG_ID_90006_CRC 210



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_MANUAL_FOCUS { \
    90006, \
    "RESPONSE_MANUAL_FOCUS", \
    1, \
    {  { "sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_manual_focus_t, sta) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_MANUAL_FOCUS { \
    "RESPONSE_MANUAL_FOCUS", \
    1, \
    {  { "sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_manual_focus_t, sta) }, \
         } \
}
#endif

/**
 * @brief Pack a response_manual_focus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sta  1: Success, 0: Error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_manual_focus_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN];
    _mav_put_uint8_t(buf, 0, sta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN);
#else
    mavlink_response_manual_focus_t packet;
    packet.sta = sta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_CRC);
}

/**
 * @brief Pack a response_manual_focus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param sta  1: Success, 0: Error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_manual_focus_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN];
    _mav_put_uint8_t(buf, 0, sta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN);
#else
    mavlink_response_manual_focus_t packet;
    packet.sta = sta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN);
#endif
}

/**
 * @brief Pack a response_manual_focus message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sta  1: Success, 0: Error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_manual_focus_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN];
    _mav_put_uint8_t(buf, 0, sta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN);
#else
    mavlink_response_manual_focus_t packet;
    packet.sta = sta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_CRC);
}

/**
 * @brief Encode a response_manual_focus struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_manual_focus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_manual_focus_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_manual_focus_t* response_manual_focus)
{
    return mavlink_msg_response_manual_focus_pack(system_id, component_id, msg, response_manual_focus->sta);
}

/**
 * @brief Encode a response_manual_focus struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_manual_focus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_manual_focus_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_manual_focus_t* response_manual_focus)
{
    return mavlink_msg_response_manual_focus_pack_chan(system_id, component_id, chan, msg, response_manual_focus->sta);
}

/**
 * @brief Encode a response_manual_focus struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_manual_focus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_manual_focus_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_manual_focus_t* response_manual_focus)
{
    return mavlink_msg_response_manual_focus_pack_status(system_id, component_id, _status, msg,  response_manual_focus->sta);
}

/**
 * @brief Send a response_manual_focus message
 * @param chan MAVLink channel to send the message
 *
 * @param sta  1: Success, 0: Error
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_manual_focus_send(mavlink_channel_t chan, uint8_t sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN];
    _mav_put_uint8_t(buf, 0, sta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS, buf, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_CRC);
#else
    mavlink_response_manual_focus_t packet;
    packet.sta = sta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_CRC);
#endif
}

/**
 * @brief Send a response_manual_focus message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_manual_focus_send_struct(mavlink_channel_t chan, const mavlink_response_manual_focus_t* response_manual_focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_manual_focus_send(chan, response_manual_focus->sta);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS, (const char *)response_manual_focus, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_manual_focus_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, sta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS, buf, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_CRC);
#else
    mavlink_response_manual_focus_t *packet = (mavlink_response_manual_focus_t *)msgbuf;
    packet->sta = sta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_MANUAL_FOCUS UNPACKING


/**
 * @brief Get field sta from response_manual_focus message
 *
 * @return  1: Success, 0: Error
 */
static inline uint8_t mavlink_msg_response_manual_focus_get_sta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a response_manual_focus message into a struct
 *
 * @param msg The message to decode
 * @param response_manual_focus C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_manual_focus_decode(const mavlink_message_t* msg, mavlink_response_manual_focus_t* response_manual_focus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_manual_focus->sta = mavlink_msg_response_manual_focus_get_sta(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN;
        memset(response_manual_focus, 0, MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_LEN);
    memcpy(response_manual_focus, _MAV_PAYLOAD(msg), len);
#endif
}
