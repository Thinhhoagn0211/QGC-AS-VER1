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


Item {
    width:      mainLayout.width + (_margins * 2)
    height:     mainLayout.height + (_margins * 2)
    visible:    true

    property real   _margins:                   ScreenTools.defaultFontPixelHeight / 2
    property real   _smallMargins:              ScreenTools.defaultFontPixelWidth / 2
    property var    _activeVehicle:             globals.activeVehicle
    property var    _gimbalController:           _activeVehicle ? _activeVehicle.gimbalController : null
    property bool _uiReady: false

    property bool expanded: false
    property var drawer: null
    property bool showExpand: false

    QGCPalette { id: qgcPal; colorGroupEnabled: enabled }
    DeadMouseArea { anchors.fill: parent }

    RowLayout {
        id: mainLayout
        anchors.margins: _margins
        anchors.top: parent.top
        anchors.left: parent.left
        spacing: _margins

        ColumnLayout {
            Layout.fillHeight: true
            spacing: _margins
            visible: true

            RowLayout {
                Layout.alignment: Qt.AlignVCenter
                spacing: _margins

                QGCLabel {
                    text: qsTr("Enable Range Finder")
                    font.pointSize: ScreenTools.smallFontPointSize
                    Layout.alignment: Qt.AlignVCenter
                }

                CheckBox {
                    id: enableRangeFinder
                    checked: _gimbalController ? _gimbalController.rangeFinderEnabled : false
                    onCheckedChanged: if (_gimbalController) {
                        _gimbalController.rangeFinderEnabled = checked
                    }
                }

            }

            RowLayout {
                Layout.alignment: Qt.AlignVCenter
                spacing: _margins
                visible: enableRangeFinder.checked

                QGCLabel {
                    text: qsTr("Calculate target distance")
                    font.pointSize: ScreenTools.smallFontPointSize
                    Layout.alignment: Qt.AlignVCenter
                }

                CheckBox {
                    id: enableTargetDistanceCalculator
                    checked: _gimbalController ? _gimbalController.distanceCalculatorEnabled : false
                    onCheckedChanged: if (_gimbalController) {
                        _gimbalController.distanceCalculatorEnabled = checked
                    }
                }
            }

            RowLayout {
                Layout.alignment: Qt.AlignVCenter
                spacing: _margins
                visible: enableRangeFinder.checked

                QGCLabel {
                    text: qsTr("Calculate temperature")
                    font.pointSize: ScreenTools.smallFontPointSize
                    Layout.alignment: Qt.AlignVCenter
                }

                CheckBox {
                    id: enableTemperatureCalc
                    Layout.alignment: Qt.AlignVCenter

                    // Bật checkbox nếu BẤT KỲ mode nào đang bật
                    checked: _gimbalController
                        ? (_gimbalController.calculatedTempPointEnabled
                        || _gimbalController.calculatedTempAreaEnabled
                        || _gimbalController.calculatedTempScreenEnabled)
                        : false

                    // Dùng onToggled (chỉ khi user thao tác), không dùng onCheckedChanged
                    onToggled: {
                        if (!_gimbalController) return
                        if (!_uiReady) return

                        _gimbalController.temperatureEnabled = checked
                        if (checked) {
                            temperatureControl.applyMode()
                        } else {
                            _gimbalController.calculatedTempPointEnabled  = false
                            _gimbalController.calculatedTempAreaEnabled   = false
                            _gimbalController.calculatedTempScreenEnabled = false
                        }
                    }
                }

                ComboBox {
                    id: temperatureControl
                    Layout.alignment: Qt.AlignVCenter
                    visible: enableTemperatureCalc.checked
                    enabled: enableTemperatureCalc.checked
                    model: [qsTr("Điểm"), qsTr("Khu vực"), qsTr("Toàn màn hình")]

                    Component.onCompleted: {
                        if (!_gimbalController) return
                        if (_gimbalController.calculatedTempAreaEnabled) {
                            currentIndex = 1
                        } else if (_gimbalController.calculatedTempScreenEnabled) {
                            currentIndex = 2
                        } else {
                            currentIndex = 0
                        }
                        _uiReady = true
                    }

                    function applyMode() {
                        if (!_gimbalController) return
                        if (!enableTemperatureCalc.checked) return

                        _gimbalController.calculatedTempPointEnabled  = false
                        _gimbalController.calculatedTempAreaEnabled   = false
                        _gimbalController.calculatedTempScreenEnabled = false

                        switch (currentIndex) {
                        case 0:
                            _gimbalController.calculatedTempPointEnabled = true
                            break
                        case 1:
                            _gimbalController.calculatedTempAreaEnabled = true
                            break
                        case 2:
                            _gimbalController.calculatedTempScreenEnabled = true
                            break
                        }
                    }

                    onCurrentIndexChanged: {
                        if (!_uiReady) return
                        applyMode()
                    }
                }
            }
        }
    }
}