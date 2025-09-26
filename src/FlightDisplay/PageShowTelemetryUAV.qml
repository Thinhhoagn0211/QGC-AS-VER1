// PageShowTelemetryUAV.qml
import QtQuick 2.15
import QtQuick.Layouts 1.15
import QGroundControl 1.0
import QGroundControl.Controls 1.0
import QGroundControl.Controllers 1.0
import QGroundControl.ScreenTools 1.0

Item {
    id: _root   
    property real scale: 1.0
    property var  activeVehicle
    property var  guidedController

    implicitWidth: 1
    implicitHeight: contentCol.implicitHeight

    property real btnH:        28 * scale
    property real btnFont:     12 * scale
    property real btnRadius:    4 * scale
    property real btnPad:       6 * scale
    property real btnHeightFac: 0.5 * scale

    property var    _batteryGroup:                  activeVehicle && activeVehicle.batteries.count ? activeVehicle.batteries.get(0) : undefined


    Column {
        id: contentCol
        width: _root.width
        spacing: 8 * scale


        QGCButton {
            implicitHeight: btnH
            pointSize:      btnFont
            heightFactor:   btnHeightFac
            backRadius:     btnRadius
            leftPadding:    10 * scale   
            rightPadding:   10 * scale
            background: Rectangle { color: "green"; radius: 4 * scale }
            text: qsTr("Start flying - Automatic mode")

            anchors.horizontalCenter: parent.horizontalCenter
        }



        Row {
            id: quickActionsRow
            anchors.horizontalCenter: parent.horizontalCenter
            spacing: 6 * scale

            QGCButton {
                implicitHeight: btnH
                pointSize:      btnFont
                heightFactor:   btnHeightFac
                backRadius:     btnRadius
                leftPadding:    btnPad
                rightPadding:   btnPad
                background: Rectangle { color: "darkblue"; radius: 4 * scale }
                text: qsTr("Return to home")
                onClicked: {
                    if (guidedController) {
                        if (guidedController.closeAll) guidedController.closeAll()
                        guidedController.confirmAction(guidedController.actionSetFlightMode, "Return")
                    }
                }
            }

            QGCButton {
                implicitHeight: btnH
                pointSize:      btnFont
                heightFactor:   btnHeightFac
                backRadius:     btnRadius
                leftPadding:    btnPad
                rightPadding:   btnPad
                background: Rectangle { color: "red"; radius: 4 * scale }
                text: qsTr("Land")
                onClicked: {
                    if (guidedController) {
                        if (guidedController.closeAll) guidedController.closeAll()
                        guidedController.confirmAction(guidedController.actionLand)
                    }
                }
            }
        }

        GridLayout {
            id: metricsGrid
            columns: 2
            rowSpacing: 6 * scale
            columnSpacing: 12 * scale
            anchors.horizontalCenter: parent.horizontalCenter
            visible: !!activeVehicle

            // GPS numbers
            Text { 
                text: qsTr("GPS numbers") 
                font.pixelSize: btnFont * 1.3
                Layout.alignment: Qt.AlignRight 
            }
            Text { 
                text: activeVehicle ? activeVehicle.gps.count.valueString : "33" 
                font.pixelSize: btnFont * 1.3
            }

            // Latitude
            Text { 
                text: qsTr("Latitude") 
                font.pixelSize: btnFont * 1.3
                Layout.alignment: Qt.AlignRight 
            }
            Text { 
                text: activeVehicle ? activeVehicle.latitude.toFixed(5) : "10.8053735" 
                font.pixelSize: btnFont * 1.3
            }

            // Longitude
            Text { 
                text: qsTr("Longitude") 
                font.pixelSize: btnFont * 1.3
                Layout.alignment: Qt.AlignRight 
            }
            Text { 
                text: activeVehicle ? activeVehicle.longitude.toFixed(5) : "106.6483445" 
                font.pixelSize: btnFont * 1.3
            }

            // Vehicle speed
            Text { 
                text: qsTr("Vehicle speed") 
                font.pixelSize: btnFont * 1.3
                Layout.alignment: Qt.AlignRight 
            }
            Text { 
                text: activeVehicle ? (activeVehicle.airSpeed.rawValue.toFixed(1) + " m/s") : "25" 
                font.pixelSize: btnFont * 1.3
            }

            // Ground speed
            Text { 
                text: qsTr("Ground speed") 
                font.pixelSize: btnFont * 1.3
                Layout.alignment: Qt.AlignRight 
            }
            Text { 
                text: activeVehicle ? (activeVehicle.groundSpeed.rawValue.toFixed(1) + " m/s") : "10" 
                font.pixelSize: btnFont * 1.3
            }

            // Wind speed
            Text { 
                text: qsTr("Wind speed") 
                font.pixelSize: btnFont * 1.3
                Layout.alignment: Qt.AlignRight 
            }
            Text {
                text: (activeVehicle && activeVehicle.windSpeed) ? (activeVehicle.windSpeed.value + " m/s") : "N/A"
                font.pixelSize: btnFont * 1.3
            }

            // Relative height
            Text { 
                text: qsTr("Relative height") 
                font.pixelSize: btnFont * 1.3
                Layout.alignment: Qt.AlignRight 
            }
            Text { 
                text: activeVehicle ? (activeVehicle.altitudeRelative.value.toFixed(1) + " m") : "43" 
                font.pixelSize: btnFont * 1.3
            }

            // Battery capacity
            Text { 
                text: qsTr("Battery capacity") 
                font.pixelSize: btnFont * 1.3
                Layout.alignment: Qt.AlignRight 
            }
            Text { 
                text: _batteryGroup ? _batteryGroup.percentRemaining.value + "%" : "0%"
                font.pixelSize: btnFont * 1.3
            }

            // Time remaining
            Text { 
                text: qsTr("Time remaining") 
                font.pixelSize: btnFont * 1.3
                Layout.alignment: Qt.AlignRight 
            }
            Text { 
                text: qsTr("49 phút 16 giây") 
                font.pixelSize: btnFont * 1.3
            }

            // Voltage
            Text { 
                text: qsTr("Voltage") 
                font.pixelSize: btnFont * 1.3
                Layout.alignment: Qt.AlignRight 
            }
            Text { 
                // text: (activeVehicle && activeVehicle.batteries) ? (activeVehicle.batteries.get(0).voltage.value + " V") : "N/A"
                text: _batteryGroup ? _batteryGroup.voltage.valueString + _batteryGroup.voltage.units : "N/A"
                font.pixelSize: btnFont * 1.3
            }

            // Current
            Text { 
                text: qsTr("Current") 
                font.pixelSize: btnFont * 1.3
                Layout.alignment: Qt.AlignRight 
            }
            Text { 
                // text: (activeVehicle && activeVehicle.batteries) ? (activeVehicle.batteries.get(0).current.value + " A") : "N/A"
                text: _batteryGroup ? _batteryGroup.current.valueString + " A" : "N/A"
                font.pixelSize: btnFont * 1.3
            }
        }
    
    }
}
