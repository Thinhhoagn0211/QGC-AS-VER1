/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

import QtQuick 2.4
import QtQuick.Layouts 1.2

import QGroundControl 1.0
import QGroundControl.Controls  1.0




import QGroundControl.FactControls  1.0

BatteryIndicator {
    waitForParameters: true

    expandedPageComponent: Component {
        SettingsGroupLayout {
            Layout.fillWidth:   true
            heading:            qsTr("Low Battery Failsafe")

            FactPanelController { id: controller }

            LabelledFactComboBox {
                label:              qsTr("Vehicle Action")
                fact:               controller.getParameterFact(-1, "COM_LOW_BAT_ACT")
                indexModel:         false
            }

            FactSlider {
                Layout.fillWidth:       true
                label:                  qsTr("Warning Level")
                fact:                   controller.getParameterFact(-1, "BAT_LOW_THR")
                majorTickStepSize:      5
            }   

            FactSlider {
                Layout.fillWidth:   true
                label:              qsTr("Critical Level")
                fact:               controller.getParameterFact(-1, "BAT_CRIT_THR")
                majorTickStepSize:  5
            }

            FactSlider {
                Layout.fillWidth:   true
                label:              qsTr("Emergency Level")
                fact:               controller.getParameterFact(-1, "BAT_EMERGEN_THR")
                majorTickStepSize:  5
            }
        }
    }
}
