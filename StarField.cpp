#include"Star.h"

int main(int argc, char* argv[]) {
    int frameStart = 0;
    int frameTime = 0;
    int frameDelay = 0;
    //window
    Window window1("StarField", 600, 600);
    //creating stars
    Star Starset;
    float x;
    float y = 0.5;
    //The window is open: could enter program loop here  
    while (window1.isActive()){
        frameStart = SDL_GetTicks();
        window1.Clear();
        window1.Event();
        Starset.Update();
        Starset.Draw();
        window1.Present();
        frameTime = SDL_GetTicks() - frameStart;
        SDL_Delay(3.5);

    }


    //Clean up
    return 0;
}