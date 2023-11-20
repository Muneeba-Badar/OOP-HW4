#include <iostream>
#include "HUMania.hpp"
#pragma once

void HUMania::drawObjects()
{
    // call draw functions of all the objects here
    p.draw();
    bt.draw();
    b.draw();

}


// creates new objects 
void HUMania::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
}
