/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/


#pragma once

#include "GPSProvider.h"
#include "RTCM/RTCMMavlink.h"
#include <QGCToolbox.h>

#include <QString>
#include <QObject>

Q_DECLARE_LOGGING_CATEGORY(GPSManagerLog)

Q_APPLICATION_STATIC(GPSManager, _gpsManager);

class GPSRtk;

class GPSManager : public QObject
{
    Q_OBJECT

public:
    GPSManager(QObject *parent = nullptr);
    ~GPSManager();

    static GPSManager *instance();

    GPSRtk *gpsRtk() { return _gpsRtk; }

private:
    GPSRtk *_gpsRtk = nullptr;
};
