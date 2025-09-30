add_library(MockLink
	MockConfiguration.cc
	MockConfiguration.h
	MockLink.cc
	MockLink.h
	MockLinkFTP.cc
	MockLinkFTP.h
	MockLinkMissionItemHandler.cc
	MockLinkMissionItemHandler.h
	MockLinkWorker.cc
	MockLinkWorker.h
)

target_link_libraries(MockLink
	PUBLIC
		Qt5::Core
		Qt5::Network
		qgc
)

target_include_directories(MockLink PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

qt_add_resources(MockLink json_mocklink
    PREFIX "/json"
    FILES MockLink.General.MetaData.json
        MockLink.Parameter.MetaData.json
)
