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
import QtQuick.Dialogs 1.2
import QtQuick.Layouts 1.2

import QGroundControl 1.0
import QGroundControl.ScreenTools 1.0
import QGroundControl.FactControls 1.0
import QGroundControl.Controls 1.0




Item {
    id: root

    default property alias contentItem: mainLayout.data

    QGCFlickable {
        anchors.fill:   parent
        contentWidth:   mainLayout.width
        contentHeight:  mainLayout.height

        ColumnLayout {
            id:         mainLayout
            x:          Math.max(0, root.width / 2 - width / 2)
            width:      Math.max(implicitWidth, ScreenTools.defaultFontPixelWidth * 50)
            spacing:    ScreenTools.defaultFontPixelHeight
        }
    }
}
