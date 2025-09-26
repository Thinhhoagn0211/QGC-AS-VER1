/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

import QtQuick 2.3
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.2

import QGroundControl 1.0
import QGroundControl.ScreenTools 1.0
import QGroundControl.Controls 1.0
import QGroundControl.Palette       1.0

Button {
    id:             control
    padding:        ScreenTools.defaultFontPixelWidth * 0.75
    hoverEnabled:   !ScreenTools.isMobile
    autoExclusive:  true
    icon.color:     textColor

    property color textColor: checked || pressed ? qgcPal.buttonHighlightText : qgcPal.buttonText

    QGCPalette {
        id:                 qgcPal
        colorGroupEnabled:  control.enabled
    }

    background: Rectangle {
        color:      qgcPal.buttonHighlight
        opacity:    checked || pressed ? 1 : enabled && hovered ? .2 : 0
        radius:     ScreenTools.defaultFontPixelWidth / 2
    }

    contentItem: RowLayout {
        spacing: ScreenTools.defaultFontPixelWidth

        QGCColoredImage {
            source: control.icon.source
            color:  control.icon.color
            width:  ScreenTools.defaultFontPixelHeight
            height: ScreenTools.defaultFontPixelHeight
        }

        QGCLabel {
            id:                     displayText
            Layout.fillWidth:       true
            text:                   control.text
            color:                  control.textColor
            horizontalAlignment:    QGCLabel.AlignLeft
        }
    }
}
