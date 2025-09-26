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
    showExpand: true

    property var    linkConfigs:            QGroundControl.linkManager.linkConfigurations
    property bool   noLinks:                true
    property var    editingConfig:          null
    property var    autoConnectSettings:    QGroundControl.settingsManager.autoConnectSettings

    Component.onCompleted: {
        for (var i = 0; i < linkConfigs.count; i++) {
            var linkConfig = linkConfigs.get(i)
            if (!linkConfig.dynamic && !linkConfig.isAutoConnect) {
                noLinks = false
                break
            }
        }
    }

    contentComponent: Component {
        SettingsGroupLayout { 
            heading: qsTr("Select Link to Connect")

            QGCLabel {
                text:       qsTr("No Links Configured")
                visible:    noLinks
            }
        
            Repeater {
                model: linkConfigs

                delegate: QGCButton {
                    Layout.fillWidth:   true
                    text:               object.name + (object.link ? " (" + qsTr("Connected") + ")" : "")
                    visible:            !object.dynamic
                    enabled:            !object.link
                    autoExclusive:      true

                    onClicked: {
                        QGroundControl.linkManager.createConnectedLink(object)
                        mainWindow.closeIndicatorDrawer()
                    }
                }
            }
        }
    }

    expandedComponent: Component {
        ColumnLayout {
            spacing: ScreenTools.defaultFontPixelHeight / 2

            SettingsGroupLayout {
                LabelledButton {
                    label:      qsTr("Communication Links")
                    buttonText: qsTr("Configure")

                    onClicked: {
                        mainWindow.showSettingsTool(qsTr("Comm Links"))
                        mainWindow.closeIndicatorDrawer()
                    }
                }
            }

            SettingsGroupLayout {
                heading:        qsTr("AutoConnect")
                visible:        autoConnectSettings.visible

                Repeater {
                    id: autoConnectRepeater

                    model: [
                        autoConnectSettings.autoConnectPixhawk,
                        autoConnectSettings.autoConnectSiKRadio,
                        autoConnectSettings.autoConnectLibrePilot,
                        autoConnectSettings.autoConnectUDP,
                        autoConnectSettings.autoConnectZeroConf,
                        autoConnectSettings.autoConnectRTKGPS,
                    ]

                    property var names: [ qsTr("Pixhawk"), qsTr("SiK Radio"), qsTr("LibrePilot"), qsTr("UDP"), qsTr("Zero-Conf"), qsTr("RTK") ]

                    FactCheckBoxSlider {
                        Layout.fillWidth:   true
                        text:               autoConnectRepeater.names[index]
                        fact:               modelData
                        visible:            modelData.visible
                    }
                }
            }
        }
    }
}
