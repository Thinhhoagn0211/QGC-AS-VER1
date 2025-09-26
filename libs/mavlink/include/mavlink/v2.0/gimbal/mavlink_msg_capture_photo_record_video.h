#pragma once
// MESSAGE CAPTURE_PHOTO_RECORD_VIDEO PACKING

#define MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO 80012


typedef struct __mavlink_capture_photo_record_video_t {
 uint8_t func_type; /*<  0: Photo, 2: Start Rec, 3–10: Various Modes*/
} mavlink_capture_photo_record_video_t;

#define MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN 1
#define MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_MIN_LEN 1
#define MAVLINK_MSG_ID_80012_LEN 1
#define MAVLINK_MSG_ID_80012_MIN_LEN 1

#define MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_CRC 25
#define MAVLINK_MSG_ID_80012_CRC 25



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAPTURE_PHOTO_RECORD_VIDEO { \
    80012, \
    "CAPTURE_PHOTO_RECORD_VIDEO", \
    1, \
    {  { "func_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_capture_photo_record_video_t, func_type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAPTURE_PHOTO_RECORD_VIDEO { \
    "CAPTURE_PHOTO_RECORD_VIDEO", \
    1, \
    {  { "func_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_capture_photo_record_video_t, func_type) }, \
         } \
}
#endif

/**
 * @brief Pack a capture_photo_record_video message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param func_type  0: Photo, 2: Start Rec, 3–10: Various Modes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_capture_photo_record_video_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t func_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN];
    _mav_put_uint8_t(buf, 0, func_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN);
#else
    mavlink_capture_photo_record_video_t packet;
    packet.func_type = func_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_CRC);
}

/**
 * @brief Pack a capture_photo_record_video message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param func_type  0: Photo, 2: Start Rec, 3–10: Various Modes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_capture_photo_record_video_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t func_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN];
    _mav_put_uint8_t(buf, 0, func_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN);
#else
    mavlink_capture_photo_record_video_t packet;
    packet.func_type = func_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN);
#endif
}

/**
 * @brief Pack a capture_photo_record_video message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param func_type  0: Photo, 2: Start Rec, 3–10: Various Modes
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_capture_photo_record_video_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t func_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN];
    _mav_put_uint8_t(buf, 0, func_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN);
#else
    mavlink_capture_photo_record_video_t packet;
    packet.func_type = func_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_CRC);
}

/**
 * @brief Encode a capture_photo_record_video struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param capture_photo_record_video C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_capture_photo_record_video_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_capture_photo_record_video_t* capture_photo_record_video)
{
    return mavlink_msg_capture_photo_record_video_pack(system_id, component_id, msg, capture_photo_record_video->func_type);
}

/**
 * @brief Encode a capture_photo_record_video struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param capture_photo_record_video C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_capture_photo_record_video_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_capture_photo_record_video_t* capture_photo_record_video)
{
    return mavlink_msg_capture_photo_record_video_pack_chan(system_id, component_id, chan, msg, capture_photo_record_video->func_type);
}

/**
 * @brief Encode a capture_photo_record_video struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param capture_photo_record_video C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_capture_photo_record_video_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_capture_photo_record_video_t* capture_photo_record_video)
{
    return mavlink_msg_capture_photo_record_video_pack_status(system_id, component_id, _status, msg,  capture_photo_record_video->func_type);
}

/**
 * @brief Send a capture_photo_record_video message
 * @param chan MAVLink channel to send the message
 *
 * @param func_type  0: Photo, 2: Start Rec, 3–10: Various Modes
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_capture_photo_record_video_send(mavlink_channel_t chan, uint8_t func_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN];
    _mav_put_uint8_t(buf, 0, func_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO, buf, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_CRC);
#else
    mavlink_capture_photo_record_video_t packet;
    packet.func_type = func_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO, (const char *)&packet, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_CRC);
#endif
}

/**
 * @brief Send a capture_photo_record_video message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_capture_photo_record_video_send_struct(mavlink_channel_t chan, const mavlink_capture_photo_record_video_t* capture_photo_record_video)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_capture_photo_record_video_send(chan, capture_photo_record_video->func_type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO, (const char *)capture_photo_record_video, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_capture_photo_record_video_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t func_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, func_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO, buf, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_CRC);
#else
    mavlink_capture_photo_record_video_t *packet = (mavlink_capture_photo_record_video_t *)msgbuf;
    packet->func_type = func_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO, (const char *)packet, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_CRC);
#endif
}
#endif

#endif

// MESSAGE CAPTURE_PHOTO_RECORD_VIDEO UNPACKING


/**
 * @brief Get field func_type from capture_photo_record_video message
 *
 * @return  0: Photo, 2: Start Rec, 3–10: Various Modes
 */
static inline uint8_t mavlink_msg_capture_photo_record_video_get_func_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a capture_photo_record_video message into a struct
 *
 * @param msg The message to decode
 * @param capture_photo_record_video C-struct to decode the message contents into
 */
static inline void mavlink_msg_capture_photo_record_video_decode(const mavlink_message_t* msg, mavlink_capture_photo_record_video_t* capture_photo_record_video)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    capture_photo_record_video->func_type = mavlink_msg_capture_photo_record_video_get_func_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN? msg->len : MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN;
        memset(capture_photo_record_video, 0, MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_LEN);
    memcpy(capture_photo_record_video, _MAV_PAYLOAD(msg), len);
#endif
}
