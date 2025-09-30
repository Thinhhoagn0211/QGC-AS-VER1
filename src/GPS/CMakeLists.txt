include_directories(Drivers/src)

add_library(GPS
	Drivers/src/ashtech.cpp
	Drivers/src/ashtech.h
	Drivers/src/base_station.h
	Drivers/src/crc.cpp
	Drivers/src/crc.h
    Drivers/src/emlid_reach.cpp   # <-- MISSING
	Drivers/src/emlid_reach.h     # <-- MISSING
    Drivers/src/femtomes.cpp      # <-- MISSING
	Drivers/src/femtomes.h        # <-- MISSING
    Drivers/src/gps_helper.cpp
	Drivers/src/gps_helper.h
    Drivers/src/mtk.cpp
	Drivers/src/mtk.h
    Drivers/src/nmea.cpp          # <-- MISSING
	Drivers/src/nmea.h            # <-- MISSING
    Drivers/src/rtcm.cpp
	Drivers/src/rtcm.h
    Drivers/src/sbf.cpp
	Drivers/src/sbf.h
    Drivers/src/ubx.cpp
	Drivers/src/ubx.h
    Drivers/src/unicore.h
    Drivers/src/unicore.cpp       # <-- MISSING

	
	GPSManager.cc
	GPSProvider.cc
	RTCMMavlink.cc
	RTCMMavlink.h
	GPSRtk.cc
	GPSRtk.h
	satellite_info.h
	sensor_gnss_relative.h
	sensor_gps.h
	GPSRTKFactGroup.cc
	GPSRTKFactGroup.h
)

target_link_libraries(GPS
	Qt5::Core
	Qt5::Location
	Qt5::SerialPort
	Qt5::Svg
	Qt5::TextToSpeech
	Vehicle
	MAVLink
	qgc
)

target_include_directories(GPS INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

