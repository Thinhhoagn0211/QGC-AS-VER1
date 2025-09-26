#pragma once
// MESSAGE SET_GIMBAL_ATTITUDE_ANGLES PACKING

#define MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES 80014


typedef struct __mavlink_set_gimbal_attitude_angles_t {
 int16_t yaw; /*<  Target yaw * 10*/
 int16_t pitch; /*<  Target pitch * 10*/
} mavlink_set_gimbal_attitude_angles_t;

#define MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN 4
#define MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN 4
#define MAVLINK_MSG_ID_80014_LEN 4
#define MAVLINK_MSG_ID_80014_MIN_LEN 4

#define MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_CRC 201
#define MAVLINK_MSG_ID_80014_CRC 201



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_GIMBAL_ATTITUDE_ANGLES { \
    80014, \
    "SET_GIMBAL_ATTITUDE_ANGLES", \
    2, \
    {  { "yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_set_gimbal_attitude_angles_t, yaw) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_set_gimbal_attitude_angles_t, pitch) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_GIMBAL_ATTITUDE_ANGLES { \
    "SET_GIMBAL_ATTITUDE_ANGLES", \
    2, \
    {  { "yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_set_gimbal_attitude_angles_t, yaw) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_set_gimbal_attitude_angles_t, pitch) }, \
         } \
}
#endif

/**
 * @brief Pack a set_gimbal_attitude_angles message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param yaw  Target yaw * 10
 * @param pitch  Target pitch * 10
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_gimbal_attitude_angles_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t yaw, int16_t pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN];
    _mav_put_int16_t(buf, 0, yaw);
    _mav_put_int16_t(buf, 2, pitch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN);
#else
    mavlink_set_gimbal_attitude_angles_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_CRC);
}

/**
 * @brief Pack a set_gimbal_attitude_angles message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param yaw  Target yaw * 10
 * @param pitch  Target pitch * 10
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_gimbal_attitude_angles_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t yaw, int16_t pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN];
    _mav_put_int16_t(buf, 0, yaw);
    _mav_put_int16_t(buf, 2, pitch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN);
#else
    mavlink_set_gimbal_attitude_angles_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN);
#endif
}

/**
 * @brief Pack a set_gimbal_attitude_angles message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param yaw  Target yaw * 10
 * @param pitch  Target pitch * 10
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_gimbal_attitude_angles_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t yaw,int16_t pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN];
    _mav_put_int16_t(buf, 0, yaw);
    _mav_put_int16_t(buf, 2, pitch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN);
#else
    mavlink_set_gimbal_attitude_angles_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_CRC);
}

/**
 * @brief Encode a set_gimbal_attitude_angles struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_gimbal_attitude_angles C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_gimbal_attitude_angles_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_gimbal_attitude_angles_t* set_gimbal_attitude_angles)
{
    return mavlink_msg_set_gimbal_attitude_angles_pack(system_id, component_id, msg, set_gimbal_attitude_angles->yaw, set_gimbal_attitude_angles->pitch);
}

/**
 * @brief Encode a set_gimbal_attitude_angles struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_gimbal_attitude_angles C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_gimbal_attitude_angles_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_gimbal_attitude_angles_t* set_gimbal_attitude_angles)
{
    return mavlink_msg_set_gimbal_attitude_angles_pack_chan(system_id, component_id, chan, msg, set_gimbal_attitude_angles->yaw, set_gimbal_attitude_angles->pitch);
}

/**
 * @brief Encode a set_gimbal_attitude_angles struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param set_gimbal_attitude_angles C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_gimbal_attitude_angles_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_set_gimbal_attitude_angles_t* set_gimbal_attitude_angles)
{
    return mavlink_msg_set_gimbal_attitude_angles_pack_status(system_id, component_id, _status, msg,  set_gimbal_attitude_angles->yaw, set_gimbal_attitude_angles->pitch);
}

/**
 * @brief Send a set_gimbal_attitude_angles message
 * @param chan MAVLink channel to send the message
 *
 * @param yaw  Target yaw * 10
 * @param pitch  Target pitch * 10
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_gimbal_attitude_angles_send(mavlink_channel_t chan, int16_t yaw, int16_t pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN];
    _mav_put_int16_t(buf, 0, yaw);
    _mav_put_int16_t(buf, 2, pitch);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES, buf, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_CRC);
#else
    mavlink_set_gimbal_attitude_angles_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES, (const char *)&packet, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_CRC);
#endif
}

/**
 * @brief Send a set_gimbal_attitude_angles message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_gimbal_attitude_angles_send_struct(mavlink_channel_t chan, const mavlink_set_gimbal_attitude_angles_t* set_gimbal_attitude_angles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_gimbal_attitude_angles_send(chan, set_gimbal_attitude_angles->yaw, set_gimbal_attitude_angles->pitch);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES, (const char *)set_gimbal_attitude_angles, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_gimbal_attitude_angles_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t yaw, int16_t pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, yaw);
    _mav_put_int16_t(buf, 2, pitch);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES, buf, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_CRC);
#else
    mavlink_set_gimbal_attitude_angles_t *packet = (mavlink_set_gimbal_attitude_angles_t *)msgbuf;
    packet->yaw = yaw;
    packet->pitch = pitch;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES, (const char *)packet, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_GIMBAL_ATTITUDE_ANGLES UNPACKING


/**
 * @brief Get field yaw from set_gimbal_attitude_angles message
 *
 * @return  Target yaw * 10
 */
static inline int16_t mavlink_msg_set_gimbal_attitude_angles_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field pitch from set_gimbal_attitude_angles message
 *
 * @return  Target pitch * 10
 */
static inline int16_t mavlink_msg_set_gimbal_attitude_angles_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Decode a set_gimbal_attitude_angles message into a struct
 *
 * @param msg The message to decode
 * @param set_gimbal_attitude_angles C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_gimbal_attitude_angles_decode(const mavlink_message_t* msg, mavlink_set_gimbal_attitude_angles_t* set_gimbal_attitude_angles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_gimbal_attitude_angles->yaw = mavlink_msg_set_gimbal_attitude_angles_get_yaw(msg);
    set_gimbal_attitude_angles->pitch = mavlink_msg_set_gimbal_attitude_angles_get_pitch(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN? msg->len : MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN;
        memset(set_gimbal_attitude_angles, 0, MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_LEN);
    memcpy(set_gimbal_attitude_angles, _MAV_PAYLOAD(msg), len);
#endif
}
