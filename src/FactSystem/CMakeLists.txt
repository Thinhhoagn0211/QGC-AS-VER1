
add_subdirectory(FactControls)


add_library(FactSystem
	Fact.cc
	Fact.h
	FactGroup.cc
	FactGroup.h
	FactGroupListModel.cc
	FactGroupListModel.h
	FactGroupWithId.cc
	FactGroupWithId.h
	FactMetaData.cc
	FactMetaData.h
	FactValueSliderListModel.cc
	FactValueSliderListModel.h
	ParameterManager.cc
	ParameterManager.h
	SettingsFact.cc
	SettingsFact.h
)

target_link_libraries(FactSystem
	PRIVATE
		qgc
		FactControls
		Vehicle
		MAVLink
		Qt5::Core
		Qt5::Qml 
)

target_include_directories(FactSystem
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}
	PUBLIC
		FactControls
)
