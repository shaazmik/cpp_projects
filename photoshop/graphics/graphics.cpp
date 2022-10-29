#include "graphics.hpp"

void Graphics::setSize(sf::RectangleShape widget, const int width, const int height)
{
    widget.setSize(sf::Vector2f(width, height));
}

void Graphics::setFillColor(sf::RectangleShape widget, const sf::Color& color)
{
    widget.setFillColor(color);
}