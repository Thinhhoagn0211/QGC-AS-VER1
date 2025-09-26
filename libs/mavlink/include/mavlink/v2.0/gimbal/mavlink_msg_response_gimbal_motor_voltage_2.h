#pragma once
// MESSAGE RESPONSE_GIMBAL_MOTOR_VOLTAGE_2 PACKING

#define MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2 90042


typedef struct __mavlink_response_gimbal_motor_voltage_2_t {
 int16_t yaw_voltage; /*<  Yaw motor voltage (divide by 1000)*/
 int16_t pitch_voltage; /*<  Pitch motor voltage (divide by 1000)*/
 int16_t roll_voltage; /*<  Roll motor voltage (divide by 1000)*/
} mavlink_response_gimbal_motor_voltage_2_t;

#define MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN 6
#define MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_MIN_LEN 6
#define MAVLINK_MSG_ID_90042_LEN 6
#define MAVLINK_MSG_ID_90042_MIN_LEN 6

#define MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_CRC 223
#define MAVLINK_MSG_ID_90042_CRC 223



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2 { \
    90042, \
    "RESPONSE_GIMBAL_MOTOR_VOLTAGE_2", \
    3, \
    {  { "yaw_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_response_gimbal_motor_voltage_2_t, yaw_voltage) }, \
         { "pitch_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_response_gimbal_motor_voltage_2_t, pitch_voltage) }, \
         { "roll_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_response_gimbal_motor_voltage_2_t, roll_voltage) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2 { \
    "RESPONSE_GIMBAL_MOTOR_VOLTAGE_2", \
    3, \
    {  { "yaw_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_response_gimbal_motor_voltage_2_t, yaw_voltage) }, \
         { "pitch_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_response_gimbal_motor_voltage_2_t, pitch_voltage) }, \
         { "roll_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_response_gimbal_motor_voltage_2_t, roll_voltage) }, \
         } \
}
#endif

