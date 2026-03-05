#include "initSDL.h"
#include <SDL.h>
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
  Uint64 last = SDL_GetPerformanceCounter();
  return screen != NULL and renderer != NULL;
}


//tinh delta time
float Start::deltaTime (Uint64* last){
  Uint64 now = SDL_GetPerformanceCounter();
  float deltaTime = (now - *last) / (float)SDL_GetPerformanceFrequency();
  *last = now;
  return deltaTime;
}
