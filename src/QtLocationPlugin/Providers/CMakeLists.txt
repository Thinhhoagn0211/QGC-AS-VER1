
add_library(LocationProviders
    BingMapProvider.cpp
    BingMapProvider.h
    ElevationMapProvider.cpp
    ElevationMapProvider.h
    EsriMapProvider.cpp
    EsriMapProvider.h
    GenericMapProvider.cpp
    GenericMapProvider.h
    GoogleMapProvider.cpp
    GoogleMapProvider.h
    MapboxMapProvider.cpp
    MapboxMapProvider.h
    MapProvider.cpp
    MapProvider.h
)

target_link_libraries(LocationProviders
	PUBLIC
		Qt5::Location
		Qt5::Sql
        TerrainProviders
		qgc
)

target_include_directories(LocationProviders
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}
		QMLControl
)
