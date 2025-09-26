#pragma once
// MESSAGE SEND_RAW_GPS_TO_GIMBAL PACKING

#define MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL 80062


typedef struct __mavlink_send_raw_gps_to_gimbal_t {
 uint32_t time_boot_ms; /*<  Time since boot (ms)*/
 int32_t lat; /*<  Latitude (degE7)*/
 int32_t lon; /*<  Longitude (degE7)*/
 int32_t alt; /*<  Altitude MSL (cm)*/
 int32_t alt_ellipsoid; /*<  Altitude above WGS84 (cm)*/
 int32_t vn; /*<  Velocity X (mm/s)*/
 int32_t ve; /*<  Velocity Y (mm/s)*/
 int32_t vd; /*<  Velocity Z (mm/s)*/
} mavlink_send_raw_gps_to_gimbal_t;

#define MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN 32
#define MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_MIN_LEN 32
#define MAVLINK_MSG_ID_80062_LEN 32
#define MAVLINK_MSG_ID_80062_MIN_LEN 32

#define MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_CRC 55
#define MAVLINK_MSG_ID_80062_CRC 55



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SEND_RAW_GPS_TO_GIMBAL { \
    80062, \
    "SEND_RAW_GPS_TO_GIMBAL", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_send_raw_gps_to_gimbal_t, time_boot_ms) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_send_raw_gps_to_gimbal_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_send_raw_gps_to_gimbal_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_send_raw_gps_to_gimbal_t, alt) }, \
         { "alt_ellipsoid", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_send_raw_gps_to_gimbal_t, alt_ellipsoid) }, \
         { "vn", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_send_raw_gps_to_gimbal_t, vn) }, \
         { "ve", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_send_raw_gps_to_gimbal_t, ve) }, \
         { "vd", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_send_raw_gps_to_gimbal_t, vd) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SEND_RAW_GPS_TO_GIMBAL { \
    "SEND_RAW_GPS_TO_GIMBAL", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_send_raw_gps_to_gimbal_t, time_boot_ms) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_send_raw_gps_to_gimbal_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_send_raw_gps_to_gimbal_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_send_raw_gps_to_gimbal_t, alt) }, \
         { "alt_ellipsoid", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_send_raw_gps_to_gimbal_t, alt_ellipsoid) }, \
         { "vn", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_send_raw_gps_to_gimbal_t, vn) }, \
         { "ve", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_send_raw_gps_to_gimbal_t, ve) }, \
         { "vd", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_send_raw_gps_to_gimbal_t, vd) }, \
         } \
}
#endif

