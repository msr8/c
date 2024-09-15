#include <SDL2/SDL.h>
#include <iostream>
using namespace std;

int main() {
    // Initialize SDL
    SDL_Init(SDL_INIT_VIDEO);
    // Create an SDL window
    SDL_Window* window = SDL_CreateWindow("SDL2 Example", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
    // Create an SDL renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // Set background to white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);
    // Set the drawing color to black
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    // Draw a line
    SDL_RenderDrawLine(renderer, 100, 10, 700, 500);
    // Draw a rectangle
    SDL_RenderDrawRect(renderer, new SDL_Rect{200, 200, 400, 200});
    // Fill the rectangle
    SDL_RenderFillRect(renderer, new SDL_Rect{200, 200, 400, 200});
    // Manually set a pixel
    SDL_RenderDrawPoint(renderer, 50, 50);

    // Present the renderer
    SDL_RenderPresent(renderer);

    // Main loop to keep the window open
    SDL_Event e;
    bool quit = false;
    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {quit = true;}
        }
    }

    // Clean up
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
