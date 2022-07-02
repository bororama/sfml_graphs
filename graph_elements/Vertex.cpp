#include "Vertex.hpp"

Vertex::Vertex(float r, float x, float y):
_circle(r)
{
	_circle.setPosition(x, y);
	_circle.setFillColor(sf::Color::White);
	_circle.setOutlineColor(sf::Color::Black);
	_circle.setOutlineThickness(3.f);
}

sf::CircleShape	Vertex::get_shape(void)
{
	return _circle;
}

sf::Vector2f	Vertex::get_center(void)
{
	sf::Vector2f 	u = _circle.getPosition();
	float			r = _circle.getRadius();

	u.y = u.y + r;
	u.x = u.x + r;

	return u;
}

sf::Vector2f	Vertex::get_position(void)
{
	return _circle.getPosition();
}

void	Vertex::move(float x, float y)
{
	_circle.move(x, y);
}

void	Vertex::move(sf::Vector2f u)
{
	_circle.move(u);
}
