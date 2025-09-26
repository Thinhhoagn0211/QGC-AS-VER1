#pragma once
// MESSAGE REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE PACKING

#define MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE 80022


typedef struct __mavlink_request_current_supported_zoom_range_t {
 uint8_t dummy; /*<  Reserved*/
} mavlink_request_current_supported_zoom_range_t;

#define MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN 1
#define MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN 1
#define MAVLINK_MSG_ID_80022_LEN 1
#define MAVLINK_MSG_ID_80022_MIN_LEN 1

#define MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC 47
#define MAVLINK_MSG_ID_80022_CRC 47



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE { \
    80022, \
    "REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE", \
    1, \
    {  { "dummy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_request_current_supported_zoom_range_t, dummy) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE { \
    "REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE", \
    1, \
    {  { "dummy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_request_current_supported_zoom_range_t, dummy) }, \
         } \
}
#endif

/**
 * @brief Pack a request_current_supported_zoom_range message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param dummy  Reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_current_supported_zoom_range_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#else
    mavlink_request_current_supported_zoom_range_t packet;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
}

/**
 * @brief Pack a request_current_supported_zoom_range message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param dummy  Reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_current_supported_zoom_range_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#else
    mavlink_request_current_supported_zoom_range_t packet;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#endif
}

/**
 * @brief Pack a request_current_supported_zoom_range message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dummy  Reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_current_supported_zoom_range_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#else
    mavlink_request_current_supported_zoom_range_t packet;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
}

/**
 * @brief Encode a request_current_supported_zoom_range struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param request_current_supported_zoom_range C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_current_supported_zoom_range_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_request_current_supported_zoom_range_t* request_current_supported_zoom_range)
{
    return mavlink_msg_request_current_supported_zoom_range_pack(system_id, component_id, msg, request_current_supported_zoom_range->dummy);
}

/**
 * @brief Encode a request_current_supported_zoom_range struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_current_supported_zoom_range C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_current_supported_zoom_range_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_request_current_supported_zoom_range_t* request_current_supported_zoom_range)
{
    return mavlink_msg_request_current_supported_zoom_range_pack_chan(system_id, component_id, chan, msg, request_current_supported_zoom_range->dummy);
}

/**
 * @brief Encode a request_current_supported_zoom_range struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param request_current_supported_zoom_range C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_current_supported_zoom_range_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_request_current_supported_zoom_range_t* request_current_supported_zoom_range)
{
    return mavlink_msg_request_current_supported_zoom_range_pack_status(system_id, component_id, _status, msg,  request_current_supported_zoom_range->dummy);
}

/**
 * @brief Send a request_current_supported_zoom_range message
 * @param chan MAVLink channel to send the message
 *
 * @param dummy  Reserved
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_request_current_supported_zoom_range_send(mavlink_channel_t chan, uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE, buf, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
#else
    mavlink_request_current_supported_zoom_range_t packet;
    packet.dummy = dummy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE, (const char *)&packet, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
#endif
}

/**
 * @brief Send a request_current_supported_zoom_range message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_request_current_supported_zoom_range_send_struct(mavlink_channel_t chan, const mavlink_request_current_supported_zoom_range_t* request_current_supported_zoom_range)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_request_current_supported_zoom_range_send(chan, request_current_supported_zoom_range->dummy);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE, (const char *)request_current_supported_zoom_range, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
#endif
}

#if MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_request_current_supported_zoom_range_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, dummy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE, buf, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
#else
    mavlink_request_current_supported_zoom_range_t *packet = (mavlink_request_current_supported_zoom_range_t *)msgbuf;
    packet->dummy = dummy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE, (const char *)packet, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_CRC);
#endif
}
#endif

#endif

// MESSAGE REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE UNPACKING


/**
 * @brief Get field dummy from request_current_supported_zoom_range message
 *
 * @return  Reserved
 */
static inline uint8_t mavlink_msg_request_current_supported_zoom_range_get_dummy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a request_current_supported_zoom_range message into a struct
 *
 * @param msg The message to decode
 * @param request_current_supported_zoom_range C-struct to decode the message contents into
 */
static inline void mavlink_msg_request_current_supported_zoom_range_decode(const mavlink_message_t* msg, mavlink_request_current_supported_zoom_range_t* request_current_supported_zoom_range)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    request_current_supported_zoom_range->dummy = mavlink_msg_request_current_supported_zoom_range_get_dummy(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN? msg->len : MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN;
        memset(request_current_supported_zoom_range, 0, MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_LEN);
    memcpy(request_current_supported_zoom_range, _MAV_PAYLOAD(msg), len);
#endif
}
