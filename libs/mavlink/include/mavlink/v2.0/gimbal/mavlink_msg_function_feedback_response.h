#pragma once
// MESSAGE FUNCTION_FEEDBACK_RESPONSE PACKING

#define MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE 80011


typedef struct __mavlink_function_feedback_response_t {
 uint8_t info_type; /*<  0: Photo OK, 1: Fail, 2: HDR on, ...*/
} mavlink_function_feedback_response_t;

#define MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN 1
#define MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN 1
#define MAVLINK_MSG_ID_80011_LEN 1
#define MAVLINK_MSG_ID_80011_MIN_LEN 1

#define MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_CRC 85
#define MAVLINK_MSG_ID_80011_CRC 85



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FUNCTION_FEEDBACK_RESPONSE { \
    80011, \
    "FUNCTION_FEEDBACK_RESPONSE", \
    1, \
    {  { "info_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_function_feedback_response_t, info_type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FUNCTION_FEEDBACK_RESPONSE { \
    "FUNCTION_FEEDBACK_RESPONSE", \
    1, \
    {  { "info_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_function_feedback_response_t, info_type) }, \
         } \
}
#endif

/**
 * @brief Pack a function_feedback_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param info_type  0: Photo OK, 1: Fail, 2: HDR on, ...
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_function_feedback_response_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t info_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN];
    _mav_put_uint8_t(buf, 0, info_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN);
#else
    mavlink_function_feedback_response_t packet;
    packet.info_type = info_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_CRC);
}

/**
 * @brief Pack a function_feedback_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param info_type  0: Photo OK, 1: Fail, 2: HDR on, ...
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_function_feedback_response_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t info_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN];
    _mav_put_uint8_t(buf, 0, info_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN);
#else
    mavlink_function_feedback_response_t packet;
    packet.info_type = info_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN);
#endif
}

/**
 * @brief Pack a function_feedback_response message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param info_type  0: Photo OK, 1: Fail, 2: HDR on, ...
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_function_feedback_response_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t info_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN];
    _mav_put_uint8_t(buf, 0, info_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN);
#else
    mavlink_function_feedback_response_t packet;
    packet.info_type = info_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_CRC);
}

/**
 * @brief Encode a function_feedback_response struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param function_feedback_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_function_feedback_response_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_function_feedback_response_t* function_feedback_response)
{
    return mavlink_msg_function_feedback_response_pack(system_id, component_id, msg, function_feedback_response->info_type);
}

/**
 * @brief Encode a function_feedback_response struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param function_feedback_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_function_feedback_response_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_function_feedback_response_t* function_feedback_response)
{
    return mavlink_msg_function_feedback_response_pack_chan(system_id, component_id, chan, msg, function_feedback_response->info_type);
}

/**
 * @brief Encode a function_feedback_response struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param function_feedback_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_function_feedback_response_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_function_feedback_response_t* function_feedback_response)
{
    return mavlink_msg_function_feedback_response_pack_status(system_id, component_id, _status, msg,  function_feedback_response->info_type);
}

/**
 * @brief Send a function_feedback_response message
 * @param chan MAVLink channel to send the message
 *
 * @param info_type  0: Photo OK, 1: Fail, 2: HDR on, ...
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_function_feedback_response_send(mavlink_channel_t chan, uint8_t info_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN];
    _mav_put_uint8_t(buf, 0, info_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE, buf, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_CRC);
#else
    mavlink_function_feedback_response_t packet;
    packet.info_type = info_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE, (const char *)&packet, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_CRC);
#endif
}

/**
 * @brief Send a function_feedback_response message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_function_feedback_response_send_struct(mavlink_channel_t chan, const mavlink_function_feedback_response_t* function_feedback_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_function_feedback_response_send(chan, function_feedback_response->info_type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE, (const char *)function_feedback_response, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_CRC);
#endif
}

#if MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_function_feedback_response_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t info_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, info_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE, buf, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_CRC);
#else
    mavlink_function_feedback_response_t *packet = (mavlink_function_feedback_response_t *)msgbuf;
    packet->info_type = info_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE, (const char *)packet, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_CRC);
#endif
}
#endif

#endif

// MESSAGE FUNCTION_FEEDBACK_RESPONSE UNPACKING


/**
 * @brief Get field info_type from function_feedback_response message
 *
 * @return  0: Photo OK, 1: Fail, 2: HDR on, ...
 */
static inline uint8_t mavlink_msg_function_feedback_response_get_info_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a function_feedback_response message into a struct
 *
 * @param msg The message to decode
 * @param function_feedback_response C-struct to decode the message contents into
 */
static inline void mavlink_msg_function_feedback_response_decode(const mavlink_message_t* msg, mavlink_function_feedback_response_t* function_feedback_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    function_feedback_response->info_type = mavlink_msg_function_feedback_response_get_info_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN? msg->len : MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN;
        memset(function_feedback_response, 0, MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_LEN);
    memcpy(function_feedback_response, _MAV_PAYLOAD(msg), len);
#endif
}
