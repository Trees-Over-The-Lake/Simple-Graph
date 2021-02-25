#ifndef graph_hpp
#define graph_hpp

#include <list>

#include "Graph/vertex.hpp"
#include "Graph/edge.hpp"

// A high level implementation for a graph struct
class Graph {
    bool is_directional_graph;
    Vertex *root;
    std::list<vertex_value> all_vertex_values;
    std::list<edge_value> all_edge_values;

    public:
        // Inserting new values
        bool insert_vertex(Vertex *vert);
        bool insert_edge(Edge *edge);

        // Printing the values
        void print_all_vertex();
        void print_all_edge();
        void print_all_graph();

        // Sort graph 
        void sort_graph();
};

#endif