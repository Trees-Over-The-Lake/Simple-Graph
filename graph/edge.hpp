#ifndef edge_hpp
#define edge_hpp

#include <cstdint>
#include <string>

class Vertex;
#include "vertex.hpp"

using edge_value = int32_t;

class Edge {
    // Edge configuration
    edge_value value;
    bool is_directional;
    // Vertex
    Vertex *start;
    Vertex *end;

    public:
        // Constructor
        Edge(Vertex *start, Vertex *end, edge_value value, bool isDirectional);
        static void create_edge(Vertex *start, Vertex *end);

        // Get edge starting vertex
        Vertex* get_start_vertex();

        // Get edge ending vertex
        Vertex* get_end_vertex();

        //// Receives another edge and checks if they're equal.
        // returns: true if equal and false if different
        bool is_equal(Edge *compared);

        // get the value in the edge
        edge_value get_value();

};

#endif