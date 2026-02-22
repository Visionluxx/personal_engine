#include "userControl.h"

UserControl::UserControl(){
  SDL_Event event;
  keyboard = SDL_GetKeyboardState(NULL);
}

UserControl::~UserControl(){}

bool UserControl::keyDown(Key key){
    return keyboard[key];

}
