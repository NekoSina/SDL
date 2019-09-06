#include"Star.h"
Star::Star()
{
    RandomLocation();
    
}

Star::~Star()
{
}
void Star::Update(){

}
void Star::Draw(){
    
}
void Star::RandomLocation(){
    x = GetRandom(-SCREEN_WIDTH/2, SCREEN_WIDTH/2);
    y = GetRandom(-SCREEN_HEIGHT/2, SCREEN_HEIGHT/2);
    z = GetRandom(0, SCREEN_WIDTH);
}
