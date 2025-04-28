#código de soma

all: main 

main: main.o io.o #só pode vir objetos
	g++ -o main main.o io.o

main.o: main.cpp io.h #arquivos .cpp são lidos
	g++ -c main.cpp

io.o: io.cpp io.h
	g++ -c io.cpp

test: main
	./main

clean:
	rm -f main *.o
