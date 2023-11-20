#include<SDL.h>
#include "drawing.hpp"
#pragma once

class Butterfly{

    SDL_Rect srcRect, moverRect;
    int frame = 1;

public:
    // add the fly function here as well.
    void draw();
    void fly();
    Butterfly(); 
    // may add other overloaded constructors here... 
};
