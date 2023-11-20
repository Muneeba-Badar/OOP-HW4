#include "HUMania.hpp"
#include "pigeon.hpp"
#include "unit.hpp"
#pragma once
// pigeon implementation will go here.

Unit p;
vector<Unit> pigeon;

int position = 0; //this tells the position of the object 0=up 1=middle 2=down

// in project implementation this draw function should only be in superclass
void Pigeon::draw(int x, int y){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
    p.moverRect = (SDL_Rect){x, y, 50, 50}; //moverRect remains the same
        p.srcRect = (SDL_Rect){7,88,155,103}; //srcRect changed to pigeon up position
        pigeon.push_back(p); //pushes the Unit type object into the vector of pigeon
}


// fly() is overrided from the superclass
void Pigeon::fly() override{
    position = position % 3; //ensure that the position remains between 0 and 2
    for(int i = 0; i < pigeon.size(); i++){
        if (position == 0){
        pigeon[i].srcRect = (SDL_Rect){7,88,155,103}; //changes the srcRect of pigeon to up position
        }
        else if (position == 1){
        pigeon[i].srcRect = (SDL_Rect){0, 237, 153, 84}; //changes the srcRect of pigeon to middle position
        }
        else if (position == 2){
        pigeon[i].srcRect = (SDL_Rect){2, 361, 159, 124}; //changes the srcRect of pigeon to down position
        }
        SDL_RenderCopy(gRenderer, assets, &pigeon[i].srcRect, &pigeon[i].moverRect);
        if (pigeon[i].moverRect.x + 5 < 1000) { //checks if the value of x is less than the screen width
            pigeon[i].moverRect.x+=5; // moves the pigeon five pixel towards right
        }
        else { //if value of x exceeds screen width then it assigns value of x to zero
            pigeon[i].moverRect.x = 0;
        }
    }
}

Pigeon::Pigeon(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    p.srcRect = (SDL_Rect){7,88,155,103}; //up
    p.srcRect = (SDL_Rect){0,237,153,84}; //middle
    p.srcRect = (SDL_Rect){2,361,159,124}; //down


    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    p.moverRect = (SDL_Rect){30, 40, 50, 50};
}

