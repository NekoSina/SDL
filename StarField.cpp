#include "window.h"

int main(int argc, char* argv[]) {
    //creating an array of stars
    Window window1("StarField", 800, 600);

    // The window is open: could enter program loop here  
    while (window1.isActive()){
        window1.Event();
        window1.Clear();
    }
    
    
    // Clean up
    return 0;
}