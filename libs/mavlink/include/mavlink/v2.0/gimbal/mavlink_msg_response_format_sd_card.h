#pragma once
// MESSAGE RESPONSE_FORMAT_SD_CARD PACKING

#define MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD 90072


typedef struct __mavlink_response_format_sd_card_t {
 uint8_t format_sta; /*<  0: Fail, 1: Success*/
} mavlink_response_format_sd_card_t;

#define MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN 1
#define MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_MIN_LEN 1
#define MAVLINK_MSG_ID_90072_LEN 1
#define MAVLINK_MSG_ID_90072_MIN_LEN 1

#define MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_CRC 89
#define MAVLINK_MSG_ID_90072_CRC 89



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_FORMAT_SD_CARD { \
    90072, \
    "RESPONSE_FORMAT_SD_CARD", \
    1, \
    {  { "format_sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_format_sd_card_t, format_sta) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_FORMAT_SD_CARD { \
    "RESPONSE_FORMAT_SD_CARD", \
    1, \
    {  { "format_sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_format_sd_card_t, format_sta) }, \
         } \
}
#endif

/**
 * @brief Pack a response_format_sd_card message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param format_sta  0: Fail, 1: Success
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_format_sd_card_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t format_sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN];
    _mav_put_uint8_t(buf, 0, format_sta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN);
#else
    mavlink_response_format_sd_card_t packet;
    packet.format_sta = format_sta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_CRC);
}

/**
 * @brief Pack a response_format_sd_card message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param format_sta  0: Fail, 1: Success
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_format_sd_card_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t format_sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN];
    _mav_put_uint8_t(buf, 0, format_sta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN);
#else
    mavlink_response_format_sd_card_t packet;
    packet.format_sta = format_sta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN);
#endif
}

/**
 * @brief Pack a response_format_sd_card message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param format_sta  0: Fail, 1: Success
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_format_sd_card_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t format_sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN];
    _mav_put_uint8_t(buf, 0, format_sta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN);
#else
    mavlink_response_format_sd_card_t packet;
    packet.format_sta = format_sta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_CRC);
}

/**
 * @brief Encode a response_format_sd_card struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_format_sd_card C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_format_sd_card_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_format_sd_card_t* response_format_sd_card)
{
    return mavlink_msg_response_format_sd_card_pack(system_id, component_id, msg, response_format_sd_card->format_sta);
}

/**
 * @brief Encode a response_format_sd_card struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_format_sd_card C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_format_sd_card_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_format_sd_card_t* response_format_sd_card)
{
    return mavlink_msg_response_format_sd_card_pack_chan(system_id, component_id, chan, msg, response_format_sd_card->format_sta);
}

/**
 * @brief Encode a response_format_sd_card struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_format_sd_card C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_format_sd_card_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_format_sd_card_t* response_format_sd_card)
{
    return mavlink_msg_response_format_sd_card_pack_status(system_id, component_id, _status, msg,  response_format_sd_card->format_sta);
}

/**
 * @brief Send a response_format_sd_card message
 * @param chan MAVLink channel to send the message
 *
 * @param format_sta  0: Fail, 1: Success
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_format_sd_card_send(mavlink_channel_t chan, uint8_t format_sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN];
    _mav_put_uint8_t(buf, 0, format_sta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD, buf, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_CRC);
#else
    mavlink_response_format_sd_card_t packet;
    packet.format_sta = format_sta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_CRC);
#endif
}

/**
 * @brief Send a response_format_sd_card message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_format_sd_card_send_struct(mavlink_channel_t chan, const mavlink_response_format_sd_card_t* response_format_sd_card)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_format_sd_card_send(chan, response_format_sd_card->format_sta);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD, (const char *)response_format_sd_card, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_format_sd_card_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t format_sta)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, format_sta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD, buf, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_CRC);
#else
    mavlink_response_format_sd_card_t *packet = (mavlink_response_format_sd_card_t *)msgbuf;
    packet->format_sta = format_sta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_FORMAT_SD_CARD UNPACKING


/**
 * @brief Get field format_sta from response_format_sd_card message
 *
 * @return  0: Fail, 1: Success
 */
static inline uint8_t mavlink_msg_response_format_sd_card_get_format_sta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a response_format_sd_card message into a struct
 *
 * @param msg The message to decode
 * @param response_format_sd_card C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_format_sd_card_decode(const mavlink_message_t* msg, mavlink_response_format_sd_card_t* response_format_sd_card)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_format_sd_card->format_sta = mavlink_msg_response_format_sd_card_get_format_sta(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN;
        memset(response_format_sd_card, 0, MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_LEN);
    memcpy(response_format_sd_card, _MAV_PAYLOAD(msg), len);
#endif
}
