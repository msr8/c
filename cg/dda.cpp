#define ROWS 10
#define COLS 10
#include <iostream>
#include <cmath>
#include <SDL2/SDL.h>
using namespace std;


void dda(int x1, int y1, int x2, int y2, char arr[][COLS], char character) {
    // // Decrement the coordinates because a cartesian plane starts at (0,0)
    // x1--;
    // y1--;
    // x2--;
    // y2--;
    int dx = x2 - x1;
    int dy = y2 - y1;

    int num_steps = max(abs(dx), abs(dy));
    float x_inc = (float) dx / num_steps;
    float y_inc = (float) dy / num_steps;

    float x = x1;
    float y = y1;

    for (int i = 0; i <= num_steps; i++) {
        arr[(int) round(y)][(int) round(x)] = 1;
        x += x_inc;
        y += y_inc;
    }
}


void dda_sdl(int x1, int y1, int x2, int y2, SDL_Renderer* renderer) {
    // // Decrement the coordinates because a cartesian plane starts at (0,0)
    // x1--;
    // y1--;
    // x2--;
    // y2--;
    int dx = x2 - x1;
    int dy = y2 - y1;

    int num_steps = max(abs(dx), abs(dy));
    float x_inc = (float) dx / num_steps;
    float y_inc = (float) dy / num_steps;

    float x = x1;
    float y = y1;

    for (int i = 0; i <= num_steps; i++) {
        SDL_RenderDrawPoint(renderer, (int) round(x), (int) round(y));
        x += x_inc;
        y += y_inc;
    }
}




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
    dda_sdl(100, 10, 700, 500, renderer);
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







int old_main() {
    char arr[ROWS][COLS];
    // Fill the array with -
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = '-';
        }
    }

    // Initialise the graph
    dda(3,8, 0,0, arr, 'X');

    // // Print the array
    // for (int i = 0; i < ROWS; i++) {
    //     for (int j = 0; j < COLS; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Print the array (reverse rows cause of how x axis works)
    for (int i = ROWS-1; i >= 0; i--) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}