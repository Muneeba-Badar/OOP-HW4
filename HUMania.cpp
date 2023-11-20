#include <iostream>
#include "HUMania.hpp"

void HUMania::drawObjects()
{
    // call draw functions of all the objects here
    p1.draw();
    b2.draw();
    b3.draw();

}


// creates new objects 
void HUMania::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
}
