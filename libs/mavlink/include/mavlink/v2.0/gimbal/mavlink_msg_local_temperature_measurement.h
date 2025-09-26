#pragma once
// MESSAGE LOCAL_TEMPERATURE_MEASUREMENT PACKING

#define MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT 80019


typedef struct __mavlink_local_temperature_measurement_t {
 uint16_t startx; /*<  X coordinate*/
 uint16_t starty; /*<  Y coordinate*/
 uint16_t endx; /*<  End X coordinate*/
 uint16_t endy; /*<  End Y coordinate*/
 uint8_t get_temp_flag; /*<  1: Success, 0: Fail*/
} mavlink_local_temperature_measurement_t;

#define MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN 9
#define MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN 9
#define MAVLINK_MSG_ID_80019_LEN 9
#define MAVLINK_MSG_ID_80019_MIN_LEN 9

#define MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_CRC 137
#define MAVLINK_MSG_ID_80019_CRC 137



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LOCAL_TEMPERATURE_MEASUREMENT { \
    80019, \
    "LOCAL_TEMPERATURE_MEASUREMENT", \
    5, \
    {  { "startx", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_local_temperature_measurement_t, startx) }, \
         { "starty", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_local_temperature_measurement_t, starty) }, \
         { "endx", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_local_temperature_measurement_t, endx) }, \
         { "endy", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_local_temperature_measurement_t, endy) }, \
         { "get_temp_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_local_temperature_measurement_t, get_temp_flag) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LOCAL_TEMPERATURE_MEASUREMENT { \
    "LOCAL_TEMPERATURE_MEASUREMENT", \
    5, \
    {  { "startx", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_local_temperature_measurement_t, startx) }, \
         { "starty", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_local_temperature_measurement_t, starty) }, \
         { "endx", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_local_temperature_measurement_t, endx) }, \
         { "endy", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_local_temperature_measurement_t, endy) }, \
         { "get_temp_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_local_temperature_measurement_t, get_temp_flag) }, \
         } \
}
#endif

