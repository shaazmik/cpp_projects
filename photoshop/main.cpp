#include "general.hpp"

int main()
{
    Graphics win1(1920, 1080);

    Widget test1(&win1, 30, 20);

    test1.move(25, 100);

    AbstractBtn button1(&win1, 80, 90);

    button1.move(150, 50);
    button1.setColor();
    test1.setColor();

    while (win1.isOpen())
    {
        sf::Event event;

        while (win1.m_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win1.m_window.close();
            }
        }
        
        test1.draw();
        button1.draw();

        win1.display();
        win1.clear();
    }
}