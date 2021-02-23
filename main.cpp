#include <iostream>
#include "Graph/vertex.hpp"
#include "Graph/edge.hpp"


int main( void ) {
    Vertex *vert = new Vertex(4);
    Edge   *edge = new Edge(vert, nullptr);

    vert->set_vertex_value(5);
    edge->start->print();

    return 0;
}