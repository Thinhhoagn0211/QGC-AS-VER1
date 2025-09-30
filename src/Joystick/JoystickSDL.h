/****************************************************************************
 *
 * (c) 2009-2024 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#pragma once

#include <QtCore/QLoggingCategory>
#include "MultiVehicleManager.h"
#include "Joystick.h"
#include <SDL.h> 

// struct SDL_Joystick;
// typedef struct SDL_Joystick SDL_Joystick;

// struct _SDL_GameController;
// typedef struct _SDL_GameController SDL_GameController;

Q_DECLARE_LOGGING_CATEGORY(JoystickSDLLog)

class JoystickSDL : public Joystick
{
public:
    explicit JoystickSDL(const QString& name,
                         int axisCount,
                         int buttonCount,
                         int hatCount,
                         int index,
                         bool isGameController,
                         MultiVehicleManager* multiVehicleManager);
    ~JoystickSDL() override;

    int instanceId() const { return _instanceId; }
    void setInstanceId(int instanceId) { _instanceId = instanceId; }

    // bool requiresCalibration() const final { return !_isGamepad; }
    
    static bool init();
    static QMap<QString, Joystick*> discover(MultiVehicleManager* _multiVehicleManager); 

private:
    bool _open() final;
    void _close() final;
    bool _update() final;

    bool _getButton(int idx) const final;
    int _getAxis(int idx) const final;
    bool _getHat(int hat, int idx) const final;

    static void _loadGamepadMappings();

    QList<int> _gamepadAxes;
    QList<int> _nonGamepadAxes;
    bool _isGamepad = false;
    int _instanceId = -1;
    bool    _isGameController;
    int     _index;
    SDL_Joystick*       sdlJoystick;
    SDL_GameController* sdlController;
};