/**
 * @brief Pack a local_temperature_measurement message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param startx  X coordinate
 * @param starty  Y coordinate
 * @param endx  End X coordinate
 * @param endy  End Y coordinate
 * @param get_temp_flag  1: Success, 0: Fail
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_local_temperature_measurement_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t startx, uint16_t starty, uint16_t endx, uint16_t endy, uint8_t get_temp_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN];
    _mav_put_uint16_t(buf, 0, startx);
    _mav_put_uint16_t(buf, 2, starty);
    _mav_put_uint16_t(buf, 4, endx);
    _mav_put_uint16_t(buf, 6, endy);
    _mav_put_uint8_t(buf, 8, get_temp_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN);
#else
    mavlink_local_temperature_measurement_t packet;
    packet.startx = startx;
    packet.starty = starty;
    packet.endx = endx;
    packet.endy = endy;
    packet.get_temp_flag = get_temp_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_CRC);
}

/**
 * @brief Pack a local_temperature_measurement message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param startx  X coordinate
 * @param starty  Y coordinate
 * @param endx  End X coordinate
 * @param endy  End Y coordinate
 * @param get_temp_flag  1: Success, 0: Fail
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_local_temperature_measurement_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t startx, uint16_t starty, uint16_t endx, uint16_t endy, uint8_t get_temp_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN];
    _mav_put_uint16_t(buf, 0, startx);
    _mav_put_uint16_t(buf, 2, starty);
    _mav_put_uint16_t(buf, 4, endx);
    _mav_put_uint16_t(buf, 6, endy);
    _mav_put_uint8_t(buf, 8, get_temp_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN);
#else
    mavlink_local_temperature_measurement_t packet;
    packet.startx = startx;
    packet.starty = starty;
    packet.endx = endx;
    packet.endy = endy;
    packet.get_temp_flag = get_temp_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN);
#endif
}

/**
 * @brief Pack a local_temperature_measurement message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param startx  X coordinate
 * @param starty  Y coordinate
 * @param endx  End X coordinate
 * @param endy  End Y coordinate
 * @param get_temp_flag  1: Success, 0: Fail
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_local_temperature_measurement_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t startx,uint16_t starty,uint16_t endx,uint16_t endy,uint8_t get_temp_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN];
    _mav_put_uint16_t(buf, 0, startx);
    _mav_put_uint16_t(buf, 2, starty);
    _mav_put_uint16_t(buf, 4, endx);
    _mav_put_uint16_t(buf, 6, endy);
    _mav_put_uint8_t(buf, 8, get_temp_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN);
#else
    mavlink_local_temperature_measurement_t packet;
    packet.startx = startx;
    packet.starty = starty;
    packet.endx = endx;
    packet.endy = endy;
    packet.get_temp_flag = get_temp_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_CRC);
}

/**
 * @brief Encode a local_temperature_measurement struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param local_temperature_measurement C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_local_temperature_measurement_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_local_temperature_measurement_t* local_temperature_measurement)
{
    return mavlink_msg_local_temperature_measurement_pack(system_id, component_id, msg, local_temperature_measurement->startx, local_temperature_measurement->starty, local_temperature_measurement->endx, local_temperature_measurement->endy, local_temperature_measurement->get_temp_flag);
}

/**
 * @brief Encode a local_temperature_measurement struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param local_temperature_measurement C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_local_temperature_measurement_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_local_temperature_measurement_t* local_temperature_measurement)
{
    return mavlink_msg_local_temperature_measurement_pack_chan(system_id, component_id, chan, msg, local_temperature_measurement->startx, local_temperature_measurement->starty, local_temperature_measurement->endx, local_temperature_measurement->endy, local_temperature_measurement->get_temp_flag);
}

/**
 * @brief Encode a local_temperature_measurement struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param local_temperature_measurement C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_local_temperature_measurement_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_local_temperature_measurement_t* local_temperature_measurement)
{
    return mavlink_msg_local_temperature_measurement_pack_status(system_id, component_id, _status, msg,  local_temperature_measurement->startx, local_temperature_measurement->starty, local_temperature_measurement->endx, local_temperature_measurement->endy, local_temperature_measurement->get_temp_flag);
}

/**
 * @brief Send a local_temperature_measurement message
 * @param chan MAVLink channel to send the message
 *
 * @param startx  X coordinate
 * @param starty  Y coordinate
 * @param endx  End X coordinate
 * @param endy  End Y coordinate
 * @param get_temp_flag  1: Success, 0: Fail
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_local_temperature_measurement_send(mavlink_channel_t chan, uint16_t startx, uint16_t starty, uint16_t endx, uint16_t endy, uint8_t get_temp_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN];
    _mav_put_uint16_t(buf, 0, startx);
    _mav_put_uint16_t(buf, 2, starty);
    _mav_put_uint16_t(buf, 4, endx);
    _mav_put_uint16_t(buf, 6, endy);
    _mav_put_uint8_t(buf, 8, get_temp_flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT, buf, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_CRC);
#else
    mavlink_local_temperature_measurement_t packet;
    packet.startx = startx;
    packet.starty = starty;
    packet.endx = endx;
    packet.endy = endy;
    packet.get_temp_flag = get_temp_flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT, (const char *)&packet, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_CRC);
#endif
}

/**
 * @brief Send a local_temperature_measurement message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_local_temperature_measurement_send_struct(mavlink_channel_t chan, const mavlink_local_temperature_measurement_t* local_temperature_measurement)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_local_temperature_measurement_send(chan, local_temperature_measurement->startx, local_temperature_measurement->starty, local_temperature_measurement->endx, local_temperature_measurement->endy, local_temperature_measurement->get_temp_flag);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT, (const char *)local_temperature_measurement, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_CRC);
#endif
}

#if MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_local_temperature_measurement_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t startx, uint16_t starty, uint16_t endx, uint16_t endy, uint8_t get_temp_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, startx);
    _mav_put_uint16_t(buf, 2, starty);
    _mav_put_uint16_t(buf, 4, endx);
    _mav_put_uint16_t(buf, 6, endy);
    _mav_put_uint8_t(buf, 8, get_temp_flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT, buf, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_CRC);
#else
    mavlink_local_temperature_measurement_t *packet = (mavlink_local_temperature_measurement_t *)msgbuf;
    packet->startx = startx;
    packet->starty = starty;
    packet->endx = endx;
    packet->endy = endy;
    packet->get_temp_flag = get_temp_flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT, (const char *)packet, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_CRC);
#endif
}
#endif

#endif

// MESSAGE LOCAL_TEMPERATURE_MEASUREMENT UNPACKING


/**
 * @brief Get field startx from local_temperature_measurement message
 *
 * @return  X coordinate
 */
static inline uint16_t mavlink_msg_local_temperature_measurement_get_startx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field starty from local_temperature_measurement message
 *
 * @return  Y coordinate
 */
static inline uint16_t mavlink_msg_local_temperature_measurement_get_starty(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field endx from local_temperature_measurement message
 *
 * @return  End X coordinate
 */
static inline uint16_t mavlink_msg_local_temperature_measurement_get_endx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field endy from local_temperature_measurement message
 *
 * @return  End Y coordinate
 */
static inline uint16_t mavlink_msg_local_temperature_measurement_get_endy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field get_temp_flag from local_temperature_measurement message
 *
 * @return  1: Success, 0: Fail
 */
static inline uint8_t mavlink_msg_local_temperature_measurement_get_get_temp_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a local_temperature_measurement message into a struct
 *
 * @param msg The message to decode
 * @param local_temperature_measurement C-struct to decode the message contents into
 */
static inline void mavlink_msg_local_temperature_measurement_decode(const mavlink_message_t* msg, mavlink_local_temperature_measurement_t* local_temperature_measurement)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    local_temperature_measurement->startx = mavlink_msg_local_temperature_measurement_get_startx(msg);
    local_temperature_measurement->starty = mavlink_msg_local_temperature_measurement_get_starty(msg);
    local_temperature_measurement->endx = mavlink_msg_local_temperature_measurement_get_endx(msg);
    local_temperature_measurement->endy = mavlink_msg_local_temperature_measurement_get_endy(msg);
    local_temperature_measurement->get_temp_flag = mavlink_msg_local_temperature_measurement_get_get_temp_flag(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN? msg->len : MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN;
        memset(local_temperature_measurement, 0, MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_LEN);
    memcpy(local_temperature_measurement, _MAV_PAYLOAD(msg), len);
#endif
}
