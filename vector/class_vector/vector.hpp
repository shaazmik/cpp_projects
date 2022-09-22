#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <stdio.h>
#include "../vector_math.hpp"

class Vector
{
public:

    Vector(double x, double y, double z): m_x(x), m_y(y), m_z(z), m_sqrLen(x*x + y*y + z*z)
    {

    }

    Vector() = default;

    ~Vector()
    {
        m_x = Poison;
        m_y = Poison;
        m_z = Poison;
        m_sqrLen = Poison;
    }

    void printCoordinate()
    {
        fprintf(stdout, "x = %lf\ny = %lf\ny = %lf\n\n", m_x, m_y, m_z);
    }

    void addVector(double x, double y, double z);
    
    void subVector(double x, double y, double z);

    void mulVector(double n_times);

    void mulVector(double xN_times, double yN_times, double zN_times);

    void divVector(double n_times);

    void divVector(double xN_times, double yN_times, double zN_times);

    double scalarProduct(const Vector &v2);

    void synchronization();

private:

    double m_x, m_y, m_z = NAN;
    double m_sqrLen      = NAN;

    bool m_sync = true;

    bool isEqualFloat(double first, double second);
    
    friend Vector operator +(const Vector &v1, const Vector &v2);

    friend Vector operator -(const Vector &v1, const Vector &v2);

    friend Vector operator *(const Vector &v1, const Vector &v2);

    friend class Graphics;

};


#endif