#include "initSDL.h"
#include "control\userControl.h"
#include "control\keyList.h"
#include <iostream>

int main(int argc, char* argv[]){
  bool quit = false;
  Start st;
  st.Init_display("hello", 500, 500);

  UserControl ctr;

  while (!quit){
      while (SDL_PollEvent(&ctr.event)){

        switch (ctr.event.type)
        {
            case SDL_QUIT:
                quit = true;
                break;
        }

        if (ctr.keyDown (KEY_1)){
          std::cout<<"hello";
        }
      }



    }
    return 0;
}
