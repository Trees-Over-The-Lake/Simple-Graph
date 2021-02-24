obj = main.cpp graph.cpp Graph/edge.cpp Graph/vertex.cpp
executable = graph.out

all:
	g++ $(obj) -O3 -o $(executable)

run: all
	./$(executable)