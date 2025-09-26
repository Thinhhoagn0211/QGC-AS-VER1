#pragma once
// MESSAGE RESPONSE_REQUEST_GIMBAL_HARDWARE_ID PACKING

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID 90002


typedef struct __mavlink_response_request_gimbal_hardware_id_t {
 uint32_t hardware_id; /*<  Gimbal hardware ID*/
} mavlink_response_request_gimbal_hardware_id_t;

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN 4
#define MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN 4
#define MAVLINK_MSG_ID_90002_LEN 4
#define MAVLINK_MSG_ID_90002_MIN_LEN 4

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_CRC 49
#define MAVLINK_MSG_ID_90002_CRC 49



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID { \
    90002, \
    "RESPONSE_REQUEST_GIMBAL_HARDWARE_ID", \
    1, \
    {  { "hardware_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_response_request_gimbal_hardware_id_t, hardware_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID { \
    "RESPONSE_REQUEST_GIMBAL_HARDWARE_ID", \
    1, \
    {  { "hardware_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_response_request_gimbal_hardware_id_t, hardware_id) }, \
         } \
}
#endif

/**
 * @brief Pack a response_request_gimbal_hardware_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param hardware_id  Gimbal hardware ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_gimbal_hardware_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t hardware_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN];
    _mav_put_uint32_t(buf, 0, hardware_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN);
#else
    mavlink_response_request_gimbal_hardware_id_t packet;
    packet.hardware_id = hardware_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_CRC);
}

/**
 * @brief Pack a response_request_gimbal_hardware_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param hardware_id  Gimbal hardware ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_gimbal_hardware_id_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t hardware_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN];
    _mav_put_uint32_t(buf, 0, hardware_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN);
#else
    mavlink_response_request_gimbal_hardware_id_t packet;
    packet.hardware_id = hardware_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN);
#endif
}

/**
 * @brief Pack a response_request_gimbal_hardware_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hardware_id  Gimbal hardware ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_gimbal_hardware_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t hardware_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN];
    _mav_put_uint32_t(buf, 0, hardware_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN);
#else
    mavlink_response_request_gimbal_hardware_id_t packet;
    packet.hardware_id = hardware_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_CRC);
}

/**
 * @brief Encode a response_request_gimbal_hardware_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_request_gimbal_hardware_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_gimbal_hardware_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_request_gimbal_hardware_id_t* response_request_gimbal_hardware_id)
{
    return mavlink_msg_response_request_gimbal_hardware_id_pack(system_id, component_id, msg, response_request_gimbal_hardware_id->hardware_id);
}

/**
 * @brief Encode a response_request_gimbal_hardware_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_request_gimbal_hardware_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_gimbal_hardware_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_request_gimbal_hardware_id_t* response_request_gimbal_hardware_id)
{
    return mavlink_msg_response_request_gimbal_hardware_id_pack_chan(system_id, component_id, chan, msg, response_request_gimbal_hardware_id->hardware_id);
}

/**
 * @brief Encode a response_request_gimbal_hardware_id struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_request_gimbal_hardware_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_gimbal_hardware_id_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_request_gimbal_hardware_id_t* response_request_gimbal_hardware_id)
{
    return mavlink_msg_response_request_gimbal_hardware_id_pack_status(system_id, component_id, _status, msg,  response_request_gimbal_hardware_id->hardware_id);
}

/**
 * @brief Send a response_request_gimbal_hardware_id message
 * @param chan MAVLink channel to send the message
 *
 * @param hardware_id  Gimbal hardware ID
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_request_gimbal_hardware_id_send(mavlink_channel_t chan, uint32_t hardware_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN];
    _mav_put_uint32_t(buf, 0, hardware_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_CRC);
#else
    mavlink_response_request_gimbal_hardware_id_t packet;
    packet.hardware_id = hardware_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_CRC);
#endif
}

/**
 * @brief Send a response_request_gimbal_hardware_id message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_request_gimbal_hardware_id_send_struct(mavlink_channel_t chan, const mavlink_response_request_gimbal_hardware_id_t* response_request_gimbal_hardware_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_request_gimbal_hardware_id_send(chan, response_request_gimbal_hardware_id->hardware_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID, (const char *)response_request_gimbal_hardware_id, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_request_gimbal_hardware_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t hardware_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, hardware_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_CRC);
#else
    mavlink_response_request_gimbal_hardware_id_t *packet = (mavlink_response_request_gimbal_hardware_id_t *)msgbuf;
    packet->hardware_id = hardware_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_REQUEST_GIMBAL_HARDWARE_ID UNPACKING


/**
 * @brief Get field hardware_id from response_request_gimbal_hardware_id message
 *
 * @return  Gimbal hardware ID
 */
static inline uint32_t mavlink_msg_response_request_gimbal_hardware_id_get_hardware_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a response_request_gimbal_hardware_id message into a struct
 *
 * @param msg The message to decode
 * @param response_request_gimbal_hardware_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_request_gimbal_hardware_id_decode(const mavlink_message_t* msg, mavlink_response_request_gimbal_hardware_id_t* response_request_gimbal_hardware_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_request_gimbal_hardware_id->hardware_id = mavlink_msg_response_request_gimbal_hardware_id_get_hardware_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN;
        memset(response_request_gimbal_hardware_id, 0, MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_LEN);
    memcpy(response_request_gimbal_hardware_id, _MAV_PAYLOAD(msg), len);
#endif
}
