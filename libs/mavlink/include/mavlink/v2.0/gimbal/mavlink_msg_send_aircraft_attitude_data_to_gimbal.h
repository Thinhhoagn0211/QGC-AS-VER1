#pragma once
// MESSAGE SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL PACKING

#define MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL 80030


typedef struct __mavlink_send_aircraft_attitude_data_to_gimbal_t {
 uint32_t time_boot_ms; /*<  Time since boot (ms)*/
 float roll; /*<  Roll angle (rad)*/
 float pitch; /*<  Pitch angle (rad)*/
 float yaw; /*<  Yaw angle (rad)*/
 float roll_speed; /*<  Roll speed (rad/s)*/
 float pitch_speed; /*<  Pitch speed (rad/s)*/
 float yaw_speed; /*<  Yaw speed (rad/s)*/
} mavlink_send_aircraft_attitude_data_to_gimbal_t;

#define MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN 28
#define MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_MIN_LEN 28
#define MAVLINK_MSG_ID_80030_LEN 28
#define MAVLINK_MSG_ID_80030_MIN_LEN 28

#define MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_CRC 71
#define MAVLINK_MSG_ID_80030_CRC 71



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL { \
    80030, \
    "SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, time_boot_ms) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, yaw) }, \
         { "roll_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, roll_speed) }, \
         { "pitch_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, pitch_speed) }, \
         { "yaw_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, yaw_speed) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL { \
    "SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, time_boot_ms) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, yaw) }, \
         { "roll_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, roll_speed) }, \
         { "pitch_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, pitch_speed) }, \
         { "yaw_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_send_aircraft_attitude_data_to_gimbal_t, yaw_speed) }, \
         } \
}
#endif

