/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#include "OfflineMapsSettings.h"

#include <QQmlEngine>
#include <QtQml>

DECLARE_SETTINGGROUP(OfflineMaps, "OfflineMaps")
{
    qmlRegisterUncreatableType<OfflineMapsSettings>("QGroundControl.SettingsManager", 1, 0, "OfflineMapsSettings", "Reference only");

    static constexpr const char* kMaxDiskCacheKey = "MaxDiskCache";
    static constexpr const char* kMaxMemCacheKey  = "MaxMemoryCache";

    QSettings deprecatedSettings;
    QSettings newSettings;
    newSettings.beginGroup(_settingsGroup);
    if (deprecatedSettings.contains(kMaxDiskCacheKey)) {
        uint32_t maxDiskCache = deprecatedSettings.value(kMaxDiskCacheKey, 1024).toUInt();
        deprecatedSettings.remove(kMaxDiskCacheKey);
        newSettings.setValue("maxCacheDiskSize", maxDiskCache);
   }
    if (deprecatedSettings.contains(kMaxMemCacheKey)) {
        uint32_t maxMemCache = deprecatedSettings.value(kMaxMemCacheKey, 1024).toUInt();
        deprecatedSettings.remove(kMaxMemCacheKey);
        newSettings.setValue("maxCacheMemorySize", maxMemCache);
    }
}

DECLARE_SETTINGSFACT(OfflineMapsSettings, minZoomLevelDownload)
DECLARE_SETTINGSFACT(OfflineMapsSettings, maxZoomLevelDownload)
DECLARE_SETTINGSFACT(OfflineMapsSettings, maxTilesForDownload)
DECLARE_SETTINGSFACT(OfflineMapsSettings, maxCacheDiskSize)
DECLARE_SETTINGSFACT(OfflineMapsSettings, maxCacheMemorySize)
