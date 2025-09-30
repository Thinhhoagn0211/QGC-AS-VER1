import QtQuick 2.4
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.2

RowLayout {
    property string labelText: "Label"
    property string valueText: "value"

    width: parent.width

    QGCLabel {
        id:     label
        text:   labelText
    }
    QGCLabel {
        text:                   valueText
        elide:                  Text.ElideRight
        horizontalAlignment:    Text.AlignRight
        Layout.fillWidth:       true
    }
}
