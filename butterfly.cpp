#include "SDL.h"
#include "HUMania.hpp"
#include "butterfly.hpp"
#include "unit.hpp"
#pragma once

// butterfly implementation will go here.
Unit bt;
vector<Unit> butterfly;

int position = 0; //this tells the position of the object 0=up 1=middle 2=down

// in project implementation this draw function should only be in superclass
void Butterly::draw(int x, int y){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
    bt.moverRect = (SDL_Rect){x, y, 50, 50}; //moverRect remains the same
        bt.srcRect = (SDL_Rect){7,88,155,103}; //srcRect changed to butterfly up position
        butterfly.push_back(bt); //pushes the Unit type object into the vector of butterfly
}


// fly() is overrided from the superclass
void Buttefly::fly() override{
    position = position % 3; //ensure that the position remains between 0 and 2
    for(int i = 0; i < butterfly.size(); i++){
        if (position == 0){
        butterfly[i].srcRect = (SDL_Rect){248, 432, 248, 179}; //changes the srcRect of butterfly to up position
        }
        else if (position == 1){
        butterfly[i].srcRect = (SDL_Rect){257, 24, 173, 134}; //changes the srcRect of butterfly to middle position
        }
        else if (position == 2){
        butterfly[i].srcRect = (SDL_Rect){257, 24, 173, 134}; //changes the srcRect of butterfly to down position
        }
        SDL_RenderCopy(gRenderer, assets, &butterfly[i].srcRect, &butterfly[i].moverRect);
        butterfly[i].moverRect.x+=5; // moves the butterfly two pixel towards right
        if (butterfly[i].moverRect.x + 5 < 1000) { //checks if the value of x is less than the screen width
            butterfly[i].moverRect.x+=5; // moves the butterfly two pixel towards right
        }
        else { //if value of x exceeds screen width then it assigns value of x to zero
            butterfly[i].moverRect.x = 0; 
        }
    }
}

Butterly::Butterly(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    bt.srcRect = (SDL_Rect){256,24,174,134}; //middle
    bt.srcRect = (SDL_Rect){257,182,192,214}; //down
    bt.srcRect = (SDL_Rect){248,433,247,178}; //up


    // it will display butterfly on x = 30, y = 40 location, the size of butterfly is 50 width, 60 height
    bt.moverRect = (SDL_Rect){30, 40, 50, 50};
}
