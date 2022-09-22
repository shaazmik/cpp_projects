#ifndef COORDINATE_H
#define COORDINATE_H

#include "../vector_math.hpp"

class CoordinateSystem
{
public:
    CoordinateSystem() = default;

    CoordinateSystem(double xMax, double yMax, double x0, double y0) : 
    m_xMax(xMax), m_yMax(yMax),
    m_x0(x0), m_y0(y0)
    {
    }

private:
    double m_xMax, m_yMax     = NAN;
    double m_x0, m_y0         = NAN;
    double m_xScale, m_yScale = NAN;
    double m_width, m_height  = NAN;
    double m_winX0, m_winY0   = NAN;

    bool m_sync = true;

    friend class Graphics;

};

#endif