#pragma once
// MESSAGE RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE PACKING

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE 90022


typedef struct __mavlink_response_request_current_supported_zoom_range_t {
 uint8_t zoom_max_int; /*<  Minimum zoom level*/
 uint8_t zoom_max_float; /*<  Maximum zoom level*/
} mavlink_response_request_current_supported_zoom_range_t;

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN 2
#define MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN 2
#define MAVLINK_MSG_ID_90022_LEN 2
#define MAVLINK_MSG_ID_90022_MIN_LEN 2

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC 22
#define MAVLINK_MSG_ID_90022_CRC 22



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE { \
    90022, \
    "RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE", \
    2, \
    {  { "zoom_max_int", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_request_current_supported_zoom_range_t, zoom_max_int) }, \
         { "zoom_max_float", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_response_request_current_supported_zoom_range_t, zoom_max_float) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE { \
    "RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE", \
    2, \
    {  { "zoom_max_int", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_request_current_supported_zoom_range_t, zoom_max_int) }, \
         { "zoom_max_float", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_response_request_current_supported_zoom_range_t, zoom_max_float) }, \
         } \
}
#endif

/**
 * @brief Pack a response_request_current_supported_zoom_range message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param zoom_max_int  Minimum zoom level
 * @param zoom_max_float  Maximum zoom level
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_current_supported_zoom_range_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t zoom_max_int, uint8_t zoom_max_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN];
    _mav_put_uint8_t(buf, 0, zoom_max_int);
    _mav_put_uint8_t(buf, 1, zoom_max_float);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#else
    mavlink_response_request_current_supported_zoom_range_t packet;
    packet.zoom_max_int = zoom_max_int;
    packet.zoom_max_float = zoom_max_float;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
}

/**
 * @brief Pack a response_request_current_supported_zoom_range message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param zoom_max_int  Minimum zoom level
 * @param zoom_max_float  Maximum zoom level
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_current_supported_zoom_range_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t zoom_max_int, uint8_t zoom_max_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN];
    _mav_put_uint8_t(buf, 0, zoom_max_int);
    _mav_put_uint8_t(buf, 1, zoom_max_float);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#else
    mavlink_response_request_current_supported_zoom_range_t packet;
    packet.zoom_max_int = zoom_max_int;
    packet.zoom_max_float = zoom_max_float;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#endif
}

/**
 * @brief Pack a response_request_current_supported_zoom_range message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param zoom_max_int  Minimum zoom level
 * @param zoom_max_float  Maximum zoom level
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_current_supported_zoom_range_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t zoom_max_int,uint8_t zoom_max_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN];
    _mav_put_uint8_t(buf, 0, zoom_max_int);
    _mav_put_uint8_t(buf, 1, zoom_max_float);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#else
    mavlink_response_request_current_supported_zoom_range_t packet;
    packet.zoom_max_int = zoom_max_int;
    packet.zoom_max_float = zoom_max_float;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
}

/**
 * @brief Encode a response_request_current_supported_zoom_range struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_request_current_supported_zoom_range C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_current_supported_zoom_range_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_request_current_supported_zoom_range_t* response_request_current_supported_zoom_range)
{
    return mavlink_msg_response_request_current_supported_zoom_range_pack(system_id, component_id, msg, response_request_current_supported_zoom_range->zoom_max_int, response_request_current_supported_zoom_range->zoom_max_float);
}

/**
 * @brief Encode a response_request_current_supported_zoom_range struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_request_current_supported_zoom_range C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_current_supported_zoom_range_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_request_current_supported_zoom_range_t* response_request_current_supported_zoom_range)
{
    return mavlink_msg_response_request_current_supported_zoom_range_pack_chan(system_id, component_id, chan, msg, response_request_current_supported_zoom_range->zoom_max_int, response_request_current_supported_zoom_range->zoom_max_float);
}

/**
 * @brief Encode a response_request_current_supported_zoom_range struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_request_current_supported_zoom_range C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_current_supported_zoom_range_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_request_current_supported_zoom_range_t* response_request_current_supported_zoom_range)
{
    return mavlink_msg_response_request_current_supported_zoom_range_pack_status(system_id, component_id, _status, msg,  response_request_current_supported_zoom_range->zoom_max_int, response_request_current_supported_zoom_range->zoom_max_float);
}

/**
 * @brief Send a response_request_current_supported_zoom_range message
 * @param chan MAVLink channel to send the message
 *
 * @param zoom_max_int  Minimum zoom level
 * @param zoom_max_float  Maximum zoom level
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_request_current_supported_zoom_range_send(mavlink_channel_t chan, uint8_t zoom_max_int, uint8_t zoom_max_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN];
    _mav_put_uint8_t(buf, 0, zoom_max_int);
    _mav_put_uint8_t(buf, 1, zoom_max_float);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
#else
    mavlink_response_request_current_supported_zoom_range_t packet;
    packet.zoom_max_int = zoom_max_int;
    packet.zoom_max_float = zoom_max_float;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
#endif
}

/**
 * @brief Send a response_request_current_supported_zoom_range message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_request_current_supported_zoom_range_send_struct(mavlink_channel_t chan, const mavlink_response_request_current_supported_zoom_range_t* response_request_current_supported_zoom_range)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_request_current_supported_zoom_range_send(chan, response_request_current_supported_zoom_range->zoom_max_int, response_request_current_supported_zoom_range->zoom_max_float);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE, (const char *)response_request_current_supported_zoom_range, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_request_current_supported_zoom_range_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t zoom_max_int, uint8_t zoom_max_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, zoom_max_int);
    _mav_put_uint8_t(buf, 1, zoom_max_float);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
#else
    mavlink_response_request_current_supported_zoom_range_t *packet = (mavlink_response_request_current_supported_zoom_range_t *)msgbuf;
    packet->zoom_max_int = zoom_max_int;
    packet->zoom_max_float = zoom_max_float;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE UNPACKING


/**
 * @brief Get field zoom_max_int from response_request_current_supported_zoom_range message
 *
 * @return  Minimum zoom level
 */
static inline uint8_t mavlink_msg_response_request_current_supported_zoom_range_get_zoom_max_int(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field zoom_max_float from response_request_current_supported_zoom_range message
 *
 * @return  Maximum zoom level
 */
static inline uint8_t mavlink_msg_response_request_current_supported_zoom_range_get_zoom_max_float(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a response_request_current_supported_zoom_range message into a struct
 *
 * @param msg The message to decode
 * @param response_request_current_supported_zoom_range C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_request_current_supported_zoom_range_decode(const mavlink_message_t* msg, mavlink_response_request_current_supported_zoom_range_t* response_request_current_supported_zoom_range)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_request_current_supported_zoom_range->zoom_max_int = mavlink_msg_response_request_current_supported_zoom_range_get_zoom_max_int(msg);
    response_request_current_supported_zoom_range->zoom_max_float = mavlink_msg_response_request_current_supported_zoom_range_get_zoom_max_float(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN;
        memset(response_request_current_supported_zoom_range, 0, MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
    memcpy(response_request_current_supported_zoom_range, _MAV_PAYLOAD(msg), len);
#endif
}
