add_library(Audio
	AudioOutput.cc
	${EXTRA_SRC}
)

target_link_libraries(Audio
	PRIVATE
		qgc
	PUBLIC
		Qt5::Core
		Qt5::Qml
		Qt5::TextToSpeech
		Qt5::Widgets
)

target_include_directories(Audio PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})