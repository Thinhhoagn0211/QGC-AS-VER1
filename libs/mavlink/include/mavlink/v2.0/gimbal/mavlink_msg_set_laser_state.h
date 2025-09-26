#pragma once
// MESSAGE SET_LASER_STATE PACKING

#define MAVLINK_MSG_ID_SET_LASER_STATE 80050


typedef struct __mavlink_set_laser_state_t {
 uint8_t laser_state; /*<  1: Enable, 0: Disable*/
} mavlink_set_laser_state_t;

#define MAVLINK_MSG_ID_SET_LASER_STATE_LEN 1
#define MAVLINK_MSG_ID_SET_LASER_STATE_MIN_LEN 1
#define MAVLINK_MSG_ID_80050_LEN 1
#define MAVLINK_MSG_ID_80050_MIN_LEN 1

#define MAVLINK_MSG_ID_SET_LASER_STATE_CRC 63
#define MAVLINK_MSG_ID_80050_CRC 63



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_LASER_STATE { \
    80050, \
    "SET_LASER_STATE", \
    1, \
    {  { "laser_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_set_laser_state_t, laser_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_LASER_STATE { \
    "SET_LASER_STATE", \
    1, \
    {  { "laser_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_set_laser_state_t, laser_state) }, \
         } \
}
#endif

/**
 * @brief Pack a set_laser_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param laser_state  1: Enable, 0: Disable
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_laser_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t laser_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_LASER_STATE_LEN];
    _mav_put_uint8_t(buf, 0, laser_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_LASER_STATE_LEN);
#else
    mavlink_set_laser_state_t packet;
    packet.laser_state = laser_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_LASER_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_LASER_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_LASER_STATE_MIN_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_CRC);
}

/**
 * @brief Pack a set_laser_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param laser_state  1: Enable, 0: Disable
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_laser_state_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t laser_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_LASER_STATE_LEN];
    _mav_put_uint8_t(buf, 0, laser_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_LASER_STATE_LEN);
#else
    mavlink_set_laser_state_t packet;
    packet.laser_state = laser_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_LASER_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_LASER_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SET_LASER_STATE_MIN_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SET_LASER_STATE_MIN_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_LEN);
#endif
}

/**
 * @brief Pack a set_laser_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param laser_state  1: Enable, 0: Disable
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_laser_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t laser_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_LASER_STATE_LEN];
    _mav_put_uint8_t(buf, 0, laser_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_LASER_STATE_LEN);
#else
    mavlink_set_laser_state_t packet;
    packet.laser_state = laser_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_LASER_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_LASER_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_LASER_STATE_MIN_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_CRC);
}

/**
 * @brief Encode a set_laser_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_laser_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_laser_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_laser_state_t* set_laser_state)
{
    return mavlink_msg_set_laser_state_pack(system_id, component_id, msg, set_laser_state->laser_state);
}

/**
 * @brief Encode a set_laser_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_laser_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_laser_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_laser_state_t* set_laser_state)
{
    return mavlink_msg_set_laser_state_pack_chan(system_id, component_id, chan, msg, set_laser_state->laser_state);
}

/**
 * @brief Encode a set_laser_state struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param set_laser_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_laser_state_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_set_laser_state_t* set_laser_state)
{
    return mavlink_msg_set_laser_state_pack_status(system_id, component_id, _status, msg,  set_laser_state->laser_state);
}

/**
 * @brief Send a set_laser_state message
 * @param chan MAVLink channel to send the message
 *
 * @param laser_state  1: Enable, 0: Disable
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_laser_state_send(mavlink_channel_t chan, uint8_t laser_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_LASER_STATE_LEN];
    _mav_put_uint8_t(buf, 0, laser_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_LASER_STATE, buf, MAVLINK_MSG_ID_SET_LASER_STATE_MIN_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_CRC);
#else
    mavlink_set_laser_state_t packet;
    packet.laser_state = laser_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_LASER_STATE, (const char *)&packet, MAVLINK_MSG_ID_SET_LASER_STATE_MIN_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_CRC);
#endif
}

/**
 * @brief Send a set_laser_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_laser_state_send_struct(mavlink_channel_t chan, const mavlink_set_laser_state_t* set_laser_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_laser_state_send(chan, set_laser_state->laser_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_LASER_STATE, (const char *)set_laser_state, MAVLINK_MSG_ID_SET_LASER_STATE_MIN_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_LASER_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_laser_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t laser_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, laser_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_LASER_STATE, buf, MAVLINK_MSG_ID_SET_LASER_STATE_MIN_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_CRC);
#else
    mavlink_set_laser_state_t *packet = (mavlink_set_laser_state_t *)msgbuf;
    packet->laser_state = laser_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_LASER_STATE, (const char *)packet, MAVLINK_MSG_ID_SET_LASER_STATE_MIN_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_LEN, MAVLINK_MSG_ID_SET_LASER_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_LASER_STATE UNPACKING


/**
 * @brief Get field laser_state from set_laser_state message
 *
 * @return  1: Enable, 0: Disable
 */
static inline uint8_t mavlink_msg_set_laser_state_get_laser_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a set_laser_state message into a struct
 *
 * @param msg The message to decode
 * @param set_laser_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_laser_state_decode(const mavlink_message_t* msg, mavlink_set_laser_state_t* set_laser_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_laser_state->laser_state = mavlink_msg_set_laser_state_get_laser_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_LASER_STATE_LEN? msg->len : MAVLINK_MSG_ID_SET_LASER_STATE_LEN;
        memset(set_laser_state, 0, MAVLINK_MSG_ID_SET_LASER_STATE_LEN);
    memcpy(set_laser_state, _MAV_PAYLOAD(msg), len);
#endif
}
