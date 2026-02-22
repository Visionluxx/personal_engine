#ifndef USERCONTROL_H
#define USERCONTROL_H

#include <SDL.h>
#include "keyList.h"

class UserControl {
  public:
    SDL_Event event;
    const Uint8* keyboard;

    UserControl();
    ~UserControl();

    bool keyDown(Key key);
};

#endif // USERCONTROL_H
