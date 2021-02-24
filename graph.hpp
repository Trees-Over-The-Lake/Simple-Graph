#ifndef graph_hpp
#define graph_hpp

#include <list>

#include "Graph/vertex.hpp"
#include "Graph/edge.hpp"

// A high level implementation for a graph struct
class Graph {
    Vertex *root;
    std::list<vertex_value> all_vertex_values;
    std::list<edge_value> all_edge_values;

    public:
        // Inserting new values
        bool insert_vertex(vertex_value value);
        bool insert_edge(edge_value value);

        // Printing the values
        void print_all_vertex();
        void print_all_edge();
};

#endif