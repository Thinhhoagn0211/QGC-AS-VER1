import QtQuick 2.4
import QtQuick.Layouts 1.2

import QGroundControl 1.0

import QGroundControl.Controls  1.0

GridLayout {
    property var factList                   ///< List of Facts to show
    property var factLabels                 ///< Labels for facts, if not set, use Fact.name or Fact.shortDescription
    property bool useNameForLabels: true    ///< true: Use Fact.name for labels, false: Use Fact.shortDescription

    rows: factList.length
    flow: GridLayout.TopToBottom

    Repeater {
        model: parent.factList

        QGCLabel { 
            text: {
                if (factLabels) {
                    return factLabels[index]
                } else if (useNameForLabels) {
                    return modelData.name
                } else {
                    return modelData.shortDescription
                }
            }
        }
    }

    Repeater {
        model: parent.factList

        FactTextField {
            Layout.fillWidth:   true
            fact:               modelData
        }
    }
}
