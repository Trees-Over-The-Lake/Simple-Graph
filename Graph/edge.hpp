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
    bool is_direcional;
    // Vertex
    Vertex *start;
    Vertex *end;

    public:
        // Constructor
        Edge(Vertex *start, Vertex *end, edge_value value, bool isDirecional);
        static void create_edge(Vertex *start, Vertex *end);

        // Get the values
        edge_value get_edge_value();
};

#endif