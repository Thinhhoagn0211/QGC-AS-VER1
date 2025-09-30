import QtQuick 2.4
import QtQuick.Controls 2.2

import QGroundControl 1.0


import QGroundControl.Controls  1.0

QGCCheckBox {
    property Fact fact: Fact { }

    property variant checkedValue:   1
    property variant uncheckedValue: 0

    Binding on checkState {
        value: fact ?
                   (fact.typeIsBool ?
                        (fact.value ? Qt.Checked : Qt.Unchecked) :
                        (fact.value !== 0 ? Qt.Checked : Qt.Unchecked)) :
                   Qt.Unchecked
    }

    onClicked: fact.value = (checked ? checkedValue : uncheckedValue)
}
