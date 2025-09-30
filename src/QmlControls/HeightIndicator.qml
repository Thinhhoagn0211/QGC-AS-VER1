import QtQuick 2.4
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.2

import QGroundControl 1.0
import QGroundControl.Controls  1.0


ColumnLayout {
    id:         _root
    spacing:    0

    property var map
    property string heightText: qsTr("30 ft")

    property color _textColor:  _mapPalette.text

    QGCMapPalette { id: _mapPalette; lightColors: _root.map.isSatelliteMap }

    Rectangle {
        width:              ScreenTools.defaultFontPixelWidth * 3
        height:             1
        color:              _textColor
        Layout.alignment:   Qt.AlignHCenter
    }

    Rectangle {
        width:              1
        height:             ScreenTools.defaultFontPixelWidth * 1
        color:              _textColor
        Layout.alignment:   Qt.AlignHCenter
    }

    QGCMapLabel {
        map:                _root.map
        text:               heightText
        Layout.alignment:   Qt.AlignHCenter
    }

    Rectangle {
        width:              1
        height:             ScreenTools.defaultFontPixelWidth * 1
        color:              _textColor
        Layout.alignment:   Qt.AlignHCenter
    }

    Rectangle {
        width:              ScreenTools.defaultFontPixelWidth * 3
        height:             1
        color:              _textColor
        Layout.alignment:   Qt.AlignHCenter
    }
}
