#include"Star.h"
//============================================================================> Constructor
Star::Star()
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
    for (i = 0; i < 15; i++)
    {
        RandomLocation(i);
        rect[i].h = 8;
        rect[i].w = 8;
    }
    std::cout<<"Star() randomlocation triggered"<<std::endl;

    
}
//============================================================================> Destructor
Star::~Star()
{
    SDL_DestroyTexture(_star_texture);
}
//============================================================================> 
void Star::Update(){
    z = z - 9;
}
//============================================================================> 
 void Star::Draw(){
     for (i = 0;i < 15; i++)
     {  
        m_x = rect[i].x - SCREEN_WIDTH/2;
        m_y = rect[i].y - SCREEN_HEIGHT/2;
        rect[i].h = Map(z, 500, SCREEN_WIDTH, 20, 0);
        rect[i].w = Map(z, 500, SCREEN_WIDTH, 20, 0);
        rect[i].x = Map(m_x/z, -0.5, 0.5, 0, SCREEN_WIDTH);
        rect[i].y = Map(m_y/z, -0.5, 0.5, 0, SCREEN_HEIGHT);
        if(rect[i].x > SCREEN_WIDTH|| rect[i].x < 0 || rect[i].y> SCREEN_HEIGHT || rect[i].y< 0){
            RandomLocation(i);
        }

        SDL_RenderCopy(Window::m_renderer, _star_texture, nullptr, &rect[i]);
        //std::cin.get();
     }
      
 }
//============================================================================> 
void Star::RandomLocation(int starindex){
    rect[starindex].x = GetRandom(0, SCREEN_WIDTH);
    rect[starindex].y = GetRandom(0, SCREEN_HEIGHT);

    z = SCREEN_WIDTH;
}
//============================================================================> 