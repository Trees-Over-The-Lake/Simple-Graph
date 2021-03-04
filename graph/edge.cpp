#include "edge.hpp"
#include <iostream>

// Edge constructor
Edge::Edge(Vertex *start, Vertex *end, edge_value value, bool isDirectional) {
    this->start          = start;
    this->end            = end;
    this->value          = value;
    this->is_directional = isDirectional;

    start->edges.push_back(this);
    end->edges.push_back(this);
}

// Get edge starting vertex
Vertex* Edge::get_start_vertex(){
    return this->start;
}

// Get edge ending vertex
Vertex* Edge::get_end_vertex(){
    return this->end;
}

void Edge::create_edge(Vertex *start, Vertex *end)
{
    Edge *teste = new Edge(start, end, 5, true);
    start->add_edge(teste);
    end->add_edge(teste);

    return;
}

// Receives another edge and checks if they're equal.
// returns: true if equal and false if different
bool Edge::is_equal(Edge *edge)
{
    bool is_equal = true;
    if(this->is_directional != edge->is_directional)
        is_equal = false;
    else if(this->get_start_vertex() != edge->get_start_vertex())
        is_equal = false;
    else if(this->get_end_vertex() != edge->get_end_vertex())
        is_equal == false;


    return is_equal;
}

// get the value in the edge
edge_value Edge::get_value()
{
    return this->value;
}