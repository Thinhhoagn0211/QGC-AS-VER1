import QGroundControl.FlightDisplay 1.0

GuidedToolStripAction {
    text:       _guidedController.settingsTitle
    message:    qsTr("Settings")
    iconSource: "/res/setting.svg"
    visible:    true
    actionID:   _guidedController.actionSettings
}
