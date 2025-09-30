
add_library(Settings
    ADSBVehicleManagerSettings.cc
    ADSBVehicleManagerSettings.h
    APMMavlinkStreamRateSettings.cc
    APMMavlinkStreamRateSettings.h
    AppSettings.cc
    AppSettings.h
    AutoConnectSettings.cc
    AutoConnectSettings.h
    BatteryIndicatorSettings.cc
    BatteryIndicatorSettings.h
    BrandImageSettings.cc
    BrandImageSettings.h
    FirmwareUpgradeSettings.cc
    FirmwareUpgradeSettings.h
    FlightMapSettings.cc
    FlightMapSettings.h
    FlightModeSettings.cc
    FlightModeSettings.h
    FlyViewSettings.cc
    FlyViewSettings.h
    GimbalControllerSettings.cc
    GimbalControllerSettings.h
    MapsSettings.cc
    MapsSettings.h
    MavlinkActionsSettings.cc
    MavlinkActionsSettings.h
    MavlinkSettings.cc
    MavlinkSettings.h
    OfflineMapsSettings.cc
    OfflineMapsSettings.h
    PlanViewSettings.cc
    PlanViewSettings.h
    RemoteIDSettings.cc
    RemoteIDSettings.h
    RTKSettings.cc
    RTKSettings.h
    SettingsGroup.cc
    SettingsGroup.h
    SettingsManager.cc
    SettingsManager.h
    UnitsSettings.cc
    UnitsSettings.h
    VideoSettings.cc
    VideoSettings.h
    Viewer3DSettings.cc
    Viewer3DSettings.h
)

target_link_libraries(Settings
	PUBLIC
		qgc
		Qt5::Multimedia
)

target_include_directories(Settings PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

