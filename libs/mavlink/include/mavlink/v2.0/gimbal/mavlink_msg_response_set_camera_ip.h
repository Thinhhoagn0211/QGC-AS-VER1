#pragma once
// MESSAGE RESPONSE_SET_CAMERA_IP PACKING

#define MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP 900130


typedef struct __mavlink_response_set_camera_ip_t {
 uint8_t ack; /*<  1: Success*/
} mavlink_response_set_camera_ip_t;

#define MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN 1
#define MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_MIN_LEN 1
#define MAVLINK_MSG_ID_900130_LEN 1
#define MAVLINK_MSG_ID_900130_MIN_LEN 1

#define MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_CRC 198
#define MAVLINK_MSG_ID_900130_CRC 198



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_SET_CAMERA_IP { \
    900130, \
    "RESPONSE_SET_CAMERA_IP", \
    1, \
    {  { "ack", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_set_camera_ip_t, ack) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_SET_CAMERA_IP { \
    "RESPONSE_SET_CAMERA_IP", \
    1, \
    {  { "ack", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_set_camera_ip_t, ack) }, \
         } \
}
#endif

/**
 * @brief Pack a response_set_camera_ip message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ack  1: Success
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_set_camera_ip_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN];
    _mav_put_uint8_t(buf, 0, ack);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN);
#else
    mavlink_response_set_camera_ip_t packet;
    packet.ack = ack;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_CRC);
}

/**
 * @brief Pack a response_set_camera_ip message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param ack  1: Success
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_set_camera_ip_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN];
    _mav_put_uint8_t(buf, 0, ack);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN);
#else
    mavlink_response_set_camera_ip_t packet;
    packet.ack = ack;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN);
#endif
}

/**
 * @brief Pack a response_set_camera_ip message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ack  1: Success
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_set_camera_ip_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN];
    _mav_put_uint8_t(buf, 0, ack);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN);
#else
    mavlink_response_set_camera_ip_t packet;
    packet.ack = ack;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_CRC);
}

/**
 * @brief Encode a response_set_camera_ip struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_set_camera_ip C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_set_camera_ip_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_set_camera_ip_t* response_set_camera_ip)
{
    return mavlink_msg_response_set_camera_ip_pack(system_id, component_id, msg, response_set_camera_ip->ack);
}

/**
 * @brief Encode a response_set_camera_ip struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_set_camera_ip C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_set_camera_ip_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_set_camera_ip_t* response_set_camera_ip)
{
    return mavlink_msg_response_set_camera_ip_pack_chan(system_id, component_id, chan, msg, response_set_camera_ip->ack);
}

/**
 * @brief Encode a response_set_camera_ip struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_set_camera_ip C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_set_camera_ip_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_set_camera_ip_t* response_set_camera_ip)
{
    return mavlink_msg_response_set_camera_ip_pack_status(system_id, component_id, _status, msg,  response_set_camera_ip->ack);
}

/**
 * @brief Send a response_set_camera_ip message
 * @param chan MAVLink channel to send the message
 *
 * @param ack  1: Success
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_set_camera_ip_send(mavlink_channel_t chan, uint8_t ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN];
    _mav_put_uint8_t(buf, 0, ack);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP, buf, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_CRC);
#else
    mavlink_response_set_camera_ip_t packet;
    packet.ack = ack;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_CRC);
#endif
}

/**
 * @brief Send a response_set_camera_ip message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_set_camera_ip_send_struct(mavlink_channel_t chan, const mavlink_response_set_camera_ip_t* response_set_camera_ip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_set_camera_ip_send(chan, response_set_camera_ip->ack);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP, (const char *)response_set_camera_ip, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_set_camera_ip_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, ack);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP, buf, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_CRC);
#else
    mavlink_response_set_camera_ip_t *packet = (mavlink_response_set_camera_ip_t *)msgbuf;
    packet->ack = ack;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_SET_CAMERA_IP UNPACKING


/**
 * @brief Get field ack from response_set_camera_ip message
 *
 * @return  1: Success
 */
static inline uint8_t mavlink_msg_response_set_camera_ip_get_ack(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a response_set_camera_ip message into a struct
 *
 * @param msg The message to decode
 * @param response_set_camera_ip C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_set_camera_ip_decode(const mavlink_message_t* msg, mavlink_response_set_camera_ip_t* response_set_camera_ip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_set_camera_ip->ack = mavlink_msg_response_set_camera_ip_get_ack(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN;
        memset(response_set_camera_ip, 0, MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_LEN);
    memcpy(response_set_camera_ip, _MAV_PAYLOAD(msg), len);
#endif
}
