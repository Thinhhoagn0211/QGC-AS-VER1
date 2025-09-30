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
            property string name: qsTr("Velocity")
            property string plotTitle: qsTr("Velocity (X axis)")
            property var plot: [
                { name: "Response", value: globals.activeVehicle.localPosition.vx.value },
                { name: "Setpoint", value: globals.activeVehicle.localPositionSetpoint.vx.value }
            ]
            property var params: ListModel {
                ListElement {
                    title:          qsTr("Proportional gain (SPC_VEL_P)")
                    description:    qsTr("Increase for more responsiveness, reduce if the velocity overshoots (and increasing D does not help).")
                    param:          "SPC_VEL_P"
                    min:            0.0
                    max:            20
                    step:           0.05
                }
                ListElement {
                    title:          qsTr("Differential gain (SPC_VEL_D)")
                    description:    qsTr("Damping: increase to reduce overshoots and oscillations, but not higher than really needed.")
                    param:          "SPC_VEL_D"
                    min:            0.0
                    max:            3
                    step:           0.05
                }
                ListElement {
                    title:          qsTr("Integral gain (SPC_VEL_I)")
                    description:    qsTr("Increase to reduce steady-state error (e.g. wind)")
                    param:          "SPC_VEL_I"
                    min:            0.0
                    max:            10
                    step:           0.2
                }
                ListElement {
                    title:          qsTr("Integral gain Limiter (SPC_VEL_I_LIM)")
                    description:    qsTr("Increase to enlarge the allowed integral compensation.")
                    param:          "SPC_VEL_I_LIM"
                    min:            0.0
                    max:            5
                    step:           0.2
                }
            }
        }
        title: "Velocity"
        tuningMode: Vehicle.ModeVelocityAndPosition
        unit: "m/s"
        axis: [ position]
    }
}
