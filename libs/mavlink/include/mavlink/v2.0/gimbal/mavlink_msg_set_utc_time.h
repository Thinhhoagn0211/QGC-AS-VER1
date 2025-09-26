#pragma once
// MESSAGE SET_UTC_TIME PACKING

#define MAVLINK_MSG_ID_SET_UTC_TIME 80048


typedef struct __mavlink_set_utc_time_t {
 uint64_t timestamp; /*<  UNIX epoch time (s)*/
} mavlink_set_utc_time_t;

#define MAVLINK_MSG_ID_SET_UTC_TIME_LEN 8
#define MAVLINK_MSG_ID_SET_UTC_TIME_MIN_LEN 8
#define MAVLINK_MSG_ID_80048_LEN 8
#define MAVLINK_MSG_ID_80048_MIN_LEN 8

#define MAVLINK_MSG_ID_SET_UTC_TIME_CRC 40
#define MAVLINK_MSG_ID_80048_CRC 40



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_UTC_TIME { \
    80048, \
    "SET_UTC_TIME", \
    1, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_set_utc_time_t, timestamp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_UTC_TIME { \
    "SET_UTC_TIME", \
    1, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_set_utc_time_t, timestamp) }, \
         } \
}
#endif

/**
 * @brief Pack a set_utc_time message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  UNIX epoch time (s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_utc_time_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_UTC_TIME_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_UTC_TIME_LEN);
#else
    mavlink_set_utc_time_t packet;
    packet.timestamp = timestamp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_UTC_TIME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_UTC_TIME;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_CRC);
}

/**
 * @brief Pack a set_utc_time message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  UNIX epoch time (s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_utc_time_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_UTC_TIME_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_UTC_TIME_LEN);
#else
    mavlink_set_utc_time_t packet;
    packet.timestamp = timestamp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_UTC_TIME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_UTC_TIME;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_LEN);
#endif
}

/**
 * @brief Pack a set_utc_time message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  UNIX epoch time (s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_utc_time_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_UTC_TIME_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_UTC_TIME_LEN);
#else
    mavlink_set_utc_time_t packet;
    packet.timestamp = timestamp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_UTC_TIME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_UTC_TIME;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_CRC);
}

/**
 * @brief Encode a set_utc_time struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_utc_time C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_utc_time_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_utc_time_t* set_utc_time)
{
    return mavlink_msg_set_utc_time_pack(system_id, component_id, msg, set_utc_time->timestamp);
}

/**
 * @brief Encode a set_utc_time struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_utc_time C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_utc_time_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_utc_time_t* set_utc_time)
{
    return mavlink_msg_set_utc_time_pack_chan(system_id, component_id, chan, msg, set_utc_time->timestamp);
}

/**
 * @brief Encode a set_utc_time struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param set_utc_time C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_utc_time_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_set_utc_time_t* set_utc_time)
{
    return mavlink_msg_set_utc_time_pack_status(system_id, component_id, _status, msg,  set_utc_time->timestamp);
}

/**
 * @brief Send a set_utc_time message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  UNIX epoch time (s)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_utc_time_send(mavlink_channel_t chan, uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_UTC_TIME_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_UTC_TIME, buf, MAVLINK_MSG_ID_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_CRC);
#else
    mavlink_set_utc_time_t packet;
    packet.timestamp = timestamp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_UTC_TIME, (const char *)&packet, MAVLINK_MSG_ID_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_CRC);
#endif
}

/**
 * @brief Send a set_utc_time message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_utc_time_send_struct(mavlink_channel_t chan, const mavlink_set_utc_time_t* set_utc_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_utc_time_send(chan, set_utc_time->timestamp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_UTC_TIME, (const char *)set_utc_time, MAVLINK_MSG_ID_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_UTC_TIME_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_utc_time_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_UTC_TIME, buf, MAVLINK_MSG_ID_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_CRC);
#else
    mavlink_set_utc_time_t *packet = (mavlink_set_utc_time_t *)msgbuf;
    packet->timestamp = timestamp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_UTC_TIME, (const char *)packet, MAVLINK_MSG_ID_SET_UTC_TIME_MIN_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_LEN, MAVLINK_MSG_ID_SET_UTC_TIME_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_UTC_TIME UNPACKING


/**
 * @brief Get field timestamp from set_utc_time message
 *
 * @return  UNIX epoch time (s)
 */
static inline uint64_t mavlink_msg_set_utc_time_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a set_utc_time message into a struct
 *
 * @param msg The message to decode
 * @param set_utc_time C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_utc_time_decode(const mavlink_message_t* msg, mavlink_set_utc_time_t* set_utc_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_utc_time->timestamp = mavlink_msg_set_utc_time_get_timestamp(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_UTC_TIME_LEN? msg->len : MAVLINK_MSG_ID_SET_UTC_TIME_LEN;
        memset(set_utc_time, 0, MAVLINK_MSG_ID_SET_UTC_TIME_LEN);
    memcpy(set_utc_time, _MAV_PAYLOAD(msg), len);
#endif
}
