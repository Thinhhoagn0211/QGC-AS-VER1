if(NOT ANDROID)
    return()
endif()

add_library(Android
    AndroidInit.cc
    AndroidInterface.cc
    AndroidInterface.h
    AndroidSerial.cc
    AndroidSerial.h
)

target_include_directories(Android PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(qtandroidserialport)
