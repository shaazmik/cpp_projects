#include <math.h>

const size_t Poison = -1337;

class Vector
{
    double m_x, m_y;
    double m_sqrLen;

    Vector(double x, double y): m_x(x), m_y(y), m_sqrLen(x*x + y*y)
    {

    }
    ~Vector()
    {
        m_x = Poison;
        m_y = Poison;
        m_sqrLen = Poison;
    }

    void addedVector(double x, double y)
    {
        m_x += x;
        m_y += y;
    }



};
