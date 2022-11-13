#include "general.hpp"

int main()
{

    Graphics win1(1920, 1080);

    Widget wid1(&win1, 300, 150);

    wid1.move(100, 30);

    AbstractBtn btn2(&win1, 150, 10);

    AbstractBtn btn1(&win1, 10, 15);

    PsColor btn1Clr{};
    PsColor btn2Clr(1, 200 , 70, 140);

    btn1.setColor(btn1Clr);
    btn2.setColor(btn2Clr);
    btn1.move(5, 600);

    AbstractBtnManager managerbtn(20);
    managerbtn.add(&btn1);
    managerbtn.add(&btn2);

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
        managerbtn.draw();
        win1.display();
        win1.clear();
    }

    return 0;
}