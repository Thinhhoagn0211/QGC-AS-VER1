import QtQuick 2.4
// import QGroundControl.UTMSP

Item {
    // Dummy Properties
    property var    myGeoFenceController
    property var    flightMap
    property var    currentMissionItems
    property bool   triggerSubmitButton
    property bool   resetRegisterFlightPlan
    // Dummy Signals
     signal responseSent(string response)
     signal vehicleIDSent(int id)
     signal resetGeofencePolygonTriggered()
     signal timeStampSent(string timestamp, bool activateflag, string id)
     signal removeFlightPlanTriggered()
}
