import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

import QGroundControl.Palette 1.0
import QGroundControl.ScreenTools 1.0

/// Standard push button control:
///     If there is both an icon and text the icon will be to the left of the text
///     If icon only, icon will be centered
Button {
    id:             control
    hoverEnabled:   !ScreenTools.isMobile
    topPadding:     _verticalPadding
    bottomPadding:  _verticalPadding
    leftPadding:    _horizontalPadding
    rightPadding:   _horizontalPadding
    focusPolicy:    Qt.ClickFocus
    font.family:    ScreenTools.normalFontFamily
    text:           ""

    property bool   primary:        false                               ///< primary button for a group of buttons
    property bool   showBorder:     qgcPal.globalTheme === QGCPalette.Light
    property real   backRadius:     ScreenTools.buttonBorderRadius
    property real   heightFactor:   0.5
    property string iconSource:     ""
    property real   fontWeight:     Font.Normal // default for qml Text
    property real   pointSize:      ScreenTools.defaultFontPointSize

    property alias wrapMode:            text.wrapMode
    property alias horizontalAlignment: text.horizontalAlignment
    property alias backgroundColor:     backRect.color
    property alias textColor:           text.color

    property bool   _showHighlight:     enabled && (pressed | checked)

    property int _horizontalPadding:    ScreenTools.defaultFontPixelWidth * 2
    property int _verticalPadding:      Math.round(ScreenTools.defaultFontPixelHeight * heightFactor)

    QGCPalette { id: qgcPal; colorGroupEnabled: enabled }

    background: Rectangle {
        id:             backRect
        radius:         backRadius
        implicitWidth:  ScreenTools.implicitButtonWidth
        implicitHeight: ScreenTools.implicitButtonHeight
        border.width:   showBorder ? 1 : 0
        border.color:   qgcPal.buttonBorder
        color:          primary ? qgcPal.primaryButton : qgcPal.button

        Rectangle {
            anchors.fill:   parent
            color:          qgcPal.buttonHighlight
            opacity:        _showHighlight ? 1 : control.enabled && control.hovered ? .2 : 0
            radius:         parent.radius
        }
    }


    contentItem: Item {
        id: contItem
        implicitWidth:  Math.max(text.implicitWidth , icon.implicitWidth ) * 1.5
        implicitHeight: iconSource === "" ? text.implicitHeight : text.implicitHeight * 2.5 

        RowLayout {
            anchors.fill: parent
            anchors.margins: ScreenTools.defaultFontPixelHeight * 0.25

            QGCColoredImage {
                id: icon
                Layout.fillWidth:       true
                Layout.fillHeight:      true
                Layout.maximumHeight:   parent.height - textLabelContainer.height
                Layout.alignment:       control.text !== "" ? Qt.AlignLeft : Qt.AlignHCenter | Qt.AlignVCenter
                source:                 control.iconSource
                color:                  qgcPal.text
                fillMode:               Image.PreserveAspectFit
                sourceSize.height:      height
                sourceSize.width:       width
                visible:                control.iconSource !== "" ? true : false
            }   

            Item {
                id: textLabelContainer
                Layout.alignment:       icon.visible ? Qt.AlignVCenter | Qt.AlignLeft : Qt.AlignHCenter | Qt.AlignVCenter
                visible:                control.text !== "" ? true : false
                Layout.preferredWidth:  parent.width
                Layout.preferredHeight: text.baselineOffset

                QGCLabel {
                    id: text
                    text:                       control.text
                    font.family:                control.font.family
                    font.pointSize:             control.pointSize
                    font.weight:                control.fontWeight // default for qml Text is Font.Normal, so this is the default value.
                    color:                      _showHighlight ? qgcPal.buttonHighlightText : (primary ? qgcPal.primaryButtonText : qgcPal.buttonText)
                    anchors.baseline:           iconSource !== "" ? parent.bottom : undefined
                    anchors.centerIn:           iconSource === "" ? parent : undefined   
                    anchors.horizontalCenter:   parent.horizontalCenter
                }
            }
        }
    }

}
