#pragma once
// MESSAGE AI_COORDINATE_STREAM PACKING

#define MAVLINK_MSG_ID_AI_COORDINATE_STREAM 90080


typedef struct __mavlink_ai_coordinate_stream_t {
 uint16_t pos_x; /*<  X coordinate*/
 uint16_t pos_y; /*<  Y coordinate*/
 uint16_t pos_width; /*<  Box width*/
 uint16_t pos_height; /*<  Box height*/
 uint8_t target_id; /*<  0: Human, 1: Car, etc.*/
 uint8_t track_sta; /*<  Tracking status (0-4)*/
} mavlink_ai_coordinate_stream_t;

#define MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN 10
#define MAVLINK_MSG_ID_AI_COORDINATE_STREAM_MIN_LEN 10
#define MAVLINK_MSG_ID_90080_LEN 10
#define MAVLINK_MSG_ID_90080_MIN_LEN 10

#define MAVLINK_MSG_ID_AI_COORDINATE_STREAM_CRC 127
#define MAVLINK_MSG_ID_90080_CRC 127



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AI_COORDINATE_STREAM { \
    90080, \
    "AI_COORDINATE_STREAM", \
    6, \
    {  { "pos_x", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ai_coordinate_stream_t, pos_x) }, \
         { "pos_y", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_ai_coordinate_stream_t, pos_y) }, \
         { "pos_width", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_ai_coordinate_stream_t, pos_width) }, \
         { "pos_height", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_ai_coordinate_stream_t, pos_height) }, \
         { "target_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_ai_coordinate_stream_t, target_id) }, \
         { "track_sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_ai_coordinate_stream_t, track_sta) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AI_COORDINATE_STREAM { \
    "AI_COORDINATE_STREAM", \
    6, \
    {  { "pos_x", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ai_coordinate_stream_t, pos_x) }, \
         { "pos_y", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_ai_coordinate_stream_t, pos_y) }, \
         { "pos_width", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_ai_coordinate_stream_t, pos_width) }, \
         { "pos_height", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_ai_coordinate_stream_t, pos_height) }, \
         { "target_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_ai_coordinate_stream_t, target_id) }, \
         { "track_sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_ai_coordinate_stream_t, track_sta) }, \
         } \
}
#endif

