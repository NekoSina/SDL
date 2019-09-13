#include"window.h"
//==============================================================================> static member initialization  
SDL_Window* Window::m_window = nullptr;
SDL_Renderer* Window::m_renderer = nullptr;
//==============================================================================> SDL and SDL extentions initializer
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

    if (m_window == nullptr) {
        std::cout<<"SDL_INIT_VIDEO failed "<< SDL_GetError()<<std::endl;
        return false;
    }
    if(IMG_Init(IMG_INIT_PNG)  != IMG_INIT_PNG){
        std::cerr<<"IMG_INIT() "<<SDL_GetError()<<std::endl;
        return false;
    }
    Window::m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);
    if (Window::m_renderer == nullptr){
        std::cerr<<"SDL_CREATERENDERER failed "<< SDL_GetError()<<std::endl;
        return false;
    }
    return true;
}
//============================================================================> Constructor
Window::Window(std::string title, int width, int height):
 m_title(title), m_width(width), m_height(height)
{
    _isActive = Init();
}
Window::Window(){
    std::cout<< "default constructor called" << std::endl;
}
//=============================================================================> Destructor
Window::~Window()
{
    SDL_DestroyRenderer(Window::m_renderer);
    SDL_DestroyWindow(m_window);
    IMG_Quit();
    SDL_Quit();
}
//==============================================================================> Bool Loop
bool Window::isActive()const{ return _isActive;}
//==============================================================================> Event handler
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
//================================================================================> Background colour
void Window::Clear(){
    SDL_PumpEvents();
    int x, y;

    SDL_GetMouseState(&x, &y);
    //std::cout<<colourr<<", "<<colourg<<", "<< colourb<<std::endl;
    SetColour(0, 0, 0, 0);
    SDL_RenderClear(Window::m_renderer);
    
}
//=================================================================================> setting the renderer colour
void Window::SetColour(Uint8 r, Uint8 g, Uint8 b, Uint8 a){
    SDL_SetRenderDrawColor(Window::m_renderer, r, g, b, a);
}
//=================================================================================> Present
void Window::Present(){
    SDL_RenderPresent(Window::m_renderer);
}