#include <iostream>
#include <SDL2/SDL.h>

#include "RenderWindow.hpp"
const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[]){

  SDL_Init( SDL_INIT_EVERYTHING);

  RenderWindow window("cool", WIDTH, HEIGHT);


  SDL_Event event;
  
  bool gameRunning = true;
  while (gameRunning)
  {
    while (SDL_PollEvent(&event))
    {
      if (SDL_QUIT == event.type){
        gameRunning = false;
      }
    }
  }
  
  SDL_QUIT;
  return EXIT_SUCCESS;
}