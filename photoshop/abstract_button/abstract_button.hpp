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

private:
    
    bool clicked = false;
    bool press   = false;
};


class AbstractBtnManager : public WidgetManager
{

};


#endif
