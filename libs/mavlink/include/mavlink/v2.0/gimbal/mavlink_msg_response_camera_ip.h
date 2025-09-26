#pragma once
// MESSAGE RESPONSE_CAMERA_IP PACKING

#define MAVLINK_MSG_ID_RESPONSE_CAMERA_IP 900129


typedef struct __mavlink_response_camera_ip_t {
 uint32_t ip; /*<  IP Address*/
 uint32_t mask; /*<  Subnet Mask*/
 uint32_t gateway; /*<  Gateway*/
} mavlink_response_camera_ip_t;

#define MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN 12
#define MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_MIN_LEN 12
#define MAVLINK_MSG_ID_900129_LEN 12
#define MAVLINK_MSG_ID_900129_MIN_LEN 12

#define MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_CRC 2
#define MAVLINK_MSG_ID_900129_CRC 2



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_CAMERA_IP { \
    900129, \
    "RESPONSE_CAMERA_IP", \
    3, \
    {  { "ip", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_response_camera_ip_t, ip) }, \
         { "mask", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_response_camera_ip_t, mask) }, \
         { "gateway", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_response_camera_ip_t, gateway) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_CAMERA_IP { \
    "RESPONSE_CAMERA_IP", \
    3, \
    {  { "ip", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_response_camera_ip_t, ip) }, \
         { "mask", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_response_camera_ip_t, mask) }, \
         { "gateway", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_response_camera_ip_t, gateway) }, \
         } \
}
#endif

/**
 * @brief Pack a response_camera_ip message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ip  IP Address
 * @param mask  Subnet Mask
 * @param gateway  Gateway
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_camera_ip_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t ip, uint32_t mask, uint32_t gateway)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN];
    _mav_put_uint32_t(buf, 0, ip);
    _mav_put_uint32_t(buf, 4, mask);
    _mav_put_uint32_t(buf, 8, gateway);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN);
#else
    mavlink_response_camera_ip_t packet;
    packet.ip = ip;
    packet.mask = mask;
    packet.gateway = gateway;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_CAMERA_IP;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_CRC);
}

/**
 * @brief Pack a response_camera_ip message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param ip  IP Address
 * @param mask  Subnet Mask
 * @param gateway  Gateway
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_camera_ip_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t ip, uint32_t mask, uint32_t gateway)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN];
    _mav_put_uint32_t(buf, 0, ip);
    _mav_put_uint32_t(buf, 4, mask);
    _mav_put_uint32_t(buf, 8, gateway);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN);
#else
    mavlink_response_camera_ip_t packet;
    packet.ip = ip;
    packet.mask = mask;
    packet.gateway = gateway;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_CAMERA_IP;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN);
#endif
}

/**
 * @brief Pack a response_camera_ip message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ip  IP Address
 * @param mask  Subnet Mask
 * @param gateway  Gateway
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_camera_ip_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t ip,uint32_t mask,uint32_t gateway)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN];
    _mav_put_uint32_t(buf, 0, ip);
    _mav_put_uint32_t(buf, 4, mask);
    _mav_put_uint32_t(buf, 8, gateway);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN);
#else
    mavlink_response_camera_ip_t packet;
    packet.ip = ip;
    packet.mask = mask;
    packet.gateway = gateway;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_CAMERA_IP;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_CRC);
}

/**
 * @brief Encode a response_camera_ip struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_camera_ip C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_camera_ip_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_camera_ip_t* response_camera_ip)
{
    return mavlink_msg_response_camera_ip_pack(system_id, component_id, msg, response_camera_ip->ip, response_camera_ip->mask, response_camera_ip->gateway);
}

/**
 * @brief Encode a response_camera_ip struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_camera_ip C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_camera_ip_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_camera_ip_t* response_camera_ip)
{
    return mavlink_msg_response_camera_ip_pack_chan(system_id, component_id, chan, msg, response_camera_ip->ip, response_camera_ip->mask, response_camera_ip->gateway);
}

/**
 * @brief Encode a response_camera_ip struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_camera_ip C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_camera_ip_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_camera_ip_t* response_camera_ip)
{
    return mavlink_msg_response_camera_ip_pack_status(system_id, component_id, _status, msg,  response_camera_ip->ip, response_camera_ip->mask, response_camera_ip->gateway);
}

/**
 * @brief Send a response_camera_ip message
 * @param chan MAVLink channel to send the message
 *
 * @param ip  IP Address
 * @param mask  Subnet Mask
 * @param gateway  Gateway
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_camera_ip_send(mavlink_channel_t chan, uint32_t ip, uint32_t mask, uint32_t gateway)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN];
    _mav_put_uint32_t(buf, 0, ip);
    _mav_put_uint32_t(buf, 4, mask);
    _mav_put_uint32_t(buf, 8, gateway);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP, buf, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_CRC);
#else
    mavlink_response_camera_ip_t packet;
    packet.ip = ip;
    packet.mask = mask;
    packet.gateway = gateway;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_CRC);
#endif
}

/**
 * @brief Send a response_camera_ip message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_camera_ip_send_struct(mavlink_channel_t chan, const mavlink_response_camera_ip_t* response_camera_ip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_camera_ip_send(chan, response_camera_ip->ip, response_camera_ip->mask, response_camera_ip->gateway);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP, (const char *)response_camera_ip, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_camera_ip_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t ip, uint32_t mask, uint32_t gateway)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, ip);
    _mav_put_uint32_t(buf, 4, mask);
    _mav_put_uint32_t(buf, 8, gateway);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP, buf, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_CRC);
#else
    mavlink_response_camera_ip_t *packet = (mavlink_response_camera_ip_t *)msgbuf;
    packet->ip = ip;
    packet->mask = mask;
    packet->gateway = gateway;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_CAMERA_IP UNPACKING


/**
 * @brief Get field ip from response_camera_ip message
 *
 * @return  IP Address
 */
static inline uint32_t mavlink_msg_response_camera_ip_get_ip(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field mask from response_camera_ip message
 *
 * @return  Subnet Mask
 */
static inline uint32_t mavlink_msg_response_camera_ip_get_mask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field gateway from response_camera_ip message
 *
 * @return  Gateway
 */
static inline uint32_t mavlink_msg_response_camera_ip_get_gateway(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Decode a response_camera_ip message into a struct
 *
 * @param msg The message to decode
 * @param response_camera_ip C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_camera_ip_decode(const mavlink_message_t* msg, mavlink_response_camera_ip_t* response_camera_ip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_camera_ip->ip = mavlink_msg_response_camera_ip_get_ip(msg);
    response_camera_ip->mask = mavlink_msg_response_camera_ip_get_mask(msg);
    response_camera_ip->gateway = mavlink_msg_response_camera_ip_get_gateway(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN;
        memset(response_camera_ip, 0, MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_LEN);
    memcpy(response_camera_ip, _MAV_PAYLOAD(msg), len);
#endif
}
