#include<SDL.h>
#include "drawing.hpp"
#pragma once

class Pigeon{

    SDL_Rect srcRect, moverRect;
    int frame = 0;

public:
    // add the fly function here as well.
    void draw(int x, int y);
    void fly();
    Pigeon(); 
    // may add other overloaded constructors here... 
};
