#include"Star.h"
Star::Star(int s)
{
    auto surface = IMG_Load(image_path.c_str());
    if (!surface){
        std::cerr << "IMG_Load((image_path.c_str())) "<< SDL_GetError()<<std::endl;  
    }
    _star_texture = SDL_CreateTextureFromSurface(Window::m_renderer, surface);
    if(!_star_texture){
        std::cerr<< "SDL_CreateTextureFromSurface(m_renderer, surface) "<<SDL_GetError()<<std::endl;
    }
    SDL_FreeSurface(surface);
    
    for (int i = 0; i < 100; i++)
    {
        RandomLocation(); 
        rect[i].h = s;
        rect[i].w = s;
        rect[i].x = m_x;
        rect[i].y = m_y;
    }    
}

Star::~Star()
{
    SDL_DestroyTexture(_star_texture);
}
void Star::Update(){

}
void Star::Draw(){
    for (size_t i = 0; i < 100; i++)
    {   
        SDL_RenderCopy(Window::m_renderer, _star_texture, nullptr, &rect[i]);
    }
    Window::Clear();
}
void Star::RandomLocation(){
    m_x = GetRandom(0, SCREEN_WIDTH);
    m_y = GetRandom(0, SCREEN_HEIGHT);
    m_z = GetRandom(0, SCREEN_WIDTH);
}