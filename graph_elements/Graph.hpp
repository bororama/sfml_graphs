#pragma once

#include <list>
#include "Vertex.hpp"
#include "Edge.hpp"

typedef std::list<Vertex *> vertex_list;

class	Graph
{
	public :
		vertex_list	vertices;
		edge_list	edges;
};

