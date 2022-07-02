#pragma once
# include <SFML/Graphics.hpp>
# include <list>

class Edge;

typedef std::list<Edge *> edge_list;

struct	VertexInfo
{
	std::string name;
	int			expenses;
	int			crime;
	int			services;
	int			racism;
	float		language;
};

class Vertex 
{
	public :
		Vertex(float r, float x, float y);

		sf::CircleShape get_shape(void);
		sf::Vector2f	get_center(void);
		sf::Vector2f	get_position(void);
		void			move(float x, float y);
		void			move(sf::Vector2f u);

		edge_list	e;

	private :
		sf::CircleShape	_circle;
};
