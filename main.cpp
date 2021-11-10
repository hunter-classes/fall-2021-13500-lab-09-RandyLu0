#include <iostream>


#include "funcs.h"
#include "Coord3D.h"

int main(){
    Coord3D a;
    a.x = 1;
    a.y = 2;
    a.z = 3;
    Coord3D pointP = {5,12};
    std::cout << length(&pointP) << "\n";
    std::cout << length(fartherFromOrigin(&pointP,&a)) << "\n";
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
    return 0;
}
