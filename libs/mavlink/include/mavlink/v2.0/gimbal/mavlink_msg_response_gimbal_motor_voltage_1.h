#pragma once
// MESSAGE RESPONSE_GIMBAL_MOTOR_VOLTAGE_1 PACKING

#define MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1 90041


typedef struct __mavlink_response_gimbal_motor_voltage_1_t {
 int16_t yaw_motor_voltage; /*<  Yaw voltage (divide by 1000)*/
 int16_t pitch_motor_voltage; /*<  Pitch voltage (divide by 1000)*/
 int16_t roll_motor_voltage; /*<  Roll voltage (divide by 1000)*/
 uint8_t sta; /*<  1: Success, 0: Fail*/
} mavlink_response_gimbal_motor_voltage_1_t;

#define MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN 7
#define MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_MIN_LEN 7
#define MAVLINK_MSG_ID_90041_LEN 7
#define MAVLINK_MSG_ID_90041_MIN_LEN 7

#define MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_CRC 218
#define MAVLINK_MSG_ID_90041_CRC 218



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1 { \
    90041, \
    "RESPONSE_GIMBAL_MOTOR_VOLTAGE_1", \
    4, \
    {  { "yaw_motor_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_response_gimbal_motor_voltage_1_t, yaw_motor_voltage) }, \
         { "pitch_motor_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_response_gimbal_motor_voltage_1_t, pitch_motor_voltage) }, \
         { "roll_motor_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_response_gimbal_motor_voltage_1_t, roll_motor_voltage) }, \
         { "sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_response_gimbal_motor_voltage_1_t, sta) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1 { \
    "RESPONSE_GIMBAL_MOTOR_VOLTAGE_1", \
    4, \
    {  { "yaw_motor_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_response_gimbal_motor_voltage_1_t, yaw_motor_voltage) }, \
         { "pitch_motor_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_response_gimbal_motor_voltage_1_t, pitch_motor_voltage) }, \
         { "roll_motor_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_response_gimbal_motor_voltage_1_t, roll_motor_voltage) }, \
         { "sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_response_gimbal_motor_voltage_1_t, sta) }, \
         } \
}
#endif

