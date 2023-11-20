#include "unit.hpp"
#pragma once

void draw(){

    // this generates a random number between 0 and 2 which will help in random generation of objects
    int r = (rand() % 3);

    if (r == 0){ // if random number generated is 0 then pigeon will be created
        p.moverRect = (SDL_Rect){x, y, 50, 50}; //moverRect remains the same
        p.srcRect = (SDL_Rect){7,88,155,103}; //srcRect changed to pigeon up position
        pigeon.push_back(p); //pushes the Unit type object into the vector of pigeon
    }
    else if (r == 1){ // if random number generated is 1 then butterfly will be created
        bt.moverRect = (SDL_Rect){x, y, 50, 50}; //moverRect remains the same
        bt.srcRect = (SDL_Rect){248,433,247,178}; //srcRect changed to butterfly up position
        butterfly.push_back(bt); //pushes the Unit type object into the vector of butterfly
    }
    else if (r == 2){ // if random number generated is 2 then bee will be created
        b.moverRect = (SDL_Rect){x, y, 50, 50}; //moverRect remains the same
        b.srcRect = (SDL_Rect){63,619,151,166}; //srcRect changed to bee up position
        bee.push_back(b); //pushes the Unit type object into the vector of bee
    }
}

virtual void fly(){

}