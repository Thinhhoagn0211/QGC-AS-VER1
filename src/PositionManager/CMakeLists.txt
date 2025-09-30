add_library(PositionManager
    PositionManager.cpp
    PositionManager.h
    SimulatedPosition.cc
    SimulatedPosition.h
)

target_link_libraries(PositionManager
    PUBLIC
        qgc
    PRIVATE
        Qt5::Core
)

target_include_directories(PositionManager INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})