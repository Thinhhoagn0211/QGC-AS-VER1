#pragma once
// MESSAGE REQUEST_CAMERA_ENCODING_PARAMETERS PACKING

#define MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS 80028


typedef struct __mavlink_request_camera_encoding_parameters_t {
 uint8_t req_stream_type; /*<   0: Request all, 1: Request video, 2: Request photo*/
} mavlink_request_camera_encoding_parameters_t;

#define MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN 1
#define MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN 1
#define MAVLINK_MSG_ID_80028_LEN 1
#define MAVLINK_MSG_ID_80028_MIN_LEN 1

#define MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_CRC 10
#define MAVLINK_MSG_ID_80028_CRC 10



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_REQUEST_CAMERA_ENCODING_PARAMETERS { \
    80028, \
    "REQUEST_CAMERA_ENCODING_PARAMETERS", \
    1, \
    {  { "req_stream_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_request_camera_encoding_parameters_t, req_stream_type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_REQUEST_CAMERA_ENCODING_PARAMETERS { \
    "REQUEST_CAMERA_ENCODING_PARAMETERS", \
    1, \
    {  { "req_stream_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_request_camera_encoding_parameters_t, req_stream_type) }, \
         } \
}
#endif

/**
 * @brief Pack a request_camera_encoding_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param req_stream_type   0: Request all, 1: Request video, 2: Request photo
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_camera_encoding_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t req_stream_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, req_stream_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN);
#else
    mavlink_request_camera_encoding_parameters_t packet;
    packet.req_stream_type = req_stream_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_CRC);
}

/**
 * @brief Pack a request_camera_encoding_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param req_stream_type   0: Request all, 1: Request video, 2: Request photo
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_camera_encoding_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t req_stream_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, req_stream_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN);
#else
    mavlink_request_camera_encoding_parameters_t packet;
    packet.req_stream_type = req_stream_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a request_camera_encoding_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param req_stream_type   0: Request all, 1: Request video, 2: Request photo
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_camera_encoding_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t req_stream_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, req_stream_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN);
#else
    mavlink_request_camera_encoding_parameters_t packet;
    packet.req_stream_type = req_stream_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_CRC);
}

/**
 * @brief Encode a request_camera_encoding_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param request_camera_encoding_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_camera_encoding_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_request_camera_encoding_parameters_t* request_camera_encoding_parameters)
{
    return mavlink_msg_request_camera_encoding_parameters_pack(system_id, component_id, msg, request_camera_encoding_parameters->req_stream_type);
}

/**
 * @brief Encode a request_camera_encoding_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_camera_encoding_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_camera_encoding_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_request_camera_encoding_parameters_t* request_camera_encoding_parameters)
{
    return mavlink_msg_request_camera_encoding_parameters_pack_chan(system_id, component_id, chan, msg, request_camera_encoding_parameters->req_stream_type);
}

/**
 * @brief Encode a request_camera_encoding_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param request_camera_encoding_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_camera_encoding_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_request_camera_encoding_parameters_t* request_camera_encoding_parameters)
{
    return mavlink_msg_request_camera_encoding_parameters_pack_status(system_id, component_id, _status, msg,  request_camera_encoding_parameters->req_stream_type);
}

/**
 * @brief Send a request_camera_encoding_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param req_stream_type   0: Request all, 1: Request video, 2: Request photo
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_request_camera_encoding_parameters_send(mavlink_channel_t chan, uint8_t req_stream_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, req_stream_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS, buf, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_CRC);
#else
    mavlink_request_camera_encoding_parameters_t packet;
    packet.req_stream_type = req_stream_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a request_camera_encoding_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_request_camera_encoding_parameters_send_struct(mavlink_channel_t chan, const mavlink_request_camera_encoding_parameters_t* request_camera_encoding_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_request_camera_encoding_parameters_send(chan, request_camera_encoding_parameters->req_stream_type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS, (const char *)request_camera_encoding_parameters, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_request_camera_encoding_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t req_stream_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, req_stream_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS, buf, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_CRC);
#else
    mavlink_request_camera_encoding_parameters_t *packet = (mavlink_request_camera_encoding_parameters_t *)msgbuf;
    packet->req_stream_type = req_stream_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE REQUEST_CAMERA_ENCODING_PARAMETERS UNPACKING


/**
 * @brief Get field req_stream_type from request_camera_encoding_parameters message
 *
 * @return   0: Request all, 1: Request video, 2: Request photo
 */
static inline uint8_t mavlink_msg_request_camera_encoding_parameters_get_req_stream_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a request_camera_encoding_parameters message into a struct
 *
 * @param msg The message to decode
 * @param request_camera_encoding_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_request_camera_encoding_parameters_decode(const mavlink_message_t* msg, mavlink_request_camera_encoding_parameters_t* request_camera_encoding_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    request_camera_encoding_parameters->req_stream_type = mavlink_msg_request_camera_encoding_parameters_get_req_stream_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN;
        memset(request_camera_encoding_parameters, 0, MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_LEN);
    memcpy(request_camera_encoding_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
