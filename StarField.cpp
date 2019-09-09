#include"Star.h"

int main(int argc, char* argv[]) {
    //
    Window window1("StarField", 800, 600);
    //creating stars
    Star Starset(8);

    // The window is open: could enter program loop here  
    while (window1.isActive()){
        Starset.Draw();
        window1.Event();
        window1.Clear();
    }
    // Clean up
    return 0;
}