/**
 * @brief Pack a ai_coordinate_stream message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pos_x  X coordinate
 * @param pos_y  Y coordinate
 * @param pos_width  Box width
 * @param pos_height  Box height
 * @param target_id  0: Human, 1: Car, etc.
 * @param track_sta  Tracking status (0-4)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ai_coordinate_stream_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t pos_x, uint16_t pos_y, uint16_t pos_width, uint16_t pos_height, uint8_t target_id, uint8_t track_sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN];
    _mav_put_uint16_t(buf, 0, pos_x);
    _mav_put_uint16_t(buf, 2, pos_y);
    _mav_put_uint16_t(buf, 4, pos_width);
    _mav_put_uint16_t(buf, 6, pos_height);
    _mav_put_uint8_t(buf, 8, target_id);
    _mav_put_uint8_t(buf, 9, track_sta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN);
#else
    mavlink_ai_coordinate_stream_t packet;
    packet.pos_x = pos_x;
    packet.pos_y = pos_y;
    packet.pos_width = pos_width;
    packet.pos_height = pos_height;
    packet.target_id = target_id;
    packet.track_sta = track_sta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AI_COORDINATE_STREAM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_MIN_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_CRC);
}

/**
 * @brief Pack a ai_coordinate_stream message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param pos_x  X coordinate
 * @param pos_y  Y coordinate
 * @param pos_width  Box width
 * @param pos_height  Box height
 * @param target_id  0: Human, 1: Car, etc.
 * @param track_sta  Tracking status (0-4)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ai_coordinate_stream_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t pos_x, uint16_t pos_y, uint16_t pos_width, uint16_t pos_height, uint8_t target_id, uint8_t track_sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN];
    _mav_put_uint16_t(buf, 0, pos_x);
    _mav_put_uint16_t(buf, 2, pos_y);
    _mav_put_uint16_t(buf, 4, pos_width);
    _mav_put_uint16_t(buf, 6, pos_height);
    _mav_put_uint8_t(buf, 8, target_id);
    _mav_put_uint8_t(buf, 9, track_sta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN);
#else
    mavlink_ai_coordinate_stream_t packet;
    packet.pos_x = pos_x;
    packet.pos_y = pos_y;
    packet.pos_width = pos_width;
    packet.pos_height = pos_height;
    packet.target_id = target_id;
    packet.track_sta = track_sta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AI_COORDINATE_STREAM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_MIN_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_MIN_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN);
#endif
}

/**
 * @brief Pack a ai_coordinate_stream message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pos_x  X coordinate
 * @param pos_y  Y coordinate
 * @param pos_width  Box width
 * @param pos_height  Box height
 * @param target_id  0: Human, 1: Car, etc.
 * @param track_sta  Tracking status (0-4)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ai_coordinate_stream_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t pos_x,uint16_t pos_y,uint16_t pos_width,uint16_t pos_height,uint8_t target_id,uint8_t track_sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN];
    _mav_put_uint16_t(buf, 0, pos_x);
    _mav_put_uint16_t(buf, 2, pos_y);
    _mav_put_uint16_t(buf, 4, pos_width);
    _mav_put_uint16_t(buf, 6, pos_height);
    _mav_put_uint8_t(buf, 8, target_id);
    _mav_put_uint8_t(buf, 9, track_sta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN);
#else
    mavlink_ai_coordinate_stream_t packet;
    packet.pos_x = pos_x;
    packet.pos_y = pos_y;
    packet.pos_width = pos_width;
    packet.pos_height = pos_height;
    packet.target_id = target_id;
    packet.track_sta = track_sta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AI_COORDINATE_STREAM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_MIN_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_CRC);
}

/**
 * @brief Encode a ai_coordinate_stream struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ai_coordinate_stream C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ai_coordinate_stream_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ai_coordinate_stream_t* ai_coordinate_stream)
{
    return mavlink_msg_ai_coordinate_stream_pack(system_id, component_id, msg, ai_coordinate_stream->pos_x, ai_coordinate_stream->pos_y, ai_coordinate_stream->pos_width, ai_coordinate_stream->pos_height, ai_coordinate_stream->target_id, ai_coordinate_stream->track_sta);
}

/**
 * @brief Encode a ai_coordinate_stream struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ai_coordinate_stream C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ai_coordinate_stream_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ai_coordinate_stream_t* ai_coordinate_stream)
{
    return mavlink_msg_ai_coordinate_stream_pack_chan(system_id, component_id, chan, msg, ai_coordinate_stream->pos_x, ai_coordinate_stream->pos_y, ai_coordinate_stream->pos_width, ai_coordinate_stream->pos_height, ai_coordinate_stream->target_id, ai_coordinate_stream->track_sta);
}

/**
 * @brief Encode a ai_coordinate_stream struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ai_coordinate_stream C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ai_coordinate_stream_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ai_coordinate_stream_t* ai_coordinate_stream)
{
    return mavlink_msg_ai_coordinate_stream_pack_status(system_id, component_id, _status, msg,  ai_coordinate_stream->pos_x, ai_coordinate_stream->pos_y, ai_coordinate_stream->pos_width, ai_coordinate_stream->pos_height, ai_coordinate_stream->target_id, ai_coordinate_stream->track_sta);
}

/**
 * @brief Send a ai_coordinate_stream message
 * @param chan MAVLink channel to send the message
 *
 * @param pos_x  X coordinate
 * @param pos_y  Y coordinate
 * @param pos_width  Box width
 * @param pos_height  Box height
 * @param target_id  0: Human, 1: Car, etc.
 * @param track_sta  Tracking status (0-4)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ai_coordinate_stream_send(mavlink_channel_t chan, uint16_t pos_x, uint16_t pos_y, uint16_t pos_width, uint16_t pos_height, uint8_t target_id, uint8_t track_sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN];
    _mav_put_uint16_t(buf, 0, pos_x);
    _mav_put_uint16_t(buf, 2, pos_y);
    _mav_put_uint16_t(buf, 4, pos_width);
    _mav_put_uint16_t(buf, 6, pos_height);
    _mav_put_uint8_t(buf, 8, target_id);
    _mav_put_uint8_t(buf, 9, track_sta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_COORDINATE_STREAM, buf, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_MIN_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_CRC);
#else
    mavlink_ai_coordinate_stream_t packet;
    packet.pos_x = pos_x;
    packet.pos_y = pos_y;
    packet.pos_width = pos_width;
    packet.pos_height = pos_height;
    packet.target_id = target_id;
    packet.track_sta = track_sta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_COORDINATE_STREAM, (const char *)&packet, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_MIN_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_CRC);
#endif
}

/**
 * @brief Send a ai_coordinate_stream message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ai_coordinate_stream_send_struct(mavlink_channel_t chan, const mavlink_ai_coordinate_stream_t* ai_coordinate_stream)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ai_coordinate_stream_send(chan, ai_coordinate_stream->pos_x, ai_coordinate_stream->pos_y, ai_coordinate_stream->pos_width, ai_coordinate_stream->pos_height, ai_coordinate_stream->target_id, ai_coordinate_stream->track_sta);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_COORDINATE_STREAM, (const char *)ai_coordinate_stream, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_MIN_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_CRC);
#endif
}

#if MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ai_coordinate_stream_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t pos_x, uint16_t pos_y, uint16_t pos_width, uint16_t pos_height, uint8_t target_id, uint8_t track_sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, pos_x);
    _mav_put_uint16_t(buf, 2, pos_y);
    _mav_put_uint16_t(buf, 4, pos_width);
    _mav_put_uint16_t(buf, 6, pos_height);
    _mav_put_uint8_t(buf, 8, target_id);
    _mav_put_uint8_t(buf, 9, track_sta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_COORDINATE_STREAM, buf, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_MIN_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_CRC);
#else
    mavlink_ai_coordinate_stream_t *packet = (mavlink_ai_coordinate_stream_t *)msgbuf;
    packet->pos_x = pos_x;
    packet->pos_y = pos_y;
    packet->pos_width = pos_width;
    packet->pos_height = pos_height;
    packet->target_id = target_id;
    packet->track_sta = track_sta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_COORDINATE_STREAM, (const char *)packet, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_MIN_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_CRC);
#endif
}
#endif

#endif

// MESSAGE AI_COORDINATE_STREAM UNPACKING


/**
 * @brief Get field pos_x from ai_coordinate_stream message
 *
 * @return  X coordinate
 */
