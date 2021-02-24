#include <iostream>
#include "graph.hpp"


int main( void ) {
    Vertex *a = new Vertex(2);
    Vertex *b = new Vertex(4);
    
    Edge::create_edge(a, b);

    a->set_vertex_value(5);
    a->edges.front()->end->print_this_vertex();

    Graph graph;

    graph.insert_vertex(5);
    graph.insert_vertex(2);
    graph.insert_vertex(7);

    graph.print_all_vertex();

    return 0;
}