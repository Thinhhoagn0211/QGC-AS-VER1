#pragma once
// MESSAGE RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION PACKING

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION 90010


typedef struct __mavlink_response_request_camera_system_information_t {
 uint8_t reserved1; /*<  Reserved*/
 uint8_t hdr_sta; /*<  0: Off, 1: On*/
 uint8_t reserved2; /*<  Reserved*/
 uint8_t record_sta; /*<  0: No record, 1: Rec, 2: No TF, 3: Data loss*/
 uint8_t gimbal_motion_mode; /*<  0: Lock, 1: Follow, 2: FPV*/
 uint8_t gimbal_mounting_dir; /*<  0: Reserved, 1: Normal, 2: Inverted*/
 uint8_t video_hdmi_or_cvbs; /*<  0: HDMI ON, 1: CVBS ON*/
 uint8_t zoom_linkage; /*<  0: Off, 1: On*/
} mavlink_response_request_camera_system_information_t;

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN 8
#define MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN 8
#define MAVLINK_MSG_ID_90010_LEN 8
#define MAVLINK_MSG_ID_90010_MIN_LEN 8

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_CRC 104
#define MAVLINK_MSG_ID_90010_CRC 104



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION { \
    90010, \
    "RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION", \
    8, \
    {  { "reserved1", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_request_camera_system_information_t, reserved1) }, \
         { "hdr_sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_response_request_camera_system_information_t, hdr_sta) }, \
         { "reserved2", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_response_request_camera_system_information_t, reserved2) }, \
         { "record_sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_response_request_camera_system_information_t, record_sta) }, \
         { "gimbal_motion_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_response_request_camera_system_information_t, gimbal_motion_mode) }, \
         { "gimbal_mounting_dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_response_request_camera_system_information_t, gimbal_mounting_dir) }, \
         { "video_hdmi_or_cvbs", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_response_request_camera_system_information_t, video_hdmi_or_cvbs) }, \
         { "zoom_linkage", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_response_request_camera_system_information_t, zoom_linkage) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION { \
    "RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION", \
    8, \
    {  { "reserved1", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_request_camera_system_information_t, reserved1) }, \
         { "hdr_sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_response_request_camera_system_information_t, hdr_sta) }, \
         { "reserved2", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_response_request_camera_system_information_t, reserved2) }, \
         { "record_sta", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_response_request_camera_system_information_t, record_sta) }, \
         { "gimbal_motion_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_response_request_camera_system_information_t, gimbal_motion_mode) }, \
         { "gimbal_mounting_dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_response_request_camera_system_information_t, gimbal_mounting_dir) }, \
         { "video_hdmi_or_cvbs", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_response_request_camera_system_information_t, video_hdmi_or_cvbs) }, \
         { "zoom_linkage", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_response_request_camera_system_information_t, zoom_linkage) }, \
         } \
}
#endif

/**
 * @brief Pack a response_request_camera_system_information message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param reserved1  Reserved
 * @param hdr_sta  0: Off, 1: On
 * @param reserved2  Reserved
 * @param record_sta  0: No record, 1: Rec, 2: No TF, 3: Data loss
 * @param gimbal_motion_mode  0: Lock, 1: Follow, 2: FPV
 * @param gimbal_mounting_dir  0: Reserved, 1: Normal, 2: Inverted
 * @param video_hdmi_or_cvbs  0: HDMI ON, 1: CVBS ON
 * @param zoom_linkage  0: Off, 1: On
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_camera_system_information_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t reserved1, uint8_t hdr_sta, uint8_t reserved2, uint8_t record_sta, uint8_t gimbal_motion_mode, uint8_t gimbal_mounting_dir, uint8_t video_hdmi_or_cvbs, uint8_t zoom_linkage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN];
    _mav_put_uint8_t(buf, 0, reserved1);
    _mav_put_uint8_t(buf, 1, hdr_sta);
    _mav_put_uint8_t(buf, 2, reserved2);
    _mav_put_uint8_t(buf, 3, record_sta);
    _mav_put_uint8_t(buf, 4, gimbal_motion_mode);
    _mav_put_uint8_t(buf, 5, gimbal_mounting_dir);
    _mav_put_uint8_t(buf, 6, video_hdmi_or_cvbs);
    _mav_put_uint8_t(buf, 7, zoom_linkage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN);
#else
    mavlink_response_request_camera_system_information_t packet;
    packet.reserved1 = reserved1;
    packet.hdr_sta = hdr_sta;
    packet.reserved2 = reserved2;
    packet.record_sta = record_sta;
    packet.gimbal_motion_mode = gimbal_motion_mode;
    packet.gimbal_mounting_dir = gimbal_mounting_dir;
    packet.video_hdmi_or_cvbs = video_hdmi_or_cvbs;
    packet.zoom_linkage = zoom_linkage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_CRC);
}

/**
 * @brief Pack a response_request_camera_system_information message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param reserved1  Reserved
 * @param hdr_sta  0: Off, 1: On
 * @param reserved2  Reserved
 * @param record_sta  0: No record, 1: Rec, 2: No TF, 3: Data loss
 * @param gimbal_motion_mode  0: Lock, 1: Follow, 2: FPV
 * @param gimbal_mounting_dir  0: Reserved, 1: Normal, 2: Inverted
 * @param video_hdmi_or_cvbs  0: HDMI ON, 1: CVBS ON
 * @param zoom_linkage  0: Off, 1: On
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_camera_system_information_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t reserved1, uint8_t hdr_sta, uint8_t reserved2, uint8_t record_sta, uint8_t gimbal_motion_mode, uint8_t gimbal_mounting_dir, uint8_t video_hdmi_or_cvbs, uint8_t zoom_linkage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN];
    _mav_put_uint8_t(buf, 0, reserved1);
    _mav_put_uint8_t(buf, 1, hdr_sta);
    _mav_put_uint8_t(buf, 2, reserved2);
    _mav_put_uint8_t(buf, 3, record_sta);
    _mav_put_uint8_t(buf, 4, gimbal_motion_mode);
    _mav_put_uint8_t(buf, 5, gimbal_mounting_dir);
    _mav_put_uint8_t(buf, 6, video_hdmi_or_cvbs);
    _mav_put_uint8_t(buf, 7, zoom_linkage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN);
#else
    mavlink_response_request_camera_system_information_t packet;
    packet.reserved1 = reserved1;
    packet.hdr_sta = hdr_sta;
    packet.reserved2 = reserved2;
    packet.record_sta = record_sta;
    packet.gimbal_motion_mode = gimbal_motion_mode;
    packet.gimbal_mounting_dir = gimbal_mounting_dir;
    packet.video_hdmi_or_cvbs = video_hdmi_or_cvbs;
    packet.zoom_linkage = zoom_linkage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN);
#endif
}

/**
 * @brief Pack a response_request_camera_system_information message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param reserved1  Reserved
 * @param hdr_sta  0: Off, 1: On
 * @param reserved2  Reserved
 * @param record_sta  0: No record, 1: Rec, 2: No TF, 3: Data loss
 * @param gimbal_motion_mode  0: Lock, 1: Follow, 2: FPV
 * @param gimbal_mounting_dir  0: Reserved, 1: Normal, 2: Inverted
 * @param video_hdmi_or_cvbs  0: HDMI ON, 1: CVBS ON
 * @param zoom_linkage  0: Off, 1: On
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_camera_system_information_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t reserved1,uint8_t hdr_sta,uint8_t reserved2,uint8_t record_sta,uint8_t gimbal_motion_mode,uint8_t gimbal_mounting_dir,uint8_t video_hdmi_or_cvbs,uint8_t zoom_linkage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN];
    _mav_put_uint8_t(buf, 0, reserved1);
    _mav_put_uint8_t(buf, 1, hdr_sta);
    _mav_put_uint8_t(buf, 2, reserved2);
    _mav_put_uint8_t(buf, 3, record_sta);
    _mav_put_uint8_t(buf, 4, gimbal_motion_mode);
    _mav_put_uint8_t(buf, 5, gimbal_mounting_dir);
    _mav_put_uint8_t(buf, 6, video_hdmi_or_cvbs);
    _mav_put_uint8_t(buf, 7, zoom_linkage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN);
#else
    mavlink_response_request_camera_system_information_t packet;
    packet.reserved1 = reserved1;
    packet.hdr_sta = hdr_sta;
    packet.reserved2 = reserved2;
    packet.record_sta = record_sta;
    packet.gimbal_motion_mode = gimbal_motion_mode;
    packet.gimbal_mounting_dir = gimbal_mounting_dir;
    packet.video_hdmi_or_cvbs = video_hdmi_or_cvbs;
    packet.zoom_linkage = zoom_linkage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_CRC);
}

/**
 * @brief Encode a response_request_camera_system_information struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_request_camera_system_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_camera_system_information_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_request_camera_system_information_t* response_request_camera_system_information)
{
    return mavlink_msg_response_request_camera_system_information_pack(system_id, component_id, msg, response_request_camera_system_information->reserved1, response_request_camera_system_information->hdr_sta, response_request_camera_system_information->reserved2, response_request_camera_system_information->record_sta, response_request_camera_system_information->gimbal_motion_mode, response_request_camera_system_information->gimbal_mounting_dir, response_request_camera_system_information->video_hdmi_or_cvbs, response_request_camera_system_information->zoom_linkage);
}

/**
 * @brief Encode a response_request_camera_system_information struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_request_camera_system_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_camera_system_information_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_request_camera_system_information_t* response_request_camera_system_information)
{
    return mavlink_msg_response_request_camera_system_information_pack_chan(system_id, component_id, chan, msg, response_request_camera_system_information->reserved1, response_request_camera_system_information->hdr_sta, response_request_camera_system_information->reserved2, response_request_camera_system_information->record_sta, response_request_camera_system_information->gimbal_motion_mode, response_request_camera_system_information->gimbal_mounting_dir, response_request_camera_system_information->video_hdmi_or_cvbs, response_request_camera_system_information->zoom_linkage);
}

/**
 * @brief Encode a response_request_camera_system_information struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_request_camera_system_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_camera_system_information_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_request_camera_system_information_t* response_request_camera_system_information)
{
    return mavlink_msg_response_request_camera_system_information_pack_status(system_id, component_id, _status, msg,  response_request_camera_system_information->reserved1, response_request_camera_system_information->hdr_sta, response_request_camera_system_information->reserved2, response_request_camera_system_information->record_sta, response_request_camera_system_information->gimbal_motion_mode, response_request_camera_system_information->gimbal_mounting_dir, response_request_camera_system_information->video_hdmi_or_cvbs, response_request_camera_system_information->zoom_linkage);
}

/**
 * @brief Send a response_request_camera_system_information message
 * @param chan MAVLink channel to send the message
 *
 * @param reserved1  Reserved
 * @param hdr_sta  0: Off, 1: On
 * @param reserved2  Reserved
 * @param record_sta  0: No record, 1: Rec, 2: No TF, 3: Data loss
 * @param gimbal_motion_mode  0: Lock, 1: Follow, 2: FPV
 * @param gimbal_mounting_dir  0: Reserved, 1: Normal, 2: Inverted
 * @param video_hdmi_or_cvbs  0: HDMI ON, 1: CVBS ON
 * @param zoom_linkage  0: Off, 1: On
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_request_camera_system_information_send(mavlink_channel_t chan, uint8_t reserved1, uint8_t hdr_sta, uint8_t reserved2, uint8_t record_sta, uint8_t gimbal_motion_mode, uint8_t gimbal_mounting_dir, uint8_t video_hdmi_or_cvbs, uint8_t zoom_linkage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN];
    _mav_put_uint8_t(buf, 0, reserved1);
    _mav_put_uint8_t(buf, 1, hdr_sta);
    _mav_put_uint8_t(buf, 2, reserved2);
    _mav_put_uint8_t(buf, 3, record_sta);
    _mav_put_uint8_t(buf, 4, gimbal_motion_mode);
    _mav_put_uint8_t(buf, 5, gimbal_mounting_dir);
    _mav_put_uint8_t(buf, 6, video_hdmi_or_cvbs);
    _mav_put_uint8_t(buf, 7, zoom_linkage);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_CRC);
#else
    mavlink_response_request_camera_system_information_t packet;
    packet.reserved1 = reserved1;
    packet.hdr_sta = hdr_sta;
    packet.reserved2 = reserved2;
    packet.record_sta = record_sta;
    packet.gimbal_motion_mode = gimbal_motion_mode;
    packet.gimbal_mounting_dir = gimbal_mounting_dir;
    packet.video_hdmi_or_cvbs = video_hdmi_or_cvbs;
    packet.zoom_linkage = zoom_linkage;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_CRC);
#endif
}

/**
 * @brief Send a response_request_camera_system_information message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_request_camera_system_information_send_struct(mavlink_channel_t chan, const mavlink_response_request_camera_system_information_t* response_request_camera_system_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_request_camera_system_information_send(chan, response_request_camera_system_information->reserved1, response_request_camera_system_information->hdr_sta, response_request_camera_system_information->reserved2, response_request_camera_system_information->record_sta, response_request_camera_system_information->gimbal_motion_mode, response_request_camera_system_information->gimbal_mounting_dir, response_request_camera_system_information->video_hdmi_or_cvbs, response_request_camera_system_information->zoom_linkage);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION, (const char *)response_request_camera_system_information, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_request_camera_system_information_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t reserved1, uint8_t hdr_sta, uint8_t reserved2, uint8_t record_sta, uint8_t gimbal_motion_mode, uint8_t gimbal_mounting_dir, uint8_t video_hdmi_or_cvbs, uint8_t zoom_linkage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, reserved1);
    _mav_put_uint8_t(buf, 1, hdr_sta);
    _mav_put_uint8_t(buf, 2, reserved2);
    _mav_put_uint8_t(buf, 3, record_sta);
    _mav_put_uint8_t(buf, 4, gimbal_motion_mode);
    _mav_put_uint8_t(buf, 5, gimbal_mounting_dir);
    _mav_put_uint8_t(buf, 6, video_hdmi_or_cvbs);
    _mav_put_uint8_t(buf, 7, zoom_linkage);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_CRC);
#else
    mavlink_response_request_camera_system_information_t *packet = (mavlink_response_request_camera_system_information_t *)msgbuf;
    packet->reserved1 = reserved1;
    packet->hdr_sta = hdr_sta;
    packet->reserved2 = reserved2;
    packet->record_sta = record_sta;
    packet->gimbal_motion_mode = gimbal_motion_mode;
    packet->gimbal_mounting_dir = gimbal_mounting_dir;
    packet->video_hdmi_or_cvbs = video_hdmi_or_cvbs;
    packet->zoom_linkage = zoom_linkage;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION UNPACKING


/**
 * @brief Get field reserved1 from response_request_camera_system_information message
 *
 * @return  Reserved
 */
static inline uint8_t mavlink_msg_response_request_camera_system_information_get_reserved1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field hdr_sta from response_request_camera_system_information message
 *
 * @return  0: Off, 1: On
 */
static inline uint8_t mavlink_msg_response_request_camera_system_information_get_hdr_sta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field reserved2 from response_request_camera_system_information message
 *
 * @return  Reserved
 */
static inline uint8_t mavlink_msg_response_request_camera_system_information_get_reserved2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field record_sta from response_request_camera_system_information message
 *
 * @return  0: No record, 1: Rec, 2: No TF, 3: Data loss
 */
static inline uint8_t mavlink_msg_response_request_camera_system_information_get_record_sta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field gimbal_motion_mode from response_request_camera_system_information message
 *
 * @return  0: Lock, 1: Follow, 2: FPV
 */
static inline uint8_t mavlink_msg_response_request_camera_system_information_get_gimbal_motion_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field gimbal_mounting_dir from response_request_camera_system_information message
 *
 * @return  0: Reserved, 1: Normal, 2: Inverted
 */
static inline uint8_t mavlink_msg_response_request_camera_system_information_get_gimbal_mounting_dir(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field video_hdmi_or_cvbs from response_request_camera_system_information message
 *
 * @return  0: HDMI ON, 1: CVBS ON
 */
static inline uint8_t mavlink_msg_response_request_camera_system_information_get_video_hdmi_or_cvbs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field zoom_linkage from response_request_camera_system_information message
 *
 * @return  0: Off, 1: On
 */
static inline uint8_t mavlink_msg_response_request_camera_system_information_get_zoom_linkage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Decode a response_request_camera_system_information message into a struct
 *
 * @param msg The message to decode
 * @param response_request_camera_system_information C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_request_camera_system_information_decode(const mavlink_message_t* msg, mavlink_response_request_camera_system_information_t* response_request_camera_system_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_request_camera_system_information->reserved1 = mavlink_msg_response_request_camera_system_information_get_reserved1(msg);
    response_request_camera_system_information->hdr_sta = mavlink_msg_response_request_camera_system_information_get_hdr_sta(msg);
    response_request_camera_system_information->reserved2 = mavlink_msg_response_request_camera_system_information_get_reserved2(msg);
    response_request_camera_system_information->record_sta = mavlink_msg_response_request_camera_system_information_get_record_sta(msg);
    response_request_camera_system_information->gimbal_motion_mode = mavlink_msg_response_request_camera_system_information_get_gimbal_motion_mode(msg);
    response_request_camera_system_information->gimbal_mounting_dir = mavlink_msg_response_request_camera_system_information_get_gimbal_mounting_dir(msg);
    response_request_camera_system_information->video_hdmi_or_cvbs = mavlink_msg_response_request_camera_system_information_get_video_hdmi_or_cvbs(msg);
    response_request_camera_system_information->zoom_linkage = mavlink_msg_response_request_camera_system_information_get_zoom_linkage(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN;
        memset(response_request_camera_system_information, 0, MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_LEN);
    memcpy(response_request_camera_system_information, _MAV_PAYLOAD(msg), len);
#endif
}
