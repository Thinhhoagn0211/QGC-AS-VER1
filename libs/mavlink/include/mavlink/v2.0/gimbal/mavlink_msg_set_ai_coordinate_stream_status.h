#pragma once
// MESSAGE SET_AI_COORDINATE_STREAM_STATUS PACKING

#define MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS 80081


typedef struct __mavlink_set_ai_coordinate_stream_status_t {
 uint8_t track_action; /*<  0: Disable, 1: Enable*/
} mavlink_set_ai_coordinate_stream_status_t;

#define MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN 1
#define MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN 1
#define MAVLINK_MSG_ID_80081_LEN 1
#define MAVLINK_MSG_ID_80081_MIN_LEN 1

#define MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_CRC 4
#define MAVLINK_MSG_ID_80081_CRC 4



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_AI_COORDINATE_STREAM_STATUS { \
    80081, \
    "SET_AI_COORDINATE_STREAM_STATUS", \
    1, \
    {  { "track_action", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_set_ai_coordinate_stream_status_t, track_action) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_AI_COORDINATE_STREAM_STATUS { \
    "SET_AI_COORDINATE_STREAM_STATUS", \
    1, \
    {  { "track_action", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_set_ai_coordinate_stream_status_t, track_action) }, \
         } \
}
#endif

/**
 * @brief Pack a set_ai_coordinate_stream_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param track_action  0: Disable, 1: Enable
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_ai_coordinate_stream_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t track_action)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, track_action);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN);
#else
    mavlink_set_ai_coordinate_stream_status_t packet;
    packet.track_action = track_action;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_CRC);
}

/**
 * @brief Pack a set_ai_coordinate_stream_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param track_action  0: Disable, 1: Enable
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_ai_coordinate_stream_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t track_action)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, track_action);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN);
#else
    mavlink_set_ai_coordinate_stream_status_t packet;
    packet.track_action = track_action;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN);
#endif
}

/**
 * @brief Pack a set_ai_coordinate_stream_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param track_action  0: Disable, 1: Enable
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_ai_coordinate_stream_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t track_action)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, track_action);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN);
#else
    mavlink_set_ai_coordinate_stream_status_t packet;
    packet.track_action = track_action;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_CRC);
}

/**
 * @brief Encode a set_ai_coordinate_stream_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_ai_coordinate_stream_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_ai_coordinate_stream_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_ai_coordinate_stream_status_t* set_ai_coordinate_stream_status)
{
    return mavlink_msg_set_ai_coordinate_stream_status_pack(system_id, component_id, msg, set_ai_coordinate_stream_status->track_action);
}

/**
 * @brief Encode a set_ai_coordinate_stream_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_ai_coordinate_stream_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_ai_coordinate_stream_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_ai_coordinate_stream_status_t* set_ai_coordinate_stream_status)
{
    return mavlink_msg_set_ai_coordinate_stream_status_pack_chan(system_id, component_id, chan, msg, set_ai_coordinate_stream_status->track_action);
}

/**
 * @brief Encode a set_ai_coordinate_stream_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param set_ai_coordinate_stream_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_ai_coordinate_stream_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_set_ai_coordinate_stream_status_t* set_ai_coordinate_stream_status)
{
    return mavlink_msg_set_ai_coordinate_stream_status_pack_status(system_id, component_id, _status, msg,  set_ai_coordinate_stream_status->track_action);
}

/**
 * @brief Send a set_ai_coordinate_stream_status message
 * @param chan MAVLink channel to send the message
 *
 * @param track_action  0: Disable, 1: Enable
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_ai_coordinate_stream_status_send(mavlink_channel_t chan, uint8_t track_action)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, track_action);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS, buf, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_CRC);
#else
    mavlink_set_ai_coordinate_stream_status_t packet;
    packet.track_action = track_action;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS, (const char *)&packet, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_CRC);
#endif
}

/**
 * @brief Send a set_ai_coordinate_stream_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_ai_coordinate_stream_status_send_struct(mavlink_channel_t chan, const mavlink_set_ai_coordinate_stream_status_t* set_ai_coordinate_stream_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_ai_coordinate_stream_status_send(chan, set_ai_coordinate_stream_status->track_action);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS, (const char *)set_ai_coordinate_stream_status, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_ai_coordinate_stream_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t track_action)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, track_action);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS, buf, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_CRC);
#else
    mavlink_set_ai_coordinate_stream_status_t *packet = (mavlink_set_ai_coordinate_stream_status_t *)msgbuf;
    packet->track_action = track_action;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS, (const char *)packet, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_AI_COORDINATE_STREAM_STATUS UNPACKING


/**
 * @brief Get field track_action from set_ai_coordinate_stream_status message
 *
 * @return  0: Disable, 1: Enable
 */
static inline uint8_t mavlink_msg_set_ai_coordinate_stream_status_get_track_action(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a set_ai_coordinate_stream_status message into a struct
 *
 * @param msg The message to decode
 * @param set_ai_coordinate_stream_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_ai_coordinate_stream_status_decode(const mavlink_message_t* msg, mavlink_set_ai_coordinate_stream_status_t* set_ai_coordinate_stream_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_ai_coordinate_stream_status->track_action = mavlink_msg_set_ai_coordinate_stream_status_get_track_action(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN? msg->len : MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN;
        memset(set_ai_coordinate_stream_status, 0, MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_LEN);
    memcpy(set_ai_coordinate_stream_status, _MAV_PAYLOAD(msg), len);
#endif
}
