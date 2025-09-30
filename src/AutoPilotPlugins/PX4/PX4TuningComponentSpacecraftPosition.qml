/****************************************************************************
 *
 * (c) 2021 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

import QtQuick 2.4
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.2

import QGroundControl 1.0
import QGroundControl.Controls  1.0

import QGroundControl.FactControls  1.0
import QGroundControl.ScreenTools  1.0

ColumnLayout {
    property real _availableHeight: availableHeight
    property real _availableWidth:  availableWidth

    PIDTuning {
        id:                 pidTuning
        availableWidth:     _availableWidth
        availableHeight:    _availableHeight - pidTuning.y

        property var position: QtObject {
            property string name: qsTr("Position")
            property string plotTitle: qsTr("Position (X direction)")
            property var plot: [
                { name: "Response", value: globals.activeVehicle.localPosition.x.value },
                { name: "Setpoint", value: globals.activeVehicle.localPositionSetpoint.x.value }
            ]
            property var params: ListModel {
                ListElement {
                    title:          qsTr("Proportional gain (SPC_POS_P)")
                    description:    qsTr("Increase for more responsiveness, reduce if the position overshoots.")
                    param:          "SPC_POS_P"
                    min:            0
                    max:            20
                    step:           0.05
                }
                ListElement {
                    title:          qsTr("Integral gain (SPC_POS_I)")
                    description:    qsTr("Increase for faster convergence to zero steady-state error.")
                    param:          "SPC_POS_I"
                    min:            0
                    max:            2
                    step:           0.001
                }
                ListElement {
                    title:          qsTr("Integral gain limit (SPC_POS_I_LIM)")
                    description:    qsTr("Anti-windup limit for the position controller integral component.")
                    param:          "SPC_POS_I_LIM"
                    min:            0
                    max:            2
                    step:           0.001
                }
                ListElement {
                    title:          qsTr("Position Error Limit (SPC_VEL_MAX)")
                    description:    qsTr("Increase for more responsiveness, reduce if the position overshoots.")
                    param:          "SPC_VEL_MAX"
                    min:            0
                    max:            20
                    step:           0.05
                }
            }
        }
        title: "Position"
        tuningMode: Vehicle.ModeVelocityAndPosition
        unit: "m"
        axis: [ position ]
        chartDisplaySec: 50
    }
}
