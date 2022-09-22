#include "general.hpp"
#include <stdio.h>

void Graphics::printCoordinateSystem(class CoordinateSystem& decartSys, float width, float height)
{
    decartSys.m_height = height;
    decartSys.m_width  = width;

    if (abs(decartSys.m_xMax) < Epsylon)
    {
        decartSys.m_xScale = 0;
    }
    else
    {
        decartSys.m_xScale = width/(2 * decartSys.m_xMax);
    }

    if (abs(decartSys.m_yMax) < Epsylon)
    {
        decartSys.m_yScale = 0;
    } 
    else
    {
        decartSys.m_yScale = height/(decartSys.m_yMax * 2);
    }

    sf::RectangleShape rectangle(sf::Vector2f(width, height));

    decartSys.m_winX0 = m_winXCenter + decartSys.m_xScale*decartSys.m_x0;
    decartSys.m_winY0 = m_winYCenter - decartSys.m_yScale*decartSys.m_y0;
    
    rectangle.setPosition(decartSys.m_winX0 - width/2, decartSys.m_winY0 - height/2);
    rectangle.setFillColor(sf::Color(15, 20, 30));
    m_window.draw(rectangle);

    if (decartSys.m_xScale > decartSys.m_yScale)
    {
        sf::CircleShape shape(0.015 * decartSys.m_yScale);
        shape.setPosition(decartSys.m_winX0, decartSys.m_winY0);
        shape.setFillColor(sf::Color::Red);
        m_window.draw(shape);
    }
    else 
    {
        sf::CircleShape shape(0.015 * decartSys.m_xScale);
        shape.setPosition(decartSys.m_winX0, decartSys.m_winY0);
        shape.setFillColor(sf::Color::Red);
        m_window.draw(shape);
    }
}

void Graphics::printVector(class Vector vector, class CoordinateSystem decartSys, double xPlace, double yPlace)
{
    double x0 = decartSys.m_winX0 + (xPlace - vector.m_x)*decartSys.m_xScale; 
    double y0 = decartSys.m_winY0 - (yPlace - vector.m_y)*decartSys.m_yScale;

    double xPlaceCur = decartSys.m_winX0 + xPlace*decartSys.m_xScale;
    double yPlaceCur = decartSys.m_winY0 - yPlace*decartSys.m_yScale;

    sf::Vertex line[]
    {
        sf::Vertex(sf::Vector2f(x0, y0)),
        sf::Vertex(sf::Vector2f(xPlaceCur, yPlaceCur))
    };

    m_window.draw(line, 2, sf::Lines);
    m_window.display();
}


// void printVector(class Vector vector, class CoordinateSystem coordinateSys, double x_place, double y_place)
// {
//     sf::RenderWindow window;
//     window.create(sf::VideoMode(Width, Height), "VectorWin");


//     sf::RectangleShape rectangle(sf::Vector2f(Width, Height));

//     rectangle.setFillColor(sf::Color(255, 204, 255));

//     while (window.isOpen())
//     {   
//         sf::Event event;

//         window.draw(rectangle);

//         drawVector(vector, x_scale, y_scale, x_place, y_place);

//         while (window.pollEvent(event))
//         {
//             if (event.type == sf::Event::Closed)
//                 window.close();
//         }

//         window.display();
//     }

//     return;
// }
