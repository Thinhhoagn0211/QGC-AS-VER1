add_library(ADSB
    ADSBTCPLink.cc
    ADSBTCPLink.h
    ADSBVehicle.cc
    ADSBVehicle.h
    ADSBVehicleManager.cc
    ADSBVehicleManager.h
)

target_link_libraries(ADSB
	PUBLIC
		Qt5::Core
		Qt5::Network
		qgc
)

target_include_directories(ADSB PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
