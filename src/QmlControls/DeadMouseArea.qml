import QtQuick 2.4
import QtQuick.Controls 2.2

MouseArea {
    preventStealing:true
    hoverEnabled:   true
    onWheel:    (wheel) => { wheel.accepted = true; }
    onPressed:  (mouse) => { mouse.accepted = true; }
    onReleased: (mouse) => { mouse.accepted = true; }
}
