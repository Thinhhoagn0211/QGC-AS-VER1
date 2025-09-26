#pragma once
// MESSAGE RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA PACKING

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA 90013


typedef struct __mavlink_response_request_gimbal_attitude_data_t {
 int16_t yaw; /*<  Yaw * 10*/
 int16_t pitch; /*<  Pitch * 10*/
 int16_t roll; /*<  Roll * 10*/
 int16_t yaw_velocity; /*<  Gyro yaw vel*/
 int16_t pitch_velocity; /*<  Gyro pitch vel*/
 int16_t roll_velocity; /*<  Gyro roll vel*/
} mavlink_response_request_gimbal_attitude_data_t;

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN 12
#define MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN 12
#define MAVLINK_MSG_ID_90013_LEN 12
#define MAVLINK_MSG_ID_90013_MIN_LEN 12

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_CRC 192
#define MAVLINK_MSG_ID_90013_CRC 192



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA { \
    90013, \
    "RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA", \
    6, \
    {  { "yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_response_request_gimbal_attitude_data_t, yaw) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_response_request_gimbal_attitude_data_t, pitch) }, \
         { "roll", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_response_request_gimbal_attitude_data_t, roll) }, \
         { "yaw_velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_response_request_gimbal_attitude_data_t, yaw_velocity) }, \
         { "pitch_velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_response_request_gimbal_attitude_data_t, pitch_velocity) }, \
         { "roll_velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_response_request_gimbal_attitude_data_t, roll_velocity) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA { \
    "RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA", \
    6, \
    {  { "yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_response_request_gimbal_attitude_data_t, yaw) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_response_request_gimbal_attitude_data_t, pitch) }, \
         { "roll", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_response_request_gimbal_attitude_data_t, roll) }, \
         { "yaw_velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_response_request_gimbal_attitude_data_t, yaw_velocity) }, \
         { "pitch_velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_response_request_gimbal_attitude_data_t, pitch_velocity) }, \
         { "roll_velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_response_request_gimbal_attitude_data_t, roll_velocity) }, \
         } \
}
#endif

