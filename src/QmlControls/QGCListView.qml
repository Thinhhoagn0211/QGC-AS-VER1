import QtQuick 2.4

import QGroundControl 1.0
import QGroundControl.Controls  1.0

/// QGC version of ListVIew control that shows horizontal/vertial scroll indicators
ListView {
    id:             root
    boundsBehavior: Flickable.StopAtBounds
    clip:           true

    property color indicatorColor: qgcPal.text

    QGCPalette { id: qgcPal; colorGroupEnabled: enabled }

    Component.onCompleted: {
        var indicatorComponent = Qt.createComponent("QGCFlickableScrollIndicator.qml")
        indicatorComponent.createObject(root, { orientation: QGCFlickableScrollIndicator.Horizontal })
        indicatorComponent = Qt.createComponent("QGCFlickableScrollIndicator.qml")
        indicatorComponent.createObject(root, { orientation: QGCFlickableScrollIndicator.Vertical })
    }
}
