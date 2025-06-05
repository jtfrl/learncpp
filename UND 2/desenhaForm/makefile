all: main

main: main.o #compilação
	g++ -Wall -std=c++17 -o main main.o

main.o: main.cpp vetor2D.h Quadrado.h Retangulo.h
	g++ -Wall -std=c++17 -c main main.cpp

test: main
	./main

clean:
	rm -f main *.o
