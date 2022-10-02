#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "../my_math.hpp"

class Sphere
{
public:
    Sphere(double x0, double y0, double z0, double R): m_x0(x0), m_y0(y0), m_z0(z0), m_R(R)
    {

    }
    Sphere() = default;
    ~Sphere()
    {
        m_x0 = Poison;
        m_y0 = Poison;
        m_z0 = Poison;
        m_R  = Poison;
    }

private:
    double m_x0, m_y0, m_z0 = NAN;
    double m_R              = NAN;
    
    double m_winX0, m_winY0, m_winZ0 = NAN;
    double m_winR                    = NAN;

    int m_colorRed   = 128;
    int m_colorGreen = 68;
    int m_colorBlue  = 190;

    friend class Graphics;
};


#endif