/**
 * @brief Pack a response_request_gimbal_attitude_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param yaw  Yaw * 10
 * @param pitch  Pitch * 10
 * @param roll  Roll * 10
 * @param yaw_velocity  Gyro yaw vel
 * @param pitch_velocity  Gyro pitch vel
 * @param roll_velocity  Gyro roll vel
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_gimbal_attitude_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t yaw, int16_t pitch, int16_t roll, int16_t yaw_velocity, int16_t pitch_velocity, int16_t roll_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN];
    _mav_put_int16_t(buf, 0, yaw);
    _mav_put_int16_t(buf, 2, pitch);
    _mav_put_int16_t(buf, 4, roll);
    _mav_put_int16_t(buf, 6, yaw_velocity);
    _mav_put_int16_t(buf, 8, pitch_velocity);
    _mav_put_int16_t(buf, 10, roll_velocity);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN);
#else
    mavlink_response_request_gimbal_attitude_data_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.yaw_velocity = yaw_velocity;
    packet.pitch_velocity = pitch_velocity;
    packet.roll_velocity = roll_velocity;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_CRC);
}

/**
 * @brief Pack a response_request_gimbal_attitude_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param yaw  Yaw * 10
 * @param pitch  Pitch * 10
 * @param roll  Roll * 10
 * @param yaw_velocity  Gyro yaw vel
 * @param pitch_velocity  Gyro pitch vel
 * @param roll_velocity  Gyro roll vel
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_gimbal_attitude_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t yaw, int16_t pitch, int16_t roll, int16_t yaw_velocity, int16_t pitch_velocity, int16_t roll_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN];
    _mav_put_int16_t(buf, 0, yaw);
    _mav_put_int16_t(buf, 2, pitch);
    _mav_put_int16_t(buf, 4, roll);
    _mav_put_int16_t(buf, 6, yaw_velocity);
    _mav_put_int16_t(buf, 8, pitch_velocity);
    _mav_put_int16_t(buf, 10, roll_velocity);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN);
#else
    mavlink_response_request_gimbal_attitude_data_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.yaw_velocity = yaw_velocity;
    packet.pitch_velocity = pitch_velocity;
    packet.roll_velocity = roll_velocity;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN);
#endif
}

/**
 * @brief Pack a response_request_gimbal_attitude_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param yaw  Yaw * 10
 * @param pitch  Pitch * 10
 * @param roll  Roll * 10
 * @param yaw_velocity  Gyro yaw vel
 * @param pitch_velocity  Gyro pitch vel
 * @param roll_velocity  Gyro roll vel
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_gimbal_attitude_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t yaw,int16_t pitch,int16_t roll,int16_t yaw_velocity,int16_t pitch_velocity,int16_t roll_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN];
    _mav_put_int16_t(buf, 0, yaw);
    _mav_put_int16_t(buf, 2, pitch);
    _mav_put_int16_t(buf, 4, roll);
    _mav_put_int16_t(buf, 6, yaw_velocity);
    _mav_put_int16_t(buf, 8, pitch_velocity);
    _mav_put_int16_t(buf, 10, roll_velocity);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN);
#else
    mavlink_response_request_gimbal_attitude_data_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.yaw_velocity = yaw_velocity;
    packet.pitch_velocity = pitch_velocity;
    packet.roll_velocity = roll_velocity;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_CRC);
}

/**
 * @brief Encode a response_request_gimbal_attitude_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_request_gimbal_attitude_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_gimbal_attitude_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_request_gimbal_attitude_data_t* response_request_gimbal_attitude_data)
{
    return mavlink_msg_response_request_gimbal_attitude_data_pack(system_id, component_id, msg, response_request_gimbal_attitude_data->yaw, response_request_gimbal_attitude_data->pitch, response_request_gimbal_attitude_data->roll, response_request_gimbal_attitude_data->yaw_velocity, response_request_gimbal_attitude_data->pitch_velocity, response_request_gimbal_attitude_data->roll_velocity);
}

/**
 * @brief Encode a response_request_gimbal_attitude_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_request_gimbal_attitude_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_gimbal_attitude_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_request_gimbal_attitude_data_t* response_request_gimbal_attitude_data)
{
    return mavlink_msg_response_request_gimbal_attitude_data_pack_chan(system_id, component_id, chan, msg, response_request_gimbal_attitude_data->yaw, response_request_gimbal_attitude_data->pitch, response_request_gimbal_attitude_data->roll, response_request_gimbal_attitude_data->yaw_velocity, response_request_gimbal_attitude_data->pitch_velocity, response_request_gimbal_attitude_data->roll_velocity);
}

/**
 * @brief Encode a response_request_gimbal_attitude_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_request_gimbal_attitude_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_gimbal_attitude_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_request_gimbal_attitude_data_t* response_request_gimbal_attitude_data)
{
    return mavlink_msg_response_request_gimbal_attitude_data_pack_status(system_id, component_id, _status, msg,  response_request_gimbal_attitude_data->yaw, response_request_gimbal_attitude_data->pitch, response_request_gimbal_attitude_data->roll, response_request_gimbal_attitude_data->yaw_velocity, response_request_gimbal_attitude_data->pitch_velocity, response_request_gimbal_attitude_data->roll_velocity);
}

/**
 * @brief Send a response_request_gimbal_attitude_data message
 * @param chan MAVLink channel to send the message
 *
 * @param yaw  Yaw * 10
 * @param pitch  Pitch * 10
 * @param roll  Roll * 10
 * @param yaw_velocity  Gyro yaw vel
 * @param pitch_velocity  Gyro pitch vel
 * @param roll_velocity  Gyro roll vel
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_request_gimbal_attitude_data_send(mavlink_channel_t chan, int16_t yaw, int16_t pitch, int16_t roll, int16_t yaw_velocity, int16_t pitch_velocity, int16_t roll_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN];
    _mav_put_int16_t(buf, 0, yaw);
    _mav_put_int16_t(buf, 2, pitch);
    _mav_put_int16_t(buf, 4, roll);
    _mav_put_int16_t(buf, 6, yaw_velocity);
    _mav_put_int16_t(buf, 8, pitch_velocity);
    _mav_put_int16_t(buf, 10, roll_velocity);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_CRC);
#else
    mavlink_response_request_gimbal_attitude_data_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.yaw_velocity = yaw_velocity;
    packet.pitch_velocity = pitch_velocity;
    packet.roll_velocity = roll_velocity;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_CRC);
#endif
}

/**
 * @brief Send a response_request_gimbal_attitude_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_request_gimbal_attitude_data_send_struct(mavlink_channel_t chan, const mavlink_response_request_gimbal_attitude_data_t* response_request_gimbal_attitude_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_request_gimbal_attitude_data_send(chan, response_request_gimbal_attitude_data->yaw, response_request_gimbal_attitude_data->pitch, response_request_gimbal_attitude_data->roll, response_request_gimbal_attitude_data->yaw_velocity, response_request_gimbal_attitude_data->pitch_velocity, response_request_gimbal_attitude_data->roll_velocity);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA, (const char *)response_request_gimbal_attitude_data, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_request_gimbal_attitude_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t yaw, int16_t pitch, int16_t roll, int16_t yaw_velocity, int16_t pitch_velocity, int16_t roll_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, yaw);
    _mav_put_int16_t(buf, 2, pitch);
    _mav_put_int16_t(buf, 4, roll);
    _mav_put_int16_t(buf, 6, yaw_velocity);
    _mav_put_int16_t(buf, 8, pitch_velocity);
    _mav_put_int16_t(buf, 10, roll_velocity);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_CRC);
#else
    mavlink_response_request_gimbal_attitude_data_t *packet = (mavlink_response_request_gimbal_attitude_data_t *)msgbuf;
    packet->yaw = yaw;
    packet->pitch = pitch;
    packet->roll = roll;
    packet->yaw_velocity = yaw_velocity;
    packet->pitch_velocity = pitch_velocity;
    packet->roll_velocity = roll_velocity;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA UNPACKING


/**
 * @brief Get field yaw from response_request_gimbal_attitude_data message
 *
 * @return  Yaw * 10
 */
