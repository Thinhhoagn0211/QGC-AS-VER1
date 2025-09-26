#pragma once
// MESSAGE SET_VIDEO_STITCHING_MODE PACKING

#define MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE 80017


typedef struct __mavlink_set_video_stitching_mode_t {
 uint8_t vdisp_mode; /*<  Video display mode*/
} mavlink_set_video_stitching_mode_t;

#define MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN 1
#define MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_MIN_LEN 1
#define MAVLINK_MSG_ID_80017_LEN 1
#define MAVLINK_MSG_ID_80017_MIN_LEN 1

#define MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_CRC 51
#define MAVLINK_MSG_ID_80017_CRC 51



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_VIDEO_STITCHING_MODE { \
    80017, \
    "SET_VIDEO_STITCHING_MODE", \
    1, \
    {  { "vdisp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_set_video_stitching_mode_t, vdisp_mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_VIDEO_STITCHING_MODE { \
    "SET_VIDEO_STITCHING_MODE", \
    1, \
    {  { "vdisp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_set_video_stitching_mode_t, vdisp_mode) }, \
         } \
}
#endif

/**
 * @brief Pack a set_video_stitching_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param vdisp_mode  Video display mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_video_stitching_mode_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t vdisp_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN];
    _mav_put_uint8_t(buf, 0, vdisp_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN);
#else
    mavlink_set_video_stitching_mode_t packet;
    packet.vdisp_mode = vdisp_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_CRC);
}

/**
 * @brief Pack a set_video_stitching_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param vdisp_mode  Video display mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_video_stitching_mode_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t vdisp_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN];
    _mav_put_uint8_t(buf, 0, vdisp_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN);
#else
    mavlink_set_video_stitching_mode_t packet;
    packet.vdisp_mode = vdisp_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN);
#endif
}

/**
 * @brief Pack a set_video_stitching_mode message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vdisp_mode  Video display mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_video_stitching_mode_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t vdisp_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN];
    _mav_put_uint8_t(buf, 0, vdisp_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN);
#else
    mavlink_set_video_stitching_mode_t packet;
    packet.vdisp_mode = vdisp_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_CRC);
}

/**
 * @brief Encode a set_video_stitching_mode struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_video_stitching_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_video_stitching_mode_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_video_stitching_mode_t* set_video_stitching_mode)
{
    return mavlink_msg_set_video_stitching_mode_pack(system_id, component_id, msg, set_video_stitching_mode->vdisp_mode);
}

/**
 * @brief Encode a set_video_stitching_mode struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_video_stitching_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_video_stitching_mode_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_video_stitching_mode_t* set_video_stitching_mode)
{
    return mavlink_msg_set_video_stitching_mode_pack_chan(system_id, component_id, chan, msg, set_video_stitching_mode->vdisp_mode);
}

/**
 * @brief Encode a set_video_stitching_mode struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param set_video_stitching_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_video_stitching_mode_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_set_video_stitching_mode_t* set_video_stitching_mode)
{
    return mavlink_msg_set_video_stitching_mode_pack_status(system_id, component_id, _status, msg,  set_video_stitching_mode->vdisp_mode);
}

/**
 * @brief Send a set_video_stitching_mode message
 * @param chan MAVLink channel to send the message
 *
 * @param vdisp_mode  Video display mode
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_video_stitching_mode_send(mavlink_channel_t chan, uint8_t vdisp_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN];
    _mav_put_uint8_t(buf, 0, vdisp_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE, buf, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_CRC);
#else
    mavlink_set_video_stitching_mode_t packet;
    packet.vdisp_mode = vdisp_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE, (const char *)&packet, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_CRC);
#endif
}

/**
 * @brief Send a set_video_stitching_mode message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_video_stitching_mode_send_struct(mavlink_channel_t chan, const mavlink_set_video_stitching_mode_t* set_video_stitching_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_video_stitching_mode_send(chan, set_video_stitching_mode->vdisp_mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE, (const char *)set_video_stitching_mode, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_video_stitching_mode_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t vdisp_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, vdisp_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE, buf, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_CRC);
#else
    mavlink_set_video_stitching_mode_t *packet = (mavlink_set_video_stitching_mode_t *)msgbuf;
    packet->vdisp_mode = vdisp_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE, (const char *)packet, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_VIDEO_STITCHING_MODE UNPACKING


/**
 * @brief Get field vdisp_mode from set_video_stitching_mode message
 *
 * @return  Video display mode
 */
static inline uint8_t mavlink_msg_set_video_stitching_mode_get_vdisp_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a set_video_stitching_mode message into a struct
 *
 * @param msg The message to decode
 * @param set_video_stitching_mode C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_video_stitching_mode_decode(const mavlink_message_t* msg, mavlink_set_video_stitching_mode_t* set_video_stitching_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_video_stitching_mode->vdisp_mode = mavlink_msg_set_video_stitching_mode_get_vdisp_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN? msg->len : MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN;
        memset(set_video_stitching_mode, 0, MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_LEN);
    memcpy(set_video_stitching_mode, _MAV_PAYLOAD(msg), len);
#endif
}
