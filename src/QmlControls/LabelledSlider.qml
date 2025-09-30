/****************************************************************************
 *
 * (c) 2009-2022 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

import QtQuick 2.4
import QtQuick.Layouts 1.2

import QGroundControl 1.0
import QGroundControl.Controls  1.0


RowLayout {
    property alias label:                   label.text
    property alias from:                    slider.from
    property alias to:                      slider.to
    property real  sliderPreferredWidth:    -1

    spacing: ScreenTools.defaultFontPixelWidth * 2

    QGCLabel {
        id:                 label  
        Layout.fillWidth:   true
    }

    QGCSlider {
        id:                     slider
        Layout.preferredWidth:  sliderPreferredWidth
    }
}

