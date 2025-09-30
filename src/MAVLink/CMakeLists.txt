add_library(MAVLink
    ImageProtocolManager.cc
    ImageProtocolManager.h
    MAVLinkFTP.cc
    MAVLinkFTP.h
    MAVLinkLib.h
    MAVLinkSigning.cc
    MAVLinkSigning.h
    MAVLinkStreamConfig.cc
    MAVLinkStreamConfig.h
    QGCMAVLink.cc
    QGCMAVLink.h
    StatusTextHandler.cc
    StatusTextHandler.h
    SysStatusSensorInfo.cc
    SysStatusSensorInfo.h
)

target_include_directories(MAVLink PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

#===========================================================================#

message(STATUS "Building MAVLink")


target_link_libraries(MAVLink
	PUBLIC
		Qt5::Core
		Qt5::Network
        Qt5::Qml
		qgc
)

# For QGC all dialects means common and development. Though use of development mavlink code should be restricted to debug builds only.
target_include_directories(MAVLink
    PUBLIC
        ${mavlink_SOURCE_DIR}
        ${mavlink_SOURCE_DIR}/all
        ${mavlink_SOURCE_DIR}/common
        ${mavlink_SOURCE_DIR}/minimal
        ${mavlink_SOURCE_DIR}/development
        ${CMAKE_CURRENT_SOURCE_DIR}
)

# if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
#   target_compile_options(comm PRIVATE -Wno-address-of-packed-member)
# endif()

add_subdirectory(LibEvents)
