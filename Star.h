#ifndef Star

#include"window.h"
class Star : public Window
{
private:
    float m_x, m_y, m_z;
    SDL_Rect rect[100];
    const std::string &image_path = "Starfield/res/star.png";
    SDL_Texture* _star_texture = nullptr;
public:
    Star(int s);
    ~Star();
    void Update();
    void Draw();
    void RandomLocation();
};
#endif