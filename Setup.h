#ifndef setup
#include<random>
#include <iostream>
#include "SDL.h"
#include"SDL_image.h"
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
float GetRandom(float min, float max);
int Sign(float x);
float Map(float x, float min1, float max1, float min2, float max2);
#endif