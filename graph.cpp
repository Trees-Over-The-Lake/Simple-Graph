#include <iostream>
#include <algorithm>

#include "graph.hpp"

// Constructor of the Graph
Graph::Graph(bool is_directional_graph, Vertex *root) {
    this->is_directional_graph = is_directional_graph;
    this->root                 = root;
}

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

    for(auto i : this->all_edge_values) {
        std::cout << i << " ";
    }

    std::cout << "]" << std::endl;
}

// Sort the entire graph
void Graph::sort_graph() {
    this->all_vertex_values.sort();
    this->all_edge_values.sort();
}

// Print all graph
void Graph::print_all_graph() {
    // Getting the entire graph size
    size_t vertexSize = this->all_vertex_values.size();
    size_t edgeSize   = this->all_edge_values.size();

    // Sorting the values to make a better print
    int count = 0;
    vertex_value allVertexValuesSorted[vertexSize];
    for(auto i : this->all_vertex_values) {
        allVertexValuesSorted[count] = i;
        count++;
    }
    std::sort(allVertexValuesSorted, allVertexValuesSorted + sizeof(allVertexValuesSorted) / sizeof(allVertexValuesSorted[0]));

    count = 0;
    edge_value allEdgeValuesSorted[edgeSize];
    for(auto i : this->all_edge_values) {
        allEdgeValuesSorted[count] = i;
        count++;
    }
    std::sort(allEdgeValuesSorted, allEdgeValuesSorted + sizeof(allEdgeValuesSorted) / sizeof(allEdgeValuesSorted[0]));
    // ------------------------------------------------- //

    // Creating the matrix
    int graphMatrix[vertexSize][edgeSize];

    for(int i = 0; i < vertexSize; i++) {
        for(int j = 0; j < edgeSize; j++) {

            std::cout << allVertexValuesSorted[i] << " ";

            graphMatrix[i][j];
        }
    }
}

// ----------- DirectGraph Graph ----------- //

DirectGraph::DirectGraph(Vertex *root) : Graph(true, root) {
    return;
}

// ----------- NonDirectGraph Graph ----------- //

NonDirectGraph::NonDirectGraph(Vertex *root) : Graph(false, root) {
    return;
}