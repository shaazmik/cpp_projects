#ifndef COORDINATE_H
#define COORDINATE_H

#include <math.h>


const int Width  = 600;
const int Height = 600;
class CoordinateSystem
{
public:
    CoordinateSystem() = default;

    CoordinateSystem(double xMax, double yMax) : 
    m_xMax(xMax), m_yMax(yMax), 
    m_xScale(Width/xMax), m_yScale(Height/yMax),
    m_x0(xMax/2), m_y0(yMax/2)
    {
    }


private:
    double m_xMax, m_yMax     = NAN;
    double m_xScale, m_yScale = NAN;
    double m_x0, m_y0         = NAN;

};

#endif