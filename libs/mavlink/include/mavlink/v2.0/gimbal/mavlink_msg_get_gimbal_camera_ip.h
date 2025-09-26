#pragma once
// MESSAGE GET_GIMBAL_CAMERA_IP PACKING

#define MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP 800129


typedef struct __mavlink_get_gimbal_camera_ip_t {
 uint8_t dummy; /*<  Reserved*/
} mavlink_get_gimbal_camera_ip_t;

#define MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN 1
#define MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_MIN_LEN 1
#define MAVLINK_MSG_ID_800129_LEN 1
#define MAVLINK_MSG_ID_800129_MIN_LEN 1

#define MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_CRC 254
#define MAVLINK_MSG_ID_800129_CRC 254



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GET_GIMBAL_CAMERA_IP { \
    800129, \
    "GET_GIMBAL_CAMERA_IP", \
    1, \
    {  { "dummy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_get_gimbal_camera_ip_t, dummy) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GET_GIMBAL_CAMERA_IP { \
    "GET_GIMBAL_CAMERA_IP", \
    1, \
    {  { "dummy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_get_gimbal_camera_ip_t, dummy) }, \
         } \
}
#endif

/**
 * @brief Pack a get_gimbal_camera_ip message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param dummy  Reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_get_gimbal_camera_ip_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN);
#else
    mavlink_get_gimbal_camera_ip_t packet;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_CRC);
}

/**
 * @brief Pack a get_gimbal_camera_ip message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param dummy  Reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_get_gimbal_camera_ip_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN);
#else
    mavlink_get_gimbal_camera_ip_t packet;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN);
#endif
}

/**
 * @brief Pack a get_gimbal_camera_ip message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dummy  Reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_get_gimbal_camera_ip_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN);
#else
    mavlink_get_gimbal_camera_ip_t packet;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_CRC);
}

/**
 * @brief Encode a get_gimbal_camera_ip struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param get_gimbal_camera_ip C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_get_gimbal_camera_ip_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_get_gimbal_camera_ip_t* get_gimbal_camera_ip)
{
    return mavlink_msg_get_gimbal_camera_ip_pack(system_id, component_id, msg, get_gimbal_camera_ip->dummy);
}

/**
 * @brief Encode a get_gimbal_camera_ip struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param get_gimbal_camera_ip C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_get_gimbal_camera_ip_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_get_gimbal_camera_ip_t* get_gimbal_camera_ip)
{
    return mavlink_msg_get_gimbal_camera_ip_pack_chan(system_id, component_id, chan, msg, get_gimbal_camera_ip->dummy);
}

/**
 * @brief Encode a get_gimbal_camera_ip struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param get_gimbal_camera_ip C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_get_gimbal_camera_ip_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_get_gimbal_camera_ip_t* get_gimbal_camera_ip)
{
    return mavlink_msg_get_gimbal_camera_ip_pack_status(system_id, component_id, _status, msg,  get_gimbal_camera_ip->dummy);
}

/**
 * @brief Send a get_gimbal_camera_ip message
 * @param chan MAVLink channel to send the message
 *
 * @param dummy  Reserved
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_get_gimbal_camera_ip_send(mavlink_channel_t chan, uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP, buf, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_CRC);
#else
    mavlink_get_gimbal_camera_ip_t packet;
    packet.dummy = dummy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP, (const char *)&packet, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_CRC);
#endif
}

/**
 * @brief Send a get_gimbal_camera_ip message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_get_gimbal_camera_ip_send_struct(mavlink_channel_t chan, const mavlink_get_gimbal_camera_ip_t* get_gimbal_camera_ip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_get_gimbal_camera_ip_send(chan, get_gimbal_camera_ip->dummy);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP, (const char *)get_gimbal_camera_ip, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_CRC);
#endif
}

#if MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_get_gimbal_camera_ip_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, dummy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP, buf, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_CRC);
#else
    mavlink_get_gimbal_camera_ip_t *packet = (mavlink_get_gimbal_camera_ip_t *)msgbuf;
    packet->dummy = dummy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP, (const char *)packet, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_CRC);
#endif
}
#endif

#endif

// MESSAGE GET_GIMBAL_CAMERA_IP UNPACKING


/**
 * @brief Get field dummy from get_gimbal_camera_ip message
 *
 * @return  Reserved
 */
static inline uint8_t mavlink_msg_get_gimbal_camera_ip_get_dummy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a get_gimbal_camera_ip message into a struct
 *
 * @param msg The message to decode
 * @param get_gimbal_camera_ip C-struct to decode the message contents into
 */
static inline void mavlink_msg_get_gimbal_camera_ip_decode(const mavlink_message_t* msg, mavlink_get_gimbal_camera_ip_t* get_gimbal_camera_ip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    get_gimbal_camera_ip->dummy = mavlink_msg_get_gimbal_camera_ip_get_dummy(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN? msg->len : MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN;
        memset(get_gimbal_camera_ip, 0, MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_LEN);
    memcpy(get_gimbal_camera_ip, _MAV_PAYLOAD(msg), len);
#endif
}
