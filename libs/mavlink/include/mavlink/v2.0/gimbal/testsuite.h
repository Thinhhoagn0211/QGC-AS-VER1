/** @file
 *    @brief MAVLink comm protocol testsuite generated from gimbal.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef GIMBAL_TESTSUITE_H
#define GIMBAL_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_gimbal(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_gimbal(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_request_firmware_version(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_firmware_version_t packet_in = {
        5
    };
    mavlink_request_firmware_version_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_firmware_version_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_firmware_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_firmware_version_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_firmware_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_firmware_version_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_firmware_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_firmware_version_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_firmware_version_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_firmware_version_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_FIRMWARE_VERSION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_FIRMWARE_VERSION) != NULL);
#endif
}

static void mavlink_test_request_gimbal_hardware_id(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_GIMBAL_HARDWARE_ID >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_gimbal_hardware_id_t packet_in = {
        5
    };
    mavlink_request_gimbal_hardware_id_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_hardware_id_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_gimbal_hardware_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_hardware_id_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_gimbal_hardware_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_hardware_id_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_gimbal_hardware_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_gimbal_hardware_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_hardware_id_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_gimbal_hardware_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_GIMBAL_HARDWARE_ID") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_GIMBAL_HARDWARE_ID) != NULL);
#endif
}

static void mavlink_test_auto_focus(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AUTO_FOCUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_auto_focus_t packet_in = {
        17235,17339,17
    };
    mavlink_auto_focus_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.touch_x = packet_in.touch_x;
        packet1.touch_y = packet_in.touch_y;
        packet1.auto_focus = packet_in.auto_focus;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AUTO_FOCUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AUTO_FOCUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_auto_focus_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_auto_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_auto_focus_pack(system_id, component_id, &msg , packet1.auto_focus , packet1.touch_x , packet1.touch_y );
    mavlink_msg_auto_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_auto_focus_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.auto_focus , packet1.touch_x , packet1.touch_y );
    mavlink_msg_auto_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_auto_focus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_auto_focus_send(MAVLINK_COMM_1 , packet1.auto_focus , packet1.touch_x , packet1.touch_y );
    mavlink_msg_auto_focus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("AUTO_FOCUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_AUTO_FOCUS) != NULL);
#endif
}

static void mavlink_test_manual_zoom_with_autofocus(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_manual_zoom_with_autofocus_t packet_in = {
        5
    };
    mavlink_manual_zoom_with_autofocus_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.zoom = packet_in.zoom;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_manual_zoom_with_autofocus_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_manual_zoom_with_autofocus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_manual_zoom_with_autofocus_pack(system_id, component_id, &msg , packet1.zoom );
    mavlink_msg_manual_zoom_with_autofocus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_manual_zoom_with_autofocus_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.zoom );
    mavlink_msg_manual_zoom_with_autofocus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_manual_zoom_with_autofocus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_manual_zoom_with_autofocus_send(MAVLINK_COMM_1 , packet1.zoom );
    mavlink_msg_manual_zoom_with_autofocus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("MANUAL_ZOOM_WITH_AUTOFOCUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_MANUAL_ZOOM_WITH_AUTOFOCUS) != NULL);
#endif
}

static void mavlink_test_manual_focus(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MANUAL_FOCUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_manual_focus_t packet_in = {
        5
    };
    mavlink_manual_focus_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.focus = packet_in.focus;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MANUAL_FOCUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MANUAL_FOCUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_manual_focus_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_manual_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_manual_focus_pack(system_id, component_id, &msg , packet1.focus );
    mavlink_msg_manual_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_manual_focus_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.focus );
    mavlink_msg_manual_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_manual_focus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_manual_focus_send(MAVLINK_COMM_1 , packet1.focus );
    mavlink_msg_manual_focus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("MANUAL_FOCUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_MANUAL_FOCUS) != NULL);
#endif
}

static void mavlink_test_gimbal_rotation_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gimbal_rotation_control_t packet_in = {
        5,72
    };
    mavlink_gimbal_rotation_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.turn_yaw = packet_in.turn_yaw;
        packet1.turn_pitch = packet_in.turn_pitch;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_rotation_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gimbal_rotation_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_rotation_control_pack(system_id, component_id, &msg , packet1.turn_yaw , packet1.turn_pitch );
    mavlink_msg_gimbal_rotation_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_rotation_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.turn_yaw , packet1.turn_pitch );
    mavlink_msg_gimbal_rotation_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gimbal_rotation_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_rotation_control_send(MAVLINK_COMM_1 , packet1.turn_yaw , packet1.turn_pitch );
    mavlink_msg_gimbal_rotation_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GIMBAL_ROTATION_CONTROL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GIMBAL_ROTATION_CONTROL) != NULL);
#endif
}

static void mavlink_test_one_key_centering(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ONE_KEY_CENTERING >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_one_key_centering_t packet_in = {
        5
    };
    mavlink_one_key_centering_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.center_pos = packet_in.center_pos;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ONE_KEY_CENTERING_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ONE_KEY_CENTERING_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_one_key_centering_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_one_key_centering_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_one_key_centering_pack(system_id, component_id, &msg , packet1.center_pos );
    mavlink_msg_one_key_centering_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_one_key_centering_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.center_pos );
    mavlink_msg_one_key_centering_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_one_key_centering_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_one_key_centering_send(MAVLINK_COMM_1 , packet1.center_pos );
    mavlink_msg_one_key_centering_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ONE_KEY_CENTERING") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ONE_KEY_CENTERING) != NULL);
#endif
}

static void mavlink_test_request_camera_system_information(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_CAMERA_SYSTEM_INFORMATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_camera_system_information_t packet_in = {
        5
    };
    mavlink_request_camera_system_information_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_camera_system_information_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_camera_system_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_camera_system_information_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_camera_system_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_camera_system_information_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_camera_system_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_camera_system_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_camera_system_information_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_camera_system_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_CAMERA_SYSTEM_INFORMATION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_CAMERA_SYSTEM_INFORMATION) != NULL);
#endif
}

static void mavlink_test_function_feedback_response(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_function_feedback_response_t packet_in = {
        5
    };
    mavlink_function_feedback_response_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.info_type = packet_in.info_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_function_feedback_response_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_function_feedback_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_function_feedback_response_pack(system_id, component_id, &msg , packet1.info_type );
    mavlink_msg_function_feedback_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_function_feedback_response_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.info_type );
    mavlink_msg_function_feedback_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_function_feedback_response_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_function_feedback_response_send(MAVLINK_COMM_1 , packet1.info_type );
    mavlink_msg_function_feedback_response_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FUNCTION_FEEDBACK_RESPONSE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FUNCTION_FEEDBACK_RESPONSE) != NULL);
#endif
}

static void mavlink_test_capture_photo_record_video(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_capture_photo_record_video_t packet_in = {
        5
    };
    mavlink_capture_photo_record_video_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.func_type = packet_in.func_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_capture_photo_record_video_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_capture_photo_record_video_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_capture_photo_record_video_pack(system_id, component_id, &msg , packet1.func_type );
    mavlink_msg_capture_photo_record_video_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_capture_photo_record_video_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.func_type );
    mavlink_msg_capture_photo_record_video_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_capture_photo_record_video_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_capture_photo_record_video_send(MAVLINK_COMM_1 , packet1.func_type );
    mavlink_msg_capture_photo_record_video_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CAPTURE_PHOTO_RECORD_VIDEO") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CAPTURE_PHOTO_RECORD_VIDEO) != NULL);
#endif
}

static void mavlink_test_request_gimbal_attitude_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_GIMBAL_ATTITUDE_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_gimbal_attitude_data_t packet_in = {
        5
    };
    mavlink_request_gimbal_attitude_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_attitude_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_gimbal_attitude_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_attitude_data_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_gimbal_attitude_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_attitude_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_gimbal_attitude_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_gimbal_attitude_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_attitude_data_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_gimbal_attitude_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_GIMBAL_ATTITUDE_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_GIMBAL_ATTITUDE_DATA) != NULL);
#endif
}

static void mavlink_test_set_gimbal_attitude_angles(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_gimbal_attitude_angles_t packet_in = {
        17235,17339
    };
    mavlink_set_gimbal_attitude_angles_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.yaw = packet_in.yaw;
        packet1.pitch = packet_in.pitch;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_gimbal_attitude_angles_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_gimbal_attitude_angles_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_gimbal_attitude_angles_pack(system_id, component_id, &msg , packet1.yaw , packet1.pitch );
    mavlink_msg_set_gimbal_attitude_angles_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_gimbal_attitude_angles_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.yaw , packet1.pitch );
    mavlink_msg_set_gimbal_attitude_angles_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_gimbal_attitude_angles_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_gimbal_attitude_angles_send(MAVLINK_COMM_1 , packet1.yaw , packet1.pitch );
    mavlink_msg_set_gimbal_attitude_angles_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_GIMBAL_ATTITUDE_ANGLES") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_GIMBAL_ATTITUDE_ANGLES) != NULL);
#endif
}

static void mavlink_test_absolute_zoom_auto_focus(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_absolute_zoom_auto_focus_t packet_in = {
        5,72
    };
    mavlink_absolute_zoom_auto_focus_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.absolute_movement_int = packet_in.absolute_movement_int;
        packet1.absolute_movement_float = packet_in.absolute_movement_float;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_absolute_zoom_auto_focus_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_absolute_zoom_auto_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_absolute_zoom_auto_focus_pack(system_id, component_id, &msg , packet1.absolute_movement_int , packet1.absolute_movement_float );
    mavlink_msg_absolute_zoom_auto_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_absolute_zoom_auto_focus_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.absolute_movement_int , packet1.absolute_movement_float );
    mavlink_msg_absolute_zoom_auto_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_absolute_zoom_auto_focus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_absolute_zoom_auto_focus_send(MAVLINK_COMM_1 , packet1.absolute_movement_int , packet1.absolute_movement_float );
    mavlink_msg_absolute_zoom_auto_focus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ABSOLUTE_ZOOM_AUTO_FOCUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ABSOLUTE_ZOOM_AUTO_FOCUS) != NULL);
#endif
}

static void mavlink_test_request_video_stitching_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_VIDEO_STITCHING_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_video_stitching_mode_t packet_in = {
        5
    };
    mavlink_request_video_stitching_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_VIDEO_STITCHING_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_VIDEO_STITCHING_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_video_stitching_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_video_stitching_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_video_stitching_mode_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_video_stitching_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_video_stitching_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_video_stitching_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_video_stitching_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_video_stitching_mode_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_video_stitching_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_VIDEO_STITCHING_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_VIDEO_STITCHING_MODE) != NULL);
#endif
}

static void mavlink_test_set_video_stitching_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_video_stitching_mode_t packet_in = {
        5
    };
    mavlink_set_video_stitching_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.vdisp_mode = packet_in.vdisp_mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_video_stitching_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_video_stitching_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_video_stitching_mode_pack(system_id, component_id, &msg , packet1.vdisp_mode );
    mavlink_msg_set_video_stitching_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_video_stitching_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.vdisp_mode );
    mavlink_msg_set_video_stitching_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_video_stitching_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_video_stitching_mode_send(MAVLINK_COMM_1 , packet1.vdisp_mode );
    mavlink_msg_set_video_stitching_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_VIDEO_STITCHING_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_VIDEO_STITCHING_MODE) != NULL);
#endif
}

static void mavlink_test_get_temperature_at_selected_point(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_get_temperature_at_selected_point_t packet_in = {
        17235,17339,17
    };
    mavlink_get_temperature_at_selected_point_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.get_temp_flag = packet_in.get_temp_flag;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_temperature_at_selected_point_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_get_temperature_at_selected_point_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_temperature_at_selected_point_pack(system_id, component_id, &msg , packet1.x , packet1.y , packet1.get_temp_flag );
    mavlink_msg_get_temperature_at_selected_point_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_temperature_at_selected_point_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.x , packet1.y , packet1.get_temp_flag );
    mavlink_msg_get_temperature_at_selected_point_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_get_temperature_at_selected_point_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_temperature_at_selected_point_send(MAVLINK_COMM_1 , packet1.x , packet1.y , packet1.get_temp_flag );
    mavlink_msg_get_temperature_at_selected_point_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GET_TEMPERATURE_AT_SELECTED_POINT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GET_TEMPERATURE_AT_SELECTED_POINT) != NULL);
#endif
}

static void mavlink_test_local_temperature_measurement(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_local_temperature_measurement_t packet_in = {
        17235,17339,17443,17547,29
    };
    mavlink_local_temperature_measurement_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.startx = packet_in.startx;
        packet1.starty = packet_in.starty;
        packet1.endx = packet_in.endx;
        packet1.endy = packet_in.endy;
        packet1.get_temp_flag = packet_in.get_temp_flag;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_local_temperature_measurement_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_local_temperature_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_local_temperature_measurement_pack(system_id, component_id, &msg , packet1.startx , packet1.starty , packet1.endx , packet1.endy , packet1.get_temp_flag );
    mavlink_msg_local_temperature_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_local_temperature_measurement_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.startx , packet1.starty , packet1.endx , packet1.endy , packet1.get_temp_flag );
    mavlink_msg_local_temperature_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_local_temperature_measurement_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_local_temperature_measurement_send(MAVLINK_COMM_1 , packet1.startx , packet1.starty , packet1.endx , packet1.endy , packet1.get_temp_flag );
    mavlink_msg_local_temperature_measurement_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LOCAL_TEMPERATURE_MEASUREMENT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LOCAL_TEMPERATURE_MEASUREMENT) != NULL);
#endif
}

static void mavlink_test_global_temperature_measurement(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GLOBAL_TEMPERATURE_MEASUREMENT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_global_temperature_measurement_t packet_in = {
        5
    };
    mavlink_global_temperature_measurement_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.get_temp_flag = packet_in.get_temp_flag;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_global_temperature_measurement_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_global_temperature_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_global_temperature_measurement_pack(system_id, component_id, &msg , packet1.get_temp_flag );
    mavlink_msg_global_temperature_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_global_temperature_measurement_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.get_temp_flag );
    mavlink_msg_global_temperature_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_global_temperature_measurement_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_global_temperature_measurement_send(MAVLINK_COMM_1 , packet1.get_temp_flag );
    mavlink_msg_global_temperature_measurement_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GLOBAL_TEMPERATURE_MEASUREMENT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GLOBAL_TEMPERATURE_MEASUREMENT) != NULL);
#endif
}

static void mavlink_test_request_laser_distance_measurement(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_LASER_DISTANCE_MEASUREMENT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_laser_distance_measurement_t packet_in = {
        5
    };
    mavlink_request_laser_distance_measurement_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_LASER_DISTANCE_MEASUREMENT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_LASER_DISTANCE_MEASUREMENT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_laser_distance_measurement_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_laser_distance_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_laser_distance_measurement_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_laser_distance_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_laser_distance_measurement_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_laser_distance_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_laser_distance_measurement_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_laser_distance_measurement_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_laser_distance_measurement_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_LASER_DISTANCE_MEASUREMENT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_LASER_DISTANCE_MEASUREMENT) != NULL);
#endif
}

static void mavlink_test_request_current_supported_zoom_range(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_current_supported_zoom_range_t packet_in = {
        5
    };
    mavlink_request_current_supported_zoom_range_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_supported_zoom_range_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_current_supported_zoom_range_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_supported_zoom_range_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_current_supported_zoom_range_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_supported_zoom_range_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_current_supported_zoom_range_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_current_supported_zoom_range_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_supported_zoom_range_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_current_supported_zoom_range_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE) != NULL);
#endif
}

static void mavlink_test_request_laser_distance_target_longitude_latitude(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_laser_distance_target_longitude_latitude_t packet_in = {
        5
    };
    mavlink_request_laser_distance_target_longitude_latitude_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_laser_distance_target_longitude_latitude_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_laser_distance_target_longitude_latitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_laser_distance_target_longitude_latitude_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_laser_distance_target_longitude_latitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_laser_distance_target_longitude_latitude_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_laser_distance_target_longitude_latitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_laser_distance_target_longitude_latitude_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_laser_distance_target_longitude_latitude_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_laser_distance_target_longitude_latitude_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE) != NULL);
#endif
}

static void mavlink_test_request_current_zoom_magnification(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_CURRENT_ZOOM_MAGNIFICATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_current_zoom_magnification_t packet_in = {
        5
    };
    mavlink_request_current_zoom_magnification_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_zoom_magnification_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_current_zoom_magnification_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_zoom_magnification_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_current_zoom_magnification_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_zoom_magnification_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_current_zoom_magnification_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_current_zoom_magnification_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_zoom_magnification_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_current_zoom_magnification_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_CURRENT_ZOOM_MAGNIFICATION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_CURRENT_ZOOM_MAGNIFICATION) != NULL);
#endif
}

static void mavlink_test_request_current_gimbal_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_CURRENT_GIMBAL_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_current_gimbal_mode_t packet_in = {
        5
    };
    mavlink_request_current_gimbal_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_CURRENT_GIMBAL_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_CURRENT_GIMBAL_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_gimbal_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_current_gimbal_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_gimbal_mode_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_current_gimbal_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_gimbal_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_current_gimbal_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_current_gimbal_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_gimbal_mode_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_current_gimbal_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_CURRENT_GIMBAL_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_CURRENT_GIMBAL_MODE) != NULL);
#endif
}

static void mavlink_test_request_current_thermal_image_pseudocolor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_current_thermal_image_pseudocolor_t packet_in = {
        5
    };
    mavlink_request_current_thermal_image_pseudocolor_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_thermal_image_pseudocolor_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_current_thermal_image_pseudocolor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_thermal_image_pseudocolor_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_current_thermal_image_pseudocolor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_thermal_image_pseudocolor_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_current_thermal_image_pseudocolor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_current_thermal_image_pseudocolor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_current_thermal_image_pseudocolor_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_current_thermal_image_pseudocolor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR) != NULL);
#endif
}

static void mavlink_test_set_current_thermal_image_pseudocolor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_current_thermal_image_pseudocolor_t packet_in = {
        5
    };
    mavlink_set_current_thermal_image_pseudocolor_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pseudo_color = packet_in.pseudo_color;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_current_thermal_image_pseudocolor_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_current_thermal_image_pseudocolor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_current_thermal_image_pseudocolor_pack(system_id, component_id, &msg , packet1.pseudo_color );
    mavlink_msg_set_current_thermal_image_pseudocolor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_current_thermal_image_pseudocolor_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.pseudo_color );
    mavlink_msg_set_current_thermal_image_pseudocolor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_current_thermal_image_pseudocolor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_current_thermal_image_pseudocolor_send(MAVLINK_COMM_1 , packet1.pseudo_color );
    mavlink_msg_set_current_thermal_image_pseudocolor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR) != NULL);
#endif
}

static void mavlink_test_request_camera_encoding_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_camera_encoding_parameters_t packet_in = {
        5
    };
    mavlink_request_camera_encoding_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.req_stream_type = packet_in.req_stream_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_camera_encoding_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_camera_encoding_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_camera_encoding_parameters_pack(system_id, component_id, &msg , packet1.req_stream_type );
    mavlink_msg_request_camera_encoding_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_camera_encoding_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.req_stream_type );
    mavlink_msg_request_camera_encoding_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_camera_encoding_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_camera_encoding_parameters_send(MAVLINK_COMM_1 , packet1.req_stream_type );
    mavlink_msg_request_camera_encoding_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_CAMERA_ENCODING_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_CAMERA_ENCODING_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_set_camera_encoding_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_CAMERA_ENCODING_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_camera_encoding_parameters_t packet_in = {
        17235,17339,17443,151,218,29
    };
    mavlink_set_camera_encoding_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.resolution_width = packet_in.resolution_width;
        packet1.resolution_height = packet_in.resolution_height;
        packet1.bitrate = packet_in.bitrate;
        packet1.stream_type = packet_in.stream_type;
        packet1.encoding_type = packet_in.encoding_type;
        packet1.reserve = packet_in.reserve;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_CAMERA_ENCODING_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_CAMERA_ENCODING_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_camera_encoding_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_camera_encoding_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_camera_encoding_parameters_pack(system_id, component_id, &msg , packet1.stream_type , packet1.encoding_type , packet1.resolution_width , packet1.resolution_height , packet1.bitrate , packet1.reserve );
    mavlink_msg_set_camera_encoding_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_camera_encoding_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.stream_type , packet1.encoding_type , packet1.resolution_width , packet1.resolution_height , packet1.bitrate , packet1.reserve );
    mavlink_msg_set_camera_encoding_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_camera_encoding_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_camera_encoding_parameters_send(MAVLINK_COMM_1 , packet1.stream_type , packet1.encoding_type , packet1.resolution_width , packet1.resolution_height , packet1.bitrate , packet1.reserve );
    mavlink_msg_set_camera_encoding_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_CAMERA_ENCODING_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_CAMERA_ENCODING_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_send_aircraft_attitude_data_to_gimbal(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_send_aircraft_attitude_data_to_gimbal_t packet_in = {
        963497464,45.0,73.0,101.0,129.0,157.0,185.0
    };
    mavlink_send_aircraft_attitude_data_to_gimbal_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.roll = packet_in.roll;
        packet1.pitch = packet_in.pitch;
        packet1.yaw = packet_in.yaw;
        packet1.roll_speed = packet_in.roll_speed;
        packet1.pitch_speed = packet_in.pitch_speed;
        packet1.yaw_speed = packet_in.yaw_speed;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_send_aircraft_attitude_data_to_gimbal_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_send_aircraft_attitude_data_to_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_send_aircraft_attitude_data_to_gimbal_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.roll , packet1.pitch , packet1.yaw , packet1.roll_speed , packet1.pitch_speed , packet1.yaw_speed );
    mavlink_msg_send_aircraft_attitude_data_to_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_send_aircraft_attitude_data_to_gimbal_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.roll , packet1.pitch , packet1.yaw , packet1.roll_speed , packet1.pitch_speed , packet1.yaw_speed );
    mavlink_msg_send_aircraft_attitude_data_to_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_send_aircraft_attitude_data_to_gimbal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_send_aircraft_attitude_data_to_gimbal_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.roll , packet1.pitch , packet1.yaw , packet1.roll_speed , packet1.pitch_speed , packet1.yaw_speed );
    mavlink_msg_send_aircraft_attitude_data_to_gimbal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL) != NULL);
#endif
}

static void mavlink_test_request_flight_controller_to_send_data_stream_to_gimbal(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_flight_controller_to_send_data_stream_to_gimbal_t packet_in = {
        5,72
    };
    mavlink_request_flight_controller_to_send_data_stream_to_gimbal_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.data_type = packet_in.data_type;
        packet1.data_freq = packet_in.data_freq;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_flight_controller_to_send_data_stream_to_gimbal_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_flight_controller_to_send_data_stream_to_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_flight_controller_to_send_data_stream_to_gimbal_pack(system_id, component_id, &msg , packet1.data_type , packet1.data_freq );
    mavlink_msg_request_flight_controller_to_send_data_stream_to_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_flight_controller_to_send_data_stream_to_gimbal_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.data_type , packet1.data_freq );
    mavlink_msg_request_flight_controller_to_send_data_stream_to_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_flight_controller_to_send_data_stream_to_gimbal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_flight_controller_to_send_data_stream_to_gimbal_send(MAVLINK_COMM_1 , packet1.data_type , packet1.data_freq );
    mavlink_msg_request_flight_controller_to_send_data_stream_to_gimbal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL) != NULL);
#endif
}

static void mavlink_test_request_gimbal_to_send_data_stream(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_GIMBAL_TO_SEND_DATA_STREAM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_gimbal_to_send_data_stream_t packet_in = {
        5,72
    };
    mavlink_request_gimbal_to_send_data_stream_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.data_type = packet_in.data_type;
        packet1.data_freq = packet_in.data_freq;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_to_send_data_stream_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_gimbal_to_send_data_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_to_send_data_stream_pack(system_id, component_id, &msg , packet1.data_type , packet1.data_freq );
    mavlink_msg_request_gimbal_to_send_data_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_to_send_data_stream_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.data_type , packet1.data_freq );
    mavlink_msg_request_gimbal_to_send_data_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_gimbal_to_send_data_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_to_send_data_stream_send(MAVLINK_COMM_1 , packet1.data_type , packet1.data_freq );
    mavlink_msg_request_gimbal_to_send_data_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_GIMBAL_TO_SEND_DATA_STREAM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_GIMBAL_TO_SEND_DATA_STREAM) != NULL);
#endif
}

static void mavlink_test_request_gimbal_to_send_laser_range_data_stream(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_gimbal_to_send_laser_range_data_stream_t packet_in = {
        5
    };
    mavlink_request_gimbal_to_send_laser_range_data_stream_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.data_type = packet_in.data_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_to_send_laser_range_data_stream_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_gimbal_to_send_laser_range_data_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_to_send_laser_range_data_stream_pack(system_id, component_id, &msg , packet1.data_type );
    mavlink_msg_request_gimbal_to_send_laser_range_data_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_to_send_laser_range_data_stream_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.data_type );
    mavlink_msg_request_gimbal_to_send_laser_range_data_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_gimbal_to_send_laser_range_data_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_to_send_laser_range_data_stream_send(MAVLINK_COMM_1 , packet1.data_type );
    mavlink_msg_request_gimbal_to_send_laser_range_data_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM) != NULL);
#endif
}

static void mavlink_test_request_gimbal_magnetic_encoder_angle(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_gimbal_magnetic_encoder_angle_t packet_in = {
        17235,17339,17443
    };
    mavlink_request_gimbal_magnetic_encoder_angle_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.yaw_angle = packet_in.yaw_angle;
        packet1.pitch_angle = packet_in.pitch_angle;
        packet1.roll_angle = packet_in.roll_angle;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_magnetic_encoder_angle_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_gimbal_magnetic_encoder_angle_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_magnetic_encoder_angle_pack(system_id, component_id, &msg , packet1.yaw_angle , packet1.pitch_angle , packet1.roll_angle );
    mavlink_msg_request_gimbal_magnetic_encoder_angle_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_magnetic_encoder_angle_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.yaw_angle , packet1.pitch_angle , packet1.roll_angle );
    mavlink_msg_request_gimbal_magnetic_encoder_angle_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_gimbal_magnetic_encoder_angle_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_magnetic_encoder_angle_send(MAVLINK_COMM_1 , packet1.yaw_angle , packet1.pitch_angle , packet1.roll_angle );
    mavlink_msg_request_gimbal_magnetic_encoder_angle_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE) != NULL);
#endif
}

static void mavlink_test_request_gimbal_control_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_GIMBAL_CONTROL_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_gimbal_control_mode_t packet_in = {
        5
    };
    mavlink_request_gimbal_control_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_GIMBAL_CONTROL_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_GIMBAL_CONTROL_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_control_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_gimbal_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_control_mode_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_gimbal_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_control_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_gimbal_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_gimbal_control_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_control_mode_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_gimbal_control_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_GIMBAL_CONTROL_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_GIMBAL_CONTROL_MODE) != NULL);
#endif
}

static void mavlink_test_request_weak_control_thresholds(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_WEAK_CONTROL_THRESHOLDS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_weak_control_thresholds_t packet_in = {
        5
    };
    mavlink_request_weak_control_thresholds_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_weak_control_thresholds_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_weak_control_thresholds_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_weak_control_thresholds_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_weak_control_thresholds_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_weak_control_thresholds_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_weak_control_thresholds_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_weak_control_thresholds_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_weak_control_thresholds_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_weak_control_thresholds_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_WEAK_CONTROL_THRESHOLDS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_WEAK_CONTROL_THRESHOLDS) != NULL);
#endif
}

static void mavlink_test_request_gimbal_motor_voltage_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_gimbal_motor_voltage_data_t packet_in = {
        17235,17339,17443
    };
    mavlink_request_gimbal_motor_voltage_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.weak_control_limit_value = packet_in.weak_control_limit_value;
        packet1.voltage_threshold = packet_in.voltage_threshold;
        packet1.angular_error_threshold = packet_in.angular_error_threshold;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_motor_voltage_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_gimbal_motor_voltage_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_motor_voltage_data_pack(system_id, component_id, &msg , packet1.weak_control_limit_value , packet1.voltage_threshold , packet1.angular_error_threshold );
    mavlink_msg_request_gimbal_motor_voltage_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_motor_voltage_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.weak_control_limit_value , packet1.voltage_threshold , packet1.angular_error_threshold );
    mavlink_msg_request_gimbal_motor_voltage_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_gimbal_motor_voltage_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_gimbal_motor_voltage_data_send(MAVLINK_COMM_1 , packet1.weak_control_limit_value , packet1.voltage_threshold , packet1.angular_error_threshold );
    mavlink_msg_request_gimbal_motor_voltage_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA) != NULL);
#endif
}

static void mavlink_test_set_utc_time(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_UTC_TIME >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_utc_time_t packet_in = {
        93372036854775807ULL
    };
    mavlink_set_utc_time_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_UTC_TIME_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_UTC_TIME_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_utc_time_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_utc_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_utc_time_pack(system_id, component_id, &msg , packet1.timestamp );
    mavlink_msg_set_utc_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_utc_time_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp );
    mavlink_msg_set_utc_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_utc_time_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_utc_time_send(MAVLINK_COMM_1 , packet1.timestamp );
    mavlink_msg_set_utc_time_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_UTC_TIME") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_UTC_TIME) != NULL);
#endif
}

static void mavlink_test_request_system_info(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_SYSTEM_INFO >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_system_info_t packet_in = {
        5
    };
    mavlink_request_system_info_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_SYSTEM_INFO_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_SYSTEM_INFO_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_system_info_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_system_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_system_info_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_system_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_system_info_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_system_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_system_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_system_info_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_system_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_SYSTEM_INFO") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_SYSTEM_INFO) != NULL);
#endif
}

static void mavlink_test_set_laser_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_LASER_STATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_laser_state_t packet_in = {
        5
    };
    mavlink_set_laser_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.laser_state = packet_in.laser_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_LASER_STATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_LASER_STATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_laser_state_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_laser_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_laser_state_pack(system_id, component_id, &msg , packet1.laser_state );
    mavlink_msg_set_laser_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_laser_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.laser_state );
    mavlink_msg_set_laser_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_laser_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_laser_state_send(MAVLINK_COMM_1 , packet1.laser_state );
    mavlink_msg_set_laser_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_LASER_STATE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_LASER_STATE) != NULL);
#endif
}

static void mavlink_test_request_thermal_output_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_THERMAL_OUTPUT_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_thermal_output_mode_t packet_in = {
        5
    };
    mavlink_request_thermal_output_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_THERMAL_OUTPUT_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_THERMAL_OUTPUT_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_thermal_output_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_thermal_output_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_thermal_output_mode_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_thermal_output_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_thermal_output_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_thermal_output_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_thermal_output_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_thermal_output_mode_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_thermal_output_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_THERMAL_OUTPUT_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_THERMAL_OUTPUT_MODE) != NULL);
#endif
}

static void mavlink_test_set_thermal_output_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_THERMAL_OUTPUT_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_thermal_output_mode_t packet_in = {
        5
    };
    mavlink_set_thermal_output_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.mode = packet_in.mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_THERMAL_OUTPUT_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_THERMAL_OUTPUT_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_thermal_output_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_thermal_output_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_thermal_output_mode_pack(system_id, component_id, &msg , packet1.mode );
    mavlink_msg_set_thermal_output_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_thermal_output_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mode );
    mavlink_msg_set_thermal_output_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_thermal_output_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_thermal_output_mode_send(MAVLINK_COMM_1 , packet1.mode );
    mavlink_msg_set_thermal_output_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_THERMAL_OUTPUT_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_THERMAL_OUTPUT_MODE) != NULL);
#endif
}

static void mavlink_test_send_raw_gps_to_gimbal(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_send_raw_gps_to_gimbal_t packet_in = {
        963497464,963497672,963497880,963498088,963498296,963498504,963498712,963498920
    };
    mavlink_send_raw_gps_to_gimbal_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt = packet_in.alt;
        packet1.alt_ellipsoid = packet_in.alt_ellipsoid;
        packet1.vn = packet_in.vn;
        packet1.ve = packet_in.ve;
        packet1.vd = packet_in.vd;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_send_raw_gps_to_gimbal_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_send_raw_gps_to_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_send_raw_gps_to_gimbal_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.lat , packet1.lon , packet1.alt , packet1.alt_ellipsoid , packet1.vn , packet1.ve , packet1.vd );
    mavlink_msg_send_raw_gps_to_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_send_raw_gps_to_gimbal_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.lat , packet1.lon , packet1.alt , packet1.alt_ellipsoid , packet1.vn , packet1.ve , packet1.vd );
    mavlink_msg_send_raw_gps_to_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_send_raw_gps_to_gimbal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_send_raw_gps_to_gimbal_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.lat , packet1.lon , packet1.alt , packet1.alt_ellipsoid , packet1.vn , packet1.ve , packet1.vd );
    mavlink_msg_send_raw_gps_to_gimbal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SEND_RAW_GPS_TO_GIMBAL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SEND_RAW_GPS_TO_GIMBAL) != NULL);
#endif
}

static void mavlink_test_request_ir_threshold_precision(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_IR_THRESHOLD_PRECISION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_ir_threshold_precision_t packet_in = {
        5
    };
    mavlink_request_ir_threshold_precision_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_IR_THRESHOLD_PRECISION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_IR_THRESHOLD_PRECISION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_ir_threshold_precision_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_ir_threshold_precision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_ir_threshold_precision_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_ir_threshold_precision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_ir_threshold_precision_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_ir_threshold_precision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_ir_threshold_precision_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_ir_threshold_precision_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_ir_threshold_precision_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_IR_THRESHOLD_PRECISION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_IR_THRESHOLD_PRECISION) != NULL);
#endif
}

static void mavlink_test_set_ir_threshold_precision(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_IR_THRESHOLD_PRECISION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_ir_threshold_precision_t packet_in = {
        5
    };
    mavlink_set_ir_threshold_precision_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.precision = packet_in.precision;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_IR_THRESHOLD_PRECISION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_IR_THRESHOLD_PRECISION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_ir_threshold_precision_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_ir_threshold_precision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_ir_threshold_precision_pack(system_id, component_id, &msg , packet1.precision );
    mavlink_msg_set_ir_threshold_precision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_ir_threshold_precision_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.precision );
    mavlink_msg_set_ir_threshold_precision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_ir_threshold_precision_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_ir_threshold_precision_send(MAVLINK_COMM_1 , packet1.precision );
    mavlink_msg_set_ir_threshold_precision_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_IR_THRESHOLD_PRECISION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_IR_THRESHOLD_PRECISION) != NULL);
#endif
}

static void mavlink_test_format_sd_card(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FORMAT_SD_CARD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_format_sd_card_t packet_in = {
        5
    };
    mavlink_format_sd_card_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.format_sta = packet_in.format_sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FORMAT_SD_CARD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FORMAT_SD_CARD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_format_sd_card_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_format_sd_card_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_format_sd_card_pack(system_id, component_id, &msg , packet1.format_sta );
    mavlink_msg_format_sd_card_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_format_sd_card_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.format_sta );
    mavlink_msg_format_sd_card_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_format_sd_card_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_format_sd_card_send(MAVLINK_COMM_1 , packet1.format_sta );
    mavlink_msg_format_sd_card_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FORMAT_SD_CARD") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FORMAT_SD_CARD) != NULL);
#endif
}

static void mavlink_test_get_picture_name_type(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_get_picture_name_type_t packet_in = {
        5
    };
    mavlink_get_picture_name_type_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.file_type = packet_in.file_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_picture_name_type_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_get_picture_name_type_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_picture_name_type_pack(system_id, component_id, &msg , packet1.file_type );
    mavlink_msg_get_picture_name_type_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_picture_name_type_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.file_type );
    mavlink_msg_get_picture_name_type_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_get_picture_name_type_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_picture_name_type_send(MAVLINK_COMM_1 , packet1.file_type );
    mavlink_msg_get_picture_name_type_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GET_PICTURE_NAME_TYPE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GET_PICTURE_NAME_TYPE) != NULL);
#endif
}

static void mavlink_test_set_picture_name_type(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_PICTURE_NAME_TYPE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_picture_name_type_t packet_in = {
        5,72
    };
    mavlink_set_picture_name_type_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.file_type = packet_in.file_type;
        packet1.file_name_type = packet_in.file_name_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_PICTURE_NAME_TYPE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_PICTURE_NAME_TYPE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_picture_name_type_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_picture_name_type_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_picture_name_type_pack(system_id, component_id, &msg , packet1.file_type , packet1.file_name_type );
    mavlink_msg_set_picture_name_type_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_picture_name_type_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.file_type , packet1.file_name_type );
    mavlink_msg_set_picture_name_type_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_picture_name_type_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_picture_name_type_send(MAVLINK_COMM_1 , packet1.file_type , packet1.file_name_type );
    mavlink_msg_set_picture_name_type_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_PICTURE_NAME_TYPE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_PICTURE_NAME_TYPE) != NULL);
#endif
}

static void mavlink_test_get_hdmi_osd_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GET_HDMI_OSD_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_get_hdmi_osd_status_t packet_in = {
        5
    };
    mavlink_get_hdmi_osd_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GET_HDMI_OSD_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GET_HDMI_OSD_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_hdmi_osd_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_get_hdmi_osd_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_hdmi_osd_status_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_get_hdmi_osd_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_hdmi_osd_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_get_hdmi_osd_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_get_hdmi_osd_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_hdmi_osd_status_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_get_hdmi_osd_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GET_HDMI_OSD_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GET_HDMI_OSD_STATUS) != NULL);
#endif
}

static void mavlink_test_set_hdmi_osd_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_HDMI_OSD_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_hdmi_osd_status_t packet_in = {
        5
    };
    mavlink_set_hdmi_osd_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.osd_sta = packet_in.osd_sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_HDMI_OSD_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_HDMI_OSD_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_hdmi_osd_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_hdmi_osd_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_hdmi_osd_status_pack(system_id, component_id, &msg , packet1.osd_sta );
    mavlink_msg_set_hdmi_osd_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_hdmi_osd_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.osd_sta );
    mavlink_msg_set_hdmi_osd_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_hdmi_osd_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_hdmi_osd_status_send(MAVLINK_COMM_1 , packet1.osd_sta );
    mavlink_msg_set_hdmi_osd_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_HDMI_OSD_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_HDMI_OSD_STATUS) != NULL);
#endif
}

static void mavlink_test_get_ai_mode_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GET_AI_MODE_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_get_ai_mode_status_t packet_in = {
        5
    };
    mavlink_get_ai_mode_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GET_AI_MODE_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GET_AI_MODE_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_ai_mode_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_get_ai_mode_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_ai_mode_status_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_get_ai_mode_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_ai_mode_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_get_ai_mode_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_get_ai_mode_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_ai_mode_status_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_get_ai_mode_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GET_AI_MODE_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GET_AI_MODE_STATUS) != NULL);
#endif
}

static void mavlink_test_get_ai_coordinate_stream_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GET_AI_COORDINATE_STREAM_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_get_ai_coordinate_stream_status_t packet_in = {
        5
    };
    mavlink_get_ai_coordinate_stream_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GET_AI_COORDINATE_STREAM_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GET_AI_COORDINATE_STREAM_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_ai_coordinate_stream_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_get_ai_coordinate_stream_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_ai_coordinate_stream_status_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_get_ai_coordinate_stream_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_ai_coordinate_stream_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_get_ai_coordinate_stream_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_get_ai_coordinate_stream_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_ai_coordinate_stream_status_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_get_ai_coordinate_stream_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GET_AI_COORDINATE_STREAM_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GET_AI_COORDINATE_STREAM_STATUS) != NULL);
#endif
}

static void mavlink_test_update_thermal_shutter(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_update_thermal_shutter_t packet_in = {
        5
    };
    mavlink_update_thermal_shutter_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_update_thermal_shutter_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_update_thermal_shutter_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_update_thermal_shutter_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_update_thermal_shutter_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_update_thermal_shutter_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_update_thermal_shutter_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_update_thermal_shutter_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_update_thermal_shutter_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_update_thermal_shutter_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("UPDATE_THERMAL_SHUTTER") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_UPDATE_THERMAL_SHUTTER) != NULL);
#endif
}

static void mavlink_test_set_ai_coordinate_stream_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_ai_coordinate_stream_status_t packet_in = {
        5
    };
    mavlink_set_ai_coordinate_stream_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.track_action = packet_in.track_action;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_ai_coordinate_stream_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_ai_coordinate_stream_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_ai_coordinate_stream_status_pack(system_id, component_id, &msg , packet1.track_action );
    mavlink_msg_set_ai_coordinate_stream_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_ai_coordinate_stream_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.track_action );
    mavlink_msg_set_ai_coordinate_stream_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_ai_coordinate_stream_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_ai_coordinate_stream_status_send(MAVLINK_COMM_1 , packet1.track_action );
    mavlink_msg_set_ai_coordinate_stream_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_AI_COORDINATE_STREAM_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_AI_COORDINATE_STREAM_STATUS) != NULL);
#endif
}

static void mavlink_test_request_weak_control_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_WEAK_CONTROL_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_weak_control_mode_t packet_in = {
        5
    };
    mavlink_request_weak_control_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_WEAK_CONTROL_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_WEAK_CONTROL_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_weak_control_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_weak_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_weak_control_mode_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_request_weak_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_weak_control_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_request_weak_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_weak_control_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_weak_control_mode_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_request_weak_control_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("REQUEST_WEAK_CONTROL_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_REQUEST_WEAK_CONTROL_MODE) != NULL);
#endif
}

static void mavlink_test_set_weak_control_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_WEAK_CONTROL_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_weak_control_mode_t packet_in = {
        5
    };
    mavlink_set_weak_control_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.weak_mode_state = packet_in.weak_mode_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_WEAK_CONTROL_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_WEAK_CONTROL_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_weak_control_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_weak_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_weak_control_mode_pack(system_id, component_id, &msg , packet1.weak_mode_state );
    mavlink_msg_set_weak_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_weak_control_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.weak_mode_state );
    mavlink_msg_set_weak_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_weak_control_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_weak_control_mode_send(MAVLINK_COMM_1 , packet1.weak_mode_state );
    mavlink_msg_set_weak_control_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_WEAK_CONTROL_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_WEAK_CONTROL_MODE) != NULL);
#endif
}

static void mavlink_test_gimbal_camera_soft_reboot(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gimbal_camera_soft_reboot_t packet_in = {
        5,72
    };
    mavlink_gimbal_camera_soft_reboot_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.camera_reboot = packet_in.camera_reboot;
        packet1.gimbal_reset = packet_in.gimbal_reset;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_camera_soft_reboot_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gimbal_camera_soft_reboot_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_camera_soft_reboot_pack(system_id, component_id, &msg , packet1.camera_reboot , packet1.gimbal_reset );
    mavlink_msg_gimbal_camera_soft_reboot_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_camera_soft_reboot_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.camera_reboot , packet1.gimbal_reset );
    mavlink_msg_gimbal_camera_soft_reboot_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gimbal_camera_soft_reboot_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_camera_soft_reboot_send(MAVLINK_COMM_1 , packet1.camera_reboot , packet1.gimbal_reset );
    mavlink_msg_gimbal_camera_soft_reboot_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GIMBAL_CAMERA_SOFT_REBOOT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GIMBAL_CAMERA_SOFT_REBOOT) != NULL);
#endif
}

static void mavlink_test_get_gimbal_camera_ip(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_get_gimbal_camera_ip_t packet_in = {
        5
    };
    mavlink_get_gimbal_camera_ip_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dummy = packet_in.dummy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_gimbal_camera_ip_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_get_gimbal_camera_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_gimbal_camera_ip_pack(system_id, component_id, &msg , packet1.dummy );
    mavlink_msg_get_gimbal_camera_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_gimbal_camera_ip_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dummy );
    mavlink_msg_get_gimbal_camera_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_get_gimbal_camera_ip_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_get_gimbal_camera_ip_send(MAVLINK_COMM_1 , packet1.dummy );
    mavlink_msg_get_gimbal_camera_ip_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GET_GIMBAL_CAMERA_IP") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GET_GIMBAL_CAMERA_IP) != NULL);
#endif
}

static void mavlink_test_set_gimbal_camera_ip(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_GIMBAL_CAMERA_IP >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_gimbal_camera_ip_t packet_in = {
        963497464,963497672,963497880
    };
    mavlink_set_gimbal_camera_ip_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.ip = packet_in.ip;
        packet1.mask = packet_in.mask;
        packet1.gateway = packet_in.gateway;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_GIMBAL_CAMERA_IP_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_GIMBAL_CAMERA_IP_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_gimbal_camera_ip_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_gimbal_camera_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_gimbal_camera_ip_pack(system_id, component_id, &msg , packet1.ip , packet1.mask , packet1.gateway );
    mavlink_msg_set_gimbal_camera_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_gimbal_camera_ip_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.ip , packet1.mask , packet1.gateway );
    mavlink_msg_set_gimbal_camera_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_gimbal_camera_ip_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_gimbal_camera_ip_send(MAVLINK_COMM_1 , packet1.ip , packet1.mask , packet1.gateway );
    mavlink_msg_set_gimbal_camera_ip_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SET_GIMBAL_CAMERA_IP") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SET_GIMBAL_CAMERA_IP) != NULL);
#endif
}

static void mavlink_test_response_request_firmware_version(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_firmware_version_t packet_in = {
        963497464,963497672,963497880
    };
    mavlink_response_request_firmware_version_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.camera_firmware_ver = packet_in.camera_firmware_ver;
        packet1.gimbal_firmware_ver = packet_in.gimbal_firmware_ver;
        packet1.zoom_firmware_ver = packet_in.zoom_firmware_ver;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_firmware_version_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_firmware_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_firmware_version_pack(system_id, component_id, &msg , packet1.camera_firmware_ver , packet1.gimbal_firmware_ver , packet1.zoom_firmware_ver );
    mavlink_msg_response_request_firmware_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_firmware_version_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.camera_firmware_ver , packet1.gimbal_firmware_ver , packet1.zoom_firmware_ver );
    mavlink_msg_response_request_firmware_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_firmware_version_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_firmware_version_send(MAVLINK_COMM_1 , packet1.camera_firmware_ver , packet1.gimbal_firmware_ver , packet1.zoom_firmware_ver );
    mavlink_msg_response_request_firmware_version_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_FIRMWARE_VERSION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_FIRMWARE_VERSION) != NULL);
#endif
}

static void mavlink_test_response_request_gimbal_hardware_id(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_gimbal_hardware_id_t packet_in = {
        963497464
    };
    mavlink_response_request_gimbal_hardware_id_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.hardware_id = packet_in.hardware_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_hardware_id_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_gimbal_hardware_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_hardware_id_pack(system_id, component_id, &msg , packet1.hardware_id );
    mavlink_msg_response_request_gimbal_hardware_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_hardware_id_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.hardware_id );
    mavlink_msg_response_request_gimbal_hardware_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_gimbal_hardware_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_hardware_id_send(MAVLINK_COMM_1 , packet1.hardware_id );
    mavlink_msg_response_request_gimbal_hardware_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_GIMBAL_HARDWARE_ID") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID) != NULL);
#endif
}

static void mavlink_test_response_auto_focus(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_AUTO_FOCUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_auto_focus_t packet_in = {
        5
    };
    mavlink_response_auto_focus_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.sta = packet_in.sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_AUTO_FOCUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_AUTO_FOCUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_auto_focus_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_auto_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_auto_focus_pack(system_id, component_id, &msg , packet1.sta );
    mavlink_msg_response_auto_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_auto_focus_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sta );
    mavlink_msg_response_auto_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_auto_focus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_auto_focus_send(MAVLINK_COMM_1 , packet1.sta );
    mavlink_msg_response_auto_focus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_AUTO_FOCUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_AUTO_FOCUS) != NULL);
#endif
}

static void mavlink_test_response_manual_zoom_with_autofocus(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_manual_zoom_with_autofocus_t packet_in = {
        17235
    };
    mavlink_response_manual_zoom_with_autofocus_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.zoom_multiple = packet_in.zoom_multiple;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_manual_zoom_with_autofocus_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_manual_zoom_with_autofocus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_manual_zoom_with_autofocus_pack(system_id, component_id, &msg , packet1.zoom_multiple );
    mavlink_msg_response_manual_zoom_with_autofocus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_manual_zoom_with_autofocus_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.zoom_multiple );
    mavlink_msg_response_manual_zoom_with_autofocus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_manual_zoom_with_autofocus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_manual_zoom_with_autofocus_send(MAVLINK_COMM_1 , packet1.zoom_multiple );
    mavlink_msg_response_manual_zoom_with_autofocus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS) != NULL);
#endif
}

static void mavlink_test_response_manual_focus(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_manual_focus_t packet_in = {
        5
    };
    mavlink_response_manual_focus_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.sta = packet_in.sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_manual_focus_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_manual_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_manual_focus_pack(system_id, component_id, &msg , packet1.sta );
    mavlink_msg_response_manual_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_manual_focus_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sta );
    mavlink_msg_response_manual_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_manual_focus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_manual_focus_send(MAVLINK_COMM_1 , packet1.sta );
    mavlink_msg_response_manual_focus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_MANUAL_FOCUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_MANUAL_FOCUS) != NULL);
#endif
}

static void mavlink_test_response_gimbal_rotation_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_GIMBAL_ROTATION_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_gimbal_rotation_control_t packet_in = {
        5
    };
    mavlink_response_gimbal_rotation_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.sta = packet_in.sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_GIMBAL_ROTATION_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_GIMBAL_ROTATION_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_rotation_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_gimbal_rotation_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_rotation_control_pack(system_id, component_id, &msg , packet1.sta );
    mavlink_msg_response_gimbal_rotation_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_rotation_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sta );
    mavlink_msg_response_gimbal_rotation_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_gimbal_rotation_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_rotation_control_send(MAVLINK_COMM_1 , packet1.sta );
    mavlink_msg_response_gimbal_rotation_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_GIMBAL_ROTATION_CONTROL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_GIMBAL_ROTATION_CONTROL) != NULL);
#endif
}

static void mavlink_test_response_one_key_centering(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_ONE_KEY_CENTERING >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_one_key_centering_t packet_in = {
        5
    };
    mavlink_response_one_key_centering_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.sta = packet_in.sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_ONE_KEY_CENTERING_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_ONE_KEY_CENTERING_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_one_key_centering_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_one_key_centering_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_one_key_centering_pack(system_id, component_id, &msg , packet1.sta );
    mavlink_msg_response_one_key_centering_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_one_key_centering_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sta );
    mavlink_msg_response_one_key_centering_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_one_key_centering_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_one_key_centering_send(MAVLINK_COMM_1 , packet1.sta );
    mavlink_msg_response_one_key_centering_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_ONE_KEY_CENTERING") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_ONE_KEY_CENTERING) != NULL);
#endif
}

static void mavlink_test_response_request_camera_system_information(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_camera_system_information_t packet_in = {
        5,72,139,206,17,84,151,218
    };
    mavlink_response_request_camera_system_information_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.reserved1 = packet_in.reserved1;
        packet1.hdr_sta = packet_in.hdr_sta;
        packet1.reserved2 = packet_in.reserved2;
        packet1.record_sta = packet_in.record_sta;
        packet1.gimbal_motion_mode = packet_in.gimbal_motion_mode;
        packet1.gimbal_mounting_dir = packet_in.gimbal_mounting_dir;
        packet1.video_hdmi_or_cvbs = packet_in.video_hdmi_or_cvbs;
        packet1.zoom_linkage = packet_in.zoom_linkage;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_camera_system_information_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_camera_system_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_camera_system_information_pack(system_id, component_id, &msg , packet1.reserved1 , packet1.hdr_sta , packet1.reserved2 , packet1.record_sta , packet1.gimbal_motion_mode , packet1.gimbal_mounting_dir , packet1.video_hdmi_or_cvbs , packet1.zoom_linkage );
    mavlink_msg_response_request_camera_system_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_camera_system_information_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.reserved1 , packet1.hdr_sta , packet1.reserved2 , packet1.record_sta , packet1.gimbal_motion_mode , packet1.gimbal_mounting_dir , packet1.video_hdmi_or_cvbs , packet1.zoom_linkage );
    mavlink_msg_response_request_camera_system_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_camera_system_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_camera_system_information_send(MAVLINK_COMM_1 , packet1.reserved1 , packet1.hdr_sta , packet1.reserved2 , packet1.record_sta , packet1.gimbal_motion_mode , packet1.gimbal_mounting_dir , packet1.video_hdmi_or_cvbs , packet1.zoom_linkage );
    mavlink_msg_response_request_camera_system_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION) != NULL);
#endif
}

static void mavlink_test_response_function_feedback_response(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_FUNCTION_FEEDBACK_RESPONSE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_function_feedback_response_t packet_in = {
        5
    };
    mavlink_response_function_feedback_response_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.info_type = packet_in.info_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_FUNCTION_FEEDBACK_RESPONSE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_function_feedback_response_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_function_feedback_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_function_feedback_response_pack(system_id, component_id, &msg , packet1.info_type );
    mavlink_msg_response_function_feedback_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_function_feedback_response_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.info_type );
    mavlink_msg_response_function_feedback_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_function_feedback_response_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_function_feedback_response_send(MAVLINK_COMM_1 , packet1.info_type );
    mavlink_msg_response_function_feedback_response_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_FUNCTION_FEEDBACK_RESPONSE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_FUNCTION_FEEDBACK_RESPONSE) != NULL);
#endif
}

static void mavlink_test_response_request_gimbal_attitude_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_gimbal_attitude_data_t packet_in = {
        17235,17339,17443,17547,17651,17755
    };
    mavlink_response_request_gimbal_attitude_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.yaw = packet_in.yaw;
        packet1.pitch = packet_in.pitch;
        packet1.roll = packet_in.roll;
        packet1.yaw_velocity = packet_in.yaw_velocity;
        packet1.pitch_velocity = packet_in.pitch_velocity;
        packet1.roll_velocity = packet_in.roll_velocity;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_attitude_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_gimbal_attitude_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_attitude_data_pack(system_id, component_id, &msg , packet1.yaw , packet1.pitch , packet1.roll , packet1.yaw_velocity , packet1.pitch_velocity , packet1.roll_velocity );
    mavlink_msg_response_request_gimbal_attitude_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_attitude_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.yaw , packet1.pitch , packet1.roll , packet1.yaw_velocity , packet1.pitch_velocity , packet1.roll_velocity );
    mavlink_msg_response_request_gimbal_attitude_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_gimbal_attitude_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_attitude_data_send(MAVLINK_COMM_1 , packet1.yaw , packet1.pitch , packet1.roll , packet1.yaw_velocity , packet1.pitch_velocity , packet1.roll_velocity );
    mavlink_msg_response_request_gimbal_attitude_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA) != NULL);
#endif
}

static void mavlink_test_response_set_gimbal_attitude_angles(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_GIMBAL_ATTITUDE_ANGLES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_gimbal_attitude_angles_t packet_in = {
        17235,17339,17443
    };
    mavlink_response_set_gimbal_attitude_angles_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.yaw = packet_in.yaw;
        packet1.pitch = packet_in.pitch;
        packet1.roll = packet_in.roll;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_GIMBAL_ATTITUDE_ANGLES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_gimbal_attitude_angles_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_gimbal_attitude_angles_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_gimbal_attitude_angles_pack(system_id, component_id, &msg , packet1.yaw , packet1.pitch , packet1.roll );
    mavlink_msg_response_set_gimbal_attitude_angles_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_gimbal_attitude_angles_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.yaw , packet1.pitch , packet1.roll );
    mavlink_msg_response_set_gimbal_attitude_angles_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_gimbal_attitude_angles_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_gimbal_attitude_angles_send(MAVLINK_COMM_1 , packet1.yaw , packet1.pitch , packet1.roll );
    mavlink_msg_response_set_gimbal_attitude_angles_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_GIMBAL_ATTITUDE_ANGLES") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_GIMBAL_ATTITUDE_ANGLES) != NULL);
#endif
}

static void mavlink_test_response_absolute_zoom_auto_focus(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_ABSOLUTE_ZOOM_AUTO_FOCUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_absolute_zoom_auto_focus_t packet_in = {
        5
    };
    mavlink_response_absolute_zoom_auto_focus_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.absolute_movement_ack = packet_in.absolute_movement_ack;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_ABSOLUTE_ZOOM_AUTO_FOCUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_absolute_zoom_auto_focus_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_absolute_zoom_auto_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_absolute_zoom_auto_focus_pack(system_id, component_id, &msg , packet1.absolute_movement_ack );
    mavlink_msg_response_absolute_zoom_auto_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_absolute_zoom_auto_focus_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.absolute_movement_ack );
    mavlink_msg_response_absolute_zoom_auto_focus_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_absolute_zoom_auto_focus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_absolute_zoom_auto_focus_send(MAVLINK_COMM_1 , packet1.absolute_movement_ack );
    mavlink_msg_response_absolute_zoom_auto_focus_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_ABSOLUTE_ZOOM_AUTO_FOCUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_ABSOLUTE_ZOOM_AUTO_FOCUS) != NULL);
#endif
}

static void mavlink_test_response_request_video_stitching_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_VIDEO_STITCHING_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_video_stitching_mode_t packet_in = {
        5
    };
    mavlink_response_request_video_stitching_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.vdisp_mode = packet_in.vdisp_mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_VIDEO_STITCHING_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_VIDEO_STITCHING_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_video_stitching_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_video_stitching_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_video_stitching_mode_pack(system_id, component_id, &msg , packet1.vdisp_mode );
    mavlink_msg_response_request_video_stitching_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_video_stitching_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.vdisp_mode );
    mavlink_msg_response_request_video_stitching_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_video_stitching_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_video_stitching_mode_send(MAVLINK_COMM_1 , packet1.vdisp_mode );
    mavlink_msg_response_request_video_stitching_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_VIDEO_STITCHING_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_VIDEO_STITCHING_MODE) != NULL);
#endif
}

static void mavlink_test_response_set_video_stitching_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_VIDEO_STITCHING_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_video_stitching_mode_t packet_in = {
        5
    };
    mavlink_response_set_video_stitching_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.vdisp_mode = packet_in.vdisp_mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_VIDEO_STITCHING_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_VIDEO_STITCHING_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_video_stitching_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_video_stitching_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_video_stitching_mode_pack(system_id, component_id, &msg , packet1.vdisp_mode );
    mavlink_msg_response_set_video_stitching_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_video_stitching_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.vdisp_mode );
    mavlink_msg_response_set_video_stitching_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_video_stitching_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_video_stitching_mode_send(MAVLINK_COMM_1 , packet1.vdisp_mode );
    mavlink_msg_response_set_video_stitching_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_VIDEO_STITCHING_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_VIDEO_STITCHING_MODE) != NULL);
#endif
}

static void mavlink_test_response_get_temperature_at_selected_point(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_get_temperature_at_selected_point_t packet_in = {
        17235,17339,17443
    };
    mavlink_response_get_temperature_at_selected_point_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.temperature = packet_in.temperature;
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_get_temperature_at_selected_point_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_get_temperature_at_selected_point_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_get_temperature_at_selected_point_pack(system_id, component_id, &msg , packet1.temperature , packet1.x , packet1.y );
    mavlink_msg_response_get_temperature_at_selected_point_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_get_temperature_at_selected_point_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.temperature , packet1.x , packet1.y );
    mavlink_msg_response_get_temperature_at_selected_point_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_get_temperature_at_selected_point_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_get_temperature_at_selected_point_send(MAVLINK_COMM_1 , packet1.temperature , packet1.x , packet1.y );
    mavlink_msg_response_get_temperature_at_selected_point_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT) != NULL);
#endif
}

static void mavlink_test_response_local_temperature_measurement(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_LOCAL_TEMPERATURE_MEASUREMENT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_local_temperature_measurement_t packet_in = {
        17235,17339,17443,17547,17651,17755,17859,17963,18067,18171
    };
    mavlink_response_local_temperature_measurement_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.startx = packet_in.startx;
        packet1.starty = packet_in.starty;
        packet1.endx = packet_in.endx;
        packet1.endy = packet_in.endy;
        packet1.temp_max = packet_in.temp_max;
        packet1.temp_min = packet_in.temp_min;
        packet1.temp_max_x = packet_in.temp_max_x;
        packet1.temp_max_y = packet_in.temp_max_y;
        packet1.temp_min_x = packet_in.temp_min_x;
        packet1.temp_min_y = packet_in.temp_min_y;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_LOCAL_TEMPERATURE_MEASUREMENT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_local_temperature_measurement_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_local_temperature_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_local_temperature_measurement_pack(system_id, component_id, &msg , packet1.startx , packet1.starty , packet1.endx , packet1.endy , packet1.temp_max , packet1.temp_min , packet1.temp_max_x , packet1.temp_max_y , packet1.temp_min_x , packet1.temp_min_y );
    mavlink_msg_response_local_temperature_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_local_temperature_measurement_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.startx , packet1.starty , packet1.endx , packet1.endy , packet1.temp_max , packet1.temp_min , packet1.temp_max_x , packet1.temp_max_y , packet1.temp_min_x , packet1.temp_min_y );
    mavlink_msg_response_local_temperature_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_local_temperature_measurement_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_local_temperature_measurement_send(MAVLINK_COMM_1 , packet1.startx , packet1.starty , packet1.endx , packet1.endy , packet1.temp_max , packet1.temp_min , packet1.temp_max_x , packet1.temp_max_y , packet1.temp_min_x , packet1.temp_min_y );
    mavlink_msg_response_local_temperature_measurement_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_LOCAL_TEMPERATURE_MEASUREMENT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_LOCAL_TEMPERATURE_MEASUREMENT) != NULL);
#endif
}

static void mavlink_test_response_global_temperature_measurement(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_global_temperature_measurement_t packet_in = {
        17235,17339,17443,17547,17651,17755
    };
    mavlink_response_global_temperature_measurement_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.temp_max = packet_in.temp_max;
        packet1.temp_min = packet_in.temp_min;
        packet1.temp_max_x = packet_in.temp_max_x;
        packet1.temp_max_y = packet_in.temp_max_y;
        packet1.temp_min_x = packet_in.temp_min_x;
        packet1.temp_min_y = packet_in.temp_min_y;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_global_temperature_measurement_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_global_temperature_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_global_temperature_measurement_pack(system_id, component_id, &msg , packet1.temp_max , packet1.temp_min , packet1.temp_max_x , packet1.temp_max_y , packet1.temp_min_x , packet1.temp_min_y );
    mavlink_msg_response_global_temperature_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_global_temperature_measurement_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.temp_max , packet1.temp_min , packet1.temp_max_x , packet1.temp_max_y , packet1.temp_min_x , packet1.temp_min_y );
    mavlink_msg_response_global_temperature_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_global_temperature_measurement_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_global_temperature_measurement_send(MAVLINK_COMM_1 , packet1.temp_max , packet1.temp_min , packet1.temp_max_x , packet1.temp_max_y , packet1.temp_min_x , packet1.temp_min_y );
    mavlink_msg_response_global_temperature_measurement_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT) != NULL);
#endif
}

static void mavlink_test_response_request_laser_distance_measurement(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_MEASUREMENT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_laser_distance_measurement_t packet_in = {
        17235
    };
    mavlink_response_request_laser_distance_measurement_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.laser_distance = packet_in.laser_distance;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_MEASUREMENT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_MEASUREMENT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_laser_distance_measurement_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_laser_distance_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_laser_distance_measurement_pack(system_id, component_id, &msg , packet1.laser_distance );
    mavlink_msg_response_request_laser_distance_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_laser_distance_measurement_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.laser_distance );
    mavlink_msg_response_request_laser_distance_measurement_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_laser_distance_measurement_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_laser_distance_measurement_send(MAVLINK_COMM_1 , packet1.laser_distance );
    mavlink_msg_response_request_laser_distance_measurement_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_LASER_DISTANCE_MEASUREMENT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_MEASUREMENT) != NULL);
#endif
}

static void mavlink_test_response_request_current_supported_zoom_range(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_current_supported_zoom_range_t packet_in = {
        5,72
    };
    mavlink_response_request_current_supported_zoom_range_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.zoom_max_int = packet_in.zoom_max_int;
        packet1.zoom_max_float = packet_in.zoom_max_float;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_supported_zoom_range_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_current_supported_zoom_range_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_supported_zoom_range_pack(system_id, component_id, &msg , packet1.zoom_max_int , packet1.zoom_max_float );
    mavlink_msg_response_request_current_supported_zoom_range_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_supported_zoom_range_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.zoom_max_int , packet1.zoom_max_float );
    mavlink_msg_response_request_current_supported_zoom_range_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_current_supported_zoom_range_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_supported_zoom_range_send(MAVLINK_COMM_1 , packet1.zoom_max_int , packet1.zoom_max_float );
    mavlink_msg_response_request_current_supported_zoom_range_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE) != NULL);
#endif
}

static void mavlink_test_response_request_laser_distance_target_longitude_latitude(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_laser_distance_target_longitude_latitude_t packet_in = {
        963497464,963497672
    };
    mavlink_response_request_laser_distance_target_longitude_latitude_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_lat = packet_in.target_lat;
        packet1.target_lon = packet_in.target_lon;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_laser_distance_target_longitude_latitude_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_laser_distance_target_longitude_latitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_laser_distance_target_longitude_latitude_pack(system_id, component_id, &msg , packet1.target_lat , packet1.target_lon );
    mavlink_msg_response_request_laser_distance_target_longitude_latitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_laser_distance_target_longitude_latitude_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_lat , packet1.target_lon );
    mavlink_msg_response_request_laser_distance_target_longitude_latitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_laser_distance_target_longitude_latitude_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_laser_distance_target_longitude_latitude_send(MAVLINK_COMM_1 , packet1.target_lat , packet1.target_lon );
    mavlink_msg_response_request_laser_distance_target_longitude_latitude_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE) != NULL);
#endif
}

static void mavlink_test_response_request_current_zoom_magnification(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_current_zoom_magnification_t packet_in = {
        5,72
    };
    mavlink_response_request_current_zoom_magnification_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.zoom_int = packet_in.zoom_int;
        packet1.zoom_float = packet_in.zoom_float;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_zoom_magnification_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_current_zoom_magnification_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_zoom_magnification_pack(system_id, component_id, &msg , packet1.zoom_int , packet1.zoom_float );
    mavlink_msg_response_request_current_zoom_magnification_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_zoom_magnification_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.zoom_int , packet1.zoom_float );
    mavlink_msg_response_request_current_zoom_magnification_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_current_zoom_magnification_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_zoom_magnification_send(MAVLINK_COMM_1 , packet1.zoom_int , packet1.zoom_float );
    mavlink_msg_response_request_current_zoom_magnification_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION) != NULL);
#endif
}

static void mavlink_test_response_request_current_gimbal_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_GIMBAL_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_current_gimbal_mode_t packet_in = {
        5
    };
    mavlink_response_request_current_gimbal_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.gimbal_mode = packet_in.gimbal_mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_GIMBAL_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_GIMBAL_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_gimbal_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_current_gimbal_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_gimbal_mode_pack(system_id, component_id, &msg , packet1.gimbal_mode );
    mavlink_msg_response_request_current_gimbal_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_gimbal_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.gimbal_mode );
    mavlink_msg_response_request_current_gimbal_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_current_gimbal_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_gimbal_mode_send(MAVLINK_COMM_1 , packet1.gimbal_mode );
    mavlink_msg_response_request_current_gimbal_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_CURRENT_GIMBAL_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_GIMBAL_MODE) != NULL);
#endif
}

static void mavlink_test_response_request_current_thermal_image_pseudocolor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_current_thermal_image_pseudocolor_t packet_in = {
        5
    };
    mavlink_response_request_current_thermal_image_pseudocolor_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pseudo_color = packet_in.pseudo_color;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_thermal_image_pseudocolor_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_current_thermal_image_pseudocolor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_thermal_image_pseudocolor_pack(system_id, component_id, &msg , packet1.pseudo_color );
    mavlink_msg_response_request_current_thermal_image_pseudocolor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_thermal_image_pseudocolor_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.pseudo_color );
    mavlink_msg_response_request_current_thermal_image_pseudocolor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_current_thermal_image_pseudocolor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_current_thermal_image_pseudocolor_send(MAVLINK_COMM_1 , packet1.pseudo_color );
    mavlink_msg_response_request_current_thermal_image_pseudocolor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR) != NULL);
#endif
}

static void mavlink_test_response_set_current_thermal_image_pseudocolor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_current_thermal_image_pseudocolor_t packet_in = {
        5
    };
    mavlink_response_set_current_thermal_image_pseudocolor_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pseudo_color = packet_in.pseudo_color;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_current_thermal_image_pseudocolor_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_current_thermal_image_pseudocolor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_current_thermal_image_pseudocolor_pack(system_id, component_id, &msg , packet1.pseudo_color );
    mavlink_msg_response_set_current_thermal_image_pseudocolor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_current_thermal_image_pseudocolor_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.pseudo_color );
    mavlink_msg_response_set_current_thermal_image_pseudocolor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_current_thermal_image_pseudocolor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_current_thermal_image_pseudocolor_send(MAVLINK_COMM_1 , packet1.pseudo_color );
    mavlink_msg_response_set_current_thermal_image_pseudocolor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR) != NULL);
#endif
}

static void mavlink_test_response_request_camera_encoding_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_ENCODING_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_camera_encoding_parameters_t packet_in = {
        17235,17339,17443,151,218,29
    };
    mavlink_response_request_camera_encoding_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.resolution_width = packet_in.resolution_width;
        packet1.resolution_height = packet_in.resolution_height;
        packet1.bitrate = packet_in.bitrate;
        packet1.stream_type = packet_in.stream_type;
        packet1.encoding_type = packet_in.encoding_type;
        packet1.reserve = packet_in.reserve;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_ENCODING_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_camera_encoding_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_camera_encoding_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_camera_encoding_parameters_pack(system_id, component_id, &msg , packet1.stream_type , packet1.encoding_type , packet1.resolution_width , packet1.resolution_height , packet1.bitrate , packet1.reserve );
    mavlink_msg_response_request_camera_encoding_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_camera_encoding_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.stream_type , packet1.encoding_type , packet1.resolution_width , packet1.resolution_height , packet1.bitrate , packet1.reserve );
    mavlink_msg_response_request_camera_encoding_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_camera_encoding_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_camera_encoding_parameters_send(MAVLINK_COMM_1 , packet1.stream_type , packet1.encoding_type , packet1.resolution_width , packet1.resolution_height , packet1.bitrate , packet1.reserve );
    mavlink_msg_response_request_camera_encoding_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_CAMERA_ENCODING_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_CAMERA_ENCODING_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_response_set_camera_encoding_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_ENCODING_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_camera_encoding_parameters_t packet_in = {
        5,72
    };
    mavlink_response_set_camera_encoding_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.stream_type = packet_in.stream_type;
        packet1.sta = packet_in.sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_ENCODING_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_ENCODING_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_camera_encoding_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_camera_encoding_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_camera_encoding_parameters_pack(system_id, component_id, &msg , packet1.stream_type , packet1.sta );
    mavlink_msg_response_set_camera_encoding_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_camera_encoding_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.stream_type , packet1.sta );
    mavlink_msg_response_set_camera_encoding_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_camera_encoding_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_camera_encoding_parameters_send(MAVLINK_COMM_1 , packet1.stream_type , packet1.sta );
    mavlink_msg_response_set_camera_encoding_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_CAMERA_ENCODING_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_ENCODING_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_response_request_flight_controller_to_send_data_stream_to_gimbal(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t packet_in = {
        5
    };
    mavlink_response_request_flight_controller_to_send_data_stream_to_gimbal_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.data_type = packet_in.data_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_pack(system_id, component_id, &msg , packet1.data_type );
    mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.data_type );
    mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_send(MAVLINK_COMM_1 , packet1.data_type );
    mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL) != NULL);
#endif
}

static void mavlink_test_response_request_gimbal_to_send_data_stream(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_gimbal_to_send_data_stream_t packet_in = {
        5
    };
    mavlink_response_request_gimbal_to_send_data_stream_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.data_type = packet_in.data_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_to_send_data_stream_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_gimbal_to_send_data_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_to_send_data_stream_pack(system_id, component_id, &msg , packet1.data_type );
    mavlink_msg_response_request_gimbal_to_send_data_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_to_send_data_stream_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.data_type );
    mavlink_msg_response_request_gimbal_to_send_data_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_gimbal_to_send_data_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_to_send_data_stream_send(MAVLINK_COMM_1 , packet1.data_type );
    mavlink_msg_response_request_gimbal_to_send_data_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM) != NULL);
#endif
}

static void mavlink_test_response_request_gimbal_to_send_laser_range_data_stream(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_gimbal_to_send_laser_range_data_stream_t packet_in = {
        5
    };
    mavlink_response_request_gimbal_to_send_laser_range_data_stream_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.data_type = packet_in.data_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_to_send_laser_range_data_stream_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_gimbal_to_send_laser_range_data_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_to_send_laser_range_data_stream_pack(system_id, component_id, &msg , packet1.data_type );
    mavlink_msg_response_request_gimbal_to_send_laser_range_data_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_to_send_laser_range_data_stream_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.data_type );
    mavlink_msg_response_request_gimbal_to_send_laser_range_data_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_gimbal_to_send_laser_range_data_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_gimbal_to_send_laser_range_data_stream_send(MAVLINK_COMM_1 , packet1.data_type );
    mavlink_msg_response_request_gimbal_to_send_laser_range_data_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM) != NULL);
#endif
}

static void mavlink_test_response_encoder_angle(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_ENCODER_ANGLE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_encoder_angle_t packet_in = {
        17235,17339,17443
    };
    mavlink_response_encoder_angle_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.yaw_angle = packet_in.yaw_angle;
        packet1.pitch_angle = packet_in.pitch_angle;
        packet1.roll_angle = packet_in.roll_angle;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_ENCODER_ANGLE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_ENCODER_ANGLE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_encoder_angle_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_encoder_angle_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_encoder_angle_pack(system_id, component_id, &msg , packet1.yaw_angle , packet1.pitch_angle , packet1.roll_angle );
    mavlink_msg_response_encoder_angle_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_encoder_angle_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.yaw_angle , packet1.pitch_angle , packet1.roll_angle );
    mavlink_msg_response_encoder_angle_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_encoder_angle_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_encoder_angle_send(MAVLINK_COMM_1 , packet1.yaw_angle , packet1.pitch_angle , packet1.roll_angle );
    mavlink_msg_response_encoder_angle_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_ENCODER_ANGLE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_ENCODER_ANGLE) != NULL);
#endif
}

static void mavlink_test_response_gimbal_control_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_GIMBAL_CONTROL_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_gimbal_control_mode_t packet_in = {
        5
    };
    mavlink_response_gimbal_control_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.control_mode = packet_in.control_mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_GIMBAL_CONTROL_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_GIMBAL_CONTROL_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_control_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_gimbal_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_control_mode_pack(system_id, component_id, &msg , packet1.control_mode );
    mavlink_msg_response_gimbal_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_control_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.control_mode );
    mavlink_msg_response_gimbal_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_gimbal_control_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_control_mode_send(MAVLINK_COMM_1 , packet1.control_mode );
    mavlink_msg_response_gimbal_control_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_GIMBAL_CONTROL_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_GIMBAL_CONTROL_MODE) != NULL);
#endif
}

static void mavlink_test_response_request_weak_control_thresholds(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_weak_control_thresholds_t packet_in = {
        17235,17339,17443
    };
    mavlink_response_request_weak_control_thresholds_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.weak_control_limit_value = packet_in.weak_control_limit_value;
        packet1.voltage_threshold = packet_in.voltage_threshold;
        packet1.angular_error_threshold = packet_in.angular_error_threshold;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_weak_control_thresholds_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_weak_control_thresholds_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_weak_control_thresholds_pack(system_id, component_id, &msg , packet1.weak_control_limit_value , packet1.voltage_threshold , packet1.angular_error_threshold );
    mavlink_msg_response_request_weak_control_thresholds_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_weak_control_thresholds_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.weak_control_limit_value , packet1.voltage_threshold , packet1.angular_error_threshold );
    mavlink_msg_response_request_weak_control_thresholds_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_weak_control_thresholds_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_weak_control_thresholds_send(MAVLINK_COMM_1 , packet1.weak_control_limit_value , packet1.voltage_threshold , packet1.angular_error_threshold );
    mavlink_msg_response_request_weak_control_thresholds_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS) != NULL);
#endif
}

static void mavlink_test_response_gimbal_motor_voltage_1(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1 >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_gimbal_motor_voltage_1_t packet_in = {
        17235,17339,17443,151
    };
    mavlink_response_gimbal_motor_voltage_1_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.yaw_motor_voltage = packet_in.yaw_motor_voltage;
        packet1.pitch_motor_voltage = packet_in.pitch_motor_voltage;
        packet1.roll_motor_voltage = packet_in.roll_motor_voltage;
        packet1.sta = packet_in.sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_motor_voltage_1_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_gimbal_motor_voltage_1_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_motor_voltage_1_pack(system_id, component_id, &msg , packet1.yaw_motor_voltage , packet1.pitch_motor_voltage , packet1.roll_motor_voltage , packet1.sta );
    mavlink_msg_response_gimbal_motor_voltage_1_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_motor_voltage_1_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.yaw_motor_voltage , packet1.pitch_motor_voltage , packet1.roll_motor_voltage , packet1.sta );
    mavlink_msg_response_gimbal_motor_voltage_1_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_gimbal_motor_voltage_1_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_motor_voltage_1_send(MAVLINK_COMM_1 , packet1.yaw_motor_voltage , packet1.pitch_motor_voltage , packet1.roll_motor_voltage , packet1.sta );
    mavlink_msg_response_gimbal_motor_voltage_1_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_GIMBAL_MOTOR_VOLTAGE_1") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1) != NULL);
#endif
}

static void mavlink_test_response_gimbal_motor_voltage_2(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2 >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_gimbal_motor_voltage_2_t packet_in = {
        17235,17339,17443
    };
    mavlink_response_gimbal_motor_voltage_2_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.yaw_voltage = packet_in.yaw_voltage;
        packet1.pitch_voltage = packet_in.pitch_voltage;
        packet1.roll_voltage = packet_in.roll_voltage;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_motor_voltage_2_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_gimbal_motor_voltage_2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_motor_voltage_2_pack(system_id, component_id, &msg , packet1.yaw_voltage , packet1.pitch_voltage , packet1.roll_voltage );
    mavlink_msg_response_gimbal_motor_voltage_2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_motor_voltage_2_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.yaw_voltage , packet1.pitch_voltage , packet1.roll_voltage );
    mavlink_msg_response_gimbal_motor_voltage_2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_gimbal_motor_voltage_2_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_gimbal_motor_voltage_2_send(MAVLINK_COMM_1 , packet1.yaw_voltage , packet1.pitch_voltage , packet1.roll_voltage );
    mavlink_msg_response_gimbal_motor_voltage_2_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_GIMBAL_MOTOR_VOLTAGE_2") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2) != NULL);
#endif
}

static void mavlink_test_response_set_utc_time(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_utc_time_t packet_in = {
        5
    };
    mavlink_response_set_utc_time_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.ack = packet_in.ack;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_utc_time_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_utc_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_utc_time_pack(system_id, component_id, &msg , packet1.ack );
    mavlink_msg_response_set_utc_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_utc_time_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.ack );
    mavlink_msg_response_set_utc_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_utc_time_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_utc_time_send(MAVLINK_COMM_1 , packet1.ack );
    mavlink_msg_response_set_utc_time_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_UTC_TIME") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_UTC_TIME) != NULL);
#endif
}

static void mavlink_test_response_request_system_info(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_REQUEST_SYSTEM_INFO >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_request_system_info_t packet_in = {
        5
    };
    mavlink_response_request_system_info_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.laser_state = packet_in.laser_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_REQUEST_SYSTEM_INFO_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_REQUEST_SYSTEM_INFO_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_system_info_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_request_system_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_system_info_pack(system_id, component_id, &msg , packet1.laser_state );
    mavlink_msg_response_request_system_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_system_info_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.laser_state );
    mavlink_msg_response_request_system_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_request_system_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_request_system_info_send(MAVLINK_COMM_1 , packet1.laser_state );
    mavlink_msg_response_request_system_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_REQUEST_SYSTEM_INFO") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_REQUEST_SYSTEM_INFO) != NULL);
#endif
}

static void mavlink_test_response_set_laser_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_LASER_STATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_laser_state_t packet_in = {
        5
    };
    mavlink_response_set_laser_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.sta = packet_in.sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_LASER_STATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_LASER_STATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_laser_state_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_laser_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_laser_state_pack(system_id, component_id, &msg , packet1.sta );
    mavlink_msg_response_set_laser_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_laser_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sta );
    mavlink_msg_response_set_laser_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_laser_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_laser_state_send(MAVLINK_COMM_1 , packet1.sta );
    mavlink_msg_response_set_laser_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_LASER_STATE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_LASER_STATE) != NULL);
#endif
}

static void mavlink_test_response_thermal_output_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_THERMAL_OUTPUT_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_thermal_output_mode_t packet_in = {
        5
    };
    mavlink_response_thermal_output_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.mode = packet_in.mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_THERMAL_OUTPUT_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_THERMAL_OUTPUT_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_thermal_output_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_thermal_output_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_thermal_output_mode_pack(system_id, component_id, &msg , packet1.mode );
    mavlink_msg_response_thermal_output_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_thermal_output_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mode );
    mavlink_msg_response_thermal_output_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_thermal_output_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_thermal_output_mode_send(MAVLINK_COMM_1 , packet1.mode );
    mavlink_msg_response_thermal_output_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_THERMAL_OUTPUT_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_THERMAL_OUTPUT_MODE) != NULL);
#endif
}

static void mavlink_test_response_set_thermal_output_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_THERMAL_OUTPUT_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_thermal_output_mode_t packet_in = {
        5
    };
    mavlink_response_set_thermal_output_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.mode = packet_in.mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_THERMAL_OUTPUT_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_THERMAL_OUTPUT_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_thermal_output_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_thermal_output_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_thermal_output_mode_pack(system_id, component_id, &msg , packet1.mode );
    mavlink_msg_response_set_thermal_output_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_thermal_output_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mode );
    mavlink_msg_response_set_thermal_output_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_thermal_output_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_thermal_output_mode_send(MAVLINK_COMM_1 , packet1.mode );
    mavlink_msg_response_set_thermal_output_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_THERMAL_OUTPUT_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_THERMAL_OUTPUT_MODE) != NULL);
#endif
}

static void mavlink_test_response_ir_threshold_precision(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_IR_THRESHOLD_PRECISION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_ir_threshold_precision_t packet_in = {
        5
    };
    mavlink_response_ir_threshold_precision_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.precision = packet_in.precision;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_IR_THRESHOLD_PRECISION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_IR_THRESHOLD_PRECISION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_ir_threshold_precision_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_ir_threshold_precision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_ir_threshold_precision_pack(system_id, component_id, &msg , packet1.precision );
    mavlink_msg_response_ir_threshold_precision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_ir_threshold_precision_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.precision );
    mavlink_msg_response_ir_threshold_precision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_ir_threshold_precision_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_ir_threshold_precision_send(MAVLINK_COMM_1 , packet1.precision );
    mavlink_msg_response_ir_threshold_precision_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_IR_THRESHOLD_PRECISION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_IR_THRESHOLD_PRECISION) != NULL);
#endif
}

static void mavlink_test_response_set_ir_threshold_precision(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_IR_THRESHOLD_PRECISION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_ir_threshold_precision_t packet_in = {
        5
    };
    mavlink_response_set_ir_threshold_precision_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.precision = packet_in.precision;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_IR_THRESHOLD_PRECISION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_IR_THRESHOLD_PRECISION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_ir_threshold_precision_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_ir_threshold_precision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_ir_threshold_precision_pack(system_id, component_id, &msg , packet1.precision );
    mavlink_msg_response_set_ir_threshold_precision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_ir_threshold_precision_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.precision );
    mavlink_msg_response_set_ir_threshold_precision_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_ir_threshold_precision_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_ir_threshold_precision_send(MAVLINK_COMM_1 , packet1.precision );
    mavlink_msg_response_set_ir_threshold_precision_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_IR_THRESHOLD_PRECISION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_IR_THRESHOLD_PRECISION) != NULL);
#endif
}

static void mavlink_test_response_format_sd_card(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_format_sd_card_t packet_in = {
        5
    };
    mavlink_response_format_sd_card_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.format_sta = packet_in.format_sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_format_sd_card_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_format_sd_card_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_format_sd_card_pack(system_id, component_id, &msg , packet1.format_sta );
    mavlink_msg_response_format_sd_card_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_format_sd_card_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.format_sta );
    mavlink_msg_response_format_sd_card_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_format_sd_card_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_format_sd_card_send(MAVLINK_COMM_1 , packet1.format_sta );
    mavlink_msg_response_format_sd_card_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_FORMAT_SD_CARD") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_FORMAT_SD_CARD) != NULL);
#endif
}

static void mavlink_test_response_get_picture_name_type(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_GET_PICTURE_NAME_TYPE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_get_picture_name_type_t packet_in = {
        5,72
    };
    mavlink_response_get_picture_name_type_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.file_type = packet_in.file_type;
        packet1.file_name_type = packet_in.file_name_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_GET_PICTURE_NAME_TYPE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_GET_PICTURE_NAME_TYPE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_get_picture_name_type_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_get_picture_name_type_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_get_picture_name_type_pack(system_id, component_id, &msg , packet1.file_type , packet1.file_name_type );
    mavlink_msg_response_get_picture_name_type_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_get_picture_name_type_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.file_type , packet1.file_name_type );
    mavlink_msg_response_get_picture_name_type_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_get_picture_name_type_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_get_picture_name_type_send(MAVLINK_COMM_1 , packet1.file_type , packet1.file_name_type );
    mavlink_msg_response_get_picture_name_type_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_GET_PICTURE_NAME_TYPE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_GET_PICTURE_NAME_TYPE) != NULL);
#endif
}

static void mavlink_test_response_set_picture_name_type(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_PICTURE_NAME_TYPE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_picture_name_type_t packet_in = {
        5,72
    };
    mavlink_response_set_picture_name_type_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.file_type = packet_in.file_type;
        packet1.file_name_type = packet_in.file_name_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_PICTURE_NAME_TYPE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_PICTURE_NAME_TYPE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_picture_name_type_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_picture_name_type_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_picture_name_type_pack(system_id, component_id, &msg , packet1.file_type , packet1.file_name_type );
    mavlink_msg_response_set_picture_name_type_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_picture_name_type_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.file_type , packet1.file_name_type );
    mavlink_msg_response_set_picture_name_type_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_picture_name_type_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_picture_name_type_send(MAVLINK_COMM_1 , packet1.file_type , packet1.file_name_type );
    mavlink_msg_response_set_picture_name_type_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_PICTURE_NAME_TYPE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_PICTURE_NAME_TYPE) != NULL);
#endif
}

static void mavlink_test_response_hdmi_osd_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_HDMI_OSD_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_hdmi_osd_status_t packet_in = {
        5
    };
    mavlink_response_hdmi_osd_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.osd_sta = packet_in.osd_sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_HDMI_OSD_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_HDMI_OSD_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_hdmi_osd_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_hdmi_osd_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_hdmi_osd_status_pack(system_id, component_id, &msg , packet1.osd_sta );
    mavlink_msg_response_hdmi_osd_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_hdmi_osd_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.osd_sta );
    mavlink_msg_response_hdmi_osd_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_hdmi_osd_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_hdmi_osd_status_send(MAVLINK_COMM_1 , packet1.osd_sta );
    mavlink_msg_response_hdmi_osd_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_HDMI_OSD_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_HDMI_OSD_STATUS) != NULL);
#endif
}

static void mavlink_test_response_set_hdmi_osd_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_HDMI_OSD_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_hdmi_osd_status_t packet_in = {
        5
    };
    mavlink_response_set_hdmi_osd_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.osd_sta = packet_in.osd_sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_HDMI_OSD_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_HDMI_OSD_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_hdmi_osd_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_hdmi_osd_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_hdmi_osd_status_pack(system_id, component_id, &msg , packet1.osd_sta );
    mavlink_msg_response_set_hdmi_osd_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_hdmi_osd_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.osd_sta );
    mavlink_msg_response_set_hdmi_osd_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_hdmi_osd_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_hdmi_osd_status_send(MAVLINK_COMM_1 , packet1.osd_sta );
    mavlink_msg_response_set_hdmi_osd_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_HDMI_OSD_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_HDMI_OSD_STATUS) != NULL);
#endif
}

static void mavlink_test_response_ai_mode_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_AI_MODE_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_ai_mode_status_t packet_in = {
        5
    };
    mavlink_response_ai_mode_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.sta = packet_in.sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_AI_MODE_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_AI_MODE_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_ai_mode_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_ai_mode_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_ai_mode_status_pack(system_id, component_id, &msg , packet1.sta );
    mavlink_msg_response_ai_mode_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_ai_mode_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sta );
    mavlink_msg_response_ai_mode_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_ai_mode_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_ai_mode_status_send(MAVLINK_COMM_1 , packet1.sta );
    mavlink_msg_response_ai_mode_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_AI_MODE_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_AI_MODE_STATUS) != NULL);
#endif
}

static void mavlink_test_response_ai_coordinate_stream_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_AI_COORDINATE_STREAM_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_ai_coordinate_stream_status_t packet_in = {
        5
    };
    mavlink_response_ai_coordinate_stream_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.sta = packet_in.sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_AI_COORDINATE_STREAM_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_AI_COORDINATE_STREAM_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_ai_coordinate_stream_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_ai_coordinate_stream_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_ai_coordinate_stream_status_pack(system_id, component_id, &msg , packet1.sta );
    mavlink_msg_response_ai_coordinate_stream_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_ai_coordinate_stream_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sta );
    mavlink_msg_response_ai_coordinate_stream_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_ai_coordinate_stream_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_ai_coordinate_stream_status_send(MAVLINK_COMM_1 , packet1.sta );
    mavlink_msg_response_ai_coordinate_stream_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_AI_COORDINATE_STREAM_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_AI_COORDINATE_STREAM_STATUS) != NULL);
#endif
}

static void mavlink_test_response_update_thermal_shutter(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_UPDATE_THERMAL_SHUTTER >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_update_thermal_shutter_t packet_in = {
        5
    };
    mavlink_response_update_thermal_shutter_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.ack = packet_in.ack;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_UPDATE_THERMAL_SHUTTER_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_UPDATE_THERMAL_SHUTTER_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_update_thermal_shutter_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_update_thermal_shutter_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_update_thermal_shutter_pack(system_id, component_id, &msg , packet1.ack );
    mavlink_msg_response_update_thermal_shutter_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_update_thermal_shutter_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.ack );
    mavlink_msg_response_update_thermal_shutter_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_update_thermal_shutter_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_update_thermal_shutter_send(MAVLINK_COMM_1 , packet1.ack );
    mavlink_msg_response_update_thermal_shutter_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_UPDATE_THERMAL_SHUTTER") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_UPDATE_THERMAL_SHUTTER) != NULL);
#endif
}

static void mavlink_test_response_set_ai_coordinate_stream_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_AI_COORDINATE_STREAM_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_ai_coordinate_stream_status_t packet_in = {
        5
    };
    mavlink_response_set_ai_coordinate_stream_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.sta = packet_in.sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_AI_COORDINATE_STREAM_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_ai_coordinate_stream_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_ai_coordinate_stream_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_ai_coordinate_stream_status_pack(system_id, component_id, &msg , packet1.sta );
    mavlink_msg_response_set_ai_coordinate_stream_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_ai_coordinate_stream_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sta );
    mavlink_msg_response_set_ai_coordinate_stream_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_ai_coordinate_stream_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_ai_coordinate_stream_status_send(MAVLINK_COMM_1 , packet1.sta );
    mavlink_msg_response_set_ai_coordinate_stream_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_AI_COORDINATE_STREAM_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_AI_COORDINATE_STREAM_STATUS) != NULL);
#endif
}

static void mavlink_test_ai_coordinate_stream(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AI_COORDINATE_STREAM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ai_coordinate_stream_t packet_in = {
        17235,17339,17443,17547,29,96
    };
    mavlink_ai_coordinate_stream_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pos_x = packet_in.pos_x;
        packet1.pos_y = packet_in.pos_y;
        packet1.pos_width = packet_in.pos_width;
        packet1.pos_height = packet_in.pos_height;
        packet1.target_id = packet_in.target_id;
        packet1.track_sta = packet_in.track_sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AI_COORDINATE_STREAM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AI_COORDINATE_STREAM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_coordinate_stream_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ai_coordinate_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_coordinate_stream_pack(system_id, component_id, &msg , packet1.pos_x , packet1.pos_y , packet1.pos_width , packet1.pos_height , packet1.target_id , packet1.track_sta );
    mavlink_msg_ai_coordinate_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_coordinate_stream_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.pos_x , packet1.pos_y , packet1.pos_width , packet1.pos_height , packet1.target_id , packet1.track_sta );
    mavlink_msg_ai_coordinate_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ai_coordinate_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_coordinate_stream_send(MAVLINK_COMM_1 , packet1.pos_x , packet1.pos_y , packet1.pos_width , packet1.pos_height , packet1.target_id , packet1.track_sta );
    mavlink_msg_ai_coordinate_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("AI_COORDINATE_STREAM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_AI_COORDINATE_STREAM) != NULL);
#endif
}

static void mavlink_test_response_weak_control_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_WEAK_CONTROL_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_weak_control_mode_t packet_in = {
        5
    };
    mavlink_response_weak_control_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.weak_mode_state = packet_in.weak_mode_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_WEAK_CONTROL_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_WEAK_CONTROL_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_weak_control_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_weak_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_weak_control_mode_pack(system_id, component_id, &msg , packet1.weak_mode_state );
    mavlink_msg_response_weak_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_weak_control_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.weak_mode_state );
    mavlink_msg_response_weak_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_weak_control_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_weak_control_mode_send(MAVLINK_COMM_1 , packet1.weak_mode_state );
    mavlink_msg_response_weak_control_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_WEAK_CONTROL_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_WEAK_CONTROL_MODE) != NULL);
#endif
}

static void mavlink_test_response_set_weak_control_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_weak_control_mode_t packet_in = {
        5,72
    };
    mavlink_response_set_weak_control_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.sta = packet_in.sta;
        packet1.weak_mode_state = packet_in.weak_mode_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_weak_control_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_weak_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_weak_control_mode_pack(system_id, component_id, &msg , packet1.sta , packet1.weak_mode_state );
    mavlink_msg_response_set_weak_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_weak_control_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sta , packet1.weak_mode_state );
    mavlink_msg_response_set_weak_control_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_weak_control_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_weak_control_mode_send(MAVLINK_COMM_1 , packet1.sta , packet1.weak_mode_state );
    mavlink_msg_response_set_weak_control_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_WEAK_CONTROL_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_WEAK_CONTROL_MODE) != NULL);
#endif
}

static void mavlink_test_response_soft_reboot(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SOFT_REBOOT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_soft_reboot_t packet_in = {
        5,72
    };
    mavlink_response_soft_reboot_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.camera_reboot_sta = packet_in.camera_reboot_sta;
        packet1.gimbal_reset_sta = packet_in.gimbal_reset_sta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SOFT_REBOOT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SOFT_REBOOT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_soft_reboot_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_soft_reboot_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_soft_reboot_pack(system_id, component_id, &msg , packet1.camera_reboot_sta , packet1.gimbal_reset_sta );
    mavlink_msg_response_soft_reboot_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_soft_reboot_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.camera_reboot_sta , packet1.gimbal_reset_sta );
    mavlink_msg_response_soft_reboot_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_soft_reboot_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_soft_reboot_send(MAVLINK_COMM_1 , packet1.camera_reboot_sta , packet1.gimbal_reset_sta );
    mavlink_msg_response_soft_reboot_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SOFT_REBOOT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SOFT_REBOOT) != NULL);
#endif
}

static void mavlink_test_response_camera_ip(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_CAMERA_IP >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_camera_ip_t packet_in = {
        963497464,963497672,963497880
    };
    mavlink_response_camera_ip_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.ip = packet_in.ip;
        packet1.mask = packet_in.mask;
        packet1.gateway = packet_in.gateway;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_CAMERA_IP_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_camera_ip_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_camera_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_camera_ip_pack(system_id, component_id, &msg , packet1.ip , packet1.mask , packet1.gateway );
    mavlink_msg_response_camera_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_camera_ip_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.ip , packet1.mask , packet1.gateway );
    mavlink_msg_response_camera_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_camera_ip_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_camera_ip_send(MAVLINK_COMM_1 , packet1.ip , packet1.mask , packet1.gateway );
    mavlink_msg_response_camera_ip_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_CAMERA_IP") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_CAMERA_IP) != NULL);
#endif
}

static void mavlink_test_response_set_camera_ip(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_response_set_camera_ip_t packet_in = {
        5
    };
    mavlink_response_set_camera_ip_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.ack = packet_in.ack;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_camera_ip_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_response_set_camera_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_camera_ip_pack(system_id, component_id, &msg , packet1.ack );
    mavlink_msg_response_set_camera_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_camera_ip_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.ack );
    mavlink_msg_response_set_camera_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_response_set_camera_ip_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_response_set_camera_ip_send(MAVLINK_COMM_1 , packet1.ack );
    mavlink_msg_response_set_camera_ip_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESPONSE_SET_CAMERA_IP") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESPONSE_SET_CAMERA_IP) != NULL);
#endif
}

static void mavlink_test_gimbal(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_request_firmware_version(system_id, component_id, last_msg);
    mavlink_test_request_gimbal_hardware_id(system_id, component_id, last_msg);
    mavlink_test_auto_focus(system_id, component_id, last_msg);
    mavlink_test_manual_zoom_with_autofocus(system_id, component_id, last_msg);
    mavlink_test_manual_focus(system_id, component_id, last_msg);
    mavlink_test_gimbal_rotation_control(system_id, component_id, last_msg);
    mavlink_test_one_key_centering(system_id, component_id, last_msg);
    mavlink_test_request_camera_system_information(system_id, component_id, last_msg);
    mavlink_test_function_feedback_response(system_id, component_id, last_msg);
    mavlink_test_capture_photo_record_video(system_id, component_id, last_msg);
    mavlink_test_request_gimbal_attitude_data(system_id, component_id, last_msg);
    mavlink_test_set_gimbal_attitude_angles(system_id, component_id, last_msg);
    mavlink_test_absolute_zoom_auto_focus(system_id, component_id, last_msg);
    mavlink_test_request_video_stitching_mode(system_id, component_id, last_msg);
    mavlink_test_set_video_stitching_mode(system_id, component_id, last_msg);
    mavlink_test_get_temperature_at_selected_point(system_id, component_id, last_msg);
    mavlink_test_local_temperature_measurement(system_id, component_id, last_msg);
    mavlink_test_global_temperature_measurement(system_id, component_id, last_msg);
    mavlink_test_request_laser_distance_measurement(system_id, component_id, last_msg);
    mavlink_test_request_current_supported_zoom_range(system_id, component_id, last_msg);
    mavlink_test_request_laser_distance_target_longitude_latitude(system_id, component_id, last_msg);
    mavlink_test_request_current_zoom_magnification(system_id, component_id, last_msg);
    mavlink_test_request_current_gimbal_mode(system_id, component_id, last_msg);
    mavlink_test_request_current_thermal_image_pseudocolor(system_id, component_id, last_msg);
    mavlink_test_set_current_thermal_image_pseudocolor(system_id, component_id, last_msg);
    mavlink_test_request_camera_encoding_parameters(system_id, component_id, last_msg);
    mavlink_test_set_camera_encoding_parameters(system_id, component_id, last_msg);
    mavlink_test_send_aircraft_attitude_data_to_gimbal(system_id, component_id, last_msg);
    mavlink_test_request_flight_controller_to_send_data_stream_to_gimbal(system_id, component_id, last_msg);
    mavlink_test_request_gimbal_to_send_data_stream(system_id, component_id, last_msg);
    mavlink_test_request_gimbal_to_send_laser_range_data_stream(system_id, component_id, last_msg);
    mavlink_test_request_gimbal_magnetic_encoder_angle(system_id, component_id, last_msg);
    mavlink_test_request_gimbal_control_mode(system_id, component_id, last_msg);
    mavlink_test_request_weak_control_thresholds(system_id, component_id, last_msg);
    mavlink_test_request_gimbal_motor_voltage_data(system_id, component_id, last_msg);
    mavlink_test_set_utc_time(system_id, component_id, last_msg);
    mavlink_test_request_system_info(system_id, component_id, last_msg);
    mavlink_test_set_laser_state(system_id, component_id, last_msg);
    mavlink_test_request_thermal_output_mode(system_id, component_id, last_msg);
    mavlink_test_set_thermal_output_mode(system_id, component_id, last_msg);
    mavlink_test_send_raw_gps_to_gimbal(system_id, component_id, last_msg);
    mavlink_test_request_ir_threshold_precision(system_id, component_id, last_msg);
    mavlink_test_set_ir_threshold_precision(system_id, component_id, last_msg);
    mavlink_test_format_sd_card(system_id, component_id, last_msg);
    mavlink_test_get_picture_name_type(system_id, component_id, last_msg);
    mavlink_test_set_picture_name_type(system_id, component_id, last_msg);
    mavlink_test_get_hdmi_osd_status(system_id, component_id, last_msg);
    mavlink_test_set_hdmi_osd_status(system_id, component_id, last_msg);
    mavlink_test_get_ai_mode_status(system_id, component_id, last_msg);
    mavlink_test_get_ai_coordinate_stream_status(system_id, component_id, last_msg);
    mavlink_test_update_thermal_shutter(system_id, component_id, last_msg);
    mavlink_test_set_ai_coordinate_stream_status(system_id, component_id, last_msg);
    mavlink_test_request_weak_control_mode(system_id, component_id, last_msg);
    mavlink_test_set_weak_control_mode(system_id, component_id, last_msg);
    mavlink_test_gimbal_camera_soft_reboot(system_id, component_id, last_msg);
    mavlink_test_get_gimbal_camera_ip(system_id, component_id, last_msg);
    mavlink_test_set_gimbal_camera_ip(system_id, component_id, last_msg);
    mavlink_test_response_request_firmware_version(system_id, component_id, last_msg);
    mavlink_test_response_request_gimbal_hardware_id(system_id, component_id, last_msg);
    mavlink_test_response_auto_focus(system_id, component_id, last_msg);
    mavlink_test_response_manual_zoom_with_autofocus(system_id, component_id, last_msg);
    mavlink_test_response_manual_focus(system_id, component_id, last_msg);
    mavlink_test_response_gimbal_rotation_control(system_id, component_id, last_msg);
    mavlink_test_response_one_key_centering(system_id, component_id, last_msg);
    mavlink_test_response_request_camera_system_information(system_id, component_id, last_msg);
    mavlink_test_response_function_feedback_response(system_id, component_id, last_msg);
    mavlink_test_response_request_gimbal_attitude_data(system_id, component_id, last_msg);
    mavlink_test_response_set_gimbal_attitude_angles(system_id, component_id, last_msg);
    mavlink_test_response_absolute_zoom_auto_focus(system_id, component_id, last_msg);
    mavlink_test_response_request_video_stitching_mode(system_id, component_id, last_msg);
    mavlink_test_response_set_video_stitching_mode(system_id, component_id, last_msg);
    mavlink_test_response_get_temperature_at_selected_point(system_id, component_id, last_msg);
    mavlink_test_response_local_temperature_measurement(system_id, component_id, last_msg);
    mavlink_test_response_global_temperature_measurement(system_id, component_id, last_msg);
    mavlink_test_response_request_laser_distance_measurement(system_id, component_id, last_msg);
    mavlink_test_response_request_current_supported_zoom_range(system_id, component_id, last_msg);
    mavlink_test_response_request_laser_distance_target_longitude_latitude(system_id, component_id, last_msg);
    mavlink_test_response_request_current_zoom_magnification(system_id, component_id, last_msg);
    mavlink_test_response_request_current_gimbal_mode(system_id, component_id, last_msg);
    mavlink_test_response_request_current_thermal_image_pseudocolor(system_id, component_id, last_msg);
    mavlink_test_response_set_current_thermal_image_pseudocolor(system_id, component_id, last_msg);
    mavlink_test_response_request_camera_encoding_parameters(system_id, component_id, last_msg);
    mavlink_test_response_set_camera_encoding_parameters(system_id, component_id, last_msg);
    mavlink_test_response_request_flight_controller_to_send_data_stream_to_gimbal(system_id, component_id, last_msg);
    mavlink_test_response_request_gimbal_to_send_data_stream(system_id, component_id, last_msg);
    mavlink_test_response_request_gimbal_to_send_laser_range_data_stream(system_id, component_id, last_msg);
    mavlink_test_response_encoder_angle(system_id, component_id, last_msg);
    mavlink_test_response_gimbal_control_mode(system_id, component_id, last_msg);
    mavlink_test_response_request_weak_control_thresholds(system_id, component_id, last_msg);
    mavlink_test_response_gimbal_motor_voltage_1(system_id, component_id, last_msg);
    mavlink_test_response_gimbal_motor_voltage_2(system_id, component_id, last_msg);
    mavlink_test_response_set_utc_time(system_id, component_id, last_msg);
    mavlink_test_response_request_system_info(system_id, component_id, last_msg);
    mavlink_test_response_set_laser_state(system_id, component_id, last_msg);
    mavlink_test_response_thermal_output_mode(system_id, component_id, last_msg);
    mavlink_test_response_set_thermal_output_mode(system_id, component_id, last_msg);
    mavlink_test_response_ir_threshold_precision(system_id, component_id, last_msg);
    mavlink_test_response_set_ir_threshold_precision(system_id, component_id, last_msg);
    mavlink_test_response_format_sd_card(system_id, component_id, last_msg);
    mavlink_test_response_get_picture_name_type(system_id, component_id, last_msg);
    mavlink_test_response_set_picture_name_type(system_id, component_id, last_msg);
    mavlink_test_response_hdmi_osd_status(system_id, component_id, last_msg);
    mavlink_test_response_set_hdmi_osd_status(system_id, component_id, last_msg);
    mavlink_test_response_ai_mode_status(system_id, component_id, last_msg);
    mavlink_test_response_ai_coordinate_stream_status(system_id, component_id, last_msg);
    mavlink_test_response_update_thermal_shutter(system_id, component_id, last_msg);
    mavlink_test_response_set_ai_coordinate_stream_status(system_id, component_id, last_msg);
    mavlink_test_ai_coordinate_stream(system_id, component_id, last_msg);
    mavlink_test_response_weak_control_mode(system_id, component_id, last_msg);
    mavlink_test_response_set_weak_control_mode(system_id, component_id, last_msg);
    mavlink_test_response_soft_reboot(system_id, component_id, last_msg);
    mavlink_test_response_camera_ip(system_id, component_id, last_msg);
    mavlink_test_response_set_camera_ip(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // GIMBAL_TESTSUITE_H
