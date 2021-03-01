obj = main.cpp graph.cpp graph/edge.cpp graph/vertex.cpp
executable = graph.out

all:
	g++ $(obj) -O3 -o $(executable)

run: all
	./$(executable)
