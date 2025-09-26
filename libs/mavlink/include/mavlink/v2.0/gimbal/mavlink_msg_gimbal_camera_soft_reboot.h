#pragma once
// MESSAGE GIMBAL_CAMERA_SOFT_REBOOT PACKING

#define MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT 800128


typedef struct __mavlink_gimbal_camera_soft_reboot_t {
 uint8_t camera_reboot; /*<  0: No action, 1: Reboot*/
 uint8_t gimbal_reset; /*<  0: No action, 1: Reboot*/
} mavlink_gimbal_camera_soft_reboot_t;

#define MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN 2
#define MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_MIN_LEN 2
#define MAVLINK_MSG_ID_800128_LEN 2
#define MAVLINK_MSG_ID_800128_MIN_LEN 2

#define MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_CRC 14
#define MAVLINK_MSG_ID_800128_CRC 14



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GIMBAL_CAMERA_SOFT_REBOOT { \
    800128, \
    "GIMBAL_CAMERA_SOFT_REBOOT", \
    2, \
    {  { "camera_reboot", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gimbal_camera_soft_reboot_t, camera_reboot) }, \
         { "gimbal_reset", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_gimbal_camera_soft_reboot_t, gimbal_reset) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GIMBAL_CAMERA_SOFT_REBOOT { \
    "GIMBAL_CAMERA_SOFT_REBOOT", \
    2, \
    {  { "camera_reboot", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gimbal_camera_soft_reboot_t, camera_reboot) }, \
         { "gimbal_reset", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_gimbal_camera_soft_reboot_t, gimbal_reset) }, \
         } \
}
#endif