/**
 * @brief Pack a send_aircraft_attitude_data_to_gimbal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms  Time since boot (ms)
 * @param roll  Roll angle (rad)
 * @param pitch  Pitch angle (rad)
 * @param yaw  Yaw angle (rad)
 * @param roll_speed  Roll speed (rad/s)
 * @param pitch_speed  Pitch speed (rad/s)
 * @param yaw_speed  Yaw speed (rad/s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_send_aircraft_attitude_data_to_gimbal_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float roll, float pitch, float yaw, float roll_speed, float pitch_speed, float yaw_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_float(buf, 16, roll_speed);
    _mav_put_float(buf, 20, pitch_speed);
    _mav_put_float(buf, 24, yaw_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN);
#else
    mavlink_send_aircraft_attitude_data_to_gimbal_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.roll_speed = roll_speed;
    packet.pitch_speed = pitch_speed;
    packet.yaw_speed = yaw_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_CRC);
}

/**
 * @brief Pack a send_aircraft_attitude_data_to_gimbal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms  Time since boot (ms)
 * @param roll  Roll angle (rad)
 * @param pitch  Pitch angle (rad)
 * @param yaw  Yaw angle (rad)
 * @param roll_speed  Roll speed (rad/s)
 * @param pitch_speed  Pitch speed (rad/s)
 * @param yaw_speed  Yaw speed (rad/s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_send_aircraft_attitude_data_to_gimbal_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float roll, float pitch, float yaw, float roll_speed, float pitch_speed, float yaw_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_float(buf, 16, roll_speed);
    _mav_put_float(buf, 20, pitch_speed);
    _mav_put_float(buf, 24, yaw_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN);
#else
    mavlink_send_aircraft_attitude_data_to_gimbal_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.roll_speed = roll_speed;
    packet.pitch_speed = pitch_speed;
    packet.yaw_speed = yaw_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN);
#endif
}

/**
 * @brief Pack a send_aircraft_attitude_data_to_gimbal message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms  Time since boot (ms)
 * @param roll  Roll angle (rad)
 * @param pitch  Pitch angle (rad)
 * @param yaw  Yaw angle (rad)
 * @param roll_speed  Roll speed (rad/s)
 * @param pitch_speed  Pitch speed (rad/s)
 * @param yaw_speed  Yaw speed (rad/s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_send_aircraft_attitude_data_to_gimbal_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,float roll,float pitch,float yaw,float roll_speed,float pitch_speed,float yaw_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_float(buf, 16, roll_speed);
    _mav_put_float(buf, 20, pitch_speed);
    _mav_put_float(buf, 24, yaw_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN);
#else
    mavlink_send_aircraft_attitude_data_to_gimbal_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.roll_speed = roll_speed;
    packet.pitch_speed = pitch_speed;
    packet.yaw_speed = yaw_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_CRC);
}

/**
 * @brief Encode a send_aircraft_attitude_data_to_gimbal struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param send_aircraft_attitude_data_to_gimbal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_send_aircraft_attitude_data_to_gimbal_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_send_aircraft_attitude_data_to_gimbal_t* send_aircraft_attitude_data_to_gimbal)
{
    return mavlink_msg_send_aircraft_attitude_data_to_gimbal_pack(system_id, component_id, msg, send_aircraft_attitude_data_to_gimbal->time_boot_ms, send_aircraft_attitude_data_to_gimbal->roll, send_aircraft_attitude_data_to_gimbal->pitch, send_aircraft_attitude_data_to_gimbal->yaw, send_aircraft_attitude_data_to_gimbal->roll_speed, send_aircraft_attitude_data_to_gimbal->pitch_speed, send_aircraft_attitude_data_to_gimbal->yaw_speed);
}

/**
 * @brief Encode a send_aircraft_attitude_data_to_gimbal struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param send_aircraft_attitude_data_to_gimbal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_send_aircraft_attitude_data_to_gimbal_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_send_aircraft_attitude_data_to_gimbal_t* send_aircraft_attitude_data_to_gimbal)
{
    return mavlink_msg_send_aircraft_attitude_data_to_gimbal_pack_chan(system_id, component_id, chan, msg, send_aircraft_attitude_data_to_gimbal->time_boot_ms, send_aircraft_attitude_data_to_gimbal->roll, send_aircraft_attitude_data_to_gimbal->pitch, send_aircraft_attitude_data_to_gimbal->yaw, send_aircraft_attitude_data_to_gimbal->roll_speed, send_aircraft_attitude_data_to_gimbal->pitch_speed, send_aircraft_attitude_data_to_gimbal->yaw_speed);
}

/**
 * @brief Encode a send_aircraft_attitude_data_to_gimbal struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param send_aircraft_attitude_data_to_gimbal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_send_aircraft_attitude_data_to_gimbal_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_send_aircraft_attitude_data_to_gimbal_t* send_aircraft_attitude_data_to_gimbal)
{
    return mavlink_msg_send_aircraft_attitude_data_to_gimbal_pack_status(system_id, component_id, _status, msg,  send_aircraft_attitude_data_to_gimbal->time_boot_ms, send_aircraft_attitude_data_to_gimbal->roll, send_aircraft_attitude_data_to_gimbal->pitch, send_aircraft_attitude_data_to_gimbal->yaw, send_aircraft_attitude_data_to_gimbal->roll_speed, send_aircraft_attitude_data_to_gimbal->pitch_speed, send_aircraft_attitude_data_to_gimbal->yaw_speed);
}

/**
 * @brief Send a send_aircraft_attitude_data_to_gimbal message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms  Time since boot (ms)
 * @param roll  Roll angle (rad)
 * @param pitch  Pitch angle (rad)
 * @param yaw  Yaw angle (rad)
 * @param roll_speed  Roll speed (rad/s)
 * @param pitch_speed  Pitch speed (rad/s)
 * @param yaw_speed  Yaw speed (rad/s)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_send_aircraft_attitude_data_to_gimbal_send(mavlink_channel_t chan, uint32_t time_boot_ms, float roll, float pitch, float yaw, float roll_speed, float pitch_speed, float yaw_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_float(buf, 16, roll_speed);
    _mav_put_float(buf, 20, pitch_speed);
    _mav_put_float(buf, 24, yaw_speed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL, buf, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_CRC);
#else
    mavlink_send_aircraft_attitude_data_to_gimbal_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.roll_speed = roll_speed;
    packet.pitch_speed = pitch_speed;
    packet.yaw_speed = yaw_speed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL, (const char *)&packet, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_CRC);
#endif
}

/**
 * @brief Send a send_aircraft_attitude_data_to_gimbal message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_send_aircraft_attitude_data_to_gimbal_send_struct(mavlink_channel_t chan, const mavlink_send_aircraft_attitude_data_to_gimbal_t* send_aircraft_attitude_data_to_gimbal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_send_aircraft_attitude_data_to_gimbal_send(chan, send_aircraft_attitude_data_to_gimbal->time_boot_ms, send_aircraft_attitude_data_to_gimbal->roll, send_aircraft_attitude_data_to_gimbal->pitch, send_aircraft_attitude_data_to_gimbal->yaw, send_aircraft_attitude_data_to_gimbal->roll_speed, send_aircraft_attitude_data_to_gimbal->pitch_speed, send_aircraft_attitude_data_to_gimbal->yaw_speed);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL, (const char *)send_aircraft_attitude_data_to_gimbal, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_CRC);
#endif
}

#if MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_send_aircraft_attitude_data_to_gimbal_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float roll, float pitch, float yaw, float roll_speed, float pitch_speed, float yaw_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_float(buf, 16, roll_speed);
    _mav_put_float(buf, 20, pitch_speed);
    _mav_put_float(buf, 24, yaw_speed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL, buf, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_CRC);
#else
    mavlink_send_aircraft_attitude_data_to_gimbal_t *packet = (mavlink_send_aircraft_attitude_data_to_gimbal_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->yaw = yaw;
    packet->roll_speed = roll_speed;
    packet->pitch_speed = pitch_speed;
    packet->yaw_speed = yaw_speed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL, (const char *)packet, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_CRC);
#endif
}
#endif

#endif

// MESSAGE SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL UNPACKING


/**
 * @brief Get field time_boot_ms from send_aircraft_attitude_data_to_gimbal message
 *
 * @return  Time since boot (ms)
 */
