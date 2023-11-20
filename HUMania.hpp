#include<SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include<vector>
#include<list>
using namespace std;

class HUMania{
    Pigeon p1;  //pigeon object
    Butterfly b2; //butterfly object
    Bee b3; //bee object

    //Create your list here
    public:

    vector<Pigeon> p;
    vector<Butterfly> b;
    vector<Bee> be;
    
    void drawObjects(); 
    void createObject(int, int);
    
    // create destructor which deletes all dynamic objects
};