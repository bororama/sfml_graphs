#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "Graph.hpp"

void	update(sf::RenderWindow &window, Graph &g)
{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		(void)g;
}

void	init(sf::RenderWindow &window, Graph &g)
{

	Vertex *utest = new Vertex(50, 230, 372);
	Vertex *wtest = new Vertex(50, 500, 100);
	Vertex *xtest = new Vertex(40, 320, 120);
	Edge *etest = new Edge(utest, wtest);
	Edge *ftest = new Edge(wtest, xtest);

	window.setVerticalSyncEnabled(true);
	g.vertices.push_back(utest);
	g.vertices.push_back(wtest);
	g.vertices.push_back(xtest);
	g.edges.push_back(etest);
	g.edges.push_back(ftest);
}

void	draw(sf::RenderWindow &window, Graph &g)
{

	window.clear(sf::Color::White);
	for (edge_list::iterator i = g.edges.begin(); i != g.edges.end(); ++i)
		window.draw((*i)->get_shape());
	for (vertex_list::iterator i = g.vertices.begin(); i != g.vertices.end(); ++i)
		window.draw((*i)->get_shape());
	window.display();
}

int main(void)
{
	sf::RenderWindow	window(sf::VideoMode(800,600), "Human-steps");
	Graph				g;

	init(window, g);
	while(window.isOpen())
	{
		update(window, g);
		draw(window, g);
	}
	return 0;
}
