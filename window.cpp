#include"window.h"
bool Window::Init(){
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        std::cout<<"SDL_INIT_VIDEO failed "<< SDL_GetError()<<std::endl;// Initialize SDL2
        return false;
    }              

    // Create an application window with the following settings:
    m_window = SDL_CreateWindow(
        m_title.c_str(),                       
        SDL_WINDOWPOS_UNDEFINED,           
        SDL_WINDOWPOS_UNDEFINED,           
        SCREEN_WIDTH,                      // width, in pixels
        SCREEN_HEIGHT,                     // height, in pixels
        SDL_WINDOW_OPENGL                  
    );

    // Check that the window was successfully created
    if (m_window == nullptr) {
        // In the case that the window could not be made...
        std::cout<<"SDL_INIT_VIDEO failed "<< SDL_GetError()<<std::endl;
        return false;
    }
    if(IMG_Init(IMG_INIT_PNG)  != IMG_INIT_PNG){
        std::cerr<<"IMG_INIT() "<<SDL_GetError()<<std::endl;
        return false;
    }
    m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);
    if (m_renderer == nullptr){
        std::cerr<<"SDL_CREATERENDERER failed "<< SDL_GetError()<<std::endl;
        return false;
    }
    return true;
}
Window::Window(std::string title, int width, int height):
 m_title(title), m_width(width), m_height(height)
{
    _isActive = Init();
}

Window::~Window()
{
    SDL_DestroyRenderer(m_renderer);
    SDL_DestroyWindow(m_window);
    IMG_Quit();
    SDL_Quit();
}
bool Window::isActive()const{ return _isActive;}
void Window::Event(){
    SDL_Event event;
    if(SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_QUIT:
            _isActive = false;
            break;
        
        default:
            break;
        }
    }
}
void Window::Clear(){
    SetColour(76, 114, 173, 0);
    SDL_RenderClear(m_renderer);
    SDL_Rect rect;
    rect.h = 200;
    rect.w = 300;
    rect.x = (SCREEN_WIDTH - rect.w)/2;;
    rect.y = (SCREEN_HEIGHT - rect.h)/2;
    SetColour(76, 165, 173,0);
    SDL_RenderFillRect(m_renderer, &rect);
    SDL_RenderPresent(m_renderer);
}
void Window::SetColour(Uint8 r, Uint8 g, Uint8 b, Uint8 a){
    SDL_SetRenderDrawColor(m_renderer, r, g, b, a);
}