/**
 * @brief Pack a response_gimbal_motor_voltage_1 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param yaw_motor_voltage  Yaw voltage (divide by 1000)
 * @param pitch_motor_voltage  Pitch voltage (divide by 1000)
 * @param roll_motor_voltage  Roll voltage (divide by 1000)
 * @param sta  1: Success, 0: Fail
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_gimbal_motor_voltage_1_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t yaw_motor_voltage, int16_t pitch_motor_voltage, int16_t roll_motor_voltage, uint8_t sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN];
    _mav_put_int16_t(buf, 0, yaw_motor_voltage);
    _mav_put_int16_t(buf, 2, pitch_motor_voltage);
    _mav_put_int16_t(buf, 4, roll_motor_voltage);
    _mav_put_uint8_t(buf, 6, sta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN);
#else
    mavlink_response_gimbal_motor_voltage_1_t packet;
    packet.yaw_motor_voltage = yaw_motor_voltage;
    packet.pitch_motor_voltage = pitch_motor_voltage;
    packet.roll_motor_voltage = roll_motor_voltage;
    packet.sta = sta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_CRC);
}

/**
 * @brief Pack a response_gimbal_motor_voltage_1 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param yaw_motor_voltage  Yaw voltage (divide by 1000)
 * @param pitch_motor_voltage  Pitch voltage (divide by 1000)
 * @param roll_motor_voltage  Roll voltage (divide by 1000)
 * @param sta  1: Success, 0: Fail
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_gimbal_motor_voltage_1_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t yaw_motor_voltage, int16_t pitch_motor_voltage, int16_t roll_motor_voltage, uint8_t sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN];
    _mav_put_int16_t(buf, 0, yaw_motor_voltage);
    _mav_put_int16_t(buf, 2, pitch_motor_voltage);
    _mav_put_int16_t(buf, 4, roll_motor_voltage);
    _mav_put_uint8_t(buf, 6, sta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN);
#else
    mavlink_response_gimbal_motor_voltage_1_t packet;
    packet.yaw_motor_voltage = yaw_motor_voltage;
    packet.pitch_motor_voltage = pitch_motor_voltage;
    packet.roll_motor_voltage = roll_motor_voltage;
    packet.sta = sta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN);
#endif
}

/**
 * @brief Pack a response_gimbal_motor_voltage_1 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param yaw_motor_voltage  Yaw voltage (divide by 1000)
 * @param pitch_motor_voltage  Pitch voltage (divide by 1000)
 * @param roll_motor_voltage  Roll voltage (divide by 1000)
 * @param sta  1: Success, 0: Fail
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_gimbal_motor_voltage_1_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t yaw_motor_voltage,int16_t pitch_motor_voltage,int16_t roll_motor_voltage,uint8_t sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN];
    _mav_put_int16_t(buf, 0, yaw_motor_voltage);
    _mav_put_int16_t(buf, 2, pitch_motor_voltage);
    _mav_put_int16_t(buf, 4, roll_motor_voltage);
    _mav_put_uint8_t(buf, 6, sta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN);
#else
    mavlink_response_gimbal_motor_voltage_1_t packet;
    packet.yaw_motor_voltage = yaw_motor_voltage;
    packet.pitch_motor_voltage = pitch_motor_voltage;
    packet.roll_motor_voltage = roll_motor_voltage;
    packet.sta = sta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_CRC);
}

/**
 * @brief Encode a response_gimbal_motor_voltage_1 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_gimbal_motor_voltage_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_gimbal_motor_voltage_1_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_gimbal_motor_voltage_1_t* response_gimbal_motor_voltage_1)
{
    return mavlink_msg_response_gimbal_motor_voltage_1_pack(system_id, component_id, msg, response_gimbal_motor_voltage_1->yaw_motor_voltage, response_gimbal_motor_voltage_1->pitch_motor_voltage, response_gimbal_motor_voltage_1->roll_motor_voltage, response_gimbal_motor_voltage_1->sta);
}

/**
 * @brief Encode a response_gimbal_motor_voltage_1 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_gimbal_motor_voltage_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_gimbal_motor_voltage_1_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_gimbal_motor_voltage_1_t* response_gimbal_motor_voltage_1)
{
    return mavlink_msg_response_gimbal_motor_voltage_1_pack_chan(system_id, component_id, chan, msg, response_gimbal_motor_voltage_1->yaw_motor_voltage, response_gimbal_motor_voltage_1->pitch_motor_voltage, response_gimbal_motor_voltage_1->roll_motor_voltage, response_gimbal_motor_voltage_1->sta);
}

/**
 * @brief Encode a response_gimbal_motor_voltage_1 struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_gimbal_motor_voltage_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_gimbal_motor_voltage_1_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_gimbal_motor_voltage_1_t* response_gimbal_motor_voltage_1)
{
    return mavlink_msg_response_gimbal_motor_voltage_1_pack_status(system_id, component_id, _status, msg,  response_gimbal_motor_voltage_1->yaw_motor_voltage, response_gimbal_motor_voltage_1->pitch_motor_voltage, response_gimbal_motor_voltage_1->roll_motor_voltage, response_gimbal_motor_voltage_1->sta);
}

/**
 * @brief Send a response_gimbal_motor_voltage_1 message
 * @param chan MAVLink channel to send the message
 *
 * @param yaw_motor_voltage  Yaw voltage (divide by 1000)
 * @param pitch_motor_voltage  Pitch voltage (divide by 1000)
 * @param roll_motor_voltage  Roll voltage (divide by 1000)
 * @param sta  1: Success, 0: Fail
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_gimbal_motor_voltage_1_send(mavlink_channel_t chan, int16_t yaw_motor_voltage, int16_t pitch_motor_voltage, int16_t roll_motor_voltage, uint8_t sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN];
    _mav_put_int16_t(buf, 0, yaw_motor_voltage);
    _mav_put_int16_t(buf, 2, pitch_motor_voltage);
    _mav_put_int16_t(buf, 4, roll_motor_voltage);
    _mav_put_uint8_t(buf, 6, sta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1, buf, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_CRC);
#else
    mavlink_response_gimbal_motor_voltage_1_t packet;
    packet.yaw_motor_voltage = yaw_motor_voltage;
    packet.pitch_motor_voltage = pitch_motor_voltage;
    packet.roll_motor_voltage = roll_motor_voltage;
    packet.sta = sta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_CRC);
#endif
}

/**
 * @brief Send a response_gimbal_motor_voltage_1 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_gimbal_motor_voltage_1_send_struct(mavlink_channel_t chan, const mavlink_response_gimbal_motor_voltage_1_t* response_gimbal_motor_voltage_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_gimbal_motor_voltage_1_send(chan, response_gimbal_motor_voltage_1->yaw_motor_voltage, response_gimbal_motor_voltage_1->pitch_motor_voltage, response_gimbal_motor_voltage_1->roll_motor_voltage, response_gimbal_motor_voltage_1->sta);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1, (const char *)response_gimbal_motor_voltage_1, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_gimbal_motor_voltage_1_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t yaw_motor_voltage, int16_t pitch_motor_voltage, int16_t roll_motor_voltage, uint8_t sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, yaw_motor_voltage);
    _mav_put_int16_t(buf, 2, pitch_motor_voltage);
    _mav_put_int16_t(buf, 4, roll_motor_voltage);
    _mav_put_uint8_t(buf, 6, sta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1, buf, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_CRC);
#else
    mavlink_response_gimbal_motor_voltage_1_t *packet = (mavlink_response_gimbal_motor_voltage_1_t *)msgbuf;
    packet->yaw_motor_voltage = yaw_motor_voltage;
    packet->pitch_motor_voltage = pitch_motor_voltage;
    packet->roll_motor_voltage = roll_motor_voltage;
    packet->sta = sta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_GIMBAL_MOTOR_VOLTAGE_1 UNPACKING


/**
 * @brief Get field yaw_motor_voltage from response_gimbal_motor_voltage_1 message
 *
 * @return  Yaw voltage (divide by 1000)
 */
