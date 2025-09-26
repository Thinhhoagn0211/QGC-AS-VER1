import QtQuick 2.15
import QtQuick.Layouts 1.15

import QGroundControl 1.0
import QGroundControl.Controls 1.0
import QGroundControl.ScreenTools 1.0
import QGroundControl.FactSystem 1.0
import QGroundControl.FactControls 1.0


RowLayout {
    property alias label:                   label.text
    property alias fact:                    _comboBox.fact
    property alias indexModel:              _comboBox.indexModel
    property var   comboBox:                _comboBox
    property real  comboBoxPreferredWidth:  -1

    spacing: ScreenTools.defaultFontPixelWidth * 2

    signal activated(int index)

    QGCLabel {
        id:                 label  
        Layout.fillWidth:   true
    }

    FactComboBox {
        id:                     _comboBox
        Layout.preferredWidth:  comboBoxPreferredWidth
        sizeToContents:         true
        
        onActivated: (index) => { parent.activated(index) }
    }
}
