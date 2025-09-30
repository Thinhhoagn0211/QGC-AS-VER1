import QtQuick 2.4
import QtQuick.Layouts 1.2

import QGroundControl 1.0

import QGroundControl.Controls  1.0

RowLayout {
    property var fact: Fact { }

    QGCLabel {
        text: fact.name + ":"
    }

    FactTextField {
        Layout.fillWidth:   true
        showUnits:          true
        fact:               parent.fact
    }
}
