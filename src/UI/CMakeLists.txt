add_subdirectory(AppSettings)
add_subdirectory(FirstRunPromptDialogs)
add_subdirectory(toolbar)

add_library(UI
	
)

add_custom_target(UIQml
	SOURCES
		MainWindow.qml
)

target_link_libraries(UI
	PUBLIC
		Qt5::Quick
		qgc
)

target_include_directories(UI
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}
                ${CMAKE_CURRENT_BINARY_DIR}
	PRIVATE
		linechart
)

