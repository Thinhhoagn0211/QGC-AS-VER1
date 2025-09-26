#pragma once
// MESSAGE RESPONSE_REQUEST_FIRMWARE_VERSION PACKING

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION 90001


typedef struct __mavlink_response_request_firmware_version_t {
 uint32_t camera_firmware_ver; /*<  Camera firmware version*/
 uint32_t gimbal_firmware_ver; /*<  Gimbal firmware version*/
 uint32_t zoom_firmware_ver; /*<  Zoom firmware version*/
} mavlink_response_request_firmware_version_t;

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN 12
#define MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_MIN_LEN 12
#define MAVLINK_MSG_ID_90001_LEN 12
#define MAVLINK_MSG_ID_90001_MIN_LEN 12

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_CRC 7
#define MAVLINK_MSG_ID_90001_CRC 7



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_FIRMWARE_VERSION { \
    90001, \
    "RESPONSE_REQUEST_FIRMWARE_VERSION", \
    3, \
    {  { "camera_firmware_ver", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_response_request_firmware_version_t, camera_firmware_ver) }, \
         { "gimbal_firmware_ver", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_response_request_firmware_version_t, gimbal_firmware_ver) }, \
         { "zoom_firmware_ver", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_response_request_firmware_version_t, zoom_firmware_ver) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_FIRMWARE_VERSION { \
    "RESPONSE_REQUEST_FIRMWARE_VERSION", \
    3, \
    {  { "camera_firmware_ver", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_response_request_firmware_version_t, camera_firmware_ver) }, \
         { "gimbal_firmware_ver", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_response_request_firmware_version_t, gimbal_firmware_ver) }, \
         { "zoom_firmware_ver", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_response_request_firmware_version_t, zoom_firmware_ver) }, \
         } \
}
#endif

