#ifndef INITSDL_H
#define INITSDL_H

#include "SDL.h"

class Start{

  public:
    Start();
    ~Start();
    bool Init_display(const char* name, int w, int h);
    void loop();

  // luu tru bien man hinh va renderer
    SDL_Window* screen;
    SDL_Renderer* renderer;
    //SDL_Event event;


};

#endif // INITSDL_H
