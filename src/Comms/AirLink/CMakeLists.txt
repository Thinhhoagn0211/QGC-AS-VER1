add_custom_target(AirLinkQml
SOURCES
    AirLinkSettings.qml
)

add_library(AirLink
	AirLinkLink.cc
	AirLinkLink.h
	AirLinkManager.cc
	AirLinkManager.h
)

target_link_libraries(AirLink
	PUBLIC
		Qt5::Core
		Qt5::Network
		qgc
)

target_include_directories(AirLink PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
