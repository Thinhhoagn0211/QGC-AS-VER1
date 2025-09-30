add_subdirectory(PX4)

add_library(FirmwarePlugin

	APM/APMFirmwarePlugin.cc
	APM/APMFirmwarePlugin.h
	APM/APMParameterMetaData.cc
	APM/APMParameterMetaData.h
	APM/APMFirmwarePluginFactory.cc
	APM/APMFirmwarePluginFactory.h
	APM/ArduCopterFirmwarePlugin.cc
	APM/ArduCopterFirmwarePlugin.h
	APM/ArduPlaneFirmwarePlugin.cc
	APM/ArduPlaneFirmwarePlugin.h
	APM/ArduRoverFirmwarePlugin.cc
	APM/ArduRoverFirmwarePlugin.h
	APM/ArduSubFirmwarePlugin.cc
	APM/ArduSubFirmwarePlugin.h

	
	PX4/PX4FirmwarePlugin.cc
	PX4/PX4FirmwarePlugin.h
	PX4/PX4ParameterMetaData.cc
	PX4/PX4ParameterMetaData.h
	PX4/PX4FirmwarePluginFactory.cc
	PX4/PX4FirmwarePluginFactory.h

	FirmwarePlugin.cc
	FirmwarePlugin.h
	FirmwarePluginFactory.cc
	FirmwarePluginFactory.h
	FirmwarePluginManager.cc
	FirmwarePluginManager.h
)

target_link_libraries(FirmwarePlugin
	PUBLIC
		qgc
		AutoPilotPlugins
)

target_include_directories(FirmwarePlugin
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}
		APM
	)

