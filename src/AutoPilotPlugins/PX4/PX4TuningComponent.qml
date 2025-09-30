/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
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



ColumnLayout {
    id:         root
    spacing:    ScreenTools.defaultFontPixelWidth / 4

    property var model

    property real _availableHeight: availableHeight
    property real _availableWidth:  availableWidth

    FactPanelController {
        id:         controller
    }

    QGCTabBar {
        id: tabBar

        Repeater {
            model: root.model
            QGCTabButton {
                text: buttonText
            }
        }
    }

    Loader {
        id:     loader
        source: model.get(tabBar.currentIndex).tuningPage

        property bool useAutoTuning:    true
        property real availableWidth:   _availableWidth
        property real availableHeight:  _availableHeight - loader.y
    }
}
