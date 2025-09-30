import QtQuick 2.4
import QtQuick.Controls 2.2

import QGroundControl 1.0
import QGroundControl.Controls  1.0


/// QGC version of Flickable control that shows horizontal/vertial scroll indicators
Flickable {
    id:                     root
    boundsBehavior:         Flickable.StopAtBounds
    clip:                   true
    maximumFlickVelocity:   (ScreenTools.realPixelDensity * 25.4) * 8   // About two inches per second

    property color indicatorColor: qgcPal.text

    Component.onCompleted: {
        var indicatorComponent = Qt.createComponent("QGCFlickableScrollIndicator.qml")
        indicatorComponent.createObject(root, { orientation: QGCFlickableScrollIndicator.Horizontal })
        indicatorComponent = Qt.createComponent("QGCFlickableScrollIndicator.qml")
        indicatorComponent.createObject(root, { orientation: QGCFlickableScrollIndicator.Vertical })
    }
}
