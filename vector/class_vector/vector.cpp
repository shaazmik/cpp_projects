#include "vector.hpp"


void Vector::addVector(double x, double y)
{
    m_x += x;
    m_y += y;
}

void Vector::subVector(double x, double y)
{
    m_x -= x;
    m_y -= y;
}


void Vector::mulVector(double n_times)
{
    m_x *= n_times;
    m_y *= n_times;
}


void Vector::mulVector(double xN_times, double yN_times)
{
    m_x *= xN_times;
    m_y *= yN_times;
}


void Vector::divVector(double n_times)
{
    if (n_times < 0.0000001)
    {
        fprintf(stderr, "Can't div on zero\n");
        return;
    }
    m_x /= n_times;
    m_y /= n_times;
}


void Vector::divVector(double xN_times, double yN_times)
{
    if (xN_times + yN_times < 0.0000002)
    {
        fprintf(stderr, "Can't div on zero\n");
        return;
    }
    m_x /= xN_times;
    m_y /= xN_times;
}


Vector operator +(const Vector &v1, const Vector &v2)
{
    Vector result;
    
    result.m_x = v1.m_x + v2.m_x;
    result.m_y = v1.m_y + v2.m_y;

    return result;
}

Vector operator -(const Vector &v1, const Vector &v2)
{
    Vector result;
    
    result.m_x = v1.m_x - v2.m_x;
    result.m_y = v1.m_y - v2.m_y;

    return result;
}