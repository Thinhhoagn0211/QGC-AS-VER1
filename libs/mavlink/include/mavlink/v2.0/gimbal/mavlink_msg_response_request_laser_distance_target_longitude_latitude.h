#pragma once
// MESSAGE RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE PACKING

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE 90023


typedef struct __mavlink_response_request_laser_distance_target_longitude_latitude_t {
 int32_t target_lat; /*<  Target latitude (degE7)*/
 int32_t target_lon; /*<  Target longitude (degE7)*/
} mavlink_response_request_laser_distance_target_longitude_latitude_t;

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN 8
#define MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN 8
#define MAVLINK_MSG_ID_90023_LEN 8
#define MAVLINK_MSG_ID_90023_MIN_LEN 8

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_CRC 133
#define MAVLINK_MSG_ID_90023_CRC 133



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE { \
    90023, \
    "RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE", \
    2, \
    {  { "target_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_response_request_laser_distance_target_longitude_latitude_t, target_lat) }, \
         { "target_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_response_request_laser_distance_target_longitude_latitude_t, target_lon) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE { \
    "RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE", \
    2, \
    {  { "target_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_response_request_laser_distance_target_longitude_latitude_t, target_lat) }, \
         { "target_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_response_request_laser_distance_target_longitude_latitude_t, target_lon) }, \
         } \
}
#endif

/**
 * @brief Pack a response_request_laser_distance_target_longitude_latitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_lat  Target latitude (degE7)
 * @param target_lon  Target longitude (degE7)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_laser_distance_target_longitude_latitude_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t target_lat, int32_t target_lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN];
    _mav_put_int32_t(buf, 0, target_lat);
    _mav_put_int32_t(buf, 4, target_lon);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN);
#else
    mavlink_response_request_laser_distance_target_longitude_latitude_t packet;
    packet.target_lat = target_lat;
    packet.target_lon = target_lon;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_CRC);
}

/**
 * @brief Pack a response_request_laser_distance_target_longitude_latitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_lat  Target latitude (degE7)
 * @param target_lon  Target longitude (degE7)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_laser_distance_target_longitude_latitude_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t target_lat, int32_t target_lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN];
    _mav_put_int32_t(buf, 0, target_lat);
    _mav_put_int32_t(buf, 4, target_lon);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN);
#else
    mavlink_response_request_laser_distance_target_longitude_latitude_t packet;
    packet.target_lat = target_lat;
    packet.target_lon = target_lon;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN);
#endif
}

/**
 * @brief Pack a response_request_laser_distance_target_longitude_latitude message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_lat  Target latitude (degE7)
 * @param target_lon  Target longitude (degE7)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_laser_distance_target_longitude_latitude_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t target_lat,int32_t target_lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN];
    _mav_put_int32_t(buf, 0, target_lat);
    _mav_put_int32_t(buf, 4, target_lon);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN);
#else
    mavlink_response_request_laser_distance_target_longitude_latitude_t packet;
    packet.target_lat = target_lat;
    packet.target_lon = target_lon;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_CRC);
}

/**
 * @brief Encode a response_request_laser_distance_target_longitude_latitude struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_request_laser_distance_target_longitude_latitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_laser_distance_target_longitude_latitude_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_request_laser_distance_target_longitude_latitude_t* response_request_laser_distance_target_longitude_latitude)
{
    return mavlink_msg_response_request_laser_distance_target_longitude_latitude_pack(system_id, component_id, msg, response_request_laser_distance_target_longitude_latitude->target_lat, response_request_laser_distance_target_longitude_latitude->target_lon);
}

/**
 * @brief Encode a response_request_laser_distance_target_longitude_latitude struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_request_laser_distance_target_longitude_latitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_laser_distance_target_longitude_latitude_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_request_laser_distance_target_longitude_latitude_t* response_request_laser_distance_target_longitude_latitude)
{
    return mavlink_msg_response_request_laser_distance_target_longitude_latitude_pack_chan(system_id, component_id, chan, msg, response_request_laser_distance_target_longitude_latitude->target_lat, response_request_laser_distance_target_longitude_latitude->target_lon);
}

/**
 * @brief Encode a response_request_laser_distance_target_longitude_latitude struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_request_laser_distance_target_longitude_latitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_laser_distance_target_longitude_latitude_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_request_laser_distance_target_longitude_latitude_t* response_request_laser_distance_target_longitude_latitude)
{
    return mavlink_msg_response_request_laser_distance_target_longitude_latitude_pack_status(system_id, component_id, _status, msg,  response_request_laser_distance_target_longitude_latitude->target_lat, response_request_laser_distance_target_longitude_latitude->target_lon);
}

/**
 * @brief Send a response_request_laser_distance_target_longitude_latitude message
 * @param chan MAVLink channel to send the message
 *
 * @param target_lat  Target latitude (degE7)
 * @param target_lon  Target longitude (degE7)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_request_laser_distance_target_longitude_latitude_send(mavlink_channel_t chan, int32_t target_lat, int32_t target_lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN];
    _mav_put_int32_t(buf, 0, target_lat);
    _mav_put_int32_t(buf, 4, target_lon);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_CRC);
#else
    mavlink_response_request_laser_distance_target_longitude_latitude_t packet;
    packet.target_lat = target_lat;
    packet.target_lon = target_lon;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_CRC);
#endif
}

/**
 * @brief Send a response_request_laser_distance_target_longitude_latitude message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_request_laser_distance_target_longitude_latitude_send_struct(mavlink_channel_t chan, const mavlink_response_request_laser_distance_target_longitude_latitude_t* response_request_laser_distance_target_longitude_latitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_request_laser_distance_target_longitude_latitude_send(chan, response_request_laser_distance_target_longitude_latitude->target_lat, response_request_laser_distance_target_longitude_latitude->target_lon);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE, (const char *)response_request_laser_distance_target_longitude_latitude, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_request_laser_distance_target_longitude_latitude_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t target_lat, int32_t target_lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, target_lat);
    _mav_put_int32_t(buf, 4, target_lon);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_CRC);
#else
    mavlink_response_request_laser_distance_target_longitude_latitude_t *packet = (mavlink_response_request_laser_distance_target_longitude_latitude_t *)msgbuf;
    packet->target_lat = target_lat;
    packet->target_lon = target_lon;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE UNPACKING


/**
 * @brief Get field target_lat from response_request_laser_distance_target_longitude_latitude message
 *
 * @return  Target latitude (degE7)
 */
static inline int32_t mavlink_msg_response_request_laser_distance_target_longitude_latitude_get_target_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field target_lon from response_request_laser_distance_target_longitude_latitude message
 *
 * @return  Target longitude (degE7)
 */
static inline int32_t mavlink_msg_response_request_laser_distance_target_longitude_latitude_get_target_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Decode a response_request_laser_distance_target_longitude_latitude message into a struct
 *
 * @param msg The message to decode
 * @param response_request_laser_distance_target_longitude_latitude C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_request_laser_distance_target_longitude_latitude_decode(const mavlink_message_t* msg, mavlink_response_request_laser_distance_target_longitude_latitude_t* response_request_laser_distance_target_longitude_latitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_request_laser_distance_target_longitude_latitude->target_lat = mavlink_msg_response_request_laser_distance_target_longitude_latitude_get_target_lat(msg);
    response_request_laser_distance_target_longitude_latitude->target_lon = mavlink_msg_response_request_laser_distance_target_longitude_latitude_get_target_lon(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN;
        memset(response_request_laser_distance_target_longitude_latitude, 0, MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_LEN);
    memcpy(response_request_laser_distance_target_longitude_latitude, _MAV_PAYLOAD(msg), len);
#endif
}
