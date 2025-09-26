#pragma once
// MESSAGE RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION PACKING

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION 90024


typedef struct __mavlink_response_request_current_zoom_magnification_t {
 uint8_t zoom_int; /*<  Integer part of zoom level*/
 uint8_t zoom_float; /*<  Decimal part of zoom level*/
} mavlink_response_request_current_zoom_magnification_t;

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN 2
#define MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN 2
#define MAVLINK_MSG_ID_90024_LEN 2
#define MAVLINK_MSG_ID_90024_MIN_LEN 2

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_CRC 39
#define MAVLINK_MSG_ID_90024_CRC 39



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION { \
    90024, \
    "RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION", \
    2, \
    {  { "zoom_int", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_request_current_zoom_magnification_t, zoom_int) }, \
         { "zoom_float", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_response_request_current_zoom_magnification_t, zoom_float) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION { \
    "RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION", \
    2, \
    {  { "zoom_int", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_request_current_zoom_magnification_t, zoom_int) }, \
         { "zoom_float", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_response_request_current_zoom_magnification_t, zoom_float) }, \
         } \
}
#endif

/**
 * @brief Pack a response_request_current_zoom_magnification message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param zoom_int  Integer part of zoom level
 * @param zoom_float  Decimal part of zoom level
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_current_zoom_magnification_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t zoom_int, uint8_t zoom_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN];
    _mav_put_uint8_t(buf, 0, zoom_int);
    _mav_put_uint8_t(buf, 1, zoom_float);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN);
#else
    mavlink_response_request_current_zoom_magnification_t packet;
    packet.zoom_int = zoom_int;
    packet.zoom_float = zoom_float;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_CRC);
}

/**
 * @brief Pack a response_request_current_zoom_magnification message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param zoom_int  Integer part of zoom level
 * @param zoom_float  Decimal part of zoom level
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_current_zoom_magnification_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t zoom_int, uint8_t zoom_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN];
    _mav_put_uint8_t(buf, 0, zoom_int);
    _mav_put_uint8_t(buf, 1, zoom_float);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN);
#else
    mavlink_response_request_current_zoom_magnification_t packet;
    packet.zoom_int = zoom_int;
    packet.zoom_float = zoom_float;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN);
#endif
}

/**
 * @brief Pack a response_request_current_zoom_magnification message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param zoom_int  Integer part of zoom level
 * @param zoom_float  Decimal part of zoom level
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_current_zoom_magnification_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t zoom_int,uint8_t zoom_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN];
    _mav_put_uint8_t(buf, 0, zoom_int);
    _mav_put_uint8_t(buf, 1, zoom_float);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN);
#else
    mavlink_response_request_current_zoom_magnification_t packet;
    packet.zoom_int = zoom_int;
    packet.zoom_float = zoom_float;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_CRC);
}

/**
 * @brief Encode a response_request_current_zoom_magnification struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_request_current_zoom_magnification C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_current_zoom_magnification_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_request_current_zoom_magnification_t* response_request_current_zoom_magnification)
{
    return mavlink_msg_response_request_current_zoom_magnification_pack(system_id, component_id, msg, response_request_current_zoom_magnification->zoom_int, response_request_current_zoom_magnification->zoom_float);
}

/**
 * @brief Encode a response_request_current_zoom_magnification struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_request_current_zoom_magnification C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_current_zoom_magnification_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_request_current_zoom_magnification_t* response_request_current_zoom_magnification)
{
    return mavlink_msg_response_request_current_zoom_magnification_pack_chan(system_id, component_id, chan, msg, response_request_current_zoom_magnification->zoom_int, response_request_current_zoom_magnification->zoom_float);
}

/**
 * @brief Encode a response_request_current_zoom_magnification struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_request_current_zoom_magnification C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_current_zoom_magnification_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_request_current_zoom_magnification_t* response_request_current_zoom_magnification)
{
    return mavlink_msg_response_request_current_zoom_magnification_pack_status(system_id, component_id, _status, msg,  response_request_current_zoom_magnification->zoom_int, response_request_current_zoom_magnification->zoom_float);
}

/**
 * @brief Send a response_request_current_zoom_magnification message
 * @param chan MAVLink channel to send the message
 *
 * @param zoom_int  Integer part of zoom level
 * @param zoom_float  Decimal part of zoom level
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_request_current_zoom_magnification_send(mavlink_channel_t chan, uint8_t zoom_int, uint8_t zoom_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN];
    _mav_put_uint8_t(buf, 0, zoom_int);
    _mav_put_uint8_t(buf, 1, zoom_float);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_CRC);
#else
    mavlink_response_request_current_zoom_magnification_t packet;
    packet.zoom_int = zoom_int;
    packet.zoom_float = zoom_float;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_CRC);
#endif
}

/**
 * @brief Send a response_request_current_zoom_magnification message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_request_current_zoom_magnification_send_struct(mavlink_channel_t chan, const mavlink_response_request_current_zoom_magnification_t* response_request_current_zoom_magnification)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_request_current_zoom_magnification_send(chan, response_request_current_zoom_magnification->zoom_int, response_request_current_zoom_magnification->zoom_float);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION, (const char *)response_request_current_zoom_magnification, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_request_current_zoom_magnification_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t zoom_int, uint8_t zoom_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, zoom_int);
    _mav_put_uint8_t(buf, 1, zoom_float);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_CRC);
#else
    mavlink_response_request_current_zoom_magnification_t *packet = (mavlink_response_request_current_zoom_magnification_t *)msgbuf;
    packet->zoom_int = zoom_int;
    packet->zoom_float = zoom_float;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION UNPACKING


/**
 * @brief Get field zoom_int from response_request_current_zoom_magnification message
 *
 * @return  Integer part of zoom level
 */
static inline uint8_t mavlink_msg_response_request_current_zoom_magnification_get_zoom_int(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field zoom_float from response_request_current_zoom_magnification message
 *
 * @return  Decimal part of zoom level
 */
static inline uint8_t mavlink_msg_response_request_current_zoom_magnification_get_zoom_float(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a response_request_current_zoom_magnification message into a struct
 *
 * @param msg The message to decode
 * @param response_request_current_zoom_magnification C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_request_current_zoom_magnification_decode(const mavlink_message_t* msg, mavlink_response_request_current_zoom_magnification_t* response_request_current_zoom_magnification)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_request_current_zoom_magnification->zoom_int = mavlink_msg_response_request_current_zoom_magnification_get_zoom_int(msg);
    response_request_current_zoom_magnification->zoom_float = mavlink_msg_response_request_current_zoom_magnification_get_zoom_float(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN;
        memset(response_request_current_zoom_magnification, 0, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_LEN);
    memcpy(response_request_current_zoom_magnification, _MAV_PAYLOAD(msg), len);
#endif
}
