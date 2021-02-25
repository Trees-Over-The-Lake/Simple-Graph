#include <iostream>
#include "graph.hpp"

int main( void ) {
    Vertex *a = new Vertex(2);
    Vertex *b = new Vertex(4);

    Edge *UnionA_B = new Edge(a, b, 12, true);
    
    Graph graph;
    graph.insert_vertex(a);
    graph.insert_vertex(b);

    graph.print_all_vertex();

    graph.insert_edge(UnionA_B);

    graph.print_all_edge();

    graph.print_all_graph();

    return 0;
}