#include <iostream>

#include "graph.hpp"

// Insert a new Vertex to the graph and return if its successful
bool Graph::insert_vertex(Vertex *vert) {
    // Inserting the element into the list
    // Verifying if this value is already inserted, if it is return a error
    for(auto i : this->all_vertex_values) {
        if(i == vert->get_vertex_value()) {
            std::cerr << "Error inserting " << i << "!\nThis value is already inserted in the graph!" << std::endl; 
            return false;
        }
    }
    
    // Inserting the new value in the list
    this->all_vertex_values.push_back(vert->get_vertex_value());

    // Inserting in the real graph



    return true;
}

// Insert a new edge to the graph and return if it is successful
bool Graph::insert_edge(Edge *edge) {
    // Inserting the element into the list
    // Verifying if this value is already inserted, if it is return a error
    for(auto i : this->all_edge_values) {
        if(i == edge->get_edge_value()) {
            std::cerr << "Error inserting " << i << "!\nThis value is already inserted in the graph!" << std::endl; 
            return false;
        }
    }
    
    // Inserting the new value in the list
    this->all_edge_values.push_back(edge->get_edge_value());

    // Inserting in the real graph

    return true;
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

// Print all graph
void Graph::print_all_graph() {
    
}