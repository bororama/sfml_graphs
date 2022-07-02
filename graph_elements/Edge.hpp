#pragma once

# include <SFML/Graphics.hpp>

class Vertex;

struct EdgeInfo
{
	int	expenses;
	int	time;
	int	crime;
}

class Edge 
{
	public:
		Edge(Vertex *u, Vertex *w);

		Vertex	*v1;
		Vertex	*v2;

		sf::VertexArray	get_shape(void);
		void			set_color(sf::Color color);
		void			set_coordinates(void);
	
	private :
		sf::VertexArray	_line;
		size_t			_expenses;
		size_t			_time;
		size_t			_crime
};
