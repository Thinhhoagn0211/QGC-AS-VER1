#pragma once
// MESSAGE RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR PACKING

#define MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR 90027


typedef struct __mavlink_response_set_current_thermal_image_pseudocolor_t {
 uint8_t pseudo_color; /*<   0 = White Hot, 1 = Black Hot, 2 = Ironbow, 3 = Rainbow*/
} mavlink_response_set_current_thermal_image_pseudocolor_t;

#define MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN 1
#define MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN 1
#define MAVLINK_MSG_ID_90027_LEN 1
#define MAVLINK_MSG_ID_90027_MIN_LEN 1

#define MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_CRC 178
#define MAVLINK_MSG_ID_90027_CRC 178



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR { \
    90027, \
    "RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR", \
    1, \
    {  { "pseudo_color", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_set_current_thermal_image_pseudocolor_t, pseudo_color) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR { \
    "RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR", \
    1, \
    {  { "pseudo_color", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_set_current_thermal_image_pseudocolor_t, pseudo_color) }, \
         } \
}
#endif

/**
 * @brief Pack a response_set_current_thermal_image_pseudocolor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pseudo_color   0 = White Hot, 1 = Black Hot, 2 = Ironbow, 3 = Rainbow
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_set_current_thermal_image_pseudocolor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t pseudo_color)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN];
    _mav_put_uint8_t(buf, 0, pseudo_color);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN);
#else
    mavlink_response_set_current_thermal_image_pseudocolor_t packet;
    packet.pseudo_color = pseudo_color;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_CRC);
}

/**
 * @brief Pack a response_set_current_thermal_image_pseudocolor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param pseudo_color   0 = White Hot, 1 = Black Hot, 2 = Ironbow, 3 = Rainbow
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_set_current_thermal_image_pseudocolor_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t pseudo_color)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN];
    _mav_put_uint8_t(buf, 0, pseudo_color);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN);
#else
    mavlink_response_set_current_thermal_image_pseudocolor_t packet;
    packet.pseudo_color = pseudo_color;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN);
#endif
}

/**
 * @brief Pack a response_set_current_thermal_image_pseudocolor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pseudo_color   0 = White Hot, 1 = Black Hot, 2 = Ironbow, 3 = Rainbow
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_set_current_thermal_image_pseudocolor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t pseudo_color)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN];
    _mav_put_uint8_t(buf, 0, pseudo_color);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN);
#else
    mavlink_response_set_current_thermal_image_pseudocolor_t packet;
    packet.pseudo_color = pseudo_color;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_CRC);
}

/**
 * @brief Encode a response_set_current_thermal_image_pseudocolor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_set_current_thermal_image_pseudocolor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_set_current_thermal_image_pseudocolor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_set_current_thermal_image_pseudocolor_t* response_set_current_thermal_image_pseudocolor)
{
    return mavlink_msg_response_set_current_thermal_image_pseudocolor_pack(system_id, component_id, msg, response_set_current_thermal_image_pseudocolor->pseudo_color);
}

/**
 * @brief Encode a response_set_current_thermal_image_pseudocolor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_set_current_thermal_image_pseudocolor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_set_current_thermal_image_pseudocolor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_set_current_thermal_image_pseudocolor_t* response_set_current_thermal_image_pseudocolor)
{
    return mavlink_msg_response_set_current_thermal_image_pseudocolor_pack_chan(system_id, component_id, chan, msg, response_set_current_thermal_image_pseudocolor->pseudo_color);
}

/**
 * @brief Encode a response_set_current_thermal_image_pseudocolor struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_set_current_thermal_image_pseudocolor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_set_current_thermal_image_pseudocolor_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_set_current_thermal_image_pseudocolor_t* response_set_current_thermal_image_pseudocolor)
{
    return mavlink_msg_response_set_current_thermal_image_pseudocolor_pack_status(system_id, component_id, _status, msg,  response_set_current_thermal_image_pseudocolor->pseudo_color);
}

/**
 * @brief Send a response_set_current_thermal_image_pseudocolor message
 * @param chan MAVLink channel to send the message
 *
 * @param pseudo_color   0 = White Hot, 1 = Black Hot, 2 = Ironbow, 3 = Rainbow
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_set_current_thermal_image_pseudocolor_send(mavlink_channel_t chan, uint8_t pseudo_color)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN];
    _mav_put_uint8_t(buf, 0, pseudo_color);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR, buf, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_CRC);
#else
    mavlink_response_set_current_thermal_image_pseudocolor_t packet;
    packet.pseudo_color = pseudo_color;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_CRC);
#endif
}

/**
 * @brief Send a response_set_current_thermal_image_pseudocolor message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_set_current_thermal_image_pseudocolor_send_struct(mavlink_channel_t chan, const mavlink_response_set_current_thermal_image_pseudocolor_t* response_set_current_thermal_image_pseudocolor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_set_current_thermal_image_pseudocolor_send(chan, response_set_current_thermal_image_pseudocolor->pseudo_color);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR, (const char *)response_set_current_thermal_image_pseudocolor, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_set_current_thermal_image_pseudocolor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t pseudo_color)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, pseudo_color);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR, buf, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_CRC);
#else
    mavlink_response_set_current_thermal_image_pseudocolor_t *packet = (mavlink_response_set_current_thermal_image_pseudocolor_t *)msgbuf;
    packet->pseudo_color = pseudo_color;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR UNPACKING


/**
 * @brief Get field pseudo_color from response_set_current_thermal_image_pseudocolor message
 *
 * @return   0 = White Hot, 1 = Black Hot, 2 = Ironbow, 3 = Rainbow
 */
static inline uint8_t mavlink_msg_response_set_current_thermal_image_pseudocolor_get_pseudo_color(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a response_set_current_thermal_image_pseudocolor message into a struct
 *
 * @param msg The message to decode
 * @param response_set_current_thermal_image_pseudocolor C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_set_current_thermal_image_pseudocolor_decode(const mavlink_message_t* msg, mavlink_response_set_current_thermal_image_pseudocolor_t* response_set_current_thermal_image_pseudocolor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_set_current_thermal_image_pseudocolor->pseudo_color = mavlink_msg_response_set_current_thermal_image_pseudocolor_get_pseudo_color(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN;
        memset(response_set_current_thermal_image_pseudocolor, 0, MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_LEN);
    memcpy(response_set_current_thermal_image_pseudocolor, _MAV_PAYLOAD(msg), len);
#endif
}
