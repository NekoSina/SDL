#ifndef Star

#include"window.h"
class Star : public Window
{
private:
    float m_x, m_y;
    int z;
    int i = 0;
    const std::string &image_path = "Starfield/res/star.png";
    SDL_Texture* _star_texture = nullptr;
    void Translate(float x, float y);
    void RandomLocation(int starindex);

    SDL_Rect rect[15];
public:
    Star();
    ~Star();
    void Update();
    void Draw();
};
#endif