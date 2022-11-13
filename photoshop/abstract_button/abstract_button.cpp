#include "abstract_button.hpp"

void AbstractBtnManager::AbstractCntrl(sf::Event event)
{
    for (int i = 0; i < m_count; i++)
    {
        if ((event.type ==  sf::Event::MouseLeft) && !(m_abstractBtnArr[i]->getPressStatus()))
        {
            m_abstractBtnArr[i]->switchPressStatus();
        }
        else
        {
            m_abstractBtnArr[i]->switchClickedStatus();
        }
    }

    return;
}