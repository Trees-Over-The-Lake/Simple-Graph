#ifndef vertex_hpp
#define vertex_hpp

#include <cstdint>
#include <string>
#include <list>

class Edge;
#include "edge.hpp"

using vertex_value = int32_t;

// Graph vertex
class Vertex {
    vertex_value value;
     

    public:
        std::list<Edge*> edges;

        // Constructor
        Vertex(vertex_value value);

        // Sets and Gets
        void set_vertex_value(vertex_value value);
        vertex_value get_vertex_value();

        // Print the vertex value
        void print();

        void add_edge(Edge *edge);

};

#endif