static inline int16_t mavlink_msg_response_gimbal_motor_voltage_1_get_yaw_motor_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field pitch_motor_voltage from response_gimbal_motor_voltage_1 message
 *
 * @return  Pitch voltage (divide by 1000)
 */
static inline int16_t mavlink_msg_response_gimbal_motor_voltage_1_get_pitch_motor_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field roll_motor_voltage from response_gimbal_motor_voltage_1 message
 *
 * @return  Roll voltage (divide by 1000)
 */
static inline int16_t mavlink_msg_response_gimbal_motor_voltage_1_get_roll_motor_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field sta from response_gimbal_motor_voltage_1 message
 *
 * @return  1: Success, 0: Fail
 */
static inline uint8_t mavlink_msg_response_gimbal_motor_voltage_1_get_sta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a response_gimbal_motor_voltage_1 message into a struct
 *
 * @param msg The message to decode
 * @param response_gimbal_motor_voltage_1 C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_gimbal_motor_voltage_1_decode(const mavlink_message_t* msg, mavlink_response_gimbal_motor_voltage_1_t* response_gimbal_motor_voltage_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_gimbal_motor_voltage_1->yaw_motor_voltage = mavlink_msg_response_gimbal_motor_voltage_1_get_yaw_motor_voltage(msg);
    response_gimbal_motor_voltage_1->pitch_motor_voltage = mavlink_msg_response_gimbal_motor_voltage_1_get_pitch_motor_voltage(msg);
    response_gimbal_motor_voltage_1->roll_motor_voltage = mavlink_msg_response_gimbal_motor_voltage_1_get_roll_motor_voltage(msg);
    response_gimbal_motor_voltage_1->sta = mavlink_msg_response_gimbal_motor_voltage_1_get_sta(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN;
        memset(response_gimbal_motor_voltage_1, 0, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_LEN);
    memcpy(response_gimbal_motor_voltage_1, _MAV_PAYLOAD(msg), len);
#endif
}
