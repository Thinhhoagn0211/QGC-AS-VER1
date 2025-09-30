import QtQuick 2.4
import QtQuick.Controls 2.2

import QGroundControl 1.0

import QGroundControl.FactControls  1.0
import QGroundControl.Controls  1.0



Item {
    anchors.fill:   parent

    FactPanelController { id: controller; }

    property Fact _nullFact
    property Fact _rcMapFltmode:    controller.parameterExists(-1, "RC_MAP_FLTMODE") ? controller.getParameterFact(-1, "RC_MAP_FLTMODE") : _nullFact

	Column {
		anchors.fill:       parent
		VehicleSummaryRow {
			labelText: qsTr("Mode switch")
			valueText: _rcMapFltmode.value === 0 ? qsTr("Setup required") : _rcMapFltmode.enumStringValue
		}
		Repeater {
			model: 6
			VehicleSummaryRow {
				labelText: qsTr("Flight Mode %1 ").arg(index + 1)
				valueText: controller.getParameterFact(-1, "COM_FLTMODE" + (index + 1)).enumStringValue
			}
		}
    }
}
