import QtQuick 2.3
import QtQuick.Layouts 1.3

import QGroundControl.Controls     1.0
import QGroundControl.ScreenTools  1.0

RowLayout {
    property alias label:                   _label.text
    property alias buttonText:              _button.text
    property real  buttonPreferredWidth:    -1

    signal clicked

    id:         _root
    spacing:    ScreenTools.defaultFontPixelWidth * 2

    QGCLabel { 
        id:                 _label
        Layout.fillWidth:   true 
    }

    QGCButton {
        id:                     _button
        Layout.preferredWidth:  buttonPreferredWidth
        onClicked:              _root.clicked()
    }
}

