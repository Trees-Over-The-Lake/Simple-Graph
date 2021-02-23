#include "edge.hpp"

// Edge constructor
Edge::Edge(Vertex *start = nullptr, Vertex *end = nullptr, edge_value value = 0, bool isDirecional = true) {
    this->start         = start;
    this->end           = end;
    this->value         = value;
    this->is_direcional = isDirecional;
}