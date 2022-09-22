#include "general.hpp"
#include <unistd.h>

int main()
{
    Vector v1(1, 1, 0);
    CoordinateSystem coorSys1(3, 2, 0, 0);
    
    Graphics scene1;
    scene1.printCoordinateSystem(coorSys1, 960, 1080);
    

    return 0;
}