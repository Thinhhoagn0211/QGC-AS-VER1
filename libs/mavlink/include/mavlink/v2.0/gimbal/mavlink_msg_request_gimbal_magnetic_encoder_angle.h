#pragma once
// MESSAGE REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE PACKING

#define MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE 80034


typedef struct __mavlink_request_gimbal_magnetic_encoder_angle_t {
 uint16_t yaw_angle; /*<  yaw angle*/
 uint16_t pitch_angle; /*<  pitch angle*/
 uint16_t roll_angle; /*<  roll angle*/
} mavlink_request_gimbal_magnetic_encoder_angle_t;

#define MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN 6
#define MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_MIN_LEN 6
#define MAVLINK_MSG_ID_80034_LEN 6
#define MAVLINK_MSG_ID_80034_MIN_LEN 6

#define MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_CRC 8
#define MAVLINK_MSG_ID_80034_CRC 8



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE { \
    80034, \
    "REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE", \
    3, \
    {  { "yaw_angle", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_request_gimbal_magnetic_encoder_angle_t, yaw_angle) }, \
         { "pitch_angle", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_request_gimbal_magnetic_encoder_angle_t, pitch_angle) }, \
         { "roll_angle", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_request_gimbal_magnetic_encoder_angle_t, roll_angle) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE { \
    "REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE", \
    3, \
    {  { "yaw_angle", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_request_gimbal_magnetic_encoder_angle_t, yaw_angle) }, \
         { "pitch_angle", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_request_gimbal_magnetic_encoder_angle_t, pitch_angle) }, \
         { "roll_angle", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_request_gimbal_magnetic_encoder_angle_t, roll_angle) }, \
         } \
}
#endif

/**
 * @brief Pack a request_gimbal_magnetic_encoder_angle message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param yaw_angle  yaw angle
 * @param pitch_angle  pitch angle
 * @param roll_angle  roll angle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_gimbal_magnetic_encoder_angle_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t yaw_angle, uint16_t pitch_angle, uint16_t roll_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN];
    _mav_put_uint16_t(buf, 0, yaw_angle);
    _mav_put_uint16_t(buf, 2, pitch_angle);
    _mav_put_uint16_t(buf, 4, roll_angle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN);
#else
    mavlink_request_gimbal_magnetic_encoder_angle_t packet;
    packet.yaw_angle = yaw_angle;
    packet.pitch_angle = pitch_angle;
    packet.roll_angle = roll_angle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_CRC);
}

/**
 * @brief Pack a request_gimbal_magnetic_encoder_angle message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param yaw_angle  yaw angle
 * @param pitch_angle  pitch angle
 * @param roll_angle  roll angle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_gimbal_magnetic_encoder_angle_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t yaw_angle, uint16_t pitch_angle, uint16_t roll_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN];
    _mav_put_uint16_t(buf, 0, yaw_angle);
    _mav_put_uint16_t(buf, 2, pitch_angle);
    _mav_put_uint16_t(buf, 4, roll_angle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN);
#else
    mavlink_request_gimbal_magnetic_encoder_angle_t packet;
    packet.yaw_angle = yaw_angle;
    packet.pitch_angle = pitch_angle;
    packet.roll_angle = roll_angle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN);
#endif
}

/**
 * @brief Pack a request_gimbal_magnetic_encoder_angle message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param yaw_angle  yaw angle
 * @param pitch_angle  pitch angle
 * @param roll_angle  roll angle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_gimbal_magnetic_encoder_angle_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t yaw_angle,uint16_t pitch_angle,uint16_t roll_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN];
    _mav_put_uint16_t(buf, 0, yaw_angle);
    _mav_put_uint16_t(buf, 2, pitch_angle);
    _mav_put_uint16_t(buf, 4, roll_angle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN);
#else
    mavlink_request_gimbal_magnetic_encoder_angle_t packet;
    packet.yaw_angle = yaw_angle;
    packet.pitch_angle = pitch_angle;
    packet.roll_angle = roll_angle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_CRC);
}

/**
 * @brief Encode a request_gimbal_magnetic_encoder_angle struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param request_gimbal_magnetic_encoder_angle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_gimbal_magnetic_encoder_angle_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_request_gimbal_magnetic_encoder_angle_t* request_gimbal_magnetic_encoder_angle)
{
    return mavlink_msg_request_gimbal_magnetic_encoder_angle_pack(system_id, component_id, msg, request_gimbal_magnetic_encoder_angle->yaw_angle, request_gimbal_magnetic_encoder_angle->pitch_angle, request_gimbal_magnetic_encoder_angle->roll_angle);
}

/**
 * @brief Encode a request_gimbal_magnetic_encoder_angle struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_gimbal_magnetic_encoder_angle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_gimbal_magnetic_encoder_angle_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_request_gimbal_magnetic_encoder_angle_t* request_gimbal_magnetic_encoder_angle)
{
    return mavlink_msg_request_gimbal_magnetic_encoder_angle_pack_chan(system_id, component_id, chan, msg, request_gimbal_magnetic_encoder_angle->yaw_angle, request_gimbal_magnetic_encoder_angle->pitch_angle, request_gimbal_magnetic_encoder_angle->roll_angle);
}

/**
 * @brief Encode a request_gimbal_magnetic_encoder_angle struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param request_gimbal_magnetic_encoder_angle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_gimbal_magnetic_encoder_angle_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_request_gimbal_magnetic_encoder_angle_t* request_gimbal_magnetic_encoder_angle)
{
    return mavlink_msg_request_gimbal_magnetic_encoder_angle_pack_status(system_id, component_id, _status, msg,  request_gimbal_magnetic_encoder_angle->yaw_angle, request_gimbal_magnetic_encoder_angle->pitch_angle, request_gimbal_magnetic_encoder_angle->roll_angle);
}

/**
 * @brief Send a request_gimbal_magnetic_encoder_angle message
 * @param chan MAVLink channel to send the message
 *
 * @param yaw_angle  yaw angle
 * @param pitch_angle  pitch angle
 * @param roll_angle  roll angle
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_request_gimbal_magnetic_encoder_angle_send(mavlink_channel_t chan, uint16_t yaw_angle, uint16_t pitch_angle, uint16_t roll_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN];
    _mav_put_uint16_t(buf, 0, yaw_angle);
    _mav_put_uint16_t(buf, 2, pitch_angle);
    _mav_put_uint16_t(buf, 4, roll_angle);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE, buf, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_CRC);
#else
    mavlink_request_gimbal_magnetic_encoder_angle_t packet;
    packet.yaw_angle = yaw_angle;
    packet.pitch_angle = pitch_angle;
    packet.roll_angle = roll_angle;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE, (const char *)&packet, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_CRC);
#endif
}

/**
 * @brief Send a request_gimbal_magnetic_encoder_angle message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_request_gimbal_magnetic_encoder_angle_send_struct(mavlink_channel_t chan, const mavlink_request_gimbal_magnetic_encoder_angle_t* request_gimbal_magnetic_encoder_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_request_gimbal_magnetic_encoder_angle_send(chan, request_gimbal_magnetic_encoder_angle->yaw_angle, request_gimbal_magnetic_encoder_angle->pitch_angle, request_gimbal_magnetic_encoder_angle->roll_angle);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE, (const char *)request_gimbal_magnetic_encoder_angle, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_CRC);
#endif
}

#if MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_request_gimbal_magnetic_encoder_angle_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t yaw_angle, uint16_t pitch_angle, uint16_t roll_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, yaw_angle);
    _mav_put_uint16_t(buf, 2, pitch_angle);
    _mav_put_uint16_t(buf, 4, roll_angle);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE, buf, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_CRC);
#else
    mavlink_request_gimbal_magnetic_encoder_angle_t *packet = (mavlink_request_gimbal_magnetic_encoder_angle_t *)msgbuf;
    packet->yaw_angle = yaw_angle;
    packet->pitch_angle = pitch_angle;
    packet->roll_angle = roll_angle;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE, (const char *)packet, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_CRC);
#endif
}
#endif

#endif

// MESSAGE REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE UNPACKING


/**
 * @brief Get field yaw_angle from request_gimbal_magnetic_encoder_angle message
 *
 * @return  yaw angle
 */
