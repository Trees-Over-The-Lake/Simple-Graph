#include <iostream>

#include "graph.hpp"

// Insert a new Vertex to the graph
bool Graph::insert_vertex(vertex_value value) {
    bool inserted = false;

    this->all_vertex_values.push_back(value);

    return inserted;
}

// Insert a new edge to the graph
bool Graph::insert_edge(edge_value value) {
    bool inserted = false;



    return inserted;
}

// Print all vertex values
void Graph::print_all_vertex() {
    std::cout << "Vertex -> [ ";

    for(auto i: this->all_vertex_values) {
        std::cout << i << " ";
    }

    std::cout << "]" << std::endl;
}

// Print all edge values
void Graph::print_all_edge() {
    std::cout << "Edges -> [ ";

    for(auto i: this->all_edge_values) {
        std::cout << i << " ";
    }

    std::cout << "]" << std::endl;
}