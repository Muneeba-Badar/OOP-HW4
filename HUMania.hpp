#pragma once
#include<SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include "unit.hpp"
#include<vector>
#include<list>
using namespace std;

class HUMania{

    //Create your list here
    public:
    vector<Unit> pigeon;
    vector<Unit> butterfly;
    vector<Unit> bee;
    
    void drawObjects(); 
    void createObject(int, int);
    
    // create destructor which deletes all dynamic objects
};