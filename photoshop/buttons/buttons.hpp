#ifndef PS_BTN_HPP
#define PS_BTN_HPP

#include "../abstract_button/abstract_button.hpp"

class ActionBtn : public AbstractBtn
{
    ActionBtn(Graphics* mainWin):
        AbstractBtn(mainWin)
        {}

    ActionBtn(Graphics* mainWin, int width, int height):
        AbstractBtn(mainWin, width, height)
        {}
};



#endif