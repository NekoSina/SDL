#include"Star.h"

int main(int argc, char* argv[]) {
    int frameStart = 0;
    int frameTime = 0;
    int frameDelay = 0;
    //
    Window window1("StarField", 800, 600);
    //creating stars
    Star Starset(8);

    // The window is open: could enter program loop here  
    while (window1.isActive()){
        frameStart = SDL_GetTicks();
        window1.Clear();
        Starset.Draw();
        window1.Event();
        window1.Present();
        frameTime = SDL_GetTicks() - frameStart;

        if (frameDelay > frameTime) {
        SDL_Delay(frameDelay - frameTime);
        }
    }
    // Clean up
    return 0;
}