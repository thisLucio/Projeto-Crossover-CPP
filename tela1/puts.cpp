
#include "SDL.h"

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = SDL_CreateWindow("SDL2",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        SDL_WINDOW_OPENGL);
    SDL_Surface* surface = SDL_GetWindowSurface(window);
    SDL_Rect rect = { 100,100,440,280 };
    SDL_FillRect(surface, &rect, SDL_MapRGB(surface->format, 255, 0, 0));
    SDL_UpdateWindowSurface(window);
    SDL_Delay(50000);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
