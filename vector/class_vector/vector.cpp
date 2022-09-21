#include "vector.hpp"




void Vector::addVector(double x, double y, double z)
{
    m_x += x;
    m_y += y;
    m_z += z;
}

void Vector::subVector(double x, double y, double z)
{
    m_x -= x;
    m_y -= y;
    m_z -= z;
}


void Vector::mulVector(double n_times)
{
    m_x *= n_times;
    m_y *= n_times;
    m_z *= n_times;
}


void Vector::mulVector(double xN_times, double yN_times, double zN_times)
{
    m_x *= xN_times;
    m_y *= yN_times;
    m_z *= zN_times;
}


void Vector::divVector(double n_times)
{
    if (isEqualFloat(n_times, 0))
    {
        fprintf(stderr, "Can't div on zero\n");
        return;
    }
    m_x /= n_times;
    m_y /= n_times;
    m_z /= n_times;
}


void Vector::divVector(double xN_times, double yN_times, double zN_times)
{
    if (isEqualFloat(xN_times + yN_times + zN_times, 0))
    {
        fprintf(stderr, "Can't div on zero\n");
        return;
    }
    m_x /= xN_times;
    m_y /= yN_times;
    m_z /= zN_times;
}

double Vector::scalarProduct(const Vector &v2)
{
    return (v2.m_x * m_x + v2.m_y * m_y + v2.m_z * m_z);
}


bool Vector::isEqualFloat(double first, double second)
{
    return ((first - second) < Epsylon);
}


Vector operator +(const Vector &v1, const Vector &v2)
{
    Vector result;
    
    result.m_x = v1.m_x + v2.m_x;
    result.m_y = v1.m_y + v2.m_y;
    result.m_z = v1.m_z + v2.m_z;

    return result;
}

Vector operator -(const Vector &v1, const Vector &v2)
{
    Vector result;
    
    result.m_x = v1.m_x - v2.m_x;
    result.m_y = v1.m_y - v2.m_y;
    result.m_z = v1.m_z - v2.m_z;

    return result;
}


Vector operator *(const Vector &v1, const Vector &v2)
{
    Vector result;

    result.m_x = (v1.m_y * v2.m_z - v1.m_z * v2.m_y);
    result.m_y = (v1.m_z * v2.m_x - v1.m_x * v2.m_z);
    result.m_z = (v1.m_x * v2.m_y - v1.m_y * v2.m_x);

    return result;
}
