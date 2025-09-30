import QtQuick 2.4
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.2

import QGroundControl 1.0
import QGroundControl.Palette 1.0
import QGroundControl.ScreenTools 1.0
import QGroundControl.Controls  1.0


CheckBox {
    id:             control
    focusPolicy:    Qt.ClickFocus
    checked:        true
    leftPadding:    0

    property var            color:          qgcPal.text
    property bool           showSpacer:     true
    property ButtonGroup    buttonGroup:    null

    property real _sectionSpacer: ScreenTools.defaultFontPixelWidth / 2  // spacing between section headings

    onButtonGroupChanged: {
        if (buttonGroup) {
            buttonGroup.addButton(control)
        }
    }

    QGCPalette { id: qgcPal; colorGroupEnabled: enabled }

    contentItem: ColumnLayout {
        Item {
            Layout.preferredHeight: control._sectionSpacer
            width:                  1
            visible:                control.showSpacer
        }

        QGCLabel {
            text:               control.text
            color:              control.color
            Layout.fillWidth:   true

            QGCColoredImage {
                anchors.right:          parent.right
                anchors.verticalCenter: parent.verticalCenter
                width:                  parent.height / 2
                height:                 width
                source:                 "/qmlimages/arrow-down.png"
                color:                  qgcPal.text
                visible:                !control.checked
            }
        }

        Rectangle {
            Layout.fillWidth:   true
            height:             1
            color:              qgcPal.text
        }
    }

    indicator: Item {}
}
