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
import QGroundControl.FlightDisplay  1.0


ToolStripAction {
    id:         action
    text:       qsTr("Actions")
    iconSource: "qrc:/qmlimages/HamburgerThin.svg"
    visible:    _additionalActions.anyActionAvailable || _mavlinkActions.anyActionAvailable || _customActions.anyActionAvailable
    enabled:    true

    property var _guidedController: globals.guidedControllerFlyView

    property var _additionalActions: FlyViewAdditionalActionsList { 
        guidedController: _guidedController
    }

    property var _mavlinkActions: MavlinkActionManager {
        actionFileNameFact: QGroundControl.settingsManager.mavlinkActionsSettings.flyViewActionsFile

        property bool anyActionAvailable: QGroundControl.multiVehicleManager.activeVehicle && actions.count > 0
    }

    property var _customActions: FlyViewAdditionalCustomActionsList {
        guidedController: _guidedController
    }

    dropPanelComponent: Component {
        FlyViewAdditionalActionsPanel { 
            additionalActions:  _additionalActions
            mavlinkActions:     _mavlinkActions.actions
            customActions:      _customActions
        }
    }
}
