#include<SDL.h>
#pragma once

class Unit{
    public:
        SDL_Rect srcRect, moverRect;
        void draw(int x, int y);
        virtual void fly();
};

