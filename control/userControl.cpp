#include "userControl.h"

UserControl::UserControl(){
  SDL_Event event;
  const Uint8* keyboard = SDL_GetKeyboardState(NULL);
}

UserControl::~UserControl(){}

bool UserControl::keyDown(Key key){
    return keyboard[KEY_TO_SCANCODE[key]];

}
