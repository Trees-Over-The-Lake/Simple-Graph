obj := main.cpp graph.cpp Graph/edge.cpp Graph/vertex.cpp
executable := graph.out
tex := doc/main.tex

all:
	g++ $(obj) -O3 -o $(executable)

run: all
	./$(executable)

documentation:
	texi2pdf $(tex)
	find . -name *.log -delete
	find . -name *.fls -delete
	find . -name *.aux -delete
	
	find . -name *.synctex.gz  -delete
	find . -name *.fdb_latexmk -delete
	
clean:
	find . -name *.out -delete
	find . -name *.pdf -delete
	find . -name *.log -delete
	find . -name *.fls -delete
	find . -name *.aux -delete
	
	find . -name *.synctex.gz  -delete
	find . -name *.fdb_latexmk -delete
