#include "widget.hpp"

void Widget::draw()
{
    m_mainWin->m_window.draw(m_rectangle);
}

void Widget::setColor()
{
    m_mainWin->setFillColor(m_rectangle, sf::Color::Magenta);
}



// Нам надо делать тулы(инструменты)
// Множество классов с разным поведением, которые мы объединяем с помощью базового класса,
// основная идея ООП в С++, ДИНАМИЧЕСКИЙ ПОЛИМОРФИЗМ
// мы не знаем с каким точно классом мы работаем
// если задачу можно разложить на базу и отличия в виртуальных функциях и классах
// мы это разбирали на виджетах , менеджер виджетов, контейнерный виджет, создали иерархию виджетов
// посмотреть на ту же знадачу, с помощью других паттернов
// нужно сделать интсрументы для фотошопа!!!
// тулы изменяют некоторый объект
// плюс ГУИ для инструментов
// есть контейнерный класс, который объединяет кнопки, есть контролер, так, что активирует состояния кнопок
// эта палитра делегирует обращения к активному инструменту
// инструментальная кнопка содержит х у и Canvas*
// действие + стейт = класс с функцией (инструмента)
// абстрактный класс инструментов
// и менеджер 
// ещё один менеджер для палитры свойств