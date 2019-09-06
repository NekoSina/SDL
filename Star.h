#ifndef Star

#include"window.h"
class Star : public Window
{
private:
    float x,y,z;
    static SDL_Surface* star;
public:
    Star();
    ~Star();
    void Update();
    void Draw();
    void RandomLocation();
};
#endif