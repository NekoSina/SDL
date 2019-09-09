#ifndef window
#include"Setup.h"
//#include "string"
class Window
{
private:
    bool _isActive = true;
    int m_width;
    int m_height;
    std::string m_title;
    static SDL_Window *m_window;
    bool Init();
protected:
    static SDL_Renderer* m_renderer;
    
public:
    Window(std::string title, int width, int height);
    Window();
    ~Window();
    bool isActive()const;
    void Event();
    void Clear();
    void SetColour(Uint8 r, Uint8 g, Uint8 b, Uint8 a);
};
#endif