add_library(Camera
    CameraMetaData.cc
    CameraMetaData.h
    MavlinkCameraControl.cc
    MavlinkCameraControl.h
    QGCCameraIO.cc
    QGCCameraIO.h
    QGCCameraManager.cc
    QGCCameraManager.h
    QGCVideoStreamInfo.cc
    QGCVideoStreamInfo.h
    SimulatedCameraControl.cc
    SimulatedCameraControl.h
    VehicleCameraControl.cc
    VehicleCameraControl.h
)

target_link_libraries(Camera
	PUBLIC
		qgc
)

target_include_directories(Camera PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add JSON files
qt_add_resources(${CMAKE_PROJECT_NAME} json_mavlink_camera
    PREFIX "/json"
    FILES CameraMetaData.json
)
