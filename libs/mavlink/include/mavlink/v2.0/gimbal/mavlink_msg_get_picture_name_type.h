#pragma once
// MESSAGE GET_PICTURE_NAME_TYPE PACKING

#define MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE 80073


typedef struct __mavlink_get_picture_name_type_t {
 uint8_t file_type; /*<  0: picture, 1: temp, 2: video*/
} mavlink_get_picture_name_type_t;

#define MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN 1
#define MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_MIN_LEN 1
#define MAVLINK_MSG_ID_80073_LEN 1
#define MAVLINK_MSG_ID_80073_MIN_LEN 1

#define MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_CRC 154
#define MAVLINK_MSG_ID_80073_CRC 154



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GET_PICTURE_NAME_TYPE { \
    80073, \
    "GET_PICTURE_NAME_TYPE", \
    1, \
    {  { "file_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_get_picture_name_type_t, file_type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GET_PICTURE_NAME_TYPE { \
    "GET_PICTURE_NAME_TYPE", \
    1, \
    {  { "file_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_get_picture_name_type_t, file_type) }, \
         } \
}
#endif

/**
 * @brief Pack a get_picture_name_type message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param file_type  0: picture, 1: temp, 2: video
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_get_picture_name_type_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t file_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN];
    _mav_put_uint8_t(buf, 0, file_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN);
#else
    mavlink_get_picture_name_type_t packet;
    packet.file_type = file_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_MIN_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_CRC);
}

/**
 * @brief Pack a get_picture_name_type message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param file_type  0: picture, 1: temp, 2: video
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_get_picture_name_type_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t file_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN];
    _mav_put_uint8_t(buf, 0, file_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN);
#else
    mavlink_get_picture_name_type_t packet;
    packet.file_type = file_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_MIN_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_MIN_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN);
#endif
}

/**
 * @brief Pack a get_picture_name_type message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param file_type  0: picture, 1: temp, 2: video
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_get_picture_name_type_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t file_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN];
    _mav_put_uint8_t(buf, 0, file_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN);
#else
    mavlink_get_picture_name_type_t packet;
    packet.file_type = file_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_MIN_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_CRC);
}

/**
 * @brief Encode a get_picture_name_type struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param get_picture_name_type C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_get_picture_name_type_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_get_picture_name_type_t* get_picture_name_type)
{
    return mavlink_msg_get_picture_name_type_pack(system_id, component_id, msg, get_picture_name_type->file_type);
}

/**
 * @brief Encode a get_picture_name_type struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param get_picture_name_type C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_get_picture_name_type_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_get_picture_name_type_t* get_picture_name_type)
{
    return mavlink_msg_get_picture_name_type_pack_chan(system_id, component_id, chan, msg, get_picture_name_type->file_type);
}

/**
 * @brief Encode a get_picture_name_type struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param get_picture_name_type C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_get_picture_name_type_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_get_picture_name_type_t* get_picture_name_type)
{
    return mavlink_msg_get_picture_name_type_pack_status(system_id, component_id, _status, msg,  get_picture_name_type->file_type);
}

/**
 * @brief Send a get_picture_name_type message
 * @param chan MAVLink channel to send the message
 *
 * @param file_type  0: picture, 1: temp, 2: video
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_get_picture_name_type_send(mavlink_channel_t chan, uint8_t file_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN];
    _mav_put_uint8_t(buf, 0, file_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE, buf, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_MIN_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_CRC);
#else
    mavlink_get_picture_name_type_t packet;
    packet.file_type = file_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE, (const char *)&packet, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_MIN_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_CRC);
#endif
}

/**
 * @brief Send a get_picture_name_type message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_get_picture_name_type_send_struct(mavlink_channel_t chan, const mavlink_get_picture_name_type_t* get_picture_name_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_get_picture_name_type_send(chan, get_picture_name_type->file_type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE, (const char *)get_picture_name_type, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_MIN_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_CRC);
#endif
}

#if MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_get_picture_name_type_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t file_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, file_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE, buf, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_MIN_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_CRC);
#else
    mavlink_get_picture_name_type_t *packet = (mavlink_get_picture_name_type_t *)msgbuf;
    packet->file_type = file_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE, (const char *)packet, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_MIN_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_CRC);
#endif
}
#endif

#endif

// MESSAGE GET_PICTURE_NAME_TYPE UNPACKING


/**
 * @brief Get field file_type from get_picture_name_type message
 *
 * @return  0: picture, 1: temp, 2: video
 */
static inline uint8_t mavlink_msg_get_picture_name_type_get_file_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a get_picture_name_type message into a struct
 *
 * @param msg The message to decode
 * @param get_picture_name_type C-struct to decode the message contents into
 */
static inline void mavlink_msg_get_picture_name_type_decode(const mavlink_message_t* msg, mavlink_get_picture_name_type_t* get_picture_name_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    get_picture_name_type->file_type = mavlink_msg_get_picture_name_type_get_file_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN? msg->len : MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN;
        memset(get_picture_name_type, 0, MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_LEN);
    memcpy(get_picture_name_type, _MAV_PAYLOAD(msg), len);
#endif
}
