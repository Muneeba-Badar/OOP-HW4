#include<SDL.h>
class Unit{
    public:
        SDL_Rect srcRect, moverRect;
        void draw();
        virtual void fly();
}

