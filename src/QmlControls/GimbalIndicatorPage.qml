/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

import QtQuick 2.3
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

import QGroundControl 1.0
import QGroundControl.Controls 1.0
import QGroundControl.MultiVehicleManager 1.0
import QGroundControl.ScreenTools 1.0
import QGroundControl.Palette 1.0
import QGroundControl.FactSystem 1.0
import QGroundControl.FactControls 1.0

ToolIndicatorPage {
    id:         control
    showExpand: false

    property var    activeVehicle:              QGroundControl.multiVehicleManager.activeVehicle
    property var    gimbalController:           activeVehicle ? activeVehicle.gimbalController : undefined
    property bool   showIndicator:              gimbalController && gimbalController.gimbals.count
    property var    activeGimbal:               gimbalController.activeGimbal
    property var    multiGimbalSetup:           gimbalController.gimbals.count > 1
    property bool   joystickButtonsAvailable:   activeVehicle.joystickEnabled

    property var    margins:                    ScreenTools.defaultFontPixelWidth
    property var    panelRadius:                ScreenTools.defaultFontPixelWidth * 0.5
    property var    buttonHeight:               ScreenTools.implicitButtonHeight * 1.5
    property var    squareButtonPadding:        ScreenTools.defaultFontPixelWidth
    property var    separatorHeight:            buttonHeight * 0.9
    property var    settingsPanelVisible:       false


    contentComponent: GridLayout {
        // Label indicating the purpose of the panel and active gimbal instance
        QGCLabel {
            text:                   qsTr("Gimbal Controls")

            font.pointSize:         ScreenTools.smallFontPointSize
            Layout.preferredWidth:  buttonHeight * 2
            font.weight:            Font.DemiBold
        }

        // These are simple buttons that can be grouped on this Repeater
        Repeater {
            id: simpleGimbalButtonsRepeater
            property var hasControl:              gimbalController && gimbalController.activeGimbal && gimbalController.activeGimbal.gimbalHaveControl
            property var acqControlButtonEnabled: QGroundControl.settingsManager.gimbalControllerSettings.toolbarIndicatorShowAcquireReleaseControl.rawValue

            model: [
                {id: "yawLock",   text: qsTr("Yaw Lock")  , visible: true                    },
                {id: "center",    text: qsTr("Center")                                                          , visible: true                    },
                {id: "tilt90",    text: qsTr("Tilt 90")                                                         , visible: true                    },
                {id: "pointHome", text: qsTr("Point Home")                                                 , visible: true                    },
                {id: "retract",   text: qsTr("Retract")                                                         , visible: true                    },
                {id: "acqControl",text: hasControl ? qsTr("Release Control") : qsTr("Acquire Control"), visible: acqControlButtonEnabled }
            ]

            QGCButton {
                property var callbackList: [
                    {"yawLock":      function(){ gimbalController.toggleGimbalYawLock(!activeGimbal.yawLock) }   },
                    {"center":       function(){ gimbalController.centerGimbal() }                               },
                    {"tilt90":       function(){ gimbalController.sendPitchBodyYaw(-90, 0) }                     },
                    {"pointHome":    function(){ activeVehicle.guidedModeROI(activeVehicle.homePosition) }       },
                    {"retract":      function(){ gimbalController.toggleGimbalRetracted(true) }                  },
                    // This button changes its action depending on gimbal being under control or not 
                    {"acqControl":   function(){ simpleGimbalButtonsRepeater.hasControl ? 
                                                    gimbalController.releaseGimbalControl() : 
                                                        gimbalController.acquireGimbalControl() }               }
                ]

                Layout.preferredWidth: Layout.preferredHeight * 2
                Layout.preferredHeight: buttonHeight
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                text: modelData.text
                fontWeight: Font.DemiBold
                visible: modelData.visible
                pointSize: ScreenTools.smallFontPointSize
                backRadius: panelRadius * 0.5
                leftPadding: squareButtonPadding
                rightPadding: squareButtonPadding
                onClicked: {
                    var callback = callbackList.find(function(item) {
                        return item.hasOwnProperty(modelData.id);
                    });
                    if (callback !== undefined) {
                        callback[modelData.id]();
                    }
                }
            }
        }

        // Separator
        Rectangle {
            Layout.leftMargin:      margins
            Layout.preferredWidth:  2
            Layout.preferredHeight: separatorHeight
            color:                  qgcPal.windowShade
            visible:                multiGimbalSetup
        }

        // Active gimbal selector section
        QGCLabel {
            text:                   qsTr("Active Gimbal: ") + (multiGimbalSetup ? activeGimbal.deviceId.rawValue : "")
            font.pointSize:         ScreenTools.smallFontPointSize
            Layout.preferredWidth:  buttonHeight * 1.1
            Layout.leftMargin:      margins
            font.weight:            Font.DemiBold
            visible:                multiGimbalSetup
        }
        QGCButton {
            id:                     gimbalSelectorButton
            Layout.preferredWidth:  Layout.preferredHeight
            Layout.preferredHeight: buttonHeight
            Layout.alignment:       Qt.AlignHCenter | Qt.AlignBottom
            text:                   qsTr("Select Gimbal")
            fontWeight:             Font.DemiBold
            pointSize:              ScreenTools.smallFontPointSize
            backRadius:             panelRadius * 0.5
            visible:                multiGimbalSetup
            checkable:              true

            // This rectangle is to hide the "roundness" of panels when showing the dropdown, in the join between the 2 panels
            Rectangle {
                id:                         hideRoundCornersRectangle
                anchors.verticalCenter:     gimbalSelectorPanel.top
                anchors.horizontalCenter:   gimbalSelectorPanel.horizontalCenter
                width:                      gimbalSelectorPanel.width
                height:                     panelRadius * 2
                color:                      qgcPal.window
                visible:                    gimbalSelectorPanel.visible
            }
            
            Rectangle {
                id:                         gimbalSelectorPanel
                width:                      buttonHeight + margins * 2
                height:                     gimbalSelectorContentGrid.childrenRect.height + margins * 2
                visible:                    gimbalSelectorButton.checked
                color:                      qgcPal.window
                radius:                     panelRadius
                // We only show border if the extended settings panel is visible
                border.color:               settingsPanelVisible ? qgcPal.windowShade : qgcPal.window
                border.width:               5

                anchors.top:                parent.bottom
                anchors.horizontalCenter:   parent.horizontalCenter
                anchors.topMargin:          margins

                property var buttonWidth:    width - margins * 2
                property var panelHeight:    gimbalSelectorContentGrid.childrenRect.height + margins * 2
                property var gridRowSpacing: margins
                property var buttonFontSize: ScreenTools.smallFontPointSize * 0.9

                GridLayout {
                    id:               gimbalSelectorContentGrid
                    width:            parent.width
                    rowSpacing:       gimbalSelectorPanel.gridRowSpacing
                    columns:          1

                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.top:              parent.top
                    anchors.topMargin:        margins

                    Repeater {
                        model: gimbalController && gimbalController.gimbals ? gimbalController.gimbals : undefined
                        delegate: QGCButton {
                            Layout.preferredWidth:  Layout.preferredHeight
                            Layout.preferredHeight: buttonHeight
                            Layout.alignment:       Qt.AlignHCenter | Qt.AlignVCenter
                            fontWeight:             Font.DemiBold
                            pointSize:              ScreenTools.smallFontPointSize
                            backRadius:             panelRadius * 0.5
                            text:                   qsTr("Gimbal ") + object.deviceId.rawValue
                            checked:                activeGimbal === object
                            onClicked: {
                                gimbalController.activeGimbal = object
                                gimbalSelectorButton.checked = false
                            }
                        }
                    }
                }
            }
        }

        // Separator
        Rectangle {
            Layout.leftMargin:      margins
            Layout.preferredWidth:  2
            Layout.preferredHeight: separatorHeight
            color:                  qgcPal.windowShade
        }

        // Show settings button. It is thought for persisting popup close actions, hence the visibility
        // based on a control.settingsPanelVisible It is interesting as users calibrating onscreen controls 
        // will be testing and adjusting these frequently, so this way it is handier for them
        QGCButton {
            id:                     extendedOptionsButton
            Layout.leftMargin:      margins
            Layout.preferredWidth:  Layout.preferredHeight
            Layout.preferredHeight: buttonHeight
            Layout.alignment:       Qt.AlignHCenter | Qt.AlignBottom
            text:                   qsTr("Settings")
            fontWeight:             Font.DemiBold
            pointSize:              ScreenTools.smallFontPointSize
            backRadius:             panelRadius * 0.5
            checkable:              true
            checked:                control.settingsPanelVisible
            leftPadding:            squareButtonPadding
            rightPadding:           squareButtonPadding
            onCheckedChanged: {
                if (checked !== control.settingsPanelVisible) {
                    control.settingsPanelVisible = checked
                }
            }
        }

        // Settings panel
        GridLayout {
            Layout.row:         2
            Layout.columnSpan:  8
            Layout.fillWidth:   true
            height:             buttonHeight * 1.5
            visible:            settingsPanelVisible
            columns:            2
            rowSpacing:         margins

            QGCLabel {
                id:                 gimbalModeLabel
                text:               qsTr("Gimbal Mode: ")
                visible:            true
            }
            
            ComboBox {
                id: gimbalModeCombo
                model: gimbalController.gimbalModeList
                currentIndex: gimbalController.gimbalCurrentMode

                onCurrentIndexChanged: {
                    // Avoid sending on init
                    if (gimbalModeCombo.activeFocus) {
                        gimbalController.setCurrentGimbalMode(currentIndex)
                    }
                }
            }


            // Click on screen settings
            FactCheckBox {
                id:                 enableOnScreenControlCheckbox
                text:               "  " + QGroundControl.settingsManager.gimbalControllerSettings.EnableOnScreenControl.shortDescription
                fact:               QGroundControl.settingsManager.gimbalControllerSettings.EnableOnScreenControl
                checkedValue:       1
                uncheckedValue:     0
                Layout.columnSpan:  2
            }

            QGCLabel {
                id:                 controlTypeLabel
                text:               qsTr("Control type: ")
                visible:            enableOnScreenControlCheckbox.checked
            }

            FactComboBox {
                id:                 controlTypeCombo
                fact:               QGroundControl.settingsManager.gimbalControllerSettings.ControlType
                visible:            enableOnScreenControlCheckbox.checked
            }

            QGCLabel {
                text:               qsTr("Horizontal FOV")
                visible:            enableOnScreenControlCheckbox.checked && QGroundControl.settingsManager.gimbalControllerSettings.ControlType.rawValue === 0
            }
            FactTextField {
                fact:               QGroundControl.settingsManager.gimbalControllerSettings.CameraHFov
                visible:            enableOnScreenControlCheckbox.checked && QGroundControl.settingsManager.gimbalControllerSettings.ControlType.rawValue === 0
            }

            QGCLabel {
                text:               qsTr("Vertical FOV")
                visible:            enableOnScreenControlCheckbox.checked && QGroundControl.settingsManager.gimbalControllerSettings.ControlType.rawValue === 0
            }
            FactTextField {
                fact:               QGroundControl.settingsManager.gimbalControllerSettings.CameraVFov
                visible:            enableOnScreenControlCheckbox.checked && QGroundControl.settingsManager.gimbalControllerSettings.ControlType.rawValue === 0
            }

            QGCLabel {
                text:               qsTr("Max speed:")
                visible:            enableOnScreenControlCheckbox.checked && QGroundControl.settingsManager.gimbalControllerSettings.ControlType.rawValue === 1
            }
            FactTextField {
                fact:               QGroundControl.settingsManager.gimbalControllerSettings.CameraSlideSpeed
                visible:            enableOnScreenControlCheckbox.checked && QGroundControl.settingsManager.gimbalControllerSettings.ControlType.rawValue === 1
            }

            // Separator
            Rectangle {
                Layout.columnSpan:       2
                Layout.preferredHeight:  2
                Layout.preferredWidth:   gimbalAzimuthMapCheckbox.width
                Layout.margins:          margins
                color:                   qgcPal.windowShade
            }

            QGCLabel {
                text:               qsTr("Joystick buttons speed:")
                visible:            joystickButtonsAvailable && QGroundControl.settingsManager.gimbalControllerSettings.visible
            }
            FactTextField {
                fact:               QGroundControl.settingsManager.gimbalControllerSettings.joystickButtonsSpeed
                visible:            joystickButtonsAvailable && QGroundControl.settingsManager.gimbalControllerSettings.visible
                showHelp:           true
            }

            // Separator
            Rectangle {
                Layout.columnSpan:       2
                Layout.preferredHeight:  2
                Layout.preferredWidth:   gimbalAzimuthMapCheckbox.width
                Layout.margins:          margins
                color:                   qgcPal.windowShade
                visible:                 joystickButtonsAvailable && QGroundControl.settingsManager.gimbalControllerSettings.visible
            }

            FactCheckBox {
                id:                 gimbalAzimuthMapCheckbox
                text:               "  " + qsTr("Show gimbal Azimuth indicator in map")
                fact:               QGroundControl.settingsManager.gimbalControllerSettings.showAzimuthIndicatorOnMap
                Layout.columnSpan:  2
                checkedValue:       1
                uncheckedValue:     0
            }

            FactCheckBox {
                id:                 gimbalAzimutIndicatorCheckbox
                text:               "  " + qsTr("Use Azimuth instead of local yaw on top toolbar indicator")
                fact:               QGroundControl.settingsManager.gimbalControllerSettings.toolbarIndicatorShowAzimuth
                Layout.columnSpan:  2
                checkedValue:       1
                uncheckedValue:     0
            }

            FactCheckBox {
                id:                 showAcquireControlCheckbox
                text:               "  " + qsTr("Show Acquire/Release control button")
                fact:               QGroundControl.settingsManager.gimbalControllerSettings.toolbarIndicatorShowAcquireReleaseControl
                Layout.columnSpan:  2
                checkedValue:       1
                uncheckedValue:     0
            }

            Button {
                id: softRebootButton
                text: qsTr("Soft Reboot")
                Layout.columnSpan: 2
                onClicked: rebootDialog.open()
            }

            Dialog {
                id: rebootDialog
                modal: true
                x: parent.width/2 - width/2
                y: parent.height/2 - height/2
                width: 300
                height: 200
                title: qsTr("Select Reboot Options")

                property bool cameraSelected: false
                property bool gimbalSelected: false

                Column {
                    spacing: 10
                    anchors.centerIn: parent

                    // Camera Reboot toggle box
                    Rectangle {
                        width: parent.width * 0.8
                        height: 40
                        radius: 6
                        color: rebootDialog.cameraSelected ? "lightblue" : "lightgray"
                        border.color: "black"
                        Text {
                            anchors.centerIn: parent
                            text: "Camera Reboot"
                        }
                        MouseArea {
                            anchors.fill: parent
                            onClicked: rebootDialog.cameraSelected = !rebootDialog.cameraSelected
                        }
                    }

                    // Gimbal Reset toggle box
                    Rectangle {
                        width: parent.width * 0.8
                        height: 40
                        radius: 6
                        color: rebootDialog.gimbalSelected ? "lightblue" : "lightgray"
                        border.color: "black"
                        Text {
                            anchors.centerIn: parent
                            text: "Gimbal Reset"
                        }
                        MouseArea {
                            anchors.fill: parent
                            onClicked: rebootDialog.gimbalSelected = !rebootDialog.gimbalSelected
                        }
                    }

                    // Submit button
                    Button {
                        text: qsTr("Submit")
                        enabled: rebootDialog.cameraSelected || rebootDialog.gimbalSelected
                        onClicked: {
                            rebootDialog.close()
                            confirmDialog.open()
                        }
                    }
                }
            }

            // Confirmation dialog
            Dialog {
                id: confirmDialog
                modal: true
                x: parent.width/2 - width/2
                y: parent.height/2 - height/2
                width: 300
                height: 150
                title: qsTr("Confirm Reboot")

                Column {
                    anchors.centerIn: parent
                    spacing: 10

                    Text {
                        text: {
                            var selections = []
                            if (rebootDialog.cameraSelected) selections.push("Camera Reboot")
                            if (rebootDialog.gimbalSelected) selections.push("Gimbal Reset")
                            return "Would you want to reboot: " + selections.join(", ") + "?"
                        }
                        wrapMode: Text.WordWrap
                        horizontalAlignment: Text.AlignHCenter
                    }

                    Row {
                        spacing: 20
                        anchors.horizontalCenter: parent.horizontalCenter

                        // Tick (OK)
                        Button {
                            text: "✔"
                            onClicked: {
                                confirmDialog.close()
                                // TODO: Call your gimbalController slot to do the reboot
                                console.log("Reboot confirmed!")
                                var cam = rebootDialog.cameraSelected ? 1 : 0
                                var gim = rebootDialog.gimbalSelected ? 1 : 0
                                gimbalController.gimbalCameraReboot(cam, gim)
                            }
                        }

                        // X (Cancel)
                        Button {
                            text: "✖"
                            onClicked: {
                                confirmDialog.close()
                                rebootDialog.open()
                            }
                        }
                    }
                }
            }
        }
    }
}
