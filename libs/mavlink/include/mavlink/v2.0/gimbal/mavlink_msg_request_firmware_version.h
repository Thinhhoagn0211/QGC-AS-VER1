#pragma once
// MESSAGE REQUEST_FIRMWARE_VERSION PACKING

#define MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION 80001


typedef struct __mavlink_request_firmware_version_t {
 uint8_t dummy; /*<  Ignored, placeholder only*/
} mavlink_request_firmware_version_t;

#define MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN 1
#define MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_MIN_LEN 1
#define MAVLINK_MSG_ID_80001_LEN 1
#define MAVLINK_MSG_ID_80001_MIN_LEN 1

#define MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_CRC 54
#define MAVLINK_MSG_ID_80001_CRC 54



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_REQUEST_FIRMWARE_VERSION { \
    80001, \
    "REQUEST_FIRMWARE_VERSION", \
    1, \
    {  { "dummy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_request_firmware_version_t, dummy) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_REQUEST_FIRMWARE_VERSION { \
    "REQUEST_FIRMWARE_VERSION", \
    1, \
    {  { "dummy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_request_firmware_version_t, dummy) }, \
         } \
}
#endif

/**
 * @brief Pack a request_firmware_version message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param dummy  Ignored, placeholder only
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_firmware_version_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN);
#else
    mavlink_request_firmware_version_t packet;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_CRC);
}

/**
 * @brief Pack a request_firmware_version message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param dummy  Ignored, placeholder only
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_firmware_version_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN);
#else
    mavlink_request_firmware_version_t packet;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN);
#endif
}

/**
 * @brief Pack a request_firmware_version message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dummy  Ignored, placeholder only
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_firmware_version_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN);
#else
    mavlink_request_firmware_version_t packet;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_CRC);
}

/**
 * @brief Encode a request_firmware_version struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param request_firmware_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_firmware_version_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_request_firmware_version_t* request_firmware_version)
{
    return mavlink_msg_request_firmware_version_pack(system_id, component_id, msg, request_firmware_version->dummy);
}

/**
 * @brief Encode a request_firmware_version struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_firmware_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_firmware_version_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_request_firmware_version_t* request_firmware_version)
{
    return mavlink_msg_request_firmware_version_pack_chan(system_id, component_id, chan, msg, request_firmware_version->dummy);
}

/**
 * @brief Encode a request_firmware_version struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param request_firmware_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_firmware_version_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_request_firmware_version_t* request_firmware_version)
{
    return mavlink_msg_request_firmware_version_pack_status(system_id, component_id, _status, msg,  request_firmware_version->dummy);
}

/**
 * @brief Send a request_firmware_version message
 * @param chan MAVLink channel to send the message
 *
 * @param dummy  Ignored, placeholder only
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_request_firmware_version_send(mavlink_channel_t chan, uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION, buf, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_CRC);
#else
    mavlink_request_firmware_version_t packet;
    packet.dummy = dummy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION, (const char *)&packet, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_CRC);
#endif
}

/**
 * @brief Send a request_firmware_version message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_request_firmware_version_send_struct(mavlink_channel_t chan, const mavlink_request_firmware_version_t* request_firmware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_request_firmware_version_send(chan, request_firmware_version->dummy);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION, (const char *)request_firmware_version, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_CRC);
#endif
}

#if MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_request_firmware_version_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, dummy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION, buf, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_CRC);
#else
    mavlink_request_firmware_version_t *packet = (mavlink_request_firmware_version_t *)msgbuf;
    packet->dummy = dummy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION, (const char *)packet, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_CRC);
#endif
}
#endif

#endif

// MESSAGE REQUEST_FIRMWARE_VERSION UNPACKING


/**
 * @brief Get field dummy from request_firmware_version message
 *
 * @return  Ignored, placeholder only
 */
static inline uint8_t mavlink_msg_request_firmware_version_get_dummy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a request_firmware_version message into a struct
 *
 * @param msg The message to decode
 * @param request_firmware_version C-struct to decode the message contents into
 */
static inline void mavlink_msg_request_firmware_version_decode(const mavlink_message_t* msg, mavlink_request_firmware_version_t* request_firmware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    request_firmware_version->dummy = mavlink_msg_request_firmware_version_get_dummy(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN? msg->len : MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN;
        memset(request_firmware_version, 0, MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_LEN);
    memcpy(request_firmware_version, _MAV_PAYLOAD(msg), len);
#endif
}
