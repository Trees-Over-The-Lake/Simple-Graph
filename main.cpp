#include <iostream>
#include "Graph/vertex.hpp"
#include "Graph/edge.hpp"


int main( void ) {
    Vertex *a = new Vertex(2);
    Vertex *b = new Vertex(4);
    
    Edge::create_edge(a, b);

    a->set_vertex_value(5);
    a->edges.front()->end->print();

    return 0;
}