#pragma once
#include "HUMania.hpp"
#include "bee.hpp"
#include "unit.hpp"
// bee implementation will go here.

Unit b;
vector<Unit> bee;
int position = 0; //this tells the position of the object 0=up 1=middle 2=down

// in project implementation this draw function should only be in superclass
void Bee::draw(int x, int y){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
    b.moverRect = (SDL_Rect){x, y, 50, 50}; //moverRect remains the same
        b.srcRect = (SDL_Rect){7,88,155,103}; //srcRect changed to bee up position
        bee.push_back(b); //pushes the Unit type object into the vector of bee
}


// fly() is overrided from the superclass
void Bee::fly() override{
    position = position % 3; //ensure that the position remains between 0 and 2
    for(int i = 0; i < bee.size(); i++){
        if (position == 0){
        bee[i].srcRect = (SDL_Rect){248, 432, 248, 179}; //changes the srcRect of bee to up position
        }
        else if (position == 1){
        bee[i].srcRect = (SDL_Rect){257, 24, 173, 134}; //changes the srcRect of bee to middle position
        }
        else if (position == 2){
        bee[i].srcRect = (SDL_Rect){257, 24, 173, 134}; //changes the srcRect of bee to down position
        }
        SDL_RenderCopy(gRenderer, assets, &bee[i].srcRect, &bee[i].moverRect);
        bee[i].moverRect.x+=5; // moves the bee two pixel towards right
        if (bee[i].moverRect.x + 5 < 1000) { //checks if the value of x is less than the screen width
            bee[i].moverRect.x+=5; // moves the bee two pixel towards right
        }
        else { //if value of x exceeds screen width then it assigns value of x to zero
            bee[i].moverRect.x = 0; 
        }
    }
}

Bee::Bee(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    b.srcRect = (SDL_Rect){63,619,151,166}; //up
    b.srcRect = (SDL_Rect){234,630,163,162}; //middle
    b.srcRect = (SDL_Rect){409,650,171,147}; //down


    // it will display bee on x = 30, y = 40 location, the size of bee is 50 width, 60 height
    b.moverRect = (SDL_Rect){30, 40, 50, 50};
}
