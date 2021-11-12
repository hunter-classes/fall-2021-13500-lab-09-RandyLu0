#include <iostream>
#include "funcs.h"
#include "Coord3D.h"

int main(){
    Coord3D a = {1,2,3};
    Coord3D pointP = {5,12,0};
    std::cout << "Length of (5,12,0): " << length(&pointP) << "\n";
    std::cout << "Consider (1,2,3) and (5,12,0) the length of further point is: " << length(fartherFromOrigin(&pointP,&a)) << "\n";
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};
    move(&pos, &vel, 2.0);
    std::cout << "The point (0,0,100) after moving at (1,-5,.2) for 2 seconds: (";
    std::cout << pos.x << "," << pos.y << "," << pos.z << ")\n";
    Coord3D* p1  = createCoord3D(3,4,12);
    std::cout << "Length of dynamically allocated Coord3D object (3,4,12): " << length(p1) << "\n";
    deleteCoord3D(p1);
    return 0;
}
