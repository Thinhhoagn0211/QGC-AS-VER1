add_library(ComponentInfomation
    CompInfo.cc
    CompInfo.h
    CompInfoActuators.cc
    CompInfoActuators.h
    CompInfoEvents.cc
    CompInfoEvents.h
    CompInfoGeneral.cc
    CompInfoGeneral.h
    CompInfoParam.cc
    CompInfoParam.h
    ComponentInformationCache.cc
    ComponentInformationCache.h
    ComponentInformationManager.cc
    ComponentInformationManager.h
    ComponentInformationTranslation.cc
    ComponentInformationTranslation.h
)

target_link_libraries(ComponentInfomation
	PUBLIC
		Qt5::Core
		Qt5::Network
        Compression
		qgc
)

target_include_directories(ComponentInfomation PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
