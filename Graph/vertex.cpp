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
void Vertex::print() {
    std::cout << this->value << " \n";
}

void Vertex::add_edge(Edge *edge)
{
    edges.push_back(edge);
}