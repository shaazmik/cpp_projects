#include "general.hpp"
#include <unistd.h>

int main()
{
    CoordinateSystem raySys(960, 540, 0, 0);
    Sphere           raySphere(0, 0, 0, 350);
    Graphics         rayWin(1920, 1080);
    rayWin.launchRayCasting(raySphere, raySys);

    return 0;
}