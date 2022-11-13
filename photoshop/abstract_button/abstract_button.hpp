#ifndef ABSTRACT_BTN_PS
#define ABSTRACT_BTN_PS

#include "../widget/widget.hpp"

class AbstractBtn : public Widget
{
public:
    AbstractBtn(Graphics* mainWin):
        Widget(mainWin)
        {}

    AbstractBtn(Graphics* mainWin, int width, int height):
        Widget(mainWin, width, height)
        {}

    ~AbstractBtn() = default;

    bool getPressStatus()
    { return m_press; }

    bool switchPressStatus()
    {
        m_press = !(m_press);
        return m_press;
    }

    bool getClickedStatus()
    { return m_clicked; }

    bool switchClickedStatus()
    {
        m_clicked = !(m_clicked);
        return m_clicked;
    }

    void action()
    {
        if (m_clicked)
        {
            $$;
        }
    }

protected:

    bool m_clicked = false;
    bool m_press   = false;
};


class AbstractBtnManager : public WidgetManager
{
public:
    AbstractBtnManager(int size):
        WidgetManager(size)
        {
            m_abstractBtnArr = (AbstractBtn**)m_widgetArr;
        }

    ~AbstractBtnManager() = default;


    void AbstractCntrl(sf::Event event);

protected:
    AbstractBtn** m_abstractBtnArr = nullptr;
};


#endif
