#pragma once
// MESSAGE RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL PACKING

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL 90032


typedef struct __mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t {
 uint8_t data_type; /*<  Data type*/
} mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t;

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN 1
#define MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN 1
#define MAVLINK_MSG_ID_90032_LEN 1
#define MAVLINK_MSG_ID_90032_MIN_LEN 1

#define MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_CRC 149
#define MAVLINK_MSG_ID_90032_CRC 149



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL { \
    90032, \
    "RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL", \
    1, \
    {  { "data_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t, data_type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL { \
    "RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL", \
    1, \
    {  { "data_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t, data_type) }, \
         } \
}
#endif

/**
 * @brief Pack a response_request_flight_controller_to_send_data_stream_to_gimbal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param data_type  Data type
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t data_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN];
    _mav_put_uint8_t(buf, 0, data_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN);
#else
    mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t packet;
    packet.data_type = data_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_CRC);
}

/**
 * @brief Pack a response_request_flight_controller_to_send_data_stream_to_gimbal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param data_type  Data type
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t data_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN];
    _mav_put_uint8_t(buf, 0, data_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN);
#else
    mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t packet;
    packet.data_type = data_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN);
#endif
}

/**
 * @brief Pack a response_request_flight_controller_to_send_data_stream_to_gimbal message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param data_type  Data type
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t data_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN];
    _mav_put_uint8_t(buf, 0, data_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN);
#else
    mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t packet;
    packet.data_type = data_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_CRC);
}

/**
 * @brief Encode a response_request_flight_controller_to_send_data_stream_to_gimbal struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param response_request_flight_controller_to_send_data_stream_to_gimbal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t* response_request_flight_controller_to_send_data_stream_to_gimbal)
{
    return mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_pack(system_id, component_id, msg, response_request_flight_controller_to_send_data_stream_to_gimbal->data_type);
}

/**
 * @brief Encode a response_request_flight_controller_to_send_data_stream_to_gimbal struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param response_request_flight_controller_to_send_data_stream_to_gimbal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t* response_request_flight_controller_to_send_data_stream_to_gimbal)
{
    return mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_pack_chan(system_id, component_id, chan, msg, response_request_flight_controller_to_send_data_stream_to_gimbal->data_type);
}

/**
 * @brief Encode a response_request_flight_controller_to_send_data_stream_to_gimbal struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param response_request_flight_controller_to_send_data_stream_to_gimbal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t* response_request_flight_controller_to_send_data_stream_to_gimbal)
{
    return mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_pack_status(system_id, component_id, _status, msg,  response_request_flight_controller_to_send_data_stream_to_gimbal->data_type);
}

/**
 * @brief Send a response_request_flight_controller_to_send_data_stream_to_gimbal message
 * @param chan MAVLink channel to send the message
 *
 * @param data_type  Data type
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_send(mavlink_channel_t chan, uint8_t data_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN];
    _mav_put_uint8_t(buf, 0, data_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_CRC);
#else
    mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t packet;
    packet.data_type = data_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL, (const char *)&packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_CRC);
#endif
}

/**
 * @brief Send a response_request_flight_controller_to_send_data_stream_to_gimbal message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_send_struct(mavlink_channel_t chan, const mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t* response_request_flight_controller_to_send_data_stream_to_gimbal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_send(chan, response_request_flight_controller_to_send_data_stream_to_gimbal->data_type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL, (const char *)response_request_flight_controller_to_send_data_stream_to_gimbal, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_CRC);
#endif
}

#if MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t data_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, data_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL, buf, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_CRC);
#else
    mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t *packet = (mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t *)msgbuf;
    packet->data_type = data_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL, (const char *)packet, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_CRC);
#endif
}
#endif

#endif

// MESSAGE RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL UNPACKING


/**
 * @brief Get field data_type from response_request_flight_controller_to_send_data_stream_to_gimbal message
 *
 * @return  Data type
 */
static inline uint8_t mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_get_data_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a response_request_flight_controller_to_send_data_stream_to_gimbal message into a struct
 *
 * @param msg The message to decode
 * @param response_request_flight_controller_to_send_data_stream_to_gimbal C-struct to decode the message contents into
 */
static inline void mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_decode(const mavlink_message_t* msg, mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t* response_request_flight_controller_to_send_data_stream_to_gimbal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    response_request_flight_controller_to_send_data_stream_to_gimbal->data_type = mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_get_data_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN? msg->len : MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN;
        memset(response_request_flight_controller_to_send_data_stream_to_gimbal, 0, MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_LEN);
    memcpy(response_request_flight_controller_to_send_data_stream_to_gimbal, _MAV_PAYLOAD(msg), len);
#endif
}
