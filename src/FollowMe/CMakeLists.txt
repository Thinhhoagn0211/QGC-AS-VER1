
add_library(FollowMe
	FollowMe.cc
)

target_link_libraries(FollowMe
	PUBLIC
		qgc
		Vehicle
		MAVLink
		Qt5::Core
		Qt5::Qml 
)

target_include_directories(FollowMe
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
	)

