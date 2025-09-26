// InfoBadge.qml
import QtQuick 2.15
import QtQuick.Layouts 1.12
import QtQuick.Controls 2.15
import QGroundControl.ScreenTools 1.0

Rectangle {
    id: badge
    property alias iconSource: icon.source
    property alias title: titleLabel.text
    property alias value: valueLabel.text

    Layout.fillWidth: true
    Layout.preferredHeight: ScreenTools.defaultFontPixelHeight * 3
    radius: height * 0.2
    color: "orange"

    Row {
        anchors.centerIn: parent
        spacing: width * 0.05

        Image {
            id: icon
            width: height * 0.4
            height: height * 0.4
            fillMode: Image.PreserveAspectFit
        }

        Column {
            spacing: 2
            Text {
                id: titleLabel
                text: ""
                color: "white"
                font.pixelSize: ScreenTools.defaultFontPixelHeight * 0.5
            }
            Text {
                id: valueLabel
                text: ""
                color: "white"
                font.pixelSize: ScreenTools.defaultFontPixelHeight * 0.5
            }
        }
    }
}
