/****************************************************************************
 *
 * (c) 2009-2022 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

import QtQuick 2.11
import QtQuick.Layouts 1.11

import QGroundControl               1.0
import QGroundControl.ScreenTools   1.0
import QGroundControl.Controls      1.0
import QGroundControl.Palette       1.0


RowLayout {
    property alias label:                   _labelLabel.text
    property alias labelText:              _label.text
    property real  labelPreferredWidth:    -1

    spacing: ScreenTools.defaultFontPixelWidth * 2

    QGCLabel { 
        id:                 _labelLabel
        Layout.fillWidth:   true 
    }

    QGCLabel {
        id:                     _label
        Layout.preferredWidth:  labelPreferredWidth
    }
}

