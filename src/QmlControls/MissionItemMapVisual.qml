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
import QtLocation 5.3
import QtPositioning 5.3

import QGroundControl 1.0


import QGroundControl.Controls  1.0


/// Mission item map visual
Item {
    id: _root

    property var map        ///< Map control to place item in
    property var vehicle    ///< Vehicle associated with this item
    property bool interactive: true    ///< Vehicle associated with this item

    signal clicked(int sequenceNumber)

    Loader {
        id: mapVisualLoader

        asynchronous: true

        Component.onCompleted: {
            mapVisualLoader.setSource(object.mapVisualQML, {
                map: _root.map,
                vehicle: _root.vehicle,
                opacity: Qt.binding(() => _root.opacity),
                interactive: Qt.binding(() => _root.interactive)
            })
        }

        onLoaded: {
            if (!item) {
                return
            }

            item.parent = map

            if (item.clicked) {
                item.clicked.connect(_root.clicked)
            }
        }
    }
}
