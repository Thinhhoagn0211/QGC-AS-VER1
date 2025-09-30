add_library(Actuators
    ActuatorActions.cc
    ActuatorActions.h
    ActuatorOutputs.cc
    ActuatorOutputs.h
    Actuators.cc
    Actuators.h
    ActuatorTesting.cc
    ActuatorTesting.h
    Common.cc
    Common.h
    GeometryImage.cc
    GeometryImage.h
    Mixer.cc
    Mixer.h
    MotorAssignment.cc
    MotorAssignment.h
)

target_link_libraries(Actuators
	PUBLIC
		Qt5::Core
		Qt5::Network
        Qt5::Gui
		qgc
)

target_include_directories(Actuators PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
