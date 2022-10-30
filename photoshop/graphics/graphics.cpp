#include "graphics.hpp"

void Graphics::setSize(sf::RectangleShape& widget, const int width, const int height)
{
    widget.setSize(sf::Vector2f(width, height));
}

void Graphics::setFillColor(sf::RectangleShape& widget, const sf::Color& color)
{
    widget.setFillColor(color);
}

sf::Vector2f Graphics::getPosition(sf::RectangleShape* widget)
{
    return widget->getPosition();
}

void Graphics::move(sf::RectangleShape& widget, float xOffset, float yOffset)
{   
    widget.move(xOffset, yOffset);
}