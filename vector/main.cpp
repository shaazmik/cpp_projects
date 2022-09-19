#include "clock.hpp"

int main()
{
    Vector v1(9.1, 23);
    Vector v2(3, -5);

    Vector v3 = v1 + v2;

    v3.printCoordinate();

    return 0;
}