/**
 * @brief Pack a response_request_firmware_version message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param camera_firmware_ver  Camera firmware version
 * @param gimbal_firmware_ver  Gimbal firmware version
 * @param zoom_firmware_ver  Zoom firmware version
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_firmware_version_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t camera_firmware_ver, uint32_t gimbal_firmware_ver, uint32_t zoom_firmware_ver)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN];
    _mav_put_uint32_t(buf, 0, camera_firmware_ver);
    _mav_put_uint32_t(buf, 4, gimbal_firmware_ver);
    _mav_put_uint32_t(buf, 8, zoom_firmware_ver);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN);
#else
    mavlink_response_request_firmware_version_t packet;
    packet.camera_firmware_ver = camera_firmware_ver;
    packet.gimbal_firmware_ver = gimbal_firmware_ver;
    packet.zoom_firmware_ver = zoom_firmware_ver;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_CRC);
}

/**
 * @brief Pack a response_request_firmware_version message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param camera_firmware_ver  Camera firmware version
 * @param gimbal_firmware_ver  Gimbal firmware version
 * @param zoom_firmware_ver  Zoom firmware version
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_firmware_version_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t camera_firmware_ver, uint32_t gimbal_firmware_ver, uint32_t zoom_firmware_ver)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN];
    _mav_put_uint32_t(buf, 0, camera_firmware_ver);
    _mav_put_uint32_t(buf, 4, gimbal_firmware_ver);
    _mav_put_uint32_t(buf, 8, zoom_firmware_ver);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN);
#else
    mavlink_response_request_firmware_version_t packet;
    packet.camera_firmware_ver = camera_firmware_ver;
    packet.gimbal_firmware_ver = gimbal_firmware_ver;
    packet.zoom_firmware_ver = zoom_firmware_ver;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN);
#endif
}

/**
 * @brief Pack a response_request_firmware_version message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param camera_firmware_ver  Camera firmware version
 * @param gimbal_firmware_ver  Gimbal firmware version
 * @param zoom_firmware_ver  Zoom firmware version
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_firmware_version_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t camera_firmware_ver,uint32_t gimbal_firmware_ver,uint32_t zoom_firmware_ver)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN];
    _mav_put_uint32_t(buf, 0, camera_firmware_ver);
    _mav_put_uint32_t(buf, 4, gimbal_firmware_ver);
    _mav_put_uint32_t(buf, 8, zoom_firmware_ver);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN);
#else
    mavlink_response_request_firmware_version_t packet;
    packet.camera_firmware_ver = camera_firmware_ver;
    packet.gimbal_firmware_ver = gimbal_firmware_ver;
    packet.zoom_firmware_ver = zoom_firmware_ver;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_CRC);
}

/**
 * @brief Encode a response_request_firmware_version struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_request_firmware_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_firmware_version_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_request_firmware_version_t* response_request_firmware_version)
{
    return mavlink_msg_response_request_firmware_version_pack(system_id, component_id, msg, response_request_firmware_version->camera_firmware_ver, response_request_firmware_version->gimbal_firmware_ver, response_request_firmware_version->zoom_firmware_ver);
}

/**
 * @brief Encode a response_request_firmware_version struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_request_firmware_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_firmware_version_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_request_firmware_version_t* response_request_firmware_version)
{
    return mavlink_msg_response_request_firmware_version_pack_chan(system_id, component_id, chan, msg, response_request_firmware_version->camera_firmware_ver, response_request_firmware_version->gimbal_firmware_ver, response_request_firmware_version->zoom_firmware_ver);
}

/**
 * @brief Encode a response_request_firmware_version struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_request_firmware_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_firmware_version_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_request_firmware_version_t* response_request_firmware_version)
{
    return mavlink_msg_response_request_firmware_version_pack_status(system_id, component_id, _status, msg,  response_request_firmware_version->camera_firmware_ver, response_request_firmware_version->gimbal_firmware_ver, response_request_firmware_version->zoom_firmware_ver);
}

/**
 * @brief Send a response_request_firmware_version message
 * @param chan MAVLink channel to send the message
 *
 * @param camera_firmware_ver  Camera firmware version
 * @param gimbal_firmware_ver  Gimbal firmware version
 * @param zoom_firmware_ver  Zoom firmware version
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_request_firmware_version_send(mavlink_channel_t chan, uint32_t camera_firmware_ver, uint32_t gimbal_firmware_ver, uint32_t zoom_firmware_ver)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN];
    _mav_put_uint32_t(buf, 0, camera_firmware_ver);
    _mav_put_uint32_t(buf, 4, gimbal_firmware_ver);
    _mav_put_uint32_t(buf, 8, zoom_firmware_ver);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_CRC);
#else
    mavlink_response_request_firmware_version_t packet;
    packet.camera_firmware_ver = camera_firmware_ver;
    packet.gimbal_firmware_ver = gimbal_firmware_ver;
    packet.zoom_firmware_ver = zoom_firmware_ver;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_CRC);
#endif
}

/**
 * @brief Send a response_request_firmware_version message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_request_firmware_version_send_struct(mavlink_channel_t chan, const mavlink_response_request_firmware_version_t* response_request_firmware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_request_firmware_version_send(chan, response_request_firmware_version->camera_firmware_ver, response_request_firmware_version->gimbal_firmware_ver, response_request_firmware_version->zoom_firmware_ver);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION, (const char *)response_request_firmware_version, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_request_firmware_version_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t camera_firmware_ver, uint32_t gimbal_firmware_ver, uint32_t zoom_firmware_ver)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, camera_firmware_ver);
    _mav_put_uint32_t(buf, 4, gimbal_firmware_ver);
    _mav_put_uint32_t(buf, 8, zoom_firmware_ver);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_CRC);
#else
    mavlink_response_request_firmware_version_t *packet = (mavlink_response_request_firmware_version_t *)msgbuf;
    packet->camera_firmware_ver = camera_firmware_ver;
    packet->gimbal_firmware_ver = gimbal_firmware_ver;
    packet->zoom_firmware_ver = zoom_firmware_ver;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_REQUEST_FIRMWARE_VERSION UNPACKING


/**
 * @brief Get field camera_firmware_ver from response_request_firmware_version message
 *
 * @return  Camera firmware version
 */
static inline uint32_t mavlink_msg_response_request_firmware_version_get_camera_firmware_ver(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field gimbal_firmware_ver from response_request_firmware_version message
 *
 * @return  Gimbal firmware version
 */
static inline uint32_t mavlink_msg_response_request_firmware_version_get_gimbal_firmware_ver(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field zoom_firmware_ver from response_request_firmware_version message
 *
 * @return  Zoom firmware version
 */
static inline uint32_t mavlink_msg_response_request_firmware_version_get_zoom_firmware_ver(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Decode a response_request_firmware_version message into a struct
 *
 * @param msg The message to decode
 * @param response_request_firmware_version C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_request_firmware_version_decode(const mavlink_message_t* msg, mavlink_response_request_firmware_version_t* response_request_firmware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_request_firmware_version->camera_firmware_ver = mavlink_msg_response_request_firmware_version_get_camera_firmware_ver(msg);
    response_request_firmware_version->gimbal_firmware_ver = mavlink_msg_response_request_firmware_version_get_gimbal_firmware_ver(msg);
    response_request_firmware_version->zoom_firmware_ver = mavlink_msg_response_request_firmware_version_get_zoom_firmware_ver(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN;
        memset(response_request_firmware_version, 0, MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_LEN);
    memcpy(response_request_firmware_version, _MAV_PAYLOAD(msg), len);
#endif
}
