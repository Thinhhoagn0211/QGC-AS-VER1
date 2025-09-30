
add_library(TerrainProviders
    TerrainQueryCopernicus.cc
    TerrainQueryCopernicus.h
    TerrainTileCopernicus.cc
    TerrainTileCopernicus.h
)

target_link_libraries(TerrainProviders
	PUBLIC
		Qt5::Core
		Qt5::Network
		qgc
)

target_include_directories(TerrainProviders 
    INTERFACE 
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/Terrain
)

