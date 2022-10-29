#ifndef WIDGET_HPP
#define WIDGET_HPP

#include "../graphics/graphics.hpp"
#include "../constants.hpp"

class Widget
{
public:
    Widget(class Graphics* mainWin, int width, int height): m_mainWin(mainWin), m_width(width), m_height(height)
    {
        m_mainWin->setSize(m_rectangle, m_width, m_height);
    }

    Widget(class Graphics* mainWin): m_mainWin(mainWin)
    {
        m_mainWin->setSize(m_rectangle, WinWidth, WinHeight);
    }

    ~Widget()
    {
        m_mainWin = nullptr;
    }

    void setColor();
    void draw ();
    void close();


private:
    int m_width  = WinWidth;
    int m_height = WinHeight;


    class Graphics* m_mainWin = nullptr;
    
    sf::RectangleShape m_rectangle;
};

#endif