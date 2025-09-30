add_library(UTMSPModule STATIC)

if(NOT QGC_UTM_ADAPTER)
    set_source_files_properties(dummy/UTMSPStateStorage.qml PROPERTIES QT__TYPE TRUE)

    return()
endif()

add_library(UTMSP
    services/dispatcher.h
    UTMSPAircraft.cpp
    UTMSPAircraft.h
    UTMSPAuthorization.cpp
    UTMSPAuthorization.h
    UTMSPBlenderRestInterface.cpp
    UTMSPBlenderRestInterface.h
    UTMSPFlightDetails.cpp
    UTMSPFlightDetails.h
    UTMSPFlightPlanManager.cpp
    UTMSPFlightPlanManager.h
    UTMSPLogger.h
    UTMSPManager.cpp
    UTMSPManager.h
    UTMSPNetworkRemoteIDManager.cpp
    UTMSPNetworkRemoteIDManager.h
    UTMSPOperator.cpp
    UTMSPOperator.h
    UTMSPRestInterface.cpp
    UTMSPRestInterface.h
    UTMSPServiceController.cpp
    UTMSPServiceController.h
    UTMSPVehicle.cpp
    UTMSPVehicle.h
)

# CPMFindPackage(
#     NAME nlohmann_json
#     VERSION 3.11.3
#     GITHUB_REPOSITORY nlohmann/json
# )

find_package(Threads REQUIRED)
target_link_libraries(${CMAKE_PROJECT_NAME}
    PRIVATE
        # nlohmann_json
        Threads::Threads
)

target_include_directories(${CMAKE_PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        services
)

target_compile_definitions(${CMAKE_PROJECT_NAME} PRIVATE QGC_UTM_ADAPTER)

set_source_files_properties(UTMSPStateStorage.qml PROPERTIES QT__TYPE TRUE)
