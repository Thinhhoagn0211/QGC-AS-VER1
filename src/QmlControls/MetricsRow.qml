// InfoRow.qml
import QtQuick 2.15
import QtQuick.Layouts 1.15

Row {
    spacing: 5

    Text {
        text: label
        color: "white"
        font.pixelSize: 14
        width: 140
        elide: Text.ElideRight
    }

    Text {
        text: ": " + value
        color: "white"
        font.pixelSize: 14
    }

    property string label: ""
    property string value: ""
}