static inline int16_t mavlink_msg_response_request_gimbal_attitude_data_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field pitch from response_request_gimbal_attitude_data message
 *
 * @return  Pitch * 10
 */
static inline int16_t mavlink_msg_response_request_gimbal_attitude_data_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field roll from response_request_gimbal_attitude_data message
 *
 * @return  Roll * 10
 */
static inline int16_t mavlink_msg_response_request_gimbal_attitude_data_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field yaw_velocity from response_request_gimbal_attitude_data message
 *
 * @return  Gyro yaw vel
 */
static inline int16_t mavlink_msg_response_request_gimbal_attitude_data_get_yaw_velocity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field pitch_velocity from response_request_gimbal_attitude_data message
 *
 * @return  Gyro pitch vel
 */
static inline int16_t mavlink_msg_response_request_gimbal_attitude_data_get_pitch_velocity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field roll_velocity from response_request_gimbal_attitude_data message
 *
 * @return  Gyro roll vel
 */
static inline int16_t mavlink_msg_response_request_gimbal_attitude_data_get_roll_velocity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Decode a response_request_gimbal_attitude_data message into a struct
 *
 * @param msg The message to decode
 * @param response_request_gimbal_attitude_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_request_gimbal_attitude_data_decode(const mavlink_message_t* msg, mavlink_response_request_gimbal_attitude_data_t* response_request_gimbal_attitude_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_request_gimbal_attitude_data->yaw = mavlink_msg_response_request_gimbal_attitude_data_get_yaw(msg);
    response_request_gimbal_attitude_data->pitch = mavlink_msg_response_request_gimbal_attitude_data_get_pitch(msg);
    response_request_gimbal_attitude_data->roll = mavlink_msg_response_request_gimbal_attitude_data_get_roll(msg);
    response_request_gimbal_attitude_data->yaw_velocity = mavlink_msg_response_request_gimbal_attitude_data_get_yaw_velocity(msg);
    response_request_gimbal_attitude_data->pitch_velocity = mavlink_msg_response_request_gimbal_attitude_data_get_pitch_velocity(msg);
    response_request_gimbal_attitude_data->roll_velocity = mavlink_msg_response_request_gimbal_attitude_data_get_roll_velocity(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN;
        memset(response_request_gimbal_attitude_data, 0, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_LEN);
    memcpy(response_request_gimbal_attitude_data, _MAV_PAYLOAD(msg), len);
#endif
}
