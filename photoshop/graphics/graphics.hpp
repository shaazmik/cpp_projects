#ifndef WIN_HPP
#define WIN_HPP

#include <SFML/Graphics.hpp>
#include "../constants.hpp"

class Graphics
{
public:
    Graphics(const int width, const int height): m_width(width), m_height(height)
    {
        m_window.create(sf::VideoMode(width, height), "Paramon_64");
    }
    
    Graphics() = default;
    
    void setSize(sf::RectangleShape widget, const int width, const int height);

    void setFillColor(sf::RectangleShape widget, const sf::Color& color);

    ~Graphics()
    {
        m_window.clear();
    }

    sf::RenderWindow m_window;

private:
    int m_width  = WinWidth;
    int m_height = WinHeight;
    

    friend class Widget;
};


#endif