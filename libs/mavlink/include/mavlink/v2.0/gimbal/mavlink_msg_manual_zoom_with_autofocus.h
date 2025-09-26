#pragma once
// MESSAGE MANUAL_ZOOM_WITH_AUTOFOCUS PACKING

#define MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS 80005


typedef struct __mavlink_manual_zoom_with_autofocus_t {
 int8_t zoom; /*<  1: Zoom in, 0: Stop, -1: Zoom out*/
} mavlink_manual_zoom_with_autofocus_t;

#define MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN 1
#define MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN 1
#define MAVLINK_MSG_ID_80005_LEN 1
#define MAVLINK_MSG_ID_80005_MIN_LEN 1

#define MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC 235
#define MAVLINK_MSG_ID_80005_CRC 235



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MANUAL_ZOOM_WITH_AUTOFOCUS { \
    80005, \
    "MANUAL_ZOOM_WITH_AUTOFOCUS", \
    1, \
    {  { "zoom", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_manual_zoom_with_autofocus_t, zoom) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MANUAL_ZOOM_WITH_AUTOFOCUS { \
    "MANUAL_ZOOM_WITH_AUTOFOCUS", \
    1, \
    {  { "zoom", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_manual_zoom_with_autofocus_t, zoom) }, \
         } \
}
#endif

/**
 * @brief Pack a manual_zoom_with_autofocus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param zoom  1: Zoom in, 0: Stop, -1: Zoom out
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_manual_zoom_with_autofocus_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN];
    _mav_put_int8_t(buf, 0, zoom);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#else
    mavlink_manual_zoom_with_autofocus_t packet;
    packet.zoom = zoom;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
}

/**
 * @brief Pack a manual_zoom_with_autofocus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param zoom  1: Zoom in, 0: Stop, -1: Zoom out
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_manual_zoom_with_autofocus_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int8_t zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN];
    _mav_put_int8_t(buf, 0, zoom);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#else
    mavlink_manual_zoom_with_autofocus_t packet;
    packet.zoom = zoom;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#endif
}

/**
 * @brief Pack a manual_zoom_with_autofocus message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param zoom  1: Zoom in, 0: Stop, -1: Zoom out
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_manual_zoom_with_autofocus_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN];
    _mav_put_int8_t(buf, 0, zoom);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#else
    mavlink_manual_zoom_with_autofocus_t packet;
    packet.zoom = zoom;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
}

/**
 * @brief Encode a manual_zoom_with_autofocus struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param manual_zoom_with_autofocus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_manual_zoom_with_autofocus_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_manual_zoom_with_autofocus_t* manual_zoom_with_autofocus)
{
    return mavlink_msg_manual_zoom_with_autofocus_pack(system_id, component_id, msg, manual_zoom_with_autofocus->zoom);
}

/**
 * @brief Encode a manual_zoom_with_autofocus struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param manual_zoom_with_autofocus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_manual_zoom_with_autofocus_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_manual_zoom_with_autofocus_t* manual_zoom_with_autofocus)
{
    return mavlink_msg_manual_zoom_with_autofocus_pack_chan(system_id, component_id, chan, msg, manual_zoom_with_autofocus->zoom);
}

/**
 * @brief Encode a manual_zoom_with_autofocus struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param manual_zoom_with_autofocus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_manual_zoom_with_autofocus_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_manual_zoom_with_autofocus_t* manual_zoom_with_autofocus)
{
    return mavlink_msg_manual_zoom_with_autofocus_pack_status(system_id, component_id, _status, msg,  manual_zoom_with_autofocus->zoom);
}

/**
 * @brief Send a manual_zoom_with_autofocus message
 * @param chan MAVLink channel to send the message
 *
 * @param zoom  1: Zoom in, 0: Stop, -1: Zoom out
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_manual_zoom_with_autofocus_send(mavlink_channel_t chan, int8_t zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN];
    _mav_put_int8_t(buf, 0, zoom);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS, buf, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
#else
    mavlink_manual_zoom_with_autofocus_t packet;
    packet.zoom = zoom;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS, (const char *)&packet, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
#endif
}

/**
 * @brief Send a manual_zoom_with_autofocus message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_manual_zoom_with_autofocus_send_struct(mavlink_channel_t chan, const mavlink_manual_zoom_with_autofocus_t* manual_zoom_with_autofocus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_manual_zoom_with_autofocus_send(chan, manual_zoom_with_autofocus->zoom);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS, (const char *)manual_zoom_with_autofocus, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_manual_zoom_with_autofocus_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int8_t(buf, 0, zoom);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS, buf, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
#else
    mavlink_manual_zoom_with_autofocus_t *packet = (mavlink_manual_zoom_with_autofocus_t *)msgbuf;
    packet->zoom = zoom;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS, (const char *)packet, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
#endif
}
#endif

#endif

// MESSAGE MANUAL_ZOOM_WITH_AUTOFOCUS UNPACKING


/**
 * @brief Get field zoom from manual_zoom_with_autofocus message
 *
 * @return  1: Zoom in, 0: Stop, -1: Zoom out
 */
static inline int8_t mavlink_msg_manual_zoom_with_autofocus_get_zoom(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  0);
}

/**
 * @brief Decode a manual_zoom_with_autofocus message into a struct
 *
 * @param msg The message to decode
 * @param manual_zoom_with_autofocus C-struct to decode the message contents into
 */
static inline void mavlink_msg_manual_zoom_with_autofocus_decode(const mavlink_message_t* msg, mavlink_manual_zoom_with_autofocus_t* manual_zoom_with_autofocus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    manual_zoom_with_autofocus->zoom = mavlink_msg_manual_zoom_with_autofocus_get_zoom(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN? msg->len : MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN;
        memset(manual_zoom_with_autofocus, 0, MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
    memcpy(manual_zoom_with_autofocus, _MAV_PAYLOAD(msg), len);
#endif
}
