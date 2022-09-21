#include "clock.hpp"

int main()
{
    Vector v1(1, 0, 0);
    Vector v2(-1, 0, 0);

    Vector v3 = v1 * v2;

    v3.printCoordinate();

    return 0;
}