#pragma once
// MESSAGE RESPONSE_SET_WEAK_CONTROL_MODE PACKING

#define MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE 900113


typedef struct __mavlink_response_set_weak_control_mode_t {
 uint8_t sta; /*<  1: Success, 0: Failure*/
 uint8_t weak_mode_state; /*<  1: Enabled, 0: Disabled*/
} mavlink_response_set_weak_control_mode_t;

#define MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN 2
#define MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_MIN_LEN 2
#define MAVLINK_MSG_ID_900113_LEN 2
#define MAVLINK_MSG_ID_900113_MIN_LEN 2

#define MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_CRC 98
#define MAVLINK_MSG_ID_900113_CRC 98



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_SET_WEAK_CONTROL_MODE { \
    900113, \
    "RESPONSE_SET_WEAK_CONTROL_MODE", \
    2, \
    {  { "sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_set_weak_control_mode_t, sta) }, \
         { "weak_mode_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_response_set_weak_control_mode_t, weak_mode_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_SET_WEAK_CONTROL_MODE { \
    "RESPONSE_SET_WEAK_CONTROL_MODE", \
    2, \
    {  { "sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_set_weak_control_mode_t, sta) }, \
         { "weak_mode_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_response_set_weak_control_mode_t, weak_mode_state) }, \
         } \
}
#endif

/**
 * @brief Pack a response_set_weak_control_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sta  1: Success, 0: Failure
 * @param weak_mode_state  1: Enabled, 0: Disabled
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_set_weak_control_mode_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t sta, uint8_t weak_mode_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN];
    _mav_put_uint8_t(buf, 0, sta);
    _mav_put_uint8_t(buf, 1, weak_mode_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN);
#else
    mavlink_response_set_weak_control_mode_t packet;
    packet.sta = sta;
    packet.weak_mode_state = weak_mode_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_CRC);
}

/**
 * @brief Pack a response_set_weak_control_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param sta  1: Success, 0: Failure
 * @param weak_mode_state  1: Enabled, 0: Disabled
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_set_weak_control_mode_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t sta, uint8_t weak_mode_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN];
    _mav_put_uint8_t(buf, 0, sta);
    _mav_put_uint8_t(buf, 1, weak_mode_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN);
#else
    mavlink_response_set_weak_control_mode_t packet;
    packet.sta = sta;
    packet.weak_mode_state = weak_mode_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN);
#endif
}

/**
 * @brief Pack a response_set_weak_control_mode message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sta  1: Success, 0: Failure
 * @param weak_mode_state  1: Enabled, 0: Disabled
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_set_weak_control_mode_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t sta,uint8_t weak_mode_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN];
    _mav_put_uint8_t(buf, 0, sta);
    _mav_put_uint8_t(buf, 1, weak_mode_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN);
#else
    mavlink_response_set_weak_control_mode_t packet;
    packet.sta = sta;
    packet.weak_mode_state = weak_mode_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_CRC);
}

/**
 * @brief Encode a response_set_weak_control_mode struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_set_weak_control_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_set_weak_control_mode_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_set_weak_control_mode_t* response_set_weak_control_mode)
{
    return mavlink_msg_response_set_weak_control_mode_pack(system_id, component_id, msg, response_set_weak_control_mode->sta, response_set_weak_control_mode->weak_mode_state);
}

/**
 * @brief Encode a response_set_weak_control_mode struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_set_weak_control_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_set_weak_control_mode_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_set_weak_control_mode_t* response_set_weak_control_mode)
{
    return mavlink_msg_response_set_weak_control_mode_pack_chan(system_id, component_id, chan, msg, response_set_weak_control_mode->sta, response_set_weak_control_mode->weak_mode_state);
}

/**
 * @brief Encode a response_set_weak_control_mode struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_set_weak_control_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_set_weak_control_mode_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_set_weak_control_mode_t* response_set_weak_control_mode)
{
    return mavlink_msg_response_set_weak_control_mode_pack_status(system_id, component_id, _status, msg,  response_set_weak_control_mode->sta, response_set_weak_control_mode->weak_mode_state);
}

/**
 * @brief Send a response_set_weak_control_mode message
 * @param chan MAVLink channel to send the message
 *
 * @param sta  1: Success, 0: Failure
 * @param weak_mode_state  1: Enabled, 0: Disabled
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_set_weak_control_mode_send(mavlink_channel_t chan, uint8_t sta, uint8_t weak_mode_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN];
    _mav_put_uint8_t(buf, 0, sta);
    _mav_put_uint8_t(buf, 1, weak_mode_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE, buf, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_CRC);
#else
    mavlink_response_set_weak_control_mode_t packet;
    packet.sta = sta;
    packet.weak_mode_state = weak_mode_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_CRC);
#endif
}

/**
 * @brief Send a response_set_weak_control_mode message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_set_weak_control_mode_send_struct(mavlink_channel_t chan, const mavlink_response_set_weak_control_mode_t* response_set_weak_control_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_set_weak_control_mode_send(chan, response_set_weak_control_mode->sta, response_set_weak_control_mode->weak_mode_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE, (const char *)response_set_weak_control_mode, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_set_weak_control_mode_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t sta, uint8_t weak_mode_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, sta);
    _mav_put_uint8_t(buf, 1, weak_mode_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE, buf, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_CRC);
#else
    mavlink_response_set_weak_control_mode_t *packet = (mavlink_response_set_weak_control_mode_t *)msgbuf;
    packet->sta = sta;
    packet->weak_mode_state = weak_mode_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_SET_WEAK_CONTROL_MODE UNPACKING


/**
 * @brief Get field sta from response_set_weak_control_mode message
 *
 * @return  1: Success, 0: Failure
 */
static inline uint8_t mavlink_msg_response_set_weak_control_mode_get_sta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field weak_mode_state from response_set_weak_control_mode message
 *
 * @return  1: Enabled, 0: Disabled
 */
static inline uint8_t mavlink_msg_response_set_weak_control_mode_get_weak_mode_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a response_set_weak_control_mode message into a struct
 *
 * @param msg The message to decode
 * @param response_set_weak_control_mode C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_set_weak_control_mode_decode(const mavlink_message_t* msg, mavlink_response_set_weak_control_mode_t* response_set_weak_control_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_set_weak_control_mode->sta = mavlink_msg_response_set_weak_control_mode_get_sta(msg);
    response_set_weak_control_mode->weak_mode_state = mavlink_msg_response_set_weak_control_mode_get_weak_mode_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN;
        memset(response_set_weak_control_mode, 0, MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_LEN);
    memcpy(response_set_weak_control_mode, _MAV_PAYLOAD(msg), len);
#endif
}
