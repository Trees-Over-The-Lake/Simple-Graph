#include "edge.hpp"

// Edge constructor
Edge::Edge(Vertex *start, Vertex *end, edge_value value, bool isDirecional) {
    this->start         = start;
    this->end           = end;
    this->value         = value;
    this->is_direcional = isDirecional;
}

// Get edge value
edge_value Edge::get_edge_value(){
    return this->value;
}

void Edge::create_edge(Vertex *start, Vertex *end)
{
    Edge *teste = new Edge(start, end, 5, true);
    start->add_edge(teste);
    end->add_edge(teste);

    return;
}