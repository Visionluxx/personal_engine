#ifndef USERCONTROL_H
#define USERCONTROL_H

#include <SDL.h>
#include <string>
#include "keyList.h"
#include "convertToSDL.h"

class UserControl {
  public:
    SDL_Event event;

    UserControl();
    ~UserControl();

    bool keyDown(Key key);

  //private:
    const Uint8* keyboard;

};

#endif // USERCONTROL_H
