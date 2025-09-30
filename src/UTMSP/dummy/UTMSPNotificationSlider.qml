import QtQuick 2.4

Item {
    property bool displayStatus: UTMSPStateStorage.indicatorDisplayStatus
    property var overlay
    property var indicatorTopText: []
    property var indicatorBottomText: [ ]
    property int currentNotificationIndex: false
}
