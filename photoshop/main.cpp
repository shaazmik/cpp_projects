#include "general.hpp"

int main()
{
    class Graphics win1(1920, 1080);

    class Widget test1();
    
    while (win1.m_window.isOpen())
    {
        sf::Event event;

        while (win1.m_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win1.m_window.close();
            }
        }

        win1.m_window.display();
        win1.m_window.clear();
    }
}