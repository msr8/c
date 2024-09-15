#define ROWS 10
#define COLS 10
#include <iostream>
#include <cmath>
#include <SDL2/SDL.h>
using namespace std;



void dda_sdl(int x1, int y1, int x2, int y2, SDL_Renderer* renderer) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int num_steps = max(abs(dx), abs(dy));
    float x_inc = (float) dx / num_steps;
    float y_inc = (float) dy / num_steps;

    float x = x1;
    float y = y1;

    for (int i = 0; i <= num_steps; i++) {
        SDL_RenderDrawPoint(renderer, (int)round(x), (int)round(y));
        x += x_inc;
        y += y_inc;
    }
}




int main() {
    // Initialize SDL
    SDL_Init(SDL_INIT_VIDEO);
    // Create an SDL window
    SDL_Window* window = SDL_CreateWindow("SDL2 Example", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 600, SDL_WINDOW_SHOWN);
    // Create an SDL renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // Set background to white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);
    // Set the drawing color to black
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    // Draw the __
    dda_sdl(150,200,450,200, renderer);
    // Draw the /
    dda_sdl(150,200,300,100, renderer);
    // Draw the other slant
    dda_sdl(450,200,300,100, renderer);
    // Draw the square of the house
    dda_sdl(150,200,150,400, renderer);
    dda_sdl(450,200,450,400, renderer);
    dda_sdl(150,400,450,400, renderer);
    
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