import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtQuick.Window 2.1

import QtLocation 5.3
import QtPositioning 5.3

import QGroundControl 1.0
import QGroundControl.FlightMap         1.0
import QGroundControl.ScreenTools 1.0
import QGroundControl.Controls 1.0
import QGroundControl.FactSystem 1.0
import QGroundControl.FactControls 1.0
import QGroundControl.Palette 1.0
import QGroundControl.Controllers 1.0
import QGroundControl.FlightDisplay 1.0
import QGroundControl.ShapeFileHelper   1.0

Item {
    id: _root   
    property real scale: 1.0
    property var  planMasterController
    property var    _missionController:     planMasterController.missionController
    property var  mapControl

    implicitWidth: 1
    implicitHeight: contentCol.implicitHeight > 0 ? contentCol.implicitHeight : 1

    property real btnH:        28 * scale
    property real btnFont:     12 * scale
    property real btnRadius:    4 * scale
    property real btnPad:       6 * scale
    property real btnHeightFac: 0.5 * scale


    Column {
        id: contentCol
        width: _root.width
        spacing: 8 * scale

        Row {
            id: quickActionsRow
            anchors.horizontalCenter: parent.horizontalCenter
            spacing: 6 * scale

            QGCButton {
                id: uploadButton
                text: qsTr("Upload")
                implicitHeight: btnH
                pointSize:      btnFont
                heightFactor:   btnHeightFac
                backRadius:     btnRadius
                leftPadding:    btnPad
                rightPadding:   btnPad
                background: Rectangle { color: "green"; radius: 4 * scale }
                onClicked: {
                    if (planMasterController && planMasterController._utmspEnabled) {
                        QGroundControl.utmspManager.utmspVehicle.triggerActivationStatusBar(true)
                        UTMSPStateStorage.removeFlightPlanState = true
                        UTMSPStateStorage.indicatorDisplayStatus = true
                    }
                    if (planMasterController) planMasterController.upload()
                }
            }

            QGCButton {
                id: openFileButton
                text: qsTr("Open file")
                visible: true
                implicitHeight: btnH
                pointSize:      btnFont
                heightFactor:   btnHeightFac
                backRadius:     btnRadius
                leftPadding:    btnPad
                rightPadding:   btnPad
                background: Rectangle { color: "darkblue"; radius: 4 * scale }
                onClicked: {
                    if (!planMasterController) return
                    if (planMasterController.dirty) {
                        showLoadFromFileOverwritePrompt(planMasterController._overwriteText)
                    } else {
                        planMasterController.loadFromSelectedFile()
                    }
                }
            }

            QGCButton {
                id: saveFileButton
                text: qsTr("Save")
                implicitHeight: btnH
                pointSize:      btnFont
                heightFactor:   btnHeightFac
                backRadius:     btnRadius
                leftPadding:    btnPad
                rightPadding:   btnPad
                visible: true
                background: Rectangle { color: "darkgray"; radius: 4 * scale }
                onClicked: planMasterController && planMasterController.saveToSelectedFile()
            }

            QGCButton {
                id: downloadButton
                text: qsTr("Download")
                implicitHeight: btnH
                pointSize:      btnFont
                heightFactor:   btnHeightFac
                backRadius:     btnRadius
                leftPadding:    btnPad
                rightPadding:   btnPad
                visible: true
                background: Rectangle { color: "gray"; radius: 4 * scale }
                onClicked: downloadClicked(_overwriteText)
            }

            QGCButton {
                id: deleteButton
                text: qsTr("Delete")
                implicitHeight: btnH
                pointSize:      btnFont
                heightFactor:   btnHeightFac
                backRadius:     btnRadius
                leftPadding:    btnPad
                rightPadding:   btnPad
                visible: true
                background: Rectangle { color: "orange"; radius: 4 * scale }
                onClicked: clearButtonClicked()
            }
        }

        Rectangle {
            id: settingsVehiclePlanRect
            width: _root.width * 0.95
            implicitHeight: contentLayout.implicitHeight  + 10 * scale
            anchors.horizontalCenter: parent.horizontalCenter
            color: "transparent"
            border.color: "black"
            border.width: 1

            ColumnLayout {
                id: contentLayout
                spacing: 5 * scale

                Text {
                    text: qsTr("General settings:")
                    font.bold: true
                    font.pointSize: btnFont
                    color: "black"
                }

                GridLayout {
                    id: gridSetAltitude
                    columns: 2
                    Layout.fillWidth: true
                    rowSpacing: 10 * scale
                    columnSpacing: 10 * scale

                    Text {
                        text: qsTr("Takeoff altitude:")
                        font.pixelSize:  btnFont * 1.3
                        color: "black"
                    }
                    QGCTextField {
                        id: takeoffAltitudeField
                        placeholderText: qsTr("Enter takeoff altitude")
                        width: settingsVehiclePlanRect.width * 0.2
                        implicitHeight: btnH
                        font.pointSize: btnFont * 1.3
                        textColor: "black"
                        text: "100.0"
                    }

                    Text {
                        text: qsTr("Landing altitude:")
                        font.pixelSize: btnFont
                        color: "black"
                    }
                    QGCTextField {
                        id: landingAltitudeField
                        placeholderText: qsTr("Enter landing altitude")
                        width:  settingsVehiclePlanRect.width * 0.2
                        implicitHeight: btnH            
                        font.pointSize: btnFont      
                        textColor: "black"
                        text: "50"
                    }
                }

                QGCCheckBox { 
                    id: takeoffCheckBox
                    text: qsTr("Create takeoff point") 
                    implicitHeight: btnH            
                    textFontPointSize: btnFont
                    indicatorSize: btnH * 0.8
                }
                QGCCheckBox { 
                    id: landingCheckBox
                    text: qsTr("Create landing point") 
                    implicitHeight: btnH            
                    textFontPointSize: btnFont
                    indicatorSize: btnH * 0.8
                }
            }
        }

        Rectangle {
            id: missionItemEditorRect
            width: _root.width
            height: Math.min(missionRepeater.contentHeight + 10 * scale, 300)
            color: "white"
            border.color: "black"
            border.width: 2
            radius: 6
            anchors.horizontalCenter: parent.horizontalCenter

            QGCListView {
                id: missionRepeater
                anchors.fill: parent
                spacing: 2 * scale
                orientation: ListView.Vertical
                model: _missionController ? _missionController.visualItems : null
                cacheBuffer: 500
                clip: true
                currentIndex: _missionController.currentPlanViewSeqNum
                highlightMoveDuration: 250

                delegate: MissionItemEditor {
                    map:              mapControl
                    masterController: planMasterController
                    missionItem:      object
                    width: _root.width
                    readOnly:         false
                    onClicked: (sequenceNumber) => { 
                        _missionController.setCurrentPlanViewSeqNum(object.sequenceNumber, false) 
                    }
                    onRemove: {
                        var removeVIIndex = index
                        _missionController.removeVisualItem(removeVIIndex)
                        if (removeVIIndex >= _missionController.visualItems.count) {
                            removeVIIndex--
                        }
                    }
                    onSelectNextNotReadyItem: selectNextNotReady()
                }
            }
        }

    }

}