static inline uint16_t mavlink_msg_request_gimbal_magnetic_encoder_angle_get_yaw_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field pitch_angle from request_gimbal_magnetic_encoder_angle message
 *
 * @return  pitch angle
 */
static inline uint16_t mavlink_msg_request_gimbal_magnetic_encoder_angle_get_pitch_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field roll_angle from request_gimbal_magnetic_encoder_angle message
 *
 * @return  roll angle
 */
static inline uint16_t mavlink_msg_request_gimbal_magnetic_encoder_angle_get_roll_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Decode a request_gimbal_magnetic_encoder_angle message into a struct
 *
 * @param msg The message to decode
 * @param request_gimbal_magnetic_encoder_angle C-struct to decode the message contents into
 */
static inline void mavlink_msg_request_gimbal_magnetic_encoder_angle_decode(const mavlink_message_t* msg, mavlink_request_gimbal_magnetic_encoder_angle_t* request_gimbal_magnetic_encoder_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    request_gimbal_magnetic_encoder_angle->yaw_angle = mavlink_msg_request_gimbal_magnetic_encoder_angle_get_yaw_angle(msg);
    request_gimbal_magnetic_encoder_angle->pitch_angle = mavlink_msg_request_gimbal_magnetic_encoder_angle_get_pitch_angle(msg);
    request_gimbal_magnetic_encoder_angle->roll_angle = mavlink_msg_request_gimbal_magnetic_encoder_angle_get_roll_angle(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN? msg->len : MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN;
        memset(request_gimbal_magnetic_encoder_angle, 0, MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_LEN);
    memcpy(request_gimbal_magnetic_encoder_angle, _MAV_PAYLOAD(msg), len);
#endif
}