static inline uint32_t mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field roll from send_aircraft_attitude_data_to_gimbal message
 *
 * @return  Roll angle (rad)
 */
static inline float mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pitch from send_aircraft_attitude_data_to_gimbal message
 *
 * @return  Pitch angle (rad)
 */
static inline float mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field yaw from send_aircraft_attitude_data_to_gimbal message
 *
 * @return  Yaw angle (rad)
 */
static inline float mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field roll_speed from send_aircraft_attitude_data_to_gimbal message
 *
 * @return  Roll speed (rad/s)
 */
static inline float mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_roll_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field pitch_speed from send_aircraft_attitude_data_to_gimbal message
 *
 * @return  Pitch speed (rad/s)
 */
static inline float mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_pitch_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field yaw_speed from send_aircraft_attitude_data_to_gimbal message
 *
 * @return  Yaw speed (rad/s)
 */
static inline float mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_yaw_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a send_aircraft_attitude_data_to_gimbal message into a struct
 *
 * @param msg The message to decode
 * @param send_aircraft_attitude_data_to_gimbal C-struct to decode the message contents into
 */
static inline void mavlink_msg_send_aircraft_attitude_data_to_gimbal_decode(const mavlink_message_t* msg, mavlink_send_aircraft_attitude_data_to_gimbal_t* send_aircraft_attitude_data_to_gimbal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    send_aircraft_attitude_data_to_gimbal->time_boot_ms = mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_time_boot_ms(msg);
    send_aircraft_attitude_data_to_gimbal->roll = mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_roll(msg);
    send_aircraft_attitude_data_to_gimbal->pitch = mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_pitch(msg);
    send_aircraft_attitude_data_to_gimbal->yaw = mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_yaw(msg);
    send_aircraft_attitude_data_to_gimbal->roll_speed = mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_roll_speed(msg);
    send_aircraft_attitude_data_to_gimbal->pitch_speed = mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_pitch_speed(msg);
    send_aircraft_attitude_data_to_gimbal->yaw_speed = mavlink_msg_send_aircraft_attitude_data_to_gimbal_get_yaw_speed(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN? msg->len : MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN;
        memset(send_aircraft_attitude_data_to_gimbal, 0, MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_LEN);
    memcpy(send_aircraft_attitude_data_to_gimbal, _MAV_PAYLOAD(msg), len);
#endif
}