/**
 * @brief Pack a response_gimbal_motor_voltage_2 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param yaw_voltage  Yaw motor voltage (divide by 1000)
 * @param pitch_voltage  Pitch motor voltage (divide by 1000)
 * @param roll_voltage  Roll motor voltage (divide by 1000)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_gimbal_motor_voltage_2_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t yaw_voltage, int16_t pitch_voltage, int16_t roll_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN];
    _mav_put_int16_t(buf, 0, yaw_voltage);
    _mav_put_int16_t(buf, 2, pitch_voltage);
    _mav_put_int16_t(buf, 4, roll_voltage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN);
#else
    mavlink_response_gimbal_motor_voltage_2_t packet;
    packet.yaw_voltage = yaw_voltage;
    packet.pitch_voltage = pitch_voltage;
    packet.roll_voltage = roll_voltage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_CRC);
}

/**
 * @brief Pack a response_gimbal_motor_voltage_2 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param yaw_voltage  Yaw motor voltage (divide by 1000)
 * @param pitch_voltage  Pitch motor voltage (divide by 1000)
 * @param roll_voltage  Roll motor voltage (divide by 1000)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_gimbal_motor_voltage_2_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t yaw_voltage, int16_t pitch_voltage, int16_t roll_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN];
    _mav_put_int16_t(buf, 0, yaw_voltage);
    _mav_put_int16_t(buf, 2, pitch_voltage);
    _mav_put_int16_t(buf, 4, roll_voltage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN);
#else
    mavlink_response_gimbal_motor_voltage_2_t packet;
    packet.yaw_voltage = yaw_voltage;
    packet.pitch_voltage = pitch_voltage;
    packet.roll_voltage = roll_voltage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN);
#endif
}

/**
 * @brief Pack a response_gimbal_motor_voltage_2 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param yaw_voltage  Yaw motor voltage (divide by 1000)
 * @param pitch_voltage  Pitch motor voltage (divide by 1000)
 * @param roll_voltage  Roll motor voltage (divide by 1000)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_gimbal_motor_voltage_2_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t yaw_voltage,int16_t pitch_voltage,int16_t roll_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN];
    _mav_put_int16_t(buf, 0, yaw_voltage);
    _mav_put_int16_t(buf, 2, pitch_voltage);
    _mav_put_int16_t(buf, 4, roll_voltage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN);
#else
    mavlink_response_gimbal_motor_voltage_2_t packet;
    packet.yaw_voltage = yaw_voltage;
    packet.pitch_voltage = pitch_voltage;
    packet.roll_voltage = roll_voltage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_CRC);
}

/**
 * @brief Encode a response_gimbal_motor_voltage_2 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_gimbal_motor_voltage_2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_gimbal_motor_voltage_2_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_gimbal_motor_voltage_2_t* response_gimbal_motor_voltage_2)
{
    return mavlink_msg_response_gimbal_motor_voltage_2_pack(system_id, component_id, msg, response_gimbal_motor_voltage_2->yaw_voltage, response_gimbal_motor_voltage_2->pitch_voltage, response_gimbal_motor_voltage_2->roll_voltage);
}

/**
 * @brief Encode a response_gimbal_motor_voltage_2 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_gimbal_motor_voltage_2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_gimbal_motor_voltage_2_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_gimbal_motor_voltage_2_t* response_gimbal_motor_voltage_2)
{
    return mavlink_msg_response_gimbal_motor_voltage_2_pack_chan(system_id, component_id, chan, msg, response_gimbal_motor_voltage_2->yaw_voltage, response_gimbal_motor_voltage_2->pitch_voltage, response_gimbal_motor_voltage_2->roll_voltage);
}

/**
 * @brief Encode a response_gimbal_motor_voltage_2 struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_gimbal_motor_voltage_2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_gimbal_motor_voltage_2_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_gimbal_motor_voltage_2_t* response_gimbal_motor_voltage_2)
{
    return mavlink_msg_response_gimbal_motor_voltage_2_pack_status(system_id, component_id, _status, msg,  response_gimbal_motor_voltage_2->yaw_voltage, response_gimbal_motor_voltage_2->pitch_voltage, response_gimbal_motor_voltage_2->roll_voltage);
}

/**
 * @brief Send a response_gimbal_motor_voltage_2 message
 * @param chan MAVLink channel to send the message
 *
 * @param yaw_voltage  Yaw motor voltage (divide by 1000)
 * @param pitch_voltage  Pitch motor voltage (divide by 1000)
 * @param roll_voltage  Roll motor voltage (divide by 1000)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_gimbal_motor_voltage_2_send(mavlink_channel_t chan, int16_t yaw_voltage, int16_t pitch_voltage, int16_t roll_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN];
    _mav_put_int16_t(buf, 0, yaw_voltage);
    _mav_put_int16_t(buf, 2, pitch_voltage);
    _mav_put_int16_t(buf, 4, roll_voltage);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2, buf, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_CRC);
#else
    mavlink_response_gimbal_motor_voltage_2_t packet;
    packet.yaw_voltage = yaw_voltage;
    packet.pitch_voltage = pitch_voltage;
    packet.roll_voltage = roll_voltage;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_CRC);
#endif
}

/**
 * @brief Send a response_gimbal_motor_voltage_2 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_gimbal_motor_voltage_2_send_struct(mavlink_channel_t chan, const mavlink_response_gimbal_motor_voltage_2_t* response_gimbal_motor_voltage_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_gimbal_motor_voltage_2_send(chan, response_gimbal_motor_voltage_2->yaw_voltage, response_gimbal_motor_voltage_2->pitch_voltage, response_gimbal_motor_voltage_2->roll_voltage);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2, (const char *)response_gimbal_motor_voltage_2, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_gimbal_motor_voltage_2_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t yaw_voltage, int16_t pitch_voltage, int16_t roll_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, yaw_voltage);
    _mav_put_int16_t(buf, 2, pitch_voltage);
    _mav_put_int16_t(buf, 4, roll_voltage);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2, buf, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_CRC);
#else
    mavlink_response_gimbal_motor_voltage_2_t *packet = (mavlink_response_gimbal_motor_voltage_2_t *)msgbuf;
    packet->yaw_voltage = yaw_voltage;
    packet->pitch_voltage = pitch_voltage;
    packet->roll_voltage = roll_voltage;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_GIMBAL_MOTOR_VOLTAGE_2 UNPACKING


/**
 * @brief Get field yaw_voltage from response_gimbal_motor_voltage_2 message
 *
 * @return  Yaw motor voltage (divide by 1000)
 */
static inline int16_t mavlink_msg_response_gimbal_motor_voltage_2_get_yaw_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field pitch_voltage from response_gimbal_motor_voltage_2 message
 *
 * @return  Pitch motor voltage (divide by 1000)
 */
static inline int16_t mavlink_msg_response_gimbal_motor_voltage_2_get_pitch_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field roll_voltage from response_gimbal_motor_voltage_2 message
 *
 * @return  Roll motor voltage (divide by 1000)
 */
static inline int16_t mavlink_msg_response_gimbal_motor_voltage_2_get_roll_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Decode a response_gimbal_motor_voltage_2 message into a struct
 *
 * @param msg The message to decode
 * @param response_gimbal_motor_voltage_2 C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_gimbal_motor_voltage_2_decode(const mavlink_message_t* msg, mavlink_response_gimbal_motor_voltage_2_t* response_gimbal_motor_voltage_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_gimbal_motor_voltage_2->yaw_voltage = mavlink_msg_response_gimbal_motor_voltage_2_get_yaw_voltage(msg);
    response_gimbal_motor_voltage_2->pitch_voltage = mavlink_msg_response_gimbal_motor_voltage_2_get_pitch_voltage(msg);
    response_gimbal_motor_voltage_2->roll_voltage = mavlink_msg_response_gimbal_motor_voltage_2_get_roll_voltage(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN;
        memset(response_gimbal_motor_voltage_2, 0, MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_LEN);
    memcpy(response_gimbal_motor_voltage_2, _MAV_PAYLOAD(msg), len);
#endif
}
