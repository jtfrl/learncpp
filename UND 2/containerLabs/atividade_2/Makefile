all: frequencia

frequencia: frequencia.o
	g++ -Wall -std=c++17 -o frequencia frequencia.o

frequencia.o: frequencia.cpp freqText.hpp
	g++ -Wall -std=c++17 -c frequencia frequencia.cpp

test: frequencia
	./frequencia

clean:
	rm -f frequencia *.o