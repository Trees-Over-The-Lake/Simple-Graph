#ifndef graph_hpp
#define graph_hpp

#include <list>

#include "Graph/vertex.hpp"
#include "Graph/edge.hpp"

// A mid-level implementation for a graph struct
class Graph {
    bool is_directional_graph;
    Vertex *root;
    std::list<vertex_value> all_vertex_values;
    std::list<edge_value> all_edge_values;

    public:
        // Constructor
        Graph(bool is_directional_graph = false, Vertex *root = nullptr);

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

// High level implementation for a graph
class DirectGraph : protected Graph {
    public:
    // Construction of a DirectGraph
    DirectGraph(Vertex *root = nullptr);
};

// High level implementation for a graph
class NonDirectGraph : protected Graph {
    public:
    // Construction of a NonDirectGraph
    NonDirectGraph(Vertex *root = nullptr);
};

#endif