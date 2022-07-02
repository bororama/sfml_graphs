#include "Edge.hpp"
#include "Vertex.hpp"

Edge::Edge(Vertex *u, Vertex *w, VertexInfo):
v1(u), v2(w), _line(sf::LineStrip, 2), _time
{
	set_coordinates();
	set_color(sf::Color::Black);
}

sf::VertexArray	Edge::get_shape(void)
{
	return	_line;
}

void	Edge::set_color(sf::Color color)
{
	_line[0].color = color;
	_line[1].color = color;
}

void	Edge::set_coordinates(void)
{
	_line[0] = v1->get_center();
	_line[1] = v2->get_center();
}
