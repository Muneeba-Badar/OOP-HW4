#include<SDL.h>
#include "drawing.hpp"
#pragma once

class Bee{

    SDL_Rect srcRect, moverRect;
    int frame = 2;

public:
    // add the fly function here as well.
    void draw(int x, int y);
    void fly();
    Bee(); 
    // may add other overloaded constructors here... 
};
