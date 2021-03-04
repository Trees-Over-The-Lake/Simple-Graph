#include <iostream>
#include <algorithm>

#include "graph.hpp"

Graph::Graph(bool is_directional_graph)
{
    this->is_directional_graph = is_directional_graph;
}

// Insert a new Vertex to the graph and return if its successful
bool Graph::insert_vertex(Vertex *vert) {

    // Inserting the element onto the list
    // Verifying if this value is already inserted, if it is return a error
    for(auto i : this->all_vertexes) {
        if(i->is_equal(vert)) {
            std::cerr << "Error inserting " << i << "!\nThis value is already inserted in the graph!" << std::endl; 
            return false;
        }
    }
    
    // Inserting the new value in the list
    this->all_vertexes.push_back(vert);

    // Inserting in the real graph



    return true;
}

// Insert a new edge to the graph and return if it is successful
bool Graph::insert_edge(Edge *edge) {
    // Check if edge already exists in graph
    for(auto i : this->all_edges)
    {
        if(i->is_equal(edge))
        {
            std::cerr << "Error inserting " << i << "!\nThis edge is already inserted in the graph!" << std::endl; 
            return false;
        }
    }

    // Inserting the new value on the list
    this->all_edges.push_back(edge);

    return true;
}

//removing values from the graph
void Graph::remove_vertex(Vertex *vert)
{
    // iterate through the list of vertexes and find the one to be removed
    for(auto i : this->all_vertexes)
    {
        if(i->is_equal(vert))
        {   
            // when the vertex to be removed is found on the list, we 
            // need to delete all edges that are connected to said vertex
            for(auto j : i->edges)
                this->remove_edge(j);
                
            i->edges.clear();
        }
    }
    this->all_vertexes.remove(vert);
}

void Graph::remove_edge(Edge *edge)
{
    all_edges.remove(edge);
    free(edge);

    return;
}

// Print all vertex values
void Graph::print_all_vertexes() {
    std::cout << "Vertex -> [ ";

    for(auto i: this->all_vertexes) {
        std::cout << i->get_vertex_value() << " ";
    }

    std::cout << "]" << std::endl;
}

// Print all edge values
void Graph::print_all_edges() {
    std::cout << "Edges -> [\n";

    for(auto i : this->all_edges) {
        std::cout << "Starts: " << i->get_start_vertex()->get_vertex_value() << " - Ends: " << i->get_end_vertex()->get_vertex_value() << std::endl;
    }

    std::cout << "]" << std::endl;
}

// Sort the entire graph
void Graph::sort_graph() {
    this->all_vertexes.sort();
    this->all_edges.sort();
}

// Print all graph
void Graph::print_all_graph() {
    // Getting the entire graph size
    size_t vertexSize = this->all_vertexes.size();
    size_t edgeSize   = this->all_edges.size();

    // Sorting the values to make a better print
    int count = 0;
    Vertex *allVertexValuesSorted[vertexSize]; // PODE TA ERRADO
    for(auto i : this->all_vertexes) {
        allVertexValuesSorted[count] = i;
        count++;
    }
    std::sort(allVertexValuesSorted, allVertexValuesSorted + sizeof(allVertexValuesSorted) / sizeof(allVertexValuesSorted[0]));

    count = 0;
    edge_value allEdgeValuesSorted[edgeSize];
    for(auto i : this->all_edges) {
        allEdgeValuesSorted[count] = i->get_value();
        count++;
    }
    std::sort(allEdgeValuesSorted, allEdgeValuesSorted + sizeof(allEdgeValuesSorted) / sizeof(allEdgeValuesSorted[0]));
    // ------------------------------------------------- //

   for(int i = 0; i < vertexSize; i++)
   {
       std::cout << allVertexValuesSorted[i]->get_vertex_value() << " ";
   }
   std::cout << "\n";
}

// ----------- DirectGraph Graph ----------- //

DirectGraph::DirectGraph(Vertex *root) : Graph(true) {
    return;
}

// ----------- NonDirectGraph Graph ----------- //

NonDirectGraph::NonDirectGraph(Vertex *root) : Graph(false) {
    return;
}