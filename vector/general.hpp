#ifndef CLOCK_H
#define CLOCK_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "./class_vector/vector.hpp"
#include "./class_coordinateSystem/coordinate.hpp"

const int Width  = 1920;
const int Height = 1080;


class Graphics
{
public:
    Graphics()
    {
        m_window.create(sf::VideoMode(Width, Height), "Paramon_64");
    }

    sf::RenderWindow m_window;

    void printCoordinateSystem(class CoordinateSystem& decartSys, float width, float height);

    void printVector(class Vector vector, class CoordinateSystem decartSys, double xPlace, double yPlace);

private:

    double m_winXCenter = Width/2;
    double m_winYCenter = Height/2;
};


#endif