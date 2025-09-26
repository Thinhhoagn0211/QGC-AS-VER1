#pragma once
// MESSAGE RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS PACKING

#define MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS 90005


typedef struct __mavlink_response_manual_zoom_with_autofocus_t {
 uint16_t zoom_multiple; /*<  Zoom level (10x = 100)*/
} mavlink_response_manual_zoom_with_autofocus_t;

#define MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN 2
#define MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN 2
#define MAVLINK_MSG_ID_90005_LEN 2
#define MAVLINK_MSG_ID_90005_MIN_LEN 2

#define MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC 119
#define MAVLINK_MSG_ID_90005_CRC 119



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS { \
    90005, \
    "RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS", \
    1, \
    {  { "zoom_multiple", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_response_manual_zoom_with_autofocus_t, zoom_multiple) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS { \
    "RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS", \
    1, \
    {  { "zoom_multiple", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_response_manual_zoom_with_autofocus_t, zoom_multiple) }, \
         } \
}
#endif

/**
 * @brief Pack a response_manual_zoom_with_autofocus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param zoom_multiple  Zoom level (10x = 100)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_manual_zoom_with_autofocus_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t zoom_multiple)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN];
    _mav_put_uint16_t(buf, 0, zoom_multiple);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#else
    mavlink_response_manual_zoom_with_autofocus_t packet;
    packet.zoom_multiple = zoom_multiple;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
}

/**
 * @brief Pack a response_manual_zoom_with_autofocus message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param zoom_multiple  Zoom level (10x = 100)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_manual_zoom_with_autofocus_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t zoom_multiple)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN];
    _mav_put_uint16_t(buf, 0, zoom_multiple);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#else
    mavlink_response_manual_zoom_with_autofocus_t packet;
    packet.zoom_multiple = zoom_multiple;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#endif
}

/**
 * @brief Pack a response_manual_zoom_with_autofocus message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param zoom_multiple  Zoom level (10x = 100)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_manual_zoom_with_autofocus_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t zoom_multiple)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN];
    _mav_put_uint16_t(buf, 0, zoom_multiple);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#else
    mavlink_response_manual_zoom_with_autofocus_t packet;
    packet.zoom_multiple = zoom_multiple;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
}

/**
 * @brief Encode a response_manual_zoom_with_autofocus struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_manual_zoom_with_autofocus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_manual_zoom_with_autofocus_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_manual_zoom_with_autofocus_t* response_manual_zoom_with_autofocus)
{
    return mavlink_msg_response_manual_zoom_with_autofocus_pack(system_id, component_id, msg, response_manual_zoom_with_autofocus->zoom_multiple);
}

/**
 * @brief Encode a response_manual_zoom_with_autofocus struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_manual_zoom_with_autofocus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_manual_zoom_with_autofocus_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_manual_zoom_with_autofocus_t* response_manual_zoom_with_autofocus)
{
    return mavlink_msg_response_manual_zoom_with_autofocus_pack_chan(system_id, component_id, chan, msg, response_manual_zoom_with_autofocus->zoom_multiple);
}

/**
 * @brief Encode a response_manual_zoom_with_autofocus struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_manual_zoom_with_autofocus C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_manual_zoom_with_autofocus_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_manual_zoom_with_autofocus_t* response_manual_zoom_with_autofocus)
{
    return mavlink_msg_response_manual_zoom_with_autofocus_pack_status(system_id, component_id, _status, msg,  response_manual_zoom_with_autofocus->zoom_multiple);
}

/**
 * @brief Send a response_manual_zoom_with_autofocus message
 * @param chan MAVLink channel to send the message
 *
 * @param zoom_multiple  Zoom level (10x = 100)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_manual_zoom_with_autofocus_send(mavlink_channel_t chan, uint16_t zoom_multiple)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN];
    _mav_put_uint16_t(buf, 0, zoom_multiple);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS, buf, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
#else
    mavlink_response_manual_zoom_with_autofocus_t packet;
    packet.zoom_multiple = zoom_multiple;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
#endif
}

/**
 * @brief Send a response_manual_zoom_with_autofocus message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_manual_zoom_with_autofocus_send_struct(mavlink_channel_t chan, const mavlink_response_manual_zoom_with_autofocus_t* response_manual_zoom_with_autofocus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_manual_zoom_with_autofocus_send(chan, response_manual_zoom_with_autofocus->zoom_multiple);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS, (const char *)response_manual_zoom_with_autofocus, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_manual_zoom_with_autofocus_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t zoom_multiple)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, zoom_multiple);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS, buf, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
#else
    mavlink_response_manual_zoom_with_autofocus_t *packet = (mavlink_response_manual_zoom_with_autofocus_t *)msgbuf;
    packet->zoom_multiple = zoom_multiple;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS UNPACKING


/**
 * @brief Get field zoom_multiple from response_manual_zoom_with_autofocus message
 *
 * @return  Zoom level (10x = 100)
 */
static inline uint16_t mavlink_msg_response_manual_zoom_with_autofocus_get_zoom_multiple(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a response_manual_zoom_with_autofocus message into a struct
 *
 * @param msg The message to decode
 * @param response_manual_zoom_with_autofocus C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_manual_zoom_with_autofocus_decode(const mavlink_message_t* msg, mavlink_response_manual_zoom_with_autofocus_t* response_manual_zoom_with_autofocus)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_manual_zoom_with_autofocus->zoom_multiple = mavlink_msg_response_manual_zoom_with_autofocus_get_zoom_multiple(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN;
        memset(response_manual_zoom_with_autofocus, 0, MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_LEN);
    memcpy(response_manual_zoom_with_autofocus, _MAV_PAYLOAD(msg), len);
#endif
}
