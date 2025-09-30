add_library(VideoManager
    SubtitleWriter.cc
    SubtitleWriter.h
    VideoManager.cc
    VideoManager.h
)

target_link_libraries(VideoManager
	PUBLIC
		Qt5::Core
		Qt5::Network
        Qt5::Multimedia
        Qt5::OpenGL
        VideoReceiver
		qgc
)

target_include_directories(VideoManager INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(VideoReceiver)
