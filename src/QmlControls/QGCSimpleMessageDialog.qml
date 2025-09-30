/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

import QtQuick 2.4
import QtQuick.Layouts 1.2

import QGroundControl 1.0
import QGroundControl.Controls  1.0


QGCPopupDialog {
    property alias  text:           label.text
    property var    acceptFunction: null        // Mainly used by MainRootWindow.showMessage to specify accept function in call
    property var    closeFunction:  null

    onAccepted: {
        if (acceptFunction) {
            acceptFunction()
        }
    }

    onClosed: {
        if (closeFunction) {
            closeFunction()
        }
    }

    ColumnLayout {
        QGCLabel {
            id:                     label
            Layout.preferredWidth:  Math.max(mainWindow.width / (ScreenTools.isMobile ? 2 : 3), headerMinWidth)
            wrapMode:               Text.WordWrap
        }
    }
}