/**
 * @brief Pack a gimbal_camera_soft_reboot message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param camera_reboot  0: No action, 1: Reboot
 * @param gimbal_reset  0: No action, 1: Reboot
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_camera_soft_reboot_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t camera_reboot, uint8_t gimbal_reset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN];
    _mav_put_uint8_t(buf, 0, camera_reboot);
    _mav_put_uint8_t(buf, 1, gimbal_reset);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN);
#else
    mavlink_gimbal_camera_soft_reboot_t packet;
    packet.camera_reboot = camera_reboot;
    packet.gimbal_reset = gimbal_reset;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_CRC);
}

/**
 * @brief Pack a gimbal_camera_soft_reboot message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param camera_reboot  0: No action, 1: Reboot
 * @param gimbal_reset  0: No action, 1: Reboot
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_camera_soft_reboot_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t camera_reboot, uint8_t gimbal_reset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN];
    _mav_put_uint8_t(buf, 0, camera_reboot);
    _mav_put_uint8_t(buf, 1, gimbal_reset);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN);
#else
    mavlink_gimbal_camera_soft_reboot_t packet;
    packet.camera_reboot = camera_reboot;
    packet.gimbal_reset = gimbal_reset;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN);
#endif
}

/**
 * @brief Pack a gimbal_camera_soft_reboot message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param camera_reboot  0: No action, 1: Reboot
 * @param gimbal_reset  0: No action, 1: Reboot
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_camera_soft_reboot_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t camera_reboot,uint8_t gimbal_reset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN];
    _mav_put_uint8_t(buf, 0, camera_reboot);
    _mav_put_uint8_t(buf, 1, gimbal_reset);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN);
#else
    mavlink_gimbal_camera_soft_reboot_t packet;
    packet.camera_reboot = camera_reboot;
    packet.gimbal_reset = gimbal_reset;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_CRC);
}

/**
 * @brief Encode a gimbal_camera_soft_reboot struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_camera_soft_reboot C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_camera_soft_reboot_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gimbal_camera_soft_reboot_t* gimbal_camera_soft_reboot)
{
    return mavlink_msg_gimbal_camera_soft_reboot_pack(system_id, component_id, msg, gimbal_camera_soft_reboot->camera_reboot, gimbal_camera_soft_reboot->gimbal_reset);
}

/**
 * @brief Encode a gimbal_camera_soft_reboot struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_camera_soft_reboot C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_camera_soft_reboot_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gimbal_camera_soft_reboot_t* gimbal_camera_soft_reboot)
{
    return mavlink_msg_gimbal_camera_soft_reboot_pack_chan(system_id, component_id, chan, msg, gimbal_camera_soft_reboot->camera_reboot, gimbal_camera_soft_reboot->gimbal_reset);
}

/**
 * @brief Encode a gimbal_camera_soft_reboot struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_camera_soft_reboot C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_camera_soft_reboot_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_gimbal_camera_soft_reboot_t* gimbal_camera_soft_reboot)
{
    return mavlink_msg_gimbal_camera_soft_reboot_pack_status(system_id, component_id, _status, msg,  gimbal_camera_soft_reboot->camera_reboot, gimbal_camera_soft_reboot->gimbal_reset);
}

/**
 * @brief Send a gimbal_camera_soft_reboot message
 * @param chan MAVLink channel to send the message
 *
 * @param camera_reboot  0: No action, 1: Reboot
 * @param gimbal_reset  0: No action, 1: Reboot
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gimbal_camera_soft_reboot_send(mavlink_channel_t chan, uint8_t camera_reboot, uint8_t gimbal_reset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN];
    _mav_put_uint8_t(buf, 0, camera_reboot);
    _mav_put_uint8_t(buf, 1, gimbal_reset);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT, buf, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_CRC);
#else
    mavlink_gimbal_camera_soft_reboot_t packet;
    packet.camera_reboot = camera_reboot;
    packet.gimbal_reset = gimbal_reset;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT, (const char *)&packet, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_CRC);
#endif
}

/**
 * @brief Send a gimbal_camera_soft_reboot message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gimbal_camera_soft_reboot_send_struct(mavlink_channel_t chan, const mavlink_gimbal_camera_soft_reboot_t* gimbal_camera_soft_reboot)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gimbal_camera_soft_reboot_send(chan, gimbal_camera_soft_reboot->camera_reboot, gimbal_camera_soft_reboot->gimbal_reset);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT, (const char *)gimbal_camera_soft_reboot, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_CRC);
#endif
}

#if MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gimbal_camera_soft_reboot_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t camera_reboot, uint8_t gimbal_reset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, camera_reboot);
    _mav_put_uint8_t(buf, 1, gimbal_reset);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT, buf, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_CRC);
#else
    mavlink_gimbal_camera_soft_reboot_t *packet = (mavlink_gimbal_camera_soft_reboot_t *)msgbuf;
    packet->camera_reboot = camera_reboot;
    packet->gimbal_reset = gimbal_reset;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT, (const char *)packet, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_CRC);
#endif
}
#endif

#endif

// MESSAGE GIMBAL_CAMERA_SOFT_REBOOT UNPACKING


/**
 * @brief Get field camera_reboot from gimbal_camera_soft_reboot message
 *
 * @return  0: No action, 1: Reboot
 */
static inline uint8_t mavlink_msg_gimbal_camera_soft_reboot_get_camera_reboot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field gimbal_reset from gimbal_camera_soft_reboot message
 *
 * @return  0: No action, 1: Reboot
 */
static inline uint8_t mavlink_msg_gimbal_camera_soft_reboot_get_gimbal_reset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a gimbal_camera_soft_reboot message into a struct
 *
 * @param msg The message to decode
 * @param gimbal_camera_soft_reboot C-struct to decode the message contents into
 */
static inline void mavlink_msg_gimbal_camera_soft_reboot_decode(const mavlink_message_t* msg, mavlink_gimbal_camera_soft_reboot_t* gimbal_camera_soft_reboot)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gimbal_camera_soft_reboot->camera_reboot = mavlink_msg_gimbal_camera_soft_reboot_get_camera_reboot(msg);
    gimbal_camera_soft_reboot->gimbal_reset = mavlink_msg_gimbal_camera_soft_reboot_get_gimbal_reset(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN? msg->len : MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN;
        memset(gimbal_camera_soft_reboot, 0, MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_LEN);
    memcpy(gimbal_camera_soft_reboot, _MAV_PAYLOAD(msg), len);
#endif
}
