add_library(Generic
    GenericAutoPilotPlugin.cc
    GenericAutoPilotPlugin.h
)

target_link_libraries(Generic
    PUBLIC
        qgc
)