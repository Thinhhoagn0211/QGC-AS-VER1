add_library(LibEvents
    EventHandler.cc
    EventHandler.h
    HealthAndArmingCheckReport.cc
    HealthAndArmingCheckReport.h
    libevents_includes.h
    logging.cpp
)

target_include_directories(LibEvents PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(LibEvents PUBLIC libevents_generated libevents_parser libevents_health_and_arming_checks Qt5::Core MAVLink)
target_include_directories(LibEvents PUBLIC libs/libevents/libs/cpp)
