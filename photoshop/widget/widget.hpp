#ifndef WIDGET_HPP
#define WIDGET_HPP

#include "../graphics/graphics.hpp"
#include "../constants.hpp"

class Widget
{
public:
    Widget(Graphics* mainWin, int width, int height): m_mainWin(mainWin), m_width(width), m_height(height)
    {
        m_mainWin->setSize(m_rectangle, m_width, m_height);
    }

    Widget(Graphics* mainWin): m_mainWin(mainWin)
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
    double getPosX();
    double getPosY();
    void move(float xOffset, float yOffset);

private:
    int m_width  = WinWidth;
    int m_height = WinHeight;
    double m_posX   = 0;
    double m_posY   = 0;

    sf::RectangleShape m_rectangle;

protected:
    class Graphics* m_mainWin = nullptr;

};


class WidgetManager
{
public:
    WidgetManager(int size):m_size(size)
    {
        m_widgetArr = new Widget*[size];
        m_count = 0;
    }

   ~WidgetManager()
   {

   }

    void draw();

    void add(Widget* curWidget);

private:
    int m_size = 0;

    int m_count = 0;

    Widget** m_widgetArr = nullptr;

};

#endif