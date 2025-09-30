import QtQuick 2.4
import QtQuick.Controls 2.2

import QGroundControl 1.0
import QGroundControl.Controls  1.0


Item {
    property bool showBorder:               true
    property real contentMargin:            ScreenTools.defaultFontPixelHeight
    default property alias contentChildren: contentContainer.data

    Rectangle {
        color:              "transparent"
        anchors.fill:       parent
        border.color:       QGroundControl.globalPalette.groupBorder
        border.width:       showBorder ? 1 : 0
        radius:             ScreenTools.defaultFontPixelHeight / 3

        Item {
            id:                   contentContainer
            anchors.fill:         parent
            anchors.margins:      contentMargin / 2
            anchors.bottomMargin: contentMargin * 2
        }
    }

}
