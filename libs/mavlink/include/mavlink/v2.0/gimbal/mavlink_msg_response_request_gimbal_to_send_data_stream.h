#pragma once
// MESSAGE RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM PACKING

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM 90033


typedef struct __mavlink_response_request_gimbal_to_send_data_stream_t {
 uint8_t data_type; /*<  Data type*/
} mavlink_response_request_gimbal_to_send_data_stream_t;

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN 1
#define MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN 1
#define MAVLINK_MSG_ID_90033_LEN 1
#define MAVLINK_MSG_ID_90033_MIN_LEN 1

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_CRC 61
#define MAVLINK_MSG_ID_90033_CRC 61



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM { \
    90033, \
    "RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM", \
    1, \
    {  { "data_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_request_gimbal_to_send_data_stream_t, data_type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM { \
    "RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM", \
    1, \
    {  { "data_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_request_gimbal_to_send_data_stream_t, data_type) }, \
         } \
}
#endif

/**
 * @brief Pack a response_request_gimbal_to_send_data_stream message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param data_type  Data type
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_gimbal_to_send_data_stream_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t data_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN];
    _mav_put_uint8_t(buf, 0, data_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN);
#else
    mavlink_response_request_gimbal_to_send_data_stream_t packet;
    packet.data_type = data_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_CRC);
}

/**
 * @brief Pack a response_request_gimbal_to_send_data_stream message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param data_type  Data type
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_gimbal_to_send_data_stream_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t data_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN];
    _mav_put_uint8_t(buf, 0, data_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN);
#else
    mavlink_response_request_gimbal_to_send_data_stream_t packet;
    packet.data_type = data_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN);
#endif
}

/**
 * @brief Pack a response_request_gimbal_to_send_data_stream message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param data_type  Data type
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_gimbal_to_send_data_stream_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t data_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN];
    _mav_put_uint8_t(buf, 0, data_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN);
#else
    mavlink_response_request_gimbal_to_send_data_stream_t packet;
    packet.data_type = data_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_CRC);
}

/**
 * @brief Encode a response_request_gimbal_to_send_data_stream struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_request_gimbal_to_send_data_stream C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_gimbal_to_send_data_stream_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_request_gimbal_to_send_data_stream_t* response_request_gimbal_to_send_data_stream)
{
    return mavlink_msg_response_request_gimbal_to_send_data_stream_pack(system_id, component_id, msg, response_request_gimbal_to_send_data_stream->data_type);
}

/**
 * @brief Encode a response_request_gimbal_to_send_data_stream struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_request_gimbal_to_send_data_stream C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_gimbal_to_send_data_stream_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_request_gimbal_to_send_data_stream_t* response_request_gimbal_to_send_data_stream)
{
    return mavlink_msg_response_request_gimbal_to_send_data_stream_pack_chan(system_id, component_id, chan, msg, response_request_gimbal_to_send_data_stream->data_type);
}

/**
 * @brief Encode a response_request_gimbal_to_send_data_stream struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_request_gimbal_to_send_data_stream C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_gimbal_to_send_data_stream_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_request_gimbal_to_send_data_stream_t* response_request_gimbal_to_send_data_stream)
{
    return mavlink_msg_response_request_gimbal_to_send_data_stream_pack_status(system_id, component_id, _status, msg,  response_request_gimbal_to_send_data_stream->data_type);
}

/**
 * @brief Send a response_request_gimbal_to_send_data_stream message
 * @param chan MAVLink channel to send the message
 *
 * @param data_type  Data type
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_request_gimbal_to_send_data_stream_send(mavlink_channel_t chan, uint8_t data_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN];
    _mav_put_uint8_t(buf, 0, data_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_CRC);
#else
    mavlink_response_request_gimbal_to_send_data_stream_t packet;
    packet.data_type = data_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_CRC);
#endif
}

/**
 * @brief Send a response_request_gimbal_to_send_data_stream message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_request_gimbal_to_send_data_stream_send_struct(mavlink_channel_t chan, const mavlink_response_request_gimbal_to_send_data_stream_t* response_request_gimbal_to_send_data_stream)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_request_gimbal_to_send_data_stream_send(chan, response_request_gimbal_to_send_data_stream->data_type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM, (const char *)response_request_gimbal_to_send_data_stream, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_request_gimbal_to_send_data_stream_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t data_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, data_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_CRC);
#else
    mavlink_response_request_gimbal_to_send_data_stream_t *packet = (mavlink_response_request_gimbal_to_send_data_stream_t *)msgbuf;
    packet->data_type = data_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM UNPACKING


/**
 * @brief Get field data_type from response_request_gimbal_to_send_data_stream message
 *
 * @return  Data type
 */
static inline uint8_t mavlink_msg_response_request_gimbal_to_send_data_stream_get_data_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a response_request_gimbal_to_send_data_stream message into a struct
 *
 * @param msg The message to decode
 * @param response_request_gimbal_to_send_data_stream C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_request_gimbal_to_send_data_stream_decode(const mavlink_message_t* msg, mavlink_response_request_gimbal_to_send_data_stream_t* response_request_gimbal_to_send_data_stream)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_request_gimbal_to_send_data_stream->data_type = mavlink_msg_response_request_gimbal_to_send_data_stream_get_data_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN;
        memset(response_request_gimbal_to_send_data_stream, 0, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_LEN);
    memcpy(response_request_gimbal_to_send_data_stream, _MAV_PAYLOAD(msg), len);
#endif
}
