#ifndef edge_hpp
#define edge_hpp

#include <cstdint>
#include <string>
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
    Edge(Vertex *start = nullptr, Vertex *end = nullptr, edge_value value = 0, bool isDirecional = true);

};

#endif