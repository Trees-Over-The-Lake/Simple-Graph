#include "vertex.hpp"
#include <iostream>

// Vertex constructor
Vertex::Vertex(vertex_value value = 0) {
    this->value = value;
}

// Get the vertex value
vertex_value Vertex::get_vertex_value() {
    return this->value;
}

// Set the vertex value
void Vertex::set_vertex_value(vertex_value number) {
    this->value = number;
}

// Print the vertex value
void Vertex::print_this_vertex() {
    std::cout << this->value << " ";
}

void Vertex::add_edge(Edge *edge) {
    this->edges.push_back(edge);
}


bool Vertex::is_equal(Vertex *vertex)
{
    bool is_equal = false;
    if(this->get_vertex_value() == vertex->get_vertex_value())
    {
        is_equal = true;
    }

    return is_equal;
}