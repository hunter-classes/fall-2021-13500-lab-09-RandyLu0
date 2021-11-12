#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include  "Coord3D.h"
using doctest::Approx;

Coord3D p1 = {3,4,12};
Coord3D v = {0,0,0};
Coord3D p2 = {1,1,1};
Coord3D* p3 = createCoord3D(7,24,0);

TEST_CASE("task A"){
    CHECK(length(&p1) == Approx(13).epsilon(0.00001));
    CHECK(length(&p2) == Approx(sqrt(3)).epsilon(0.00001));
    CHECK(length(&v) == Approx(0).epsilon(0.00001));
}

TEST_CASE("task B"){
    CHECK(fartherFromOrigin(&p1,&p2) == &p1);
    CHECK(fartherFromOrigin(&v,&p2) == &p2);
    CHECK(fartherFromOrigin(&v,&p1) == &p1);
}

TEST_CASE("task C"){
    move(&p1,&v,1);
    CHECK(length(&p1) == Approx(13).epsilon(0.00001));
    CHECK(length((&p2)) == Approx(sqrt(3)).epsilon(0.00001));

}

TEST_CASE("task E"){
    CHECK(length(p3) == Approx(25).epsilon(0.0004));
    CHECK(fartherFromOrigin(p3,&v)  == p3);
    move(p3,&v,1);
    CHECK(length(p3) == Approx(25).epsilon(0.0004));
    deleteCoord3D(p3);



}
