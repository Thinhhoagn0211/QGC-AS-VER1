/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/


/**
 * @file
 *   @brief QGC Video Background
 *   @author Gus Grubba <gus@auterion.com>
 */

import QtQuick 2.4
import QtQuick.Controls 2.2
import org.freedesktop.gstreamer.Qt6GLVideoItem 1.0

GstGLQt6VideoItem {
    id: videoBackground
}
