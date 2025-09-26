/** @file
 *  @brief MAVLink comm protocol generated from gimbal.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_GIMBAL_H
#define MAVLINK_GIMBAL_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_GIMBAL.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_GIMBAL_XML_HASH 8769813442876628886

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{80001, 54, 1, 1, 0, 0, 0}, {80002, 253, 1, 1, 0, 0, 0}, {80004, 135, 5, 5, 0, 0, 0}, {80005, 235, 1, 1, 0, 0, 0}, {80006, 91, 1, 1, 0, 0, 0}, {80007, 7, 2, 2, 0, 0, 0}, {80008, 78, 1, 1, 0, 0, 0}, {80010, 184, 1, 1, 0, 0, 0}, {80011, 85, 1, 1, 0, 0, 0}, {80012, 25, 1, 1, 0, 0, 0}, {80013, 165, 1, 1, 0, 0, 0}, {80014, 201, 4, 4, 0, 0, 0}, {80015, 86, 2, 2, 0, 0, 0}, {80016, 123, 1, 1, 0, 0, 0}, {80017, 51, 1, 1, 0, 0, 0}, {80018, 13, 5, 5, 0, 0, 0}, {80019, 137, 9, 9, 0, 0, 0}, {80020, 92, 1, 1, 0, 0, 0}, {80021, 113, 1, 1, 0, 0, 0}, {80022, 47, 1, 1, 0, 0, 0}, {80023, 74, 1, 1, 0, 0, 0}, {80024, 177, 1, 1, 0, 0, 0}, {80025, 234, 1, 1, 0, 0, 0}, {80026, 165, 1, 1, 0, 0, 0}, {80027, 33, 1, 1, 0, 0, 0}, {80028, 10, 1, 1, 0, 0, 0}, {80029, 44, 9, 9, 0, 0, 0}, {80030, 71, 28, 28, 0, 0, 0}, {80032, 149, 2, 2, 0, 0, 0}, {80033, 62, 2, 2, 0, 0, 0}, {80034, 8, 6, 6, 0, 0, 0}, {80035, 221, 1, 1, 0, 0, 0}, {80036, 32, 1, 1, 0, 0, 0}, {80037, 192, 6, 6, 0, 0, 0}, {80048, 40, 8, 8, 0, 0, 0}, {80049, 31, 1, 1, 0, 0, 0}, {80050, 63, 1, 1, 0, 0, 0}, {80051, 182, 1, 1, 0, 0, 0}, {80052, 107, 1, 1, 0, 0, 0}, {80062, 55, 32, 32, 0, 0, 0}, {80070, 32, 1, 1, 0, 0, 0}, {80071, 207, 1, 1, 0, 0, 0}, {80072, 246, 1, 1, 0, 0, 0}, {80073, 154, 1, 1, 0, 0, 0}, {80074, 130, 2, 2, 0, 0, 0}, {80075, 41, 1, 1, 0, 0, 0}, {80076, 180, 1, 1, 0, 0, 0}, {80077, 39, 1, 1, 0, 0, 0}, {80078, 105, 1, 1, 0, 0, 0}, {80079, 61, 1, 1, 0, 0, 0}, {80081, 4, 1, 1, 0, 0, 0}, {80099, 60, 1, 1, 0, 0, 0}, {90001, 7, 12, 12, 0, 0, 0}, {90002, 49, 4, 4, 0, 0, 0}, {90004, 244, 1, 1, 0, 0, 0}, {90005, 119, 2, 2, 0, 0, 0}, {90006, 210, 1, 1, 0, 0, 0}, {90007, 231, 1, 1, 0, 0, 0}, {90008, 145, 1, 1, 0, 0, 0}, {90010, 104, 8, 8, 0, 0, 0}, {90011, 113, 1, 1, 0, 0, 0}, {90013, 192, 12, 12, 0, 0, 0}, {90014, 169, 6, 6, 0, 0, 0}, {90015, 206, 1, 1, 0, 0, 0}, {90016, 26, 1, 1, 0, 0, 0}, {90017, 43, 1, 1, 0, 0, 0}, {90018, 61, 6, 6, 0, 0, 0}, {90019, 191, 20, 20, 0, 0, 0}, {90020, 20, 12, 12, 0, 0, 0}, {90021, 134, 2, 2, 0, 0, 0}, {90022, 22, 2, 2, 0, 0, 0}, {90023, 133, 8, 8, 0, 0, 0}, {90024, 39, 2, 2, 0, 0, 0}, {90025, 166, 1, 1, 0, 0, 0}, {90026, 109, 1, 1, 0, 0, 0}, {90027, 178, 1, 1, 0, 0, 0}, {90028, 77, 9, 9, 0, 0, 0}, {90029, 10, 2, 2, 0, 0, 0}, {90032, 149, 1, 1, 0, 0, 0}, {90033, 61, 1, 1, 0, 0, 0}, {90038, 227, 6, 6, 0, 0, 0}, {90039, 138, 1, 1, 0, 0, 0}, {90040, 66, 6, 6, 0, 0, 0}, {90041, 218, 7, 7, 0, 0, 0}, {90042, 223, 6, 6, 0, 0, 0}, {90048, 184, 1, 1, 0, 0, 0}, {90049, 65, 1, 1, 0, 0, 0}, {90050, 27, 1, 1, 0, 0, 0}, {90051, 206, 1, 1, 0, 0, 0}, {90052, 236, 1, 1, 0, 0, 0}, {90070, 60, 1, 1, 0, 0, 0}, {90071, 235, 1, 1, 0, 0, 0}, {90072, 89, 1, 1, 0, 0, 0}, {90073, 192, 2, 2, 0, 0, 0}, {90074, 135, 2, 2, 0, 0, 0}, {90075, 207, 1, 1, 0, 0, 0}, {90076, 126, 1, 1, 0, 0, 0}, {90077, 151, 1, 1, 0, 0, 0}, {90078, 25, 1, 1, 0, 0, 0}, {90079, 139, 1, 1, 0, 0, 0}, {90080, 127, 10, 10, 0, 0, 0}, {90081, 199, 1, 1, 0, 0, 0}, {90099, 169, 1, 1, 0, 0, 0}, {800112, 159, 1, 1, 0, 0, 0}, {800113, 183, 1, 1, 0, 0, 0}, {800128, 14, 2, 2, 0, 0, 0}, {800129, 254, 1, 1, 0, 0, 0}, {800130, 194, 12, 12, 0, 0, 0}, {900112, 190, 1, 1, 0, 0, 0}, {900113, 98, 2, 2, 0, 0, 0}, {900128, 228, 2, 2, 0, 0, 0}, {900129, 2, 12, 12, 0, 0, 0}, {900130, 198, 1, 1, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_GIMBAL

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_request_firmware_version.h"
#include "./mavlink_msg_request_gimbal_hardware_id.h"
#include "./mavlink_msg_auto_focus.h"
#include "./mavlink_msg_manual_zoom_with_autofocus.h"
#include "./mavlink_msg_manual_focus.h"
#include "./mavlink_msg_gimbal_rotation_control.h"
#include "./mavlink_msg_one_key_centering.h"
#include "./mavlink_msg_request_camera_system_information.h"
#include "./mavlink_msg_function_feedback_response.h"
#include "./mavlink_msg_capture_photo_record_video.h"
#include "./mavlink_msg_request_gimbal_attitude_data.h"
#include "./mavlink_msg_set_gimbal_attitude_angles.h"
#include "./mavlink_msg_absolute_zoom_auto_focus.h"
#include "./mavlink_msg_request_video_stitching_mode.h"
#include "./mavlink_msg_set_video_stitching_mode.h"
#include "./mavlink_msg_get_temperature_at_selected_point.h"
#include "./mavlink_msg_local_temperature_measurement.h"
#include "./mavlink_msg_global_temperature_measurement.h"
#include "./mavlink_msg_request_laser_distance_measurement.h"
#include "./mavlink_msg_request_current_supported_zoom_range.h"
#include "./mavlink_msg_request_laser_distance_target_longitude_latitude.h"
#include "./mavlink_msg_request_current_zoom_magnification.h"
#include "./mavlink_msg_request_current_gimbal_mode.h"
#include "./mavlink_msg_request_current_thermal_image_pseudocolor.h"
#include "./mavlink_msg_set_current_thermal_image_pseudocolor.h"
#include "./mavlink_msg_request_camera_encoding_parameters.h"
#include "./mavlink_msg_set_camera_encoding_parameters.h"
#include "./mavlink_msg_send_aircraft_attitude_data_to_gimbal.h"
#include "./mavlink_msg_request_flight_controller_to_send_data_stream_to_gimbal.h"
#include "./mavlink_msg_request_gimbal_to_send_data_stream.h"
#include "./mavlink_msg_request_gimbal_to_send_laser_range_data_stream.h"
#include "./mavlink_msg_request_gimbal_magnetic_encoder_angle.h"
#include "./mavlink_msg_request_gimbal_control_mode.h"
#include "./mavlink_msg_request_weak_control_thresholds.h"
#include "./mavlink_msg_request_gimbal_motor_voltage_data.h"
#include "./mavlink_msg_set_utc_time.h"
#include "./mavlink_msg_request_system_info.h"
#include "./mavlink_msg_set_laser_state.h"
#include "./mavlink_msg_request_thermal_output_mode.h"
#include "./mavlink_msg_set_thermal_output_mode.h"
#include "./mavlink_msg_send_raw_gps_to_gimbal.h"
#include "./mavlink_msg_request_ir_threshold_precision.h"
#include "./mavlink_msg_set_ir_threshold_precision.h"
#include "./mavlink_msg_format_sd_card.h"
#include "./mavlink_msg_get_picture_name_type.h"
#include "./mavlink_msg_set_picture_name_type.h"
#include "./mavlink_msg_get_hdmi_osd_status.h"
#include "./mavlink_msg_set_hdmi_osd_status.h"
#include "./mavlink_msg_get_ai_mode_status.h"
#include "./mavlink_msg_get_ai_coordinate_stream_status.h"
#include "./mavlink_msg_update_thermal_shutter.h"
#include "./mavlink_msg_set_ai_coordinate_stream_status.h"
#include "./mavlink_msg_request_weak_control_mode.h"
#include "./mavlink_msg_set_weak_control_mode.h"
#include "./mavlink_msg_gimbal_camera_soft_reboot.h"
#include "./mavlink_msg_get_gimbal_camera_ip.h"
#include "./mavlink_msg_set_gimbal_camera_ip.h"
#include "./mavlink_msg_response_request_firmware_version.h"
#include "./mavlink_msg_response_request_gimbal_hardware_id.h"
#include "./mavlink_msg_response_auto_focus.h"
#include "./mavlink_msg_response_manual_zoom_with_autofocus.h"
#include "./mavlink_msg_response_manual_focus.h"
#include "./mavlink_msg_response_gimbal_rotation_control.h"
#include "./mavlink_msg_response_one_key_centering.h"
#include "./mavlink_msg_response_request_camera_system_information.h"
#include "./mavlink_msg_response_function_feedback_response.h"
#include "./mavlink_msg_response_request_gimbal_attitude_data.h"
#include "./mavlink_msg_response_set_gimbal_attitude_angles.h"
#include "./mavlink_msg_response_absolute_zoom_auto_focus.h"
#include "./mavlink_msg_response_request_video_stitching_mode.h"
#include "./mavlink_msg_response_set_video_stitching_mode.h"
#include "./mavlink_msg_response_get_temperature_at_selected_point.h"
#include "./mavlink_msg_response_local_temperature_measurement.h"
#include "./mavlink_msg_response_global_temperature_measurement.h"
#include "./mavlink_msg_response_request_laser_distance_measurement.h"
#include "./mavlink_msg_response_request_current_supported_zoom_range.h"
#include "./mavlink_msg_response_request_laser_distance_target_longitude_latitude.h"
#include "./mavlink_msg_response_request_current_zoom_magnification.h"
#include "./mavlink_msg_response_request_current_gimbal_mode.h"
#include "./mavlink_msg_response_request_current_thermal_image_pseudocolor.h"
#include "./mavlink_msg_response_set_current_thermal_image_pseudocolor.h"
#include "./mavlink_msg_response_request_camera_encoding_parameters.h"
#include "./mavlink_msg_response_set_camera_encoding_parameters.h"
#include "./mavlink_msg_response_request_flight_controller_to_send_data_stream_to_gimbal.h"
#include "./mavlink_msg_response_request_gimbal_to_send_data_stream.h"
#include "./mavlink_msg_response_request_gimbal_to_send_laser_range_data_stream.h"
#include "./mavlink_msg_response_encoder_angle.h"
#include "./mavlink_msg_response_gimbal_control_mode.h"
#include "./mavlink_msg_response_request_weak_control_thresholds.h"
#include "./mavlink_msg_response_gimbal_motor_voltage_1.h"
#include "./mavlink_msg_response_gimbal_motor_voltage_2.h"
#include "./mavlink_msg_response_set_utc_time.h"
#include "./mavlink_msg_response_request_system_info.h"
#include "./mavlink_msg_response_set_laser_state.h"
#include "./mavlink_msg_response_thermal_output_mode.h"
#include "./mavlink_msg_response_set_thermal_output_mode.h"
#include "./mavlink_msg_response_ir_threshold_precision.h"
#include "./mavlink_msg_response_set_ir_threshold_precision.h"
#include "./mavlink_msg_response_format_sd_card.h"
#include "./mavlink_msg_response_get_picture_name_type.h"
#include "./mavlink_msg_response_set_picture_name_type.h"
#include "./mavlink_msg_response_hdmi_osd_status.h"
#include "./mavlink_msg_response_set_hdmi_osd_status.h"
#include "./mavlink_msg_response_ai_mode_status.h"
#include "./mavlink_msg_response_ai_coordinate_stream_status.h"
#include "./mavlink_msg_response_update_thermal_shutter.h"
#include "./mavlink_msg_response_set_ai_coordinate_stream_status.h"
#include "./mavlink_msg_ai_coordinate_stream.h"
#include "./mavlink_msg_response_weak_control_mode.h"
#include "./mavlink_msg_response_set_weak_control_mode.h"
#include "./mavlink_msg_response_soft_reboot.h"
#include "./mavlink_msg_response_camera_ip.h"
#include "./mavlink_msg_response_set_camera_ip.h"

// base include



#if MAVLINK_GIMBAL_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_REQUEST_FIRMWARE_VERSION, MAVLINK_MESSAGE_INFO_REQUEST_GIMBAL_HARDWARE_ID, MAVLINK_MESSAGE_INFO_AUTO_FOCUS, MAVLINK_MESSAGE_INFO_MANUAL_ZOOM_WITH_AUTOFOCUS, MAVLINK_MESSAGE_INFO_MANUAL_FOCUS, MAVLINK_MESSAGE_INFO_GIMBAL_ROTATION_CONTROL, MAVLINK_MESSAGE_INFO_ONE_KEY_CENTERING, MAVLINK_MESSAGE_INFO_REQUEST_CAMERA_SYSTEM_INFORMATION, MAVLINK_MESSAGE_INFO_FUNCTION_FEEDBACK_RESPONSE, MAVLINK_MESSAGE_INFO_CAPTURE_PHOTO_RECORD_VIDEO, MAVLINK_MESSAGE_INFO_REQUEST_GIMBAL_ATTITUDE_DATA, MAVLINK_MESSAGE_INFO_SET_GIMBAL_ATTITUDE_ANGLES, MAVLINK_MESSAGE_INFO_ABSOLUTE_ZOOM_AUTO_FOCUS, MAVLINK_MESSAGE_INFO_REQUEST_VIDEO_STITCHING_MODE, MAVLINK_MESSAGE_INFO_SET_VIDEO_STITCHING_MODE, MAVLINK_MESSAGE_INFO_GET_TEMPERATURE_AT_SELECTED_POINT, MAVLINK_MESSAGE_INFO_LOCAL_TEMPERATURE_MEASUREMENT, MAVLINK_MESSAGE_INFO_GLOBAL_TEMPERATURE_MEASUREMENT, MAVLINK_MESSAGE_INFO_REQUEST_LASER_DISTANCE_MEASUREMENT, MAVLINK_MESSAGE_INFO_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE, MAVLINK_MESSAGE_INFO_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE, MAVLINK_MESSAGE_INFO_REQUEST_CURRENT_ZOOM_MAGNIFICATION, MAVLINK_MESSAGE_INFO_REQUEST_CURRENT_GIMBAL_MODE, MAVLINK_MESSAGE_INFO_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR, MAVLINK_MESSAGE_INFO_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR, MAVLINK_MESSAGE_INFO_REQUEST_CAMERA_ENCODING_PARAMETERS, MAVLINK_MESSAGE_INFO_SET_CAMERA_ENCODING_PARAMETERS, MAVLINK_MESSAGE_INFO_SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL, MAVLINK_MESSAGE_INFO_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL, MAVLINK_MESSAGE_INFO_REQUEST_GIMBAL_TO_SEND_DATA_STREAM, MAVLINK_MESSAGE_INFO_REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE, MAVLINK_MESSAGE_INFO_REQUEST_GIMBAL_CONTROL_MODE, MAVLINK_MESSAGE_INFO_REQUEST_WEAK_CONTROL_THRESHOLDS, MAVLINK_MESSAGE_INFO_REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA, MAVLINK_MESSAGE_INFO_SET_UTC_TIME, MAVLINK_MESSAGE_INFO_REQUEST_SYSTEM_INFO, MAVLINK_MESSAGE_INFO_SET_LASER_STATE, MAVLINK_MESSAGE_INFO_REQUEST_THERMAL_OUTPUT_MODE, MAVLINK_MESSAGE_INFO_SET_THERMAL_OUTPUT_MODE, MAVLINK_MESSAGE_INFO_SEND_RAW_GPS_TO_GIMBAL, MAVLINK_MESSAGE_INFO_REQUEST_IR_THRESHOLD_PRECISION, MAVLINK_MESSAGE_INFO_SET_IR_THRESHOLD_PRECISION, MAVLINK_MESSAGE_INFO_FORMAT_SD_CARD, MAVLINK_MESSAGE_INFO_GET_PICTURE_NAME_TYPE, MAVLINK_MESSAGE_INFO_SET_PICTURE_NAME_TYPE, MAVLINK_MESSAGE_INFO_GET_HDMI_OSD_STATUS, MAVLINK_MESSAGE_INFO_SET_HDMI_OSD_STATUS, MAVLINK_MESSAGE_INFO_GET_AI_MODE_STATUS, MAVLINK_MESSAGE_INFO_GET_AI_COORDINATE_STREAM_STATUS, MAVLINK_MESSAGE_INFO_UPDATE_THERMAL_SHUTTER, MAVLINK_MESSAGE_INFO_SET_AI_COORDINATE_STREAM_STATUS, MAVLINK_MESSAGE_INFO_REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_FIRMWARE_VERSION, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_GIMBAL_HARDWARE_ID, MAVLINK_MESSAGE_INFO_RESPONSE_AUTO_FOCUS, MAVLINK_MESSAGE_INFO_RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS, MAVLINK_MESSAGE_INFO_RESPONSE_MANUAL_FOCUS, MAVLINK_MESSAGE_INFO_RESPONSE_GIMBAL_ROTATION_CONTROL, MAVLINK_MESSAGE_INFO_RESPONSE_ONE_KEY_CENTERING, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION, MAVLINK_MESSAGE_INFO_RESPONSE_FUNCTION_FEEDBACK_RESPONSE, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA, MAVLINK_MESSAGE_INFO_RESPONSE_SET_GIMBAL_ATTITUDE_ANGLES, MAVLINK_MESSAGE_INFO_RESPONSE_ABSOLUTE_ZOOM_AUTO_FOCUS, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_VIDEO_STITCHING_MODE, MAVLINK_MESSAGE_INFO_RESPONSE_SET_VIDEO_STITCHING_MODE, MAVLINK_MESSAGE_INFO_RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT, MAVLINK_MESSAGE_INFO_RESPONSE_LOCAL_TEMPERATURE_MEASUREMENT, MAVLINK_MESSAGE_INFO_RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_LASER_DISTANCE_MEASUREMENT, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_CURRENT_GIMBAL_MODE, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR, MAVLINK_MESSAGE_INFO_RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_CAMERA_ENCODING_PARAMETERS, MAVLINK_MESSAGE_INFO_RESPONSE_SET_CAMERA_ENCODING_PARAMETERS, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM, MAVLINK_MESSAGE_INFO_RESPONSE_ENCODER_ANGLE, MAVLINK_MESSAGE_INFO_RESPONSE_GIMBAL_CONTROL_MODE, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS, MAVLINK_MESSAGE_INFO_RESPONSE_GIMBAL_MOTOR_VOLTAGE_1, MAVLINK_MESSAGE_INFO_RESPONSE_GIMBAL_MOTOR_VOLTAGE_2, MAVLINK_MESSAGE_INFO_RESPONSE_SET_UTC_TIME, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_SYSTEM_INFO, MAVLINK_MESSAGE_INFO_RESPONSE_SET_LASER_STATE, MAVLINK_MESSAGE_INFO_RESPONSE_THERMAL_OUTPUT_MODE, MAVLINK_MESSAGE_INFO_RESPONSE_SET_THERMAL_OUTPUT_MODE, MAVLINK_MESSAGE_INFO_RESPONSE_IR_THRESHOLD_PRECISION, MAVLINK_MESSAGE_INFO_RESPONSE_SET_IR_THRESHOLD_PRECISION, MAVLINK_MESSAGE_INFO_RESPONSE_FORMAT_SD_CARD, MAVLINK_MESSAGE_INFO_RESPONSE_GET_PICTURE_NAME_TYPE, MAVLINK_MESSAGE_INFO_RESPONSE_SET_PICTURE_NAME_TYPE, MAVLINK_MESSAGE_INFO_RESPONSE_HDMI_OSD_STATUS, MAVLINK_MESSAGE_INFO_RESPONSE_SET_HDMI_OSD_STATUS, MAVLINK_MESSAGE_INFO_RESPONSE_AI_MODE_STATUS, MAVLINK_MESSAGE_INFO_RESPONSE_AI_COORDINATE_STREAM_STATUS, MAVLINK_MESSAGE_INFO_RESPONSE_UPDATE_THERMAL_SHUTTER, MAVLINK_MESSAGE_INFO_AI_COORDINATE_STREAM, MAVLINK_MESSAGE_INFO_RESPONSE_SET_AI_COORDINATE_STREAM_STATUS, MAVLINK_MESSAGE_INFO_RESPONSE_REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM, MAVLINK_MESSAGE_INFO_REQUEST_WEAK_CONTROL_MODE, MAVLINK_MESSAGE_INFO_SET_WEAK_CONTROL_MODE, MAVLINK_MESSAGE_INFO_GIMBAL_CAMERA_SOFT_REBOOT, MAVLINK_MESSAGE_INFO_GET_GIMBAL_CAMERA_IP, MAVLINK_MESSAGE_INFO_SET_GIMBAL_CAMERA_IP, MAVLINK_MESSAGE_INFO_RESPONSE_WEAK_CONTROL_MODE, MAVLINK_MESSAGE_INFO_RESPONSE_SET_WEAK_CONTROL_MODE, MAVLINK_MESSAGE_INFO_RESPONSE_SOFT_REBOOT, MAVLINK_MESSAGE_INFO_RESPONSE_CAMERA_IP, MAVLINK_MESSAGE_INFO_RESPONSE_SET_CAMERA_IP}
# define MAVLINK_MESSAGE_NAMES {{ "ABSOLUTE_ZOOM_AUTO_FOCUS", 80015 }, { "AI_COORDINATE_STREAM", 90080 }, { "AUTO_FOCUS", 80004 }, { "CAPTURE_PHOTO_RECORD_VIDEO", 80012 }, { "FORMAT_SD_CARD", 80072 }, { "FUNCTION_FEEDBACK_RESPONSE", 80011 }, { "GET_AI_COORDINATE_STREAM_STATUS", 80078 }, { "GET_AI_MODE_STATUS", 80077 }, { "GET_GIMBAL_CAMERA_IP", 800129 }, { "GET_HDMI_OSD_STATUS", 80075 }, { "GET_PICTURE_NAME_TYPE", 80073 }, { "GET_TEMPERATURE_AT_SELECTED_POINT", 80018 }, { "GIMBAL_CAMERA_SOFT_REBOOT", 800128 }, { "GIMBAL_ROTATION_CONTROL", 80007 }, { "GLOBAL_TEMPERATURE_MEASUREMENT", 80020 }, { "LOCAL_TEMPERATURE_MEASUREMENT", 80019 }, { "MANUAL_FOCUS", 80006 }, { "MANUAL_ZOOM_WITH_AUTOFOCUS", 80005 }, { "ONE_KEY_CENTERING", 80008 }, { "REQUEST_CAMERA_ENCODING_PARAMETERS", 80028 }, { "REQUEST_CAMERA_SYSTEM_INFORMATION", 80010 }, { "REQUEST_CURRENT_GIMBAL_MODE", 80025 }, { "REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE", 80022 }, { "REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR", 80026 }, { "REQUEST_CURRENT_ZOOM_MAGNIFICATION", 80024 }, { "REQUEST_FIRMWARE_VERSION", 80001 }, { "REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL", 80032 }, { "REQUEST_GIMBAL_ATTITUDE_DATA", 80013 }, { "REQUEST_GIMBAL_CONTROL_MODE", 80035 }, { "REQUEST_GIMBAL_HARDWARE_ID", 80002 }, { "REQUEST_GIMBAL_MAGNETIC_ENCODER_ANGLE", 80034 }, { "REQUEST_GIMBAL_MOTOR_VOLTAGE_DATA", 80037 }, { "REQUEST_GIMBAL_TO_SEND_DATA_STREAM", 80033 }, { "REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM", 80099 }, { "REQUEST_IR_THRESHOLD_PRECISION", 80070 }, { "REQUEST_LASER_DISTANCE_MEASUREMENT", 80021 }, { "REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE", 80023 }, { "REQUEST_SYSTEM_INFO", 80049 }, { "REQUEST_THERMAL_OUTPUT_MODE", 80051 }, { "REQUEST_VIDEO_STITCHING_MODE", 80016 }, { "REQUEST_WEAK_CONTROL_MODE", 800112 }, { "REQUEST_WEAK_CONTROL_THRESHOLDS", 80036 }, { "RESPONSE_ABSOLUTE_ZOOM_AUTO_FOCUS", 90015 }, { "RESPONSE_AI_COORDINATE_STREAM_STATUS", 90078 }, { "RESPONSE_AI_MODE_STATUS", 90077 }, { "RESPONSE_AUTO_FOCUS", 90004 }, { "RESPONSE_CAMERA_IP", 900129 }, { "RESPONSE_ENCODER_ANGLE", 90038 }, { "RESPONSE_FORMAT_SD_CARD", 90072 }, { "RESPONSE_FUNCTION_FEEDBACK_RESPONSE", 90011 }, { "RESPONSE_GET_PICTURE_NAME_TYPE", 90073 }, { "RESPONSE_GET_TEMPERATURE_AT_SELECTED_POINT", 90018 }, { "RESPONSE_GIMBAL_CONTROL_MODE", 90039 }, { "RESPONSE_GIMBAL_MOTOR_VOLTAGE_1", 90041 }, { "RESPONSE_GIMBAL_MOTOR_VOLTAGE_2", 90042 }, { "RESPONSE_GIMBAL_ROTATION_CONTROL", 90007 }, { "RESPONSE_GLOBAL_TEMPERATURE_MEASUREMENT", 90020 }, { "RESPONSE_HDMI_OSD_STATUS", 90075 }, { "RESPONSE_IR_THRESHOLD_PRECISION", 90070 }, { "RESPONSE_LOCAL_TEMPERATURE_MEASUREMENT", 90019 }, { "RESPONSE_MANUAL_FOCUS", 90006 }, { "RESPONSE_MANUAL_ZOOM_WITH_AUTOFOCUS", 90005 }, { "RESPONSE_ONE_KEY_CENTERING", 90008 }, { "RESPONSE_REQUEST_CAMERA_ENCODING_PARAMETERS", 90028 }, { "RESPONSE_REQUEST_CAMERA_SYSTEM_INFORMATION", 90010 }, { "RESPONSE_REQUEST_CURRENT_GIMBAL_MODE", 90025 }, { "RESPONSE_REQUEST_CURRENT_SUPPORTED_ZOOM_RANGE", 90022 }, { "RESPONSE_REQUEST_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR", 90026 }, { "RESPONSE_REQUEST_CURRENT_ZOOM_MAGNIFICATION", 90024 }, { "RESPONSE_REQUEST_FIRMWARE_VERSION", 90001 }, { "RESPONSE_REQUEST_FLIGHT_CONTROLLER_TO_SEND_DATA_STREAM_TO_GIMBAL", 90032 }, { "RESPONSE_REQUEST_GIMBAL_ATTITUDE_DATA", 90013 }, { "RESPONSE_REQUEST_GIMBAL_HARDWARE_ID", 90002 }, { "RESPONSE_REQUEST_GIMBAL_TO_SEND_DATA_STREAM", 90033 }, { "RESPONSE_REQUEST_GIMBAL_TO_SEND_LASER_RANGE_DATA_STREAM", 90099 }, { "RESPONSE_REQUEST_LASER_DISTANCE_MEASUREMENT", 90021 }, { "RESPONSE_REQUEST_LASER_DISTANCE_TARGET_LONGITUDE_LATITUDE", 90023 }, { "RESPONSE_REQUEST_SYSTEM_INFO", 90049 }, { "RESPONSE_REQUEST_VIDEO_STITCHING_MODE", 90016 }, { "RESPONSE_REQUEST_WEAK_CONTROL_THRESHOLDS", 90040 }, { "RESPONSE_SET_AI_COORDINATE_STREAM_STATUS", 90081 }, { "RESPONSE_SET_CAMERA_ENCODING_PARAMETERS", 90029 }, { "RESPONSE_SET_CAMERA_IP", 900130 }, { "RESPONSE_SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR", 90027 }, { "RESPONSE_SET_GIMBAL_ATTITUDE_ANGLES", 90014 }, { "RESPONSE_SET_HDMI_OSD_STATUS", 90076 }, { "RESPONSE_SET_IR_THRESHOLD_PRECISION", 90071 }, { "RESPONSE_SET_LASER_STATE", 90050 }, { "RESPONSE_SET_PICTURE_NAME_TYPE", 90074 }, { "RESPONSE_SET_THERMAL_OUTPUT_MODE", 90052 }, { "RESPONSE_SET_UTC_TIME", 90048 }, { "RESPONSE_SET_VIDEO_STITCHING_MODE", 90017 }, { "RESPONSE_SET_WEAK_CONTROL_MODE", 900113 }, { "RESPONSE_SOFT_REBOOT", 900128 }, { "RESPONSE_THERMAL_OUTPUT_MODE", 90051 }, { "RESPONSE_UPDATE_THERMAL_SHUTTER", 90079 }, { "RESPONSE_WEAK_CONTROL_MODE", 900112 }, { "SEND_AIRCRAFT_ATTITUDE_DATA_TO_GIMBAL", 80030 }, { "SEND_RAW_GPS_TO_GIMBAL", 80062 }, { "SET_AI_COORDINATE_STREAM_STATUS", 80081 }, { "SET_CAMERA_ENCODING_PARAMETERS", 80029 }, { "SET_CURRENT_THERMAL_IMAGE_PSEUDOCOLOR", 80027 }, { "SET_GIMBAL_ATTITUDE_ANGLES", 80014 }, { "SET_GIMBAL_CAMERA_IP", 800130 }, { "SET_HDMI_OSD_STATUS", 80076 }, { "SET_IR_THRESHOLD_PRECISION", 80071 }, { "SET_LASER_STATE", 80050 }, { "SET_PICTURE_NAME_TYPE", 80074 }, { "SET_THERMAL_OUTPUT_MODE", 80052 }, { "SET_UTC_TIME", 80048 }, { "SET_VIDEO_STITCHING_MODE", 80017 }, { "SET_WEAK_CONTROL_MODE", 800113 }, { "UPDATE_THERMAL_SHUTTER", 80079 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_GIMBAL_H
