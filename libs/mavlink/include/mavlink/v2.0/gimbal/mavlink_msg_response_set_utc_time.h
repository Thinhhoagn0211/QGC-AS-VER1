#pragma once
// MESSAGE RESPONSE_SET_UTC_TIME PACKING

#define MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME 90048


typedef struct __mavlink_response_set_utc_time_t {
 int8_t ack; /*<  1: Success, 0: Invalid format*/
} mavlink_response_set_utc_time_t;

#define MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN 1
#define MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_MIN_LEN 1
#define MAVLINK_MSG_ID_90048_LEN 1
#define MAVLINK_MSG_ID_90048_MIN_LEN 1

#define MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_CRC 184
#define MAVLINK_MSG_ID_90048_CRC 184



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_SET_UTC_TIME { \
    90048, \
    "RESPONSE_SET_UTC_TIME", \
    1, \
    {  { "ack", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_response_set_utc_time_t, ack) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_SET_UTC_TIME { \
    "RESPONSE_SET_UTC_TIME", \
    1, \
    {  { "ack", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_response_set_utc_time_t, ack) }, \
         } \
}
#endif

/**
 * @brief Pack a response_set_utc_time message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ack  1: Success, 0: Invalid format
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_set_utc_time_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN];
    _mav_put_int8_t(buf, 0, ack);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN);
#else
    mavlink_response_set_utc_time_t packet;
    packet.ack = ack;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_CRC);
}

/**
 * @brief Pack a response_set_utc_time message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param ack  1: Success, 0: Invalid format
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_set_utc_time_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int8_t ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN];
    _mav_put_int8_t(buf, 0, ack);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN);
#else
    mavlink_response_set_utc_time_t packet;
    packet.ack = ack;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN);
#endif
}

/**
 * @brief Pack a response_set_utc_time message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ack  1: Success, 0: Invalid format
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_set_utc_time_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN];
    _mav_put_int8_t(buf, 0, ack);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN);
#else
    mavlink_response_set_utc_time_t packet;
    packet.ack = ack;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_CRC);
}

/**
 * @brief Encode a response_set_utc_time struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_set_utc_time C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_set_utc_time_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_set_utc_time_t* response_set_utc_time)
{
    return mavlink_msg_response_set_utc_time_pack(system_id, component_id, msg, response_set_utc_time->ack);
}

/**
 * @brief Encode a response_set_utc_time struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_set_utc_time C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_set_utc_time_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_set_utc_time_t* response_set_utc_time)
{
    return mavlink_msg_response_set_utc_time_pack_chan(system_id, component_id, chan, msg, response_set_utc_time->ack);
}

/**
 * @brief Encode a response_set_utc_time struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_set_utc_time C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_set_utc_time_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_set_utc_time_t* response_set_utc_time)
{
    return mavlink_msg_response_set_utc_time_pack_status(system_id, component_id, _status, msg,  response_set_utc_time->ack);
}

/**
 * @brief Send a response_set_utc_time message
 * @param chan MAVLink channel to send the message
 *
 * @param ack  1: Success, 0: Invalid format
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_set_utc_time_send(mavlink_channel_t chan, int8_t ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN];
    _mav_put_int8_t(buf, 0, ack);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME, buf, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_CRC);
#else
    mavlink_response_set_utc_time_t packet;
    packet.ack = ack;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_CRC);
#endif
}

/**
 * @brief Send a response_set_utc_time message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_set_utc_time_send_struct(mavlink_channel_t chan, const mavlink_response_set_utc_time_t* response_set_utc_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_set_utc_time_send(chan, response_set_utc_time->ack);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME, (const char *)response_set_utc_time, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_set_utc_time_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int8_t(buf, 0, ack);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME, buf, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_CRC);
#else
    mavlink_response_set_utc_time_t *packet = (mavlink_response_set_utc_time_t *)msgbuf;
    packet->ack = ack;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_SET_UTC_TIME UNPACKING


/**
 * @brief Get field ack from response_set_utc_time message
 *
 * @return  1: Success, 0: Invalid format
 */
static inline int8_t mavlink_msg_response_set_utc_time_get_ack(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  0);
}

/**
 * @brief Decode a response_set_utc_time message into a struct
 *
 * @param msg The message to decode
 * @param response_set_utc_time C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_set_utc_time_decode(const mavlink_message_t* msg, mavlink_response_set_utc_time_t* response_set_utc_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_set_utc_time->ack = mavlink_msg_response_set_utc_time_get_ack(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN;
        memset(response_set_utc_time, 0, MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_LEN);
    memcpy(response_set_utc_time, _MAV_PAYLOAD(msg), len);
#endif
}