/**
 * @brief Pack a send_raw_gps_to_gimbal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms  Time since boot (ms)
 * @param lat  Latitude (degE7)
 * @param lon  Longitude (degE7)
 * @param alt  Altitude MSL (cm)
 * @param alt_ellipsoid  Altitude above WGS84 (cm)
 * @param vn  Velocity X (mm/s)
 * @param ve  Velocity Y (mm/s)
 * @param vd  Velocity Z (mm/s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_send_raw_gps_to_gimbal_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, int32_t lat, int32_t lon, int32_t alt, int32_t alt_ellipsoid, int32_t vn, int32_t ve, int32_t vd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_int32_t(buf, 16, alt_ellipsoid);
    _mav_put_int32_t(buf, 20, vn);
    _mav_put_int32_t(buf, 24, ve);
    _mav_put_int32_t(buf, 28, vd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN);
#else
    mavlink_send_raw_gps_to_gimbal_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.alt_ellipsoid = alt_ellipsoid;
    packet.vn = vn;
    packet.ve = ve;
    packet.vd = vd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_CRC);
}

/**
 * @brief Pack a send_raw_gps_to_gimbal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms  Time since boot (ms)
 * @param lat  Latitude (degE7)
 * @param lon  Longitude (degE7)
 * @param alt  Altitude MSL (cm)
 * @param alt_ellipsoid  Altitude above WGS84 (cm)
 * @param vn  Velocity X (mm/s)
 * @param ve  Velocity Y (mm/s)
 * @param vd  Velocity Z (mm/s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_send_raw_gps_to_gimbal_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, int32_t lat, int32_t lon, int32_t alt, int32_t alt_ellipsoid, int32_t vn, int32_t ve, int32_t vd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_int32_t(buf, 16, alt_ellipsoid);
    _mav_put_int32_t(buf, 20, vn);
    _mav_put_int32_t(buf, 24, ve);
    _mav_put_int32_t(buf, 28, vd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN);
#else
    mavlink_send_raw_gps_to_gimbal_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.alt_ellipsoid = alt_ellipsoid;
    packet.vn = vn;
    packet.ve = ve;
    packet.vd = vd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN);
#endif
}

/**
 * @brief Pack a send_raw_gps_to_gimbal message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms  Time since boot (ms)
 * @param lat  Latitude (degE7)
 * @param lon  Longitude (degE7)
 * @param alt  Altitude MSL (cm)
 * @param alt_ellipsoid  Altitude above WGS84 (cm)
 * @param vn  Velocity X (mm/s)
 * @param ve  Velocity Y (mm/s)
 * @param vd  Velocity Z (mm/s)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_send_raw_gps_to_gimbal_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,int32_t lat,int32_t lon,int32_t alt,int32_t alt_ellipsoid,int32_t vn,int32_t ve,int32_t vd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_int32_t(buf, 16, alt_ellipsoid);
    _mav_put_int32_t(buf, 20, vn);
    _mav_put_int32_t(buf, 24, ve);
    _mav_put_int32_t(buf, 28, vd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN);
#else
    mavlink_send_raw_gps_to_gimbal_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.alt_ellipsoid = alt_ellipsoid;
    packet.vn = vn;
    packet.ve = ve;
    packet.vd = vd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_CRC);
}

/**
 * @brief Encode a send_raw_gps_to_gimbal struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param send_raw_gps_to_gimbal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_send_raw_gps_to_gimbal_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_send_raw_gps_to_gimbal_t* send_raw_gps_to_gimbal)
{
    return mavlink_msg_send_raw_gps_to_gimbal_pack(system_id, component_id, msg, send_raw_gps_to_gimbal->time_boot_ms, send_raw_gps_to_gimbal->lat, send_raw_gps_to_gimbal->lon, send_raw_gps_to_gimbal->alt, send_raw_gps_to_gimbal->alt_ellipsoid, send_raw_gps_to_gimbal->vn, send_raw_gps_to_gimbal->ve, send_raw_gps_to_gimbal->vd);
}

/**
 * @brief Encode a send_raw_gps_to_gimbal struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param send_raw_gps_to_gimbal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_send_raw_gps_to_gimbal_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_send_raw_gps_to_gimbal_t* send_raw_gps_to_gimbal)
{
    return mavlink_msg_send_raw_gps_to_gimbal_pack_chan(system_id, component_id, chan, msg, send_raw_gps_to_gimbal->time_boot_ms, send_raw_gps_to_gimbal->lat, send_raw_gps_to_gimbal->lon, send_raw_gps_to_gimbal->alt, send_raw_gps_to_gimbal->alt_ellipsoid, send_raw_gps_to_gimbal->vn, send_raw_gps_to_gimbal->ve, send_raw_gps_to_gimbal->vd);
}

/**
 * @brief Encode a send_raw_gps_to_gimbal struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param send_raw_gps_to_gimbal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_send_raw_gps_to_gimbal_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_send_raw_gps_to_gimbal_t* send_raw_gps_to_gimbal)
{
    return mavlink_msg_send_raw_gps_to_gimbal_pack_status(system_id, component_id, _status, msg,  send_raw_gps_to_gimbal->time_boot_ms, send_raw_gps_to_gimbal->lat, send_raw_gps_to_gimbal->lon, send_raw_gps_to_gimbal->alt, send_raw_gps_to_gimbal->alt_ellipsoid, send_raw_gps_to_gimbal->vn, send_raw_gps_to_gimbal->ve, send_raw_gps_to_gimbal->vd);
}

/**
 * @brief Send a send_raw_gps_to_gimbal message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms  Time since boot (ms)
 * @param lat  Latitude (degE7)
 * @param lon  Longitude (degE7)
 * @param alt  Altitude MSL (cm)
 * @param alt_ellipsoid  Altitude above WGS84 (cm)
 * @param vn  Velocity X (mm/s)
 * @param ve  Velocity Y (mm/s)
 * @param vd  Velocity Z (mm/s)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_send_raw_gps_to_gimbal_send(mavlink_channel_t chan, uint32_t time_boot_ms, int32_t lat, int32_t lon, int32_t alt, int32_t alt_ellipsoid, int32_t vn, int32_t ve, int32_t vd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_int32_t(buf, 16, alt_ellipsoid);
    _mav_put_int32_t(buf, 20, vn);
    _mav_put_int32_t(buf, 24, ve);
    _mav_put_int32_t(buf, 28, vd);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL, buf, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_CRC);
#else
    mavlink_send_raw_gps_to_gimbal_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.alt_ellipsoid = alt_ellipsoid;
    packet.vn = vn;
    packet.ve = ve;
    packet.vd = vd;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL, (const char *)&packet, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_CRC);
#endif
}

/**
 * @brief Send a send_raw_gps_to_gimbal message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_send_raw_gps_to_gimbal_send_struct(mavlink_channel_t chan, const mavlink_send_raw_gps_to_gimbal_t* send_raw_gps_to_gimbal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_send_raw_gps_to_gimbal_send(chan, send_raw_gps_to_gimbal->time_boot_ms, send_raw_gps_to_gimbal->lat, send_raw_gps_to_gimbal->lon, send_raw_gps_to_gimbal->alt, send_raw_gps_to_gimbal->alt_ellipsoid, send_raw_gps_to_gimbal->vn, send_raw_gps_to_gimbal->ve, send_raw_gps_to_gimbal->vd);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL, (const char *)send_raw_gps_to_gimbal, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_CRC);
#endif
}

#if MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_send_raw_gps_to_gimbal_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int32_t lat, int32_t lon, int32_t alt, int32_t alt_ellipsoid, int32_t vn, int32_t ve, int32_t vd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_int32_t(buf, 16, alt_ellipsoid);
    _mav_put_int32_t(buf, 20, vn);
    _mav_put_int32_t(buf, 24, ve);
    _mav_put_int32_t(buf, 28, vd);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL, buf, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_CRC);
#else
    mavlink_send_raw_gps_to_gimbal_t *packet = (mavlink_send_raw_gps_to_gimbal_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->alt_ellipsoid = alt_ellipsoid;
    packet->vn = vn;
    packet->ve = ve;
    packet->vd = vd;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL, (const char *)packet, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_CRC);
#endif
}
#endif

#endif

// MESSAGE SEND_RAW_GPS_TO_GIMBAL UNPACKING


/**
 * @brief Get field time_boot_ms from send_raw_gps_to_gimbal message
 *
 * @return  Time since boot (ms)
 */
