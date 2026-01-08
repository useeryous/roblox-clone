#define SDL_MAIN_USE_CALLBACKS
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

static SDL_Window *window = NULL;
static SDL_Renderer *renderer = NULL;

SDL_AppResult SDL_AppInit(void **appstate, int argc, char **argv) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        return SDL_APP_ERROR;
    }
    window = SDL_CreateWindow("r-engine test", 800, 600, 0);
    if (!window) {
        SDL_Quit();
        return SDL_APP_ERROR;
    }
};

SDL_AppResult SDL_AppEvent(void *appstate, SDL_Event *event) {
    if (event->type == SDL_EVENT_QUIT) {
        return SDL_APP_QUIT;
    }
    return SDL_APP_CONTINUE;
}

void SDL_AppQuit(void *appstate, SDL_AppResult result) {

}