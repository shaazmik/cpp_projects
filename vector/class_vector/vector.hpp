#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <math.h>
#include <stdio.h>

const size_t Poison = -1337;

class Vector
{
public:

    Vector(double x, double y): m_x(x), m_y(y), m_sqrLen(x*x + y*y)
    {

    }

    Vector() = default;

    ~Vector()
    {
        m_x = Poison;
        m_y = Poison;
        m_sqrLen = Poison;
    }

    void printCoordinate()
    {
        fprintf(stdout, "x = %lf\ny = %lf\n", m_x, m_y);
    }

    void addVector(double x, double y);
    
    void subVector(double x, double y);

    void mulVector(double n_times);

    void mulVector(double xN_times, double yN_times);

    void divVector(double n_times);

    void divVector(double xN_times, double yN_times);

private:

    double m_x, m_y = NAN;
    double m_sqrLen = NAN;
    
    friend Vector operator +(const Vector &v1, const Vector &v2);

    friend Vector operator -(const Vector &v1, const Vector &v2);
};


#endif