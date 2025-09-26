/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/


import QtQuick 2.3

import QGroundControl               1.0
import QGroundControl.ScreenTools   1.0
import QGroundControl.Controls      1.0
import QGroundControl.Palette       1.0
import QGroundControl.Vehicle       1.0

Item {
    // The following properties must be passed in from the Loader
    // property bool autoCenterThrottle - true: throttle will snap back to center when released
    id: virtualJoysticks

    property var _activeVehicle: QGroundControl.multiVehicleManager.activeVehicle
    property var  gimbalController:             _activeVehicle ? _activeVehicle.gimbalController : undefined
    property bool gimbalAvailable: gimbalController != null && gimbalController !== undefined
    property bool  _initialConnectComplete:   _activeVehicle ? _activeVehicle.initialConnectComplete : false
    property real  leftYAxisValue:            autoCenterThrottle ? height / 2 : height
    property var   calibration:               false
    property var   uiTotalWidth
    property var   uiRealX
    property bool _virtualJoystickEnabled: QGroundControl.settingsManager.appSettings.virtualJoystick.rawValue
    
    Timer {
        interval:   40  // 25Hz, same as real joystick rate
        running:    QGroundControl.settingsManager.appSettings.virtualJoystick.value
        repeat:     true
        onTriggered: {
            if (_activeVehicle && _initialConnectComplete) {
                // console.log("Virtual Joystick: leftStick.xAxis: " + leftStick.xAxis + ", leftStick.yAxis: " + leftStick.yAxis + ", rightStick.xAxis: " + rightStick.xAxis + ", rightStick.yAxis: " + rightStick.yAxis);
                _activeVehicle.virtualTabletJoystickValue(leftStick.xAxis, leftStick.yAxis, rightStick.xAxis, rightStick.yAxis)
            }
            leftYAxisValue = leftStick.yAxis 
        }
    }

    Timer {
        id: gimbalJoystickTimer
        interval: 25
        repeat: true
        // running: true
        onTriggered: {
            if (gimbalController) {
                let x = gimbalStick.xAxis  
                let y = gimbalStick.yAxis 

                if (Math.abs(x) < 0.01){
                    gimbalJoystickTimer.stop()
                    // gimbalController.gimbalOnScreenControl(0, 0, false, true, true)
                    return;
                }

                gimbalController.gimbalOnScreenControl(x,y, false, true, true)
            }
        }
    }
    
    onHeightChanged:        { keepYAxisWhileChanged() }
    onWidthChanged:         { keepXAxisWhileChanged() }
    onCalibrationChanged:   { calibration ? calibrateJoysticks() : undefined }

    function calibrateJoysticks() {
        if( virtualJoysticks.visible ) {
        keepXAxisWhileChanged()
        leftYAxisValue = leftStick.yAxisReCentered() // Keep track of the correct leftYAxisValue while the width is adjusted at first start up
        }
    }

    function keepYAxisWhileChanged () {
        if( virtualJoysticks.visible ) {
            leftStick.resize( leftYAxisValue )
            rightStick.reCenter()
        }
    }

    function keepXAxisWhileChanged () {
        if( virtualJoysticks.visible ) {
            leftStick.reCenter()
            rightStick.reCenter()
            gimbalStick.reCenter()
        }
    }

    JoystickThumbPad {
        id:                     leftStick
        anchors.leftMargin:     xPositionDelta
        anchors.bottomMargin:   -yPositionDelta
        anchors.left:           parent.left
        anchors.bottom:         parent.bottom
        width:                  parent.height
        height:                 parent.height
        visible:                _virtualJoystickEnabled
        yAxisPositiveRangeOnly: _activeVehicle && !_activeVehicle.rover
        yAxisReCenter:          autoCenterThrottle
    }

    JoystickThumbPad {
        id:                     gimbalStick
        anchors.rightMargin:     -xPositionDelta
        anchors.bottomMargin:   -yPositionDelta - parent.height / 4
        anchors.right:          rightStick.left
        anchors.bottom:         parent.bottom
        width:                  parent.height
        height:                 parent.height
        visible:                true
        yAxisPositiveRangeOnly: false
        yAxisReCenter:          true
        onStickMoved: handleStickActivity()
    }

    JoystickThumbPad {
        id:                     rightStick
        anchors.rightMargin:    -xPositionDelta
        anchors.bottomMargin:   -yPositionDelta
        anchors.right:          parent.right
        anchors.bottom:         parent.bottom
        width:                  parent.height
        height:                 parent.height
        yAxisPositiveRangeOnly: _activeVehicle && !_activeVehicle.rover
        visible:                _virtualJoystickEnabled
        yAxisReCenter:          true
    }

    function handleStickActivity() {
        let x = gimbalStick.xAxis

        if (Math.abs(x) > 0.01) {
            if (!gimbalJoystickTimer.running)
                gimbalJoystickTimer.start()
        } else {
            gimbalJoystickTimer.stop()
            if (gimbalController) {
                // gimbalController.gimbalOnScreenControl(0, 0, false, true, true)
            }
        }
    }
}
