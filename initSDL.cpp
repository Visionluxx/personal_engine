#include "initSDL.h"
#include "SDL.h"
#include <iostream>
#include <string>

//set gia tri ve null
Start::Start(){
  screen = NULL;
  renderer = NULL;
}

// giai phong bo nho
Start::~Start(){
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(screen);
  SDL_Quit();
}

// khoi tao man hinh va renderer
bool Start::Init_display(const char* name, int w, int h){
  //SDL_Event event;
  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_Window * screen = SDL_CreateWindow(name, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h, 0);
  SDL_Renderer* renderer = SDL_CreateRenderer(screen, -1, 0);
  return screen != NULL and renderer != NULL;
}

/*void Start::loop(){
  bool quit = false;
  while (!quit)
    {
      SDL_WaitEvent(&event);


        switch (event.type)
        {
            case SDL_QUIT:
                quit = true;
                break;
        }

    }
}*/