static inline uint32_t mavlink_msg_send_raw_gps_to_gimbal_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field lat from send_raw_gps_to_gimbal message
 *
 * @return  Latitude (degE7)
 */
static inline int32_t mavlink_msg_send_raw_gps_to_gimbal_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field lon from send_raw_gps_to_gimbal message
 *
 * @return  Longitude (degE7)
 */
static inline int32_t mavlink_msg_send_raw_gps_to_gimbal_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field alt from send_raw_gps_to_gimbal message
 *
 * @return  Altitude MSL (cm)
 */
static inline int32_t mavlink_msg_send_raw_gps_to_gimbal_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field alt_ellipsoid from send_raw_gps_to_gimbal message
 *
 * @return  Altitude above WGS84 (cm)
 */
static inline int32_t mavlink_msg_send_raw_gps_to_gimbal_get_alt_ellipsoid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field vn from send_raw_gps_to_gimbal message
 *
 * @return  Velocity X (mm/s)
 */
static inline int32_t mavlink_msg_send_raw_gps_to_gimbal_get_vn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field ve from send_raw_gps_to_gimbal message
 *
 * @return  Velocity Y (mm/s)
 */
static inline int32_t mavlink_msg_send_raw_gps_to_gimbal_get_ve(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field vd from send_raw_gps_to_gimbal message
 *
 * @return  Velocity Z (mm/s)
 */
static inline int32_t mavlink_msg_send_raw_gps_to_gimbal_get_vd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Decode a send_raw_gps_to_gimbal message into a struct
 *
 * @param msg The message to decode
 * @param send_raw_gps_to_gimbal C-struct to decode the message contents into
 */
static inline void mavlink_msg_send_raw_gps_to_gimbal_decode(const mavlink_message_t* msg, mavlink_send_raw_gps_to_gimbal_t* send_raw_gps_to_gimbal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    send_raw_gps_to_gimbal->time_boot_ms = mavlink_msg_send_raw_gps_to_gimbal_get_time_boot_ms(msg);
    send_raw_gps_to_gimbal->lat = mavlink_msg_send_raw_gps_to_gimbal_get_lat(msg);
    send_raw_gps_to_gimbal->lon = mavlink_msg_send_raw_gps_to_gimbal_get_lon(msg);
    send_raw_gps_to_gimbal->alt = mavlink_msg_send_raw_gps_to_gimbal_get_alt(msg);
    send_raw_gps_to_gimbal->alt_ellipsoid = mavlink_msg_send_raw_gps_to_gimbal_get_alt_ellipsoid(msg);
    send_raw_gps_to_gimbal->vn = mavlink_msg_send_raw_gps_to_gimbal_get_vn(msg);
    send_raw_gps_to_gimbal->ve = mavlink_msg_send_raw_gps_to_gimbal_get_ve(msg);
    send_raw_gps_to_gimbal->vd = mavlink_msg_send_raw_gps_to_gimbal_get_vd(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN? msg->len : MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN;
        memset(send_raw_gps_to_gimbal, 0, MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_LEN);
    memcpy(send_raw_gps_to_gimbal, _MAV_PAYLOAD(msg), len);
#endif
}
