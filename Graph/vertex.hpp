#ifndef vertex_hpp
#define vertex_hpp

#include <cstdint>
#include <string>

using vertex_value = int32_t;

// Graph vertex
class Vertex {
    vertex_value value;

public:
    // Constructor
    Vertex(vertex_value value = 0);

    // Sets and Gets
    void set_vertex_value(vertex_value number);
    vertex_value get_vertex_value();

    // Print the vertex value
    void print();

};

#endif