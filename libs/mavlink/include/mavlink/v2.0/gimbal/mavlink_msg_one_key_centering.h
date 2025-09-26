#pragma once
// MESSAGE ONE_KEY_CENTERING PACKING

#define MAVLINK_MSG_ID_ONE_KEY_CENTERING 80008


typedef struct __mavlink_one_key_centering_t {
 uint8_t center_pos; /*<  1: One-key center, 2: Downward, etc.*/
} mavlink_one_key_centering_t;

#define MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN 1
#define MAVLINK_MSG_ID_ONE_KEY_CENTERING_MIN_LEN 1
#define MAVLINK_MSG_ID_80008_LEN 1
#define MAVLINK_MSG_ID_80008_MIN_LEN 1

#define MAVLINK_MSG_ID_ONE_KEY_CENTERING_CRC 78
#define MAVLINK_MSG_ID_80008_CRC 78



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ONE_KEY_CENTERING { \
    80008, \
    "ONE_KEY_CENTERING", \
    1, \
    {  { "center_pos", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_one_key_centering_t, center_pos) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ONE_KEY_CENTERING { \
    "ONE_KEY_CENTERING", \
    1, \
    {  { "center_pos", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_one_key_centering_t, center_pos) }, \
         } \
}
#endif

/**
 * @brief Pack a one_key_centering message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param center_pos  1: One-key center, 2: Downward, etc.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_one_key_centering_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t center_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN];
    _mav_put_uint8_t(buf, 0, center_pos);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN);
#else
    mavlink_one_key_centering_t packet;
    packet.center_pos = center_pos;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONE_KEY_CENTERING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ONE_KEY_CENTERING_MIN_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_CRC);
}

/**
 * @brief Pack a one_key_centering message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param center_pos  1: One-key center, 2: Downward, etc.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_one_key_centering_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t center_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN];
    _mav_put_uint8_t(buf, 0, center_pos);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN);
#else
    mavlink_one_key_centering_t packet;
    packet.center_pos = center_pos;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONE_KEY_CENTERING;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONE_KEY_CENTERING_MIN_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONE_KEY_CENTERING_MIN_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN);
#endif
}

/**
 * @brief Pack a one_key_centering message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param center_pos  1: One-key center, 2: Downward, etc.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_one_key_centering_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t center_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN];
    _mav_put_uint8_t(buf, 0, center_pos);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN);
#else
    mavlink_one_key_centering_t packet;
    packet.center_pos = center_pos;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONE_KEY_CENTERING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ONE_KEY_CENTERING_MIN_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_CRC);
}

/**
 * @brief Encode a one_key_centering struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param one_key_centering C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_one_key_centering_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_one_key_centering_t* one_key_centering)
{
    return mavlink_msg_one_key_centering_pack(system_id, component_id, msg, one_key_centering->center_pos);
}

/**
 * @brief Encode a one_key_centering struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param one_key_centering C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_one_key_centering_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_one_key_centering_t* one_key_centering)
{
    return mavlink_msg_one_key_centering_pack_chan(system_id, component_id, chan, msg, one_key_centering->center_pos);
}

/**
 * @brief Encode a one_key_centering struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param one_key_centering C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_one_key_centering_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_one_key_centering_t* one_key_centering)
{
    return mavlink_msg_one_key_centering_pack_status(system_id, component_id, _status, msg,  one_key_centering->center_pos);
}

/**
 * @brief Send a one_key_centering message
 * @param chan MAVLink channel to send the message
 *
 * @param center_pos  1: One-key center, 2: Downward, etc.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_one_key_centering_send(mavlink_channel_t chan, uint8_t center_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN];
    _mav_put_uint8_t(buf, 0, center_pos);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONE_KEY_CENTERING, buf, MAVLINK_MSG_ID_ONE_KEY_CENTERING_MIN_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_CRC);
#else
    mavlink_one_key_centering_t packet;
    packet.center_pos = center_pos;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONE_KEY_CENTERING, (const char *)&packet, MAVLINK_MSG_ID_ONE_KEY_CENTERING_MIN_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_CRC);
#endif
}

/**
 * @brief Send a one_key_centering message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_one_key_centering_send_struct(mavlink_channel_t chan, const mavlink_one_key_centering_t* one_key_centering)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_one_key_centering_send(chan, one_key_centering->center_pos);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONE_KEY_CENTERING, (const char *)one_key_centering, MAVLINK_MSG_ID_ONE_KEY_CENTERING_MIN_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_CRC);
#endif
}

#if MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_one_key_centering_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t center_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, center_pos);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONE_KEY_CENTERING, buf, MAVLINK_MSG_ID_ONE_KEY_CENTERING_MIN_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_CRC);
#else
    mavlink_one_key_centering_t *packet = (mavlink_one_key_centering_t *)msgbuf;
    packet->center_pos = center_pos;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONE_KEY_CENTERING, (const char *)packet, MAVLINK_MSG_ID_ONE_KEY_CENTERING_MIN_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN, MAVLINK_MSG_ID_ONE_KEY_CENTERING_CRC);
#endif
}
#endif

#endif

// MESSAGE ONE_KEY_CENTERING UNPACKING


/**
 * @brief Get field center_pos from one_key_centering message
 *
 * @return  1: One-key center, 2: Downward, etc.
 */
static inline uint8_t mavlink_msg_one_key_centering_get_center_pos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a one_key_centering message into a struct
 *
 * @param msg The message to decode
 * @param one_key_centering C-struct to decode the message contents into
 */
static inline void mavlink_msg_one_key_centering_decode(const mavlink_message_t* msg, mavlink_one_key_centering_t* one_key_centering)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    one_key_centering->center_pos = mavlink_msg_one_key_centering_get_center_pos(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN? msg->len : MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN;
        memset(one_key_centering, 0, MAVLINK_MSG_ID_ONE_KEY_CENTERING_LEN);
    memcpy(one_key_centering, _MAV_PAYLOAD(msg), len);
#endif
}
