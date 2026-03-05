#ifndef INITSDL_H
#define INITSDL_H

#include <SDL.h>

class Start{

  public:
    Start();
    ~Start();
    bool Init_display(const char* name, int w, int h);
    float deltaTime(Uint64* last);

  // luu tru bien man hinh va renderer
    Uint64 last;
    Uint64 now;
    SDL_Window* screen;
    SDL_Renderer* renderer;
    //SDL_Event event;


};

#endif // INITSDL_H
