add_library(API
    QGCCorePlugin.cc
    QGCCorePlugin.h
    QGCOptions.cc
    QGCOptions.h
    QmlComponentInfo.cc
    QmlComponentInfo.h
)

target_link_libraries(API
	PUBLIC
		Qt5::Core
		Qt5::Network
		qgc
)

target_include_directories(API PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
