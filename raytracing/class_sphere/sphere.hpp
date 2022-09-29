#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "../my_math.hpp"

class Sphere
{
public:
    Sphere(double x0, double y0, double z0, double R): m_x0(x0), m_y0(y0), m_z0(z0), m_R(R)
    {

    }


private:
    double m_x0, m_y0, m_z0 = NAN;
    double m_R = NAN;
};


#endif