#pragma once
// MESSAGE GIMBAL_ROTATION_CONTROL PACKING

#define MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL 80007


typedef struct __mavlink_gimbal_rotation_control_t {
 int8_t turn_yaw; /*<  Yaw: -100 to 100*/
 int8_t turn_pitch; /*<  Pitch: -100 to 100*/
} mavlink_gimbal_rotation_control_t;

#define MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN 2
#define MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_MIN_LEN 2
#define MAVLINK_MSG_ID_80007_LEN 2
#define MAVLINK_MSG_ID_80007_MIN_LEN 2

#define MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_CRC 7
#define MAVLINK_MSG_ID_80007_CRC 7



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GIMBAL_ROTATION_CONTROL { \
    80007, \
    "GIMBAL_ROTATION_CONTROL", \
    2, \
    {  { "turn_yaw", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_gimbal_rotation_control_t, turn_yaw) }, \
         { "turn_pitch", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_gimbal_rotation_control_t, turn_pitch) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GIMBAL_ROTATION_CONTROL { \
    "GIMBAL_ROTATION_CONTROL", \
    2, \
    {  { "turn_yaw", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_gimbal_rotation_control_t, turn_yaw) }, \
         { "turn_pitch", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_gimbal_rotation_control_t, turn_pitch) }, \
         } \
}
#endif

/**
 * @brief Pack a gimbal_rotation_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param turn_yaw  Yaw: -100 to 100
 * @param turn_pitch  Pitch: -100 to 100
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_rotation_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t turn_yaw, int8_t turn_pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN];
    _mav_put_int8_t(buf, 0, turn_yaw);
    _mav_put_int8_t(buf, 1, turn_pitch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN);
#else
    mavlink_gimbal_rotation_control_t packet;
    packet.turn_yaw = turn_yaw;
    packet.turn_pitch = turn_pitch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_CRC);
}

/**
 * @brief Pack a gimbal_rotation_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param turn_yaw  Yaw: -100 to 100
 * @param turn_pitch  Pitch: -100 to 100
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_rotation_control_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int8_t turn_yaw, int8_t turn_pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN];
    _mav_put_int8_t(buf, 0, turn_yaw);
    _mav_put_int8_t(buf, 1, turn_pitch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN);
#else
    mavlink_gimbal_rotation_control_t packet;
    packet.turn_yaw = turn_yaw;
    packet.turn_pitch = turn_pitch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN);
#endif
}

/**
 * @brief Pack a gimbal_rotation_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param turn_yaw  Yaw: -100 to 100
 * @param turn_pitch  Pitch: -100 to 100
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_rotation_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t turn_yaw,int8_t turn_pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN];
    _mav_put_int8_t(buf, 0, turn_yaw);
    _mav_put_int8_t(buf, 1, turn_pitch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN);
#else
    mavlink_gimbal_rotation_control_t packet;
    packet.turn_yaw = turn_yaw;
    packet.turn_pitch = turn_pitch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_CRC);
}

/**
 * @brief Encode a gimbal_rotation_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_rotation_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_rotation_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gimbal_rotation_control_t* gimbal_rotation_control)
{
    return mavlink_msg_gimbal_rotation_control_pack(system_id, component_id, msg, gimbal_rotation_control->turn_yaw, gimbal_rotation_control->turn_pitch);
}

/**
 * @brief Encode a gimbal_rotation_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_rotation_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_rotation_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gimbal_rotation_control_t* gimbal_rotation_control)
{
    return mavlink_msg_gimbal_rotation_control_pack_chan(system_id, component_id, chan, msg, gimbal_rotation_control->turn_yaw, gimbal_rotation_control->turn_pitch);
}

/**
 * @brief Encode a gimbal_rotation_control struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_rotation_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_rotation_control_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_gimbal_rotation_control_t* gimbal_rotation_control)
{
    return mavlink_msg_gimbal_rotation_control_pack_status(system_id, component_id, _status, msg,  gimbal_rotation_control->turn_yaw, gimbal_rotation_control->turn_pitch);
}

/**
 * @brief Send a gimbal_rotation_control message
 * @param chan MAVLink channel to send the message
 *
 * @param turn_yaw  Yaw: -100 to 100
 * @param turn_pitch  Pitch: -100 to 100
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gimbal_rotation_control_send(mavlink_channel_t chan, int8_t turn_yaw, int8_t turn_pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN];
    _mav_put_int8_t(buf, 0, turn_yaw);
    _mav_put_int8_t(buf, 1, turn_pitch);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL, buf, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_CRC);
#else
    mavlink_gimbal_rotation_control_t packet;
    packet.turn_yaw = turn_yaw;
    packet.turn_pitch = turn_pitch;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_CRC);
#endif
}

/**
 * @brief Send a gimbal_rotation_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gimbal_rotation_control_send_struct(mavlink_channel_t chan, const mavlink_gimbal_rotation_control_t* gimbal_rotation_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gimbal_rotation_control_send(chan, gimbal_rotation_control->turn_yaw, gimbal_rotation_control->turn_pitch);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL, (const char *)gimbal_rotation_control, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gimbal_rotation_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t turn_yaw, int8_t turn_pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int8_t(buf, 0, turn_yaw);
    _mav_put_int8_t(buf, 1, turn_pitch);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL, buf, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_CRC);
#else
    mavlink_gimbal_rotation_control_t *packet = (mavlink_gimbal_rotation_control_t *)msgbuf;
    packet->turn_yaw = turn_yaw;
    packet->turn_pitch = turn_pitch;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL, (const char *)packet, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE GIMBAL_ROTATION_CONTROL UNPACKING


/**
 * @brief Get field turn_yaw from gimbal_rotation_control message
 *
 * @return  Yaw: -100 to 100
 */
static inline int8_t mavlink_msg_gimbal_rotation_control_get_turn_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  0);
}

/**
 * @brief Get field turn_pitch from gimbal_rotation_control message
 *
 * @return  Pitch: -100 to 100
 */
static inline int8_t mavlink_msg_gimbal_rotation_control_get_turn_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Decode a gimbal_rotation_control message into a struct
 *
 * @param msg The message to decode
 * @param gimbal_rotation_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_gimbal_rotation_control_decode(const mavlink_message_t* msg, mavlink_gimbal_rotation_control_t* gimbal_rotation_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gimbal_rotation_control->turn_yaw = mavlink_msg_gimbal_rotation_control_get_turn_yaw(msg);
    gimbal_rotation_control->turn_pitch = mavlink_msg_gimbal_rotation_control_get_turn_pitch(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN;
        memset(gimbal_rotation_control, 0, MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_LEN);
    memcpy(gimbal_rotation_control, _MAV_PAYLOAD(msg), len);
#endif
}
