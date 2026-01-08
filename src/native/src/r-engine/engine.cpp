#include "engine.h"
#include <SDL2/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <iostream>

static SDL_Window* window;
static SDL_Renderer* renderer;

int init(int argc, char* argv[]) {
	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		std::cout << "init video error\n";
		return 1;
	}

	window = SDL_CreateWindow(
		"bubox",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, 
		800, 600,
		SDL_WINDOW_SHOWN
	)
	
	if (!window) {
		std::cout << "window init error\n";
		SDL_Quit();
		return 1;
	}

	renderer = SDL_CreateRenderer(
		window, -1, SDL_RENDERER_ACCELERATED
	)

	bool running = true;

	SDL_Event event;

	while (running) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				running = false;
			}
		}

		SDL_SetRenderDrawColor(renderer, 20, 20, 20, 255);

		SDL_RenderClear(renderer);

		SDL_RenderPresent(renderer);
	}

	SDL_DestoryRenderer(renderer);
	SDL_DestoryWindow(window);
	SDL_Quit();

	return 0;
}

