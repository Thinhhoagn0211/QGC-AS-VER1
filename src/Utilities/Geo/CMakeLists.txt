
add_library(Geo
    GeoJsonHelper.cc
    GeoJsonHelper.h
    KMLDomDocument.cc
    KMLDomDocument.h
    KMLHelper.cc
    KMLHelper.h
    QGCGeo.cc
    QGCGeo.h
    ShapeFileHelper.cc
    ShapeFileHelper.h
    SHPFileHelper.cc
    SHPFileHelper.h
    Constants.hpp
	Math.cpp
	Math.hpp
	MGRS.cpp
	MGRS.hpp
    UTMUPS.cpp
	UTMUPS.hpp
    LocalCartesian.cpp
    LocalCartesian.hpp
    Geocentric.cpp
    Geocentric.hpp
    Utility.cpp
	Utility.h
	Utility.hpp
    PolarStereographic.cpp
	PolarStereographic.hpp
    TransverseMercator.cpp
	TransverseMercator.hpp
)

target_link_libraries(Geo
	PUBLIC
		qgc
)

target_include_directories(Geo
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}
)

