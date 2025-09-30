import QtQuick 2.4
import QtQuick.Controls 2.2

MenuItem {
    // MenuItem doesn't support !visible so we have to hack it in
    height: visible ? implicitHeight : 0
}
