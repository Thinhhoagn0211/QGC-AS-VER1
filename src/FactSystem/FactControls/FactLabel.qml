import QtQuick 2.4
import QtQuick.Controls 2.2

import QGroundControl 1.0


import QGroundControl.Controls  1.0

QGCLabel {
    property bool showUnits:    true
    property Fact fact:         Fact { }

    text: fact.valueString + (showUnits ? " " + fact.units : "")
}
