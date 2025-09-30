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
import QGroundControl.FlightDisplay  1.0
import QGroundControl.FlightMap  1.0



ColumnLayout {
    width: _rightPanelWidth

    TerrainProgress {
        Layout.alignment:       Qt.AlignTop
        Layout.preferredWidth:  _rightPanelWidth
    }

    // We use a Loader to load the photoVideoControlComponent only when we have an active vehicle and a camera manager.
    // This make it easier to implement PhotoVideoControl without having to check for the mavlink camera
    // to be null all over the place
    Loader {
        id:                 photoVideoControlLoader
        Layout.alignment:   Qt.AlignTop | Qt.AlignRight
        sourceComponent:    globals.activeVehicle && globals.activeVehicle.cameraManager ? photoVideoControlComponent : undefined

        property real rightEdgeCenterInset: visible ? parent.width - x : 0

        Component {
            id: photoVideoControlComponent

            PhotoVideoControl {
            }
        }
    }
}
