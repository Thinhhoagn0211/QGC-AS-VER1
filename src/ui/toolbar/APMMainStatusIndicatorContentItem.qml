/****************************************************************************
 *
 * (c) 2009-2022 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

import QtQuick 2.3
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.2

import QGroundControl 1.0
import QGroundControl.Controls 1.0
import QGroundControl.FactSystem 1.0
import QGroundControl.ScreenTools 1.0
import QGroundControl.FactControls 1.0

ColumnLayout {
    spacing: ScreenTools.defaultFontPixelHeight / 2

    FactPanelController { id: controller }

    SettingsGroupLayout {
        heading:            qsTr("Ground Control Comm Loss Failsafe")
        Layout.fillWidth:   true

        LabelledFactComboBox {
            label:      qsTr("Vehicle Action")
            fact:       controller.getParameterFact(-1, "FS_GCS_ENABLE")
            indexModel: false
        }

        FactSlider {
            Layout.fillWidth:       true
            Layout.preferredWidth:  ScreenTools.defaultFontPixelWidth * 20
            label:                  qsTr("Loss Timeout")
            fact:                   controller.getParameterFact(-1, "FS_GCS_TIMEOUT")
            majorTickStepSize:      5
        }
    }

    SettingsGroupLayout {
        heading:            qsTr("Failsafe Options")
        Layout.fillWidth:   true

        Repeater {
            id:     repeater
            model:  fact ? fact.bitmaskStrings : []

            property Fact fact: controller.getParameterFact(-1, "FS_OPTIONS")

            QGCCheckBoxSlider {
                Layout.fillWidth: true
                text:               modelData
                checked:            fact.value & fact.bitmaskValues[index]

                property Fact fact: repeater.fact

                onClicked: {
                    var i
                    var otherCheckbox
                    if (checked) {
                        fact.value |= fact.bitmaskValues[index]
                    } else {
                        fact.value &= ~fact.bitmaskValues[index]
                    }
                }
            }
        }
    }
}
