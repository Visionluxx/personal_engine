#include <iostream>
#include "SDL.h"
#include <SDL_image.h>

using namespace std;

int non_main(int argc, char* argv[]){
    bool quit = false;
    SDL_Event event;

    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window * screen = SDL_CreateWindow("My SDL Empty Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(screen, -1, 0);

    SDL_Surface* jpg_image = IMG_Load ("a1.jpg");
    //SDL_Surface* image = SDL_LoadBMP("drone_c.bmp");

    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, jpg_image);

    const Uint8* keyboard = SDL_GetKeyboardState(NULL);

    while (!quit)
    {
      while (SDL_PollEvent(&event)){
        switch (event.type)
        {
            case SDL_QUIT:
                quit = true;
                break;
        }
      }

      if (keyboard[SDL_SCANCODE_A]){
          std::cout<<"hello";
        }
    }

    SDL_DestroyTexture(texture);
    SDL_FreeSurface(jpg_image);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(screen);

    IMG_Quit();
    SDL_Quit();

    return 0;
}