static inline uint16_t mavlink_msg_ai_coordinate_stream_get_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field pos_y from ai_coordinate_stream message
 *
 * @return  Y coordinate
 */
static inline uint16_t mavlink_msg_ai_coordinate_stream_get_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field pos_width from ai_coordinate_stream message
 *
 * @return  Box width
 */
static inline uint16_t mavlink_msg_ai_coordinate_stream_get_pos_width(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field pos_height from ai_coordinate_stream message
 *
 * @return  Box height
 */
static inline uint16_t mavlink_msg_ai_coordinate_stream_get_pos_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field target_id from ai_coordinate_stream message
 *
 * @return  0: Human, 1: Car, etc.
 */
static inline uint8_t mavlink_msg_ai_coordinate_stream_get_target_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field track_sta from ai_coordinate_stream message
 *
 * @return  Tracking status (0-4)
 */
static inline uint8_t mavlink_msg_ai_coordinate_stream_get_track_sta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Decode a ai_coordinate_stream message into a struct
 *
 * @param msg The message to decode
 * @param ai_coordinate_stream C-struct to decode the message contents into
 */
static inline void mavlink_msg_ai_coordinate_stream_decode(const mavlink_message_t* msg, mavlink_ai_coordinate_stream_t* ai_coordinate_stream)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ai_coordinate_stream->pos_x = mavlink_msg_ai_coordinate_stream_get_pos_x(msg);
    ai_coordinate_stream->pos_y = mavlink_msg_ai_coordinate_stream_get_pos_y(msg);
    ai_coordinate_stream->pos_width = mavlink_msg_ai_coordinate_stream_get_pos_width(msg);
    ai_coordinate_stream->pos_height = mavlink_msg_ai_coordinate_stream_get_pos_height(msg);
    ai_coordinate_stream->target_id = mavlink_msg_ai_coordinate_stream_get_target_id(msg);
    ai_coordinate_stream->track_sta = mavlink_msg_ai_coordinate_stream_get_track_sta(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN? msg->len : MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN;
        memset(ai_coordinate_stream, 0, MAVLINK_MSG_ID_AI_COORDINATE_STREAM_LEN);
    memcpy(ai_coordinate_stream, _MAV_PAYLOAD(msg), len);
#endif
}
