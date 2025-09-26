#pragma once
// MESSAGE UPDATE_THERMAL_SHUTTER PACKING

#define MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER 80079


typedef struct __mavlink_update_thermal_shutter_t {
 uint8_t dummy; /*<  Reserved*/
} mavlink_update_thermal_shutter_t;

#define MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN 1
#define MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_MIN_LEN 1
#define MAVLINK_MSG_ID_80079_LEN 1
#define MAVLINK_MSG_ID_80079_MIN_LEN 1

#define MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_CRC 61
#define MAVLINK_MSG_ID_80079_CRC 61



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UPDATE_THERMAL_SHUTTER { \
    80079, \
    "UPDATE_THERMAL_SHUTTER", \
    1, \
    {  { "dummy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_update_thermal_shutter_t, dummy) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UPDATE_THERMAL_SHUTTER { \
    "UPDATE_THERMAL_SHUTTER", \
    1, \
    {  { "dummy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_update_thermal_shutter_t, dummy) }, \
         } \
}
#endif

/**
 * @brief Pack a update_thermal_shutter message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param dummy  Reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_update_thermal_shutter_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN);
#else
    mavlink_update_thermal_shutter_t packet;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_MIN_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_CRC);
}

/**
 * @brief Pack a update_thermal_shutter message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param dummy  Reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_update_thermal_shutter_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN);
#else
    mavlink_update_thermal_shutter_t packet;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_MIN_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_MIN_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN);
#endif
}

/**
 * @brief Pack a update_thermal_shutter message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dummy  Reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_update_thermal_shutter_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN);
#else
    mavlink_update_thermal_shutter_t packet;
    packet.dummy = dummy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_MIN_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_CRC);
}

/**
 * @brief Encode a update_thermal_shutter struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param update_thermal_shutter C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_update_thermal_shutter_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_update_thermal_shutter_t* update_thermal_shutter)
{
    return mavlink_msg_update_thermal_shutter_pack(system_id, component_id, msg, update_thermal_shutter->dummy);
}

/**
 * @brief Encode a update_thermal_shutter struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param update_thermal_shutter C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_update_thermal_shutter_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_update_thermal_shutter_t* update_thermal_shutter)
{
    return mavlink_msg_update_thermal_shutter_pack_chan(system_id, component_id, chan, msg, update_thermal_shutter->dummy);
}

/**
 * @brief Encode a update_thermal_shutter struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param update_thermal_shutter C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_update_thermal_shutter_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_update_thermal_shutter_t* update_thermal_shutter)
{
    return mavlink_msg_update_thermal_shutter_pack_status(system_id, component_id, _status, msg,  update_thermal_shutter->dummy);
}

/**
 * @brief Send a update_thermal_shutter message
 * @param chan MAVLink channel to send the message
 *
 * @param dummy  Reserved
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_update_thermal_shutter_send(mavlink_channel_t chan, uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN];
    _mav_put_uint8_t(buf, 0, dummy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER, buf, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_MIN_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_CRC);
#else
    mavlink_update_thermal_shutter_t packet;
    packet.dummy = dummy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER, (const char *)&packet, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_MIN_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_CRC);
#endif
}

/**
 * @brief Send a update_thermal_shutter message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_update_thermal_shutter_send_struct(mavlink_channel_t chan, const mavlink_update_thermal_shutter_t* update_thermal_shutter)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_update_thermal_shutter_send(chan, update_thermal_shutter->dummy);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER, (const char *)update_thermal_shutter, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_MIN_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_CRC);
#endif
}

#if MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_update_thermal_shutter_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, dummy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER, buf, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_MIN_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_CRC);
#else
    mavlink_update_thermal_shutter_t *packet = (mavlink_update_thermal_shutter_t *)msgbuf;
    packet->dummy = dummy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER, (const char *)packet, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_MIN_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_CRC);
#endif
}
#endif

#endif

// MESSAGE UPDATE_THERMAL_SHUTTER UNPACKING


/**
 * @brief Get field dummy from update_thermal_shutter message
 *
 * @return  Reserved
 */
static inline uint8_t mavlink_msg_update_thermal_shutter_get_dummy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a update_thermal_shutter message into a struct
 *
 * @param msg The message to decode
 * @param update_thermal_shutter C-struct to decode the message contents into
 */
static inline void mavlink_msg_update_thermal_shutter_decode(const mavlink_message_t* msg, mavlink_update_thermal_shutter_t* update_thermal_shutter)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    update_thermal_shutter->dummy = mavlink_msg_update_thermal_shutter_get_dummy(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN? msg->len : MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN;
        memset(update_thermal_shutter, 0, MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_LEN);
    memcpy(update_thermal_shutter, _MAV_PAYLOAD(msg), len);
#endif
}
