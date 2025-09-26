/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

import QtQuick                  2.12
import QtQuick.Controls         2.4
import QtQuick.Dialogs          1.3
import QtQuick.Layouts          1.12

import QtLocation               5.3
import QtPositioning            5.3
import QtQuick.Window           2.2
import QtQml.Models             2.1

import QGroundControl               1.0
import QGroundControl.Controls      1.0
import QGroundControl.Controllers   1.0
import QGroundControl.Controls      1.0
import QGroundControl.FactSystem    1.0
import QGroundControl.FlightDisplay 1.0
import QGroundControl.FlightMap     1.0
import QGroundControl.Palette       1.0
import QGroundControl.ScreenTools   1.0
import QGroundControl.Vehicle       1.0

// This is the ui overlay layer for the widgets/tools for Fly View
Item {
    id: _root

    property var    parentToolInsets
    property var    totalToolInsets:        _totalToolInsets
    property var    mapControl
    property int selectedButton: 1
    property var    _activeVehicle:         QGroundControl.multiVehicleManager.activeVehicle
    property var    _planMasterController:  globals.planMasterControllerFlyView
    property var    _missionController:     _planMasterController.missionController
    property var    _geoFenceController:    _planMasterController.geoFenceController
    property var    _rallyPointController:  _planMasterController.rallyPointController
    property var    _guidedController:      globals.guidedControllerFlyView
    property real   _margins:               ScreenTools.defaultFontPixelWidth / 2
    property real   _toolsMargin:           ScreenTools.defaultFontPixelWidth * 0.75
    property rect   _centerViewport:        Qt.rect(0, 0, width, height)
    property real   _rightPanelWidth:       ScreenTools.defaultFontPixelWidth * 30
    property alias  _gripperMenu:           gripperOptions
    property real   _layoutMargin:          ScreenTools.defaultFontPixelWidth * 0.75
    property bool   _layoutSpacing:         ScreenTools.defaultFontPixelWidth

    QGCToolInsets {
        id:                     _totalToolInsets
        leftEdgeTopInset:       toolStrip.leftEdgeTopInset
        leftEdgeCenterInset:    parentToolInsets.leftEdgeCenterInset
        leftEdgeBottomInset:    virtualJoystickMultiTouch.visible ? virtualJoystickMultiTouch.leftEdgeBottomInset : parentToolInsets.leftEdgeBottomInset
        rightEdgeTopInset:      instrumentPanel.rightEdgeTopInset
        rightEdgeCenterInset:   telemetryPanel.rightEdgeCenterInset
        rightEdgeBottomInset:   virtualJoystickMultiTouch.visible ? virtualJoystickMultiTouch.rightEdgeBottomInset : parentToolInsets.rightEdgeBottomInset
        topEdgeLeftInset:       toolStrip.topEdgeLeftInset
        topEdgeCenterInset:     mapScale.topEdgeCenterInset
        topEdgeRightInset:      instrumentPanel.topEdgeRightInset
        bottomEdgeLeftInset:    virtualJoystickMultiTouch.visible ? virtualJoystickMultiTouch.bottomEdgeLeftInset : parentToolInsets.bottomEdgeLeftInset
        bottomEdgeCenterInset:  telemetryPanel.bottomEdgeCenterInset
        bottomEdgeRightInset:   virtualJoystickMultiTouch.visible ? virtualJoystickMultiTouch.bottomEdgeRightInset : parentToolInsets.bottomEdgeRightInset
        }

    Rectangle {
        id: panel
        width: parent.width * 0.3
        height: collapsed ? (buttonRow.implicitHeight + _toolsMargin * 2)
                        : parent.height * 0.3
        color: collapsed ? "transparent" : "lightgray"
        radius: 5 * scale
        anchors.right: instrumentPanel.right
        anchors.top: parent.top
        anchors.margins: _toolsMargin
        visible: _activeVehicle !== null && !_activeVehicle.usingHighLatencyLink
        property bool collapsed: false  
        property int  selectedPage: 1
        property real btnHeightFac: 0.5

        property real basePanelW: 480
        property real basePanelH: 260
        property real contentScale: Math.min(1.0, Math.min(width / basePanelW, height / basePanelH))

        property real headerScale: Math.min(1.0, width / basePanelW)

        QtObject {
            id: ui
            property real btnH: panel.height * 0.2         
            property real btnFont: btnH * 0.2            
            property real btnRadius: btnH * 0.2
            property real btnPad: btnH * 0.2 
        }

        Row {
            id: buttonRow
            spacing: 10
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: collapseBtn.left
            anchors.topMargin: 8
            anchors.leftMargin: _toolsMargin
            anchors.rightMargin: _toolsMargin
            visible: !panel.collapsed 

            QGCButton {
                id: btnFunction
                text: qsTr("Function")
                checkable: true
                checked: panel.selectedPage === 1
                enabled: !panel.collapsed

                width: (buttonRow.width - buttonRow.spacing) / 2
                height: ui.btnH
                pointSize:      ui.btnFont
                backRadius:     ui.btnRadius
                leftPadding:    ui.btnPad
                rightPadding:   ui.btnPad

                onClicked: {
                    globals.selectedView = 0
                    // _planMasterController.flyView = true
                    mapControl.planView = false
                    panel.selectedPage = 1
                }
            }
            QGCButton {
                id: btnPlan
                text: qsTr("Plan flight")
                checkable: true
                checked: panel.selectedPage === 2
                enabled: !panel.collapsed

                width: (buttonRow.width - buttonRow.spacing) / 2
                height: ui.btnH
                pointSize: ui.btnFont
                backRadius: ui.btnRadius
                leftPadding: ui.btnPad
                rightPadding: ui.btnPad

                onClicked: {
                    globals.selectedView = 1
                    panel.selectedPage = 2
                    // _planMasterController.flyView = false
                    mapControl.planView = true
                    insertTakeItemAfterCurrent()
                }
            }
        }

        QGCButton {
            id: collapseBtn
            anchors.top: parent.top
            anchors.right: parent.right
            text: panel.collapsed ? "▼" : "▲"
            onClicked: panel.collapsed = !panel.collapsed
        }
        
        Rectangle {
            id: divider
            anchors.top: buttonRow.bottom
            anchors.topMargin: 8
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.leftMargin: _toolsMargin
            anchors.rightMargin: _toolsMargin
            width: panel.width - 2 * _toolsMargin
            height: 1
            color: "white"
            visible: !panel.collapsed
        }

        ScrollView {
            id: scroller
            visible: !panel.collapsed
            anchors.top: divider.bottom
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            clip: true
            contentWidth: width

            ScrollBar.horizontal.policy: ScrollBar.AlwaysOn
            ScrollBar.vertical.policy: ScrollBar.AsNeeded

            Loader {
                id: pageLoader
                active: scroller.visible
                sourceComponent: panel.selectedPage === 1 ? pageOne : pageTwo

                onLoaded: {
                    if (item) {
                        scroller.contentItem.contentWidth  = Math.max(item.width, scroller.width)
                        scroller.contentItem.contentHeight = Math.max(item.height, scroller.height)
                    }
                }
            }
        }

        
        Component {
            id: pageOne
            Item {
                width: scroller.width
                height: content.implicitHeight
                PageShowTelemetryUAV {
                    id: content
                    anchors.fill: parent
                    anchors.margins: 5
                    width: Math.min(420 * panel.contentScale, parent.width - 2 * _toolsMargin)
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.top: parent.top
                    btnH: ui.btnH
                    btnFont: ui.btnFont
                    btnRadius: ui.btnRadius
                    btnPad: ui.btnPad
                    activeVehicle: _activeVehicle
                    guidedController: _guidedController
                }
            }
        }


        // --- Page 2 ---
        Component {
            id: pageTwo
            // Item {
            Item {
                width: scroller.width
                height: content.implicitHeight

                PageShowPlanFlightUAV {
                    id: content
                    width: Math.min(420 * panel.contentScale, parent.width - 2 * _toolsMargin)
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.top: parent.top
                    btnH: ui.btnH
                    btnFont: ui.btnFont
                    btnRadius: ui.btnRadius
                    btnPad: ui.btnPad
                    mapControl:           _mapControl
                    planMasterController: _planMasterController
                }
            }
        }
    }

    Rectangle {
        id: redRect
        width: instrumentPanel.width * 1.5
        height: parent.height * 0.1 
        color: "transparent"

        anchors.right: instrumentPanel.right
        anchors.bottom: instrumentPanel.top
        anchors.margins: _toolsMargin

        RowLayout {
            id: innerRow
            anchors.fill: parent
            anchors.margins: _toolsMargin
            spacing: _toolsMargin

            InfoBadge {
                Layout.fillWidth: true
                Layout.fillHeight: true
                radius: ScreenTools.defaultFontPixelHeight
                color: "#f39c12"
                iconSource: "/res/time.svg"
                title: qsTr("Time Elapsed")
                value: (_activeVehicle && _activeVehicle.flightTime.valueString) ? _activeVehicle.flightTime.valueString : "23:36:00"
            }

            InfoBadge {
                Layout.fillWidth: true
                Layout.fillHeight: true
                radius:  ScreenTools.defaultFontPixelHeight
                color: "#2980b9"
                iconSource: "/res/home.svg"
                title: qsTr("Home Distance")
                value: (_activeVehicle && _activeVehicle.distanceToHome) ? _activeVehicle.distanceToHome.rawValue.toFixed(1) + "m" : qsTr("--.--")
            }

            InfoBadge {
                Layout.fillWidth: true
                Layout.fillHeight: true
                radius:  ScreenTools.defaultFontPixelHeight
                color: "#27ae60"
                iconSource: "/res/TotalDistance.svg"
                title: qsTr("Total Distance")
                value: (_activeVehicle && _activeVehicle.flightDistance) ? _activeVehicle.flightDistance.rawValue.toFixed(1) + "m" : "0 m"
            }

            InfoBadge {
                Layout.fillWidth: true
                Layout.fillHeight: true
                radius:  ScreenTools.defaultFontPixelHeight
                color: "#7f8c8d"
                iconSource: "/res/NextWaypoint.svg"
                title: "WP #" + (_missionController ? _missionController.currentMissionIndex : "0")
                value: (_activeVehicle && _activeVehicle.distanceToNextWP) ? _activeVehicle.distanceToNextWP.rawValue.toFixed(1) + "m" : "0 m"
            }
        }
    }


    FlyViewInstrumentPanel {
        id:                         instrumentPanel
        anchors.bottom: parent.bottom  
        anchors.right: parent.right
        anchors.margins: _toolsMargin
        width:                      _rightPanelWidth
        spacing:                    _toolsMargin
        visible:                    true
        availableHeight:            parent.height - y - _toolsMargin

        property real rightEdgeTopInset: visible ? parent.width - x : 0
        property real topEdgeRightInset: visible ? y + height : 0
    }


    FlyViewMissionCompleteDialog {
        missionController:      _missionController
        geoFenceController:     _geoFenceController
        rallyPointController:   _rallyPointController
    }


    GuidedActionConfirm {
        anchors.margins:            _toolsMargin
        anchors.top:                parent.top
        anchors.horizontalCenter:   parent.horizontalCenter
        z:                          QGroundControl.zOrderTopMost
        guidedController:           _guidedController
        guidedValueSlider:          _guidedValueSlider
    }

    Row {
        id:                 multiVehiclePanelSelector
        anchors.margins:    _toolsMargin
        anchors.top:        parent.top
        anchors.right:      parent.right
        width:              _rightPanelWidth
        spacing:            ScreenTools.defaultFontPixelWidth
        visible:            QGroundControl.multiVehicleManager.vehicles.count > 1 && QGroundControl.corePlugin.options.flyView.showMultiVehicleList

        property bool showSingleVehiclePanel:  !visible || singleVehicleRadio.checked

        QGCMapPalette { id: mapPal; lightColors: true }

        QGCRadioButton {
            id:             singleVehicleRadio
            text:           qsTr("Single")
            checked:        true
            textColor:      mapPal.text
        }

        QGCRadioButton {
            text:           qsTr("Multi-Vehicle")
            textColor:      mapPal.text
        }
    }

    MultiVehicleList {
        anchors.margins:    _toolsMargin
        anchors.top:        multiVehiclePanelSelector.bottom
        anchors.right:      parent.right
        width:              _rightPanelWidth
        height:             parent.height - y - _toolsMargin
        visible:            !multiVehiclePanelSelector.showSingleVehiclePanel
    }


    TelemetryValuesBar {
        id:                 telemetryPanel
        x:                  recalcXPosition()
        anchors.margins:    _toolsMargin

        property real bottomEdgeCenterInset: 0
        property real rightEdgeCenterInset: 0

        // States for custom layout support
        states: [
            State {
                name: "bottom"
                when: telemetryPanel.bottomMode

                AnchorChanges {
                    target: telemetryPanel
                    anchors.top: undefined
                    anchors.bottom: parent.bottom
                    anchors.right: undefined
                    anchors.verticalCenter: undefined
                }

                PropertyChanges {
                    target: telemetryPanel
                    x: recalcXPosition()
                    bottomEdgeCenterInset: visible ? parent.height-y : 0
                    rightEdgeCenterInset: 0
                }
            },

            State {
                name: "right-video"
                when: !telemetryPanel.bottomMode && photoVideoControl.visible

                AnchorChanges {
                    target: telemetryPanel
                    anchors.top: photoVideoControl.bottom
                    anchors.bottom: undefined
                    anchors.right: parent.right
                    anchors.verticalCenter: undefined
                }
                PropertyChanges {
                    target: telemetryPanel
                    bottomEdgeCenterInset: 0
                    rightEdgeCenterInset: visible ? parent.width - x : 0
                }
            },

            State {
                name: "right-novideo"
                when: !telemetryPanel.bottomMode && !photoVideoControl.visible

                AnchorChanges {
                    target: telemetryPanel
                    anchors.top: undefined
                    anchors.bottom: undefined
                    anchors.right: parent.right
                    anchors.verticalCenter: parent.verticalCenter
                }
                PropertyChanges {
                    target: telemetryPanel
                    bottomEdgeCenterInset: 0
                    rightEdgeCenterInset: visible ? parent.width - x : 0
                }
            }
        ]

        function recalcXPosition() {
            // First try centered
            var halfRootWidth   = _root.width / 2
            var halfPanelWidth  = telemetryPanel.width / 2
            var leftX           = (halfRootWidth - halfPanelWidth) - _toolsMargin
            var rightX          = (halfRootWidth + halfPanelWidth) + _toolsMargin
            if (leftX >= parentToolInsets.leftEdgeBottomInset || rightX <= parentToolInsets.rightEdgeBottomInset ) {
                // It will fit in the horizontalCenter
                return halfRootWidth - halfPanelWidth
            } else {
                // Anchor to left edge
                return parentToolInsets.leftEdgeBottomInset + _toolsMargin
            }
        }
    }

    //-- Virtual Joystick
    Loader {
        id:                         virtualJoystickMultiTouch
        z:                          QGroundControl.zOrderTopMost + 1
        width:                      parent.width  - (_pipOverlay.width / 2)
        height:                     Math.min(parent.height * 0.25, ScreenTools.defaultFontPixelWidth * 16)
        visible:                    !QGroundControl.videoManager.fullScreen && !(_activeVehicle ? _activeVehicle.usingHighLatencyLink : false)
        anchors.bottom:                redRect.top
        anchors.bottomMargin:          _toolsMargin
        anchors.horizontalCenter:   parent.horizontalCenter
        source:                     "qrc:/qml/VirtualJoystick.qml"
        active:                     !(_activeVehicle ? _activeVehicle.usingHighLatencyLink : false)

        property bool autoCenterThrottle: QGroundControl.settingsManager.appSettings.virtualJoystickAutoCenterThrottle.rawValue

        property bool _virtualJoystickEnabled: QGroundControl.settingsManager.appSettings.virtualJoystick.rawValue
        property real bottomEdgeLeftInset: parent.height-y
        property real bottomEdgeRightInset: parent.height-y
        property real rootWidth:            _root.width
        property var  itemX:                virtualJoystickMultiTouch.x
        // Width is difficult to access directly hence this hack which may not work in all circumstances
        property real leftEdgeBottomInset: visible ? bottomEdgeLeftInset + width/18 - ScreenTools.defaultFontPixelHeight*2 : 0
        property real rightEdgeBottomInset: visible ? bottomEdgeRightInset + width/18 - ScreenTools.defaultFontPixelHeight*2 : 0

        onRootWidthChanged: virtualJoystickMultiTouch.status == Loader.Ready && visible ? virtualJoystickMultiTouch.item.uiTotalWidth = rootWidth : undefined
        onItemXChanged:     virtualJoystickMultiTouch.status == Loader.Ready && visible ? virtualJoystickMultiTouch.item.uiRealX = itemX : undefined

        //Loader status logic
        onLoaded: {
            if (virtualJoystickMultiTouch.visible) {
                virtualJoystickMultiTouch.item.calibration = true
                virtualJoystickMultiTouch.item.uiTotalWidth = rootWidth
                virtualJoystickMultiTouch.item.uiRealX = itemX
            } else {
                virtualJoystickMultiTouch.item.calibration = false
            }
        }
    }

    FlyViewToolStrip {
        id:                     toolStrip
        anchors.leftMargin:     _toolsMargin + parentToolInsets.leftEdgeCenterInset
        anchors.topMargin:      _toolsMargin + parentToolInsets.topEdgeLeftInset
        anchors.left:           parent.left
        anchors.top:            parent.top
        z:                      QGroundControl.zOrderWidgets
        maxHeight:              parent.height - y - parentToolInsets.bottomEdgeLeftInset - _toolsMargin
        visible:                !QGroundControl.videoManager.fullScreen

        onDisplayPreFlightChecklist: preFlightChecklistPopup.createObject(mainWindow).open()


        property real topEdgeLeftInset: visible ? y + height : 0
        property real leftEdgeTopInset: visible ? x + width : 0
    }

    GripperMenu {
        id: gripperOptions
    }

    VehicleWarnings {
        anchors.centerIn:   parent
        z:                  QGroundControl.zOrderTopMost
    }

    MapScale {
        id:                 mapScale
        anchors.margins:    _toolsMargin
        anchors.left:       toolStrip.right
        anchors.top:        parent.top
        mapControl:         _mapControl
        buttonsOnLeft:      true
        visible:            !ScreenTools.isTinyScreen && QGroundControl.corePlugin.options.flyView.showMapScale && mapControl.pipState.state === mapControl.pipState.fullState

        property real topEdgeCenterInset: visible ? y + height : 0
    }

    Component {
        id: preFlightChecklistPopup
        FlyViewPreFlightChecklistPopup {
        }
    }
}
