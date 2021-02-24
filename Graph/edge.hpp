#ifndef edge_hpp
#define edge_hpp

#include <cstdint>
#include <string>

class Vertex;
#include "vertex.hpp"

using edge_value = int32_t;

class Edge {
    edge_value value;
    bool is_direcional;

public:
    // Vertex
    Vertex *start;
    Vertex *end;

    // Constructor
    Edge(Vertex *start, Vertex *end, edge_value value, bool isDirecional);
    static void create_edge(Vertex *start, Vertex *end);

};

#endif