
add_library(Gimbal
    Gimbal.cc
	GimbalController.cc
)

target_link_libraries(Gimbal
	PUBLIC
		qgc
		Vehicle
		MAVLink
		Qt5::Core
		Qt5::Qml 
)

target_include_directories(Gimbal
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
)

