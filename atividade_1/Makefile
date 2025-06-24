all: estatistica

estatistica: estatistica.o 
	g++ -Wall -std=c++17 -o estatistica estatistica.o

estatistica.o: estatistica.cpp showVector.hpp 
	g++ -Wall -std=c++17 -c estatistica estatistica.cpp

test: estatistica
	./estatistica

clean:
	rm -f estatistica *.o