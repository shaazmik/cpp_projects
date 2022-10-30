#include "general.hpp"

int main()
{

    Graphics win1(1920, 1080);

    Widget wid1(&win1, 300, 150);

    wid1.move(100, 30);
    wid1.setColor();

    Widget wid2(&win1, 150, 10);

    AbstractBtn btn1(&win1, 10, 15);

    btn1.move(5, 600);

    WidgetManager widManager1(20);
    widManager1.add(&wid1);
    widManager1.add(&wid2);
    widManager1.add(&btn1);
    widManager1.draw();
    win1.display();
    sleep(2);
    win1.clear();

    // while (win1.isOpen())
    // {
    //     sf::Event event;

    //     while (win1.m_window.pollEvent(event))
    //     {
    //         if (event.type == sf::Event::Closed)
    //         {
    //             win1.m_window.close();
    //         }
    //     }

    //     win1.display();
    //     win1.clear();
    // }

    return 0;
}