
set(UTILITIES_SRC
    DeviceInfo.cc
    DeviceInfo.h
    JsonHelper.cc
    JsonHelper.h
    FileSystem/QGCCachedFileDownload.cc
    FileSystem/QGCCachedFileDownload.h
    FileSystem/QGCFileDownload.cc
    FileSystem/QGCFileDownload.h
    FileSystem/QGCTemporaryFile.cc
    FileSystem/QGCTemporaryFile.h
    Platform.cc
    Platform.h
    QGC.cc
    QGC.h
    QGCCommandLineParser.cc
    QGCCommandLineParser.h
    QGCLogging.cc
    QGCLogging.h
    QGCLoggingCategory.cc
    QGCLoggingCategory.h
    StateMachine.cc
    StateMachine.h
)

if(NOT ANDROID AND NOT IOS)
    list(APPEND UTILITIES_SRC
        SignalHandler.cc
        SignalHandler.h
    )
endif()

if(IOS)
    list(APPEND UTILITIES_SRC
        MobileScreenMgr.mm
        MobileScreenMgr.h
    )
endif()

find_package(Qt5Sensors REQUIRED)

add_library(Utilities ${UTILITIES_SRC})

target_link_libraries(Utilities
    PUBLIC
        Qt5::Core
        Qt5::Network
        Qt5::Sensors
        qgc
)

target_include_directories(Utilities
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        FileSystem
)

#===========================================================================#

add_subdirectory(Audio)
add_subdirectory(Compression)
add_subdirectory(Geo)
