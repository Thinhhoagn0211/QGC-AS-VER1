set(EXTRA_SOURCES)

add_library(VideoReceiver
    ${EXTRA_SOURCES}
    VideoReceiver.h
)

target_link_libraries(VideoReceiver
	PUBLIC
		Qt5::Core
		Qt5::Network
		qgc
)

target_include_directories(VideoReceiver INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(GStreamer)