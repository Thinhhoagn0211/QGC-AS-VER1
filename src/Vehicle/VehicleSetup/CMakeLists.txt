add_library(VehicleSetup STATIC
    JoystickConfigController.cc
    JoystickConfigController.h
)

target_include_directories(VehicleSetup PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(VehicleSetup
	PUBLIC
		Qt5::Core
		Qt5::Network
		qgc
)

if(NOT QGC_NO_SERIAL_LINK)
    target_sources(VehicleSetup PRIVATE
        Bootloader.cc
        Bootloader.h
        FirmwareImage.cc
        FirmwareImage.h
        FirmwareUpgradeController.cc
        FirmwareUpgradeController.h
        PX4FirmwareUpgradeThread.cc
        PX4FirmwareUpgradeThread.h
    )
endif()
