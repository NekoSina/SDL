#include"Setup.h"
//#include "string"
class Window
{
private:
    bool _isActive = true;
    int m_width;
    int m_height;
    std::string m_title;
    SDL_Window *m_window = nullptr;
    bool Init();
protected:
    SDL_Renderer* m_renderer = nullptr;
    SDL_Texture* m_texture = nullptr;

public:
    Window(std::string title, int width, int height);
    Window();
    ~Window();
    bool isActive()const;
    void Event();
    void Clear();
    void SetColour(Uint8 r, Uint8 g, Uint8 b, Uint8 a);
};