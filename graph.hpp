#ifndef graph_hpp
#define graph_hpp

#include <list>

#include "Graph/vertex.hpp"
#include "Graph/edge.hpp"

// A mid-level implementation for a graph struct
class Graph {
    public:
    bool is_directional_graph;
    std::list<Vertex*> all_vertexes;
    std::list<Edge*> all_edges;

    //public:
        // Constructor
        Graph(bool is_directional_graph = false);

        // Inserting new values
        bool insert_vertex(Vertex *vert);
        bool insert_edge(Edge *edge);

        // Printing the values
        void print_all_vertexes();
        void print_all_edges();
        void print_all_graph();

        // Sort graph 
        void sort_graph();

        //removing values from the graph
        void remove_vertex(Vertex *vert);
        void remove_edge(Edge *edge);
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