all: calculadora_rpn

calculadora_rpn: calculadora_rpn.o c_rpn.o
	g++ -Wall -std=c++17 -o calculadora_rpn calculadora_rpn.o c_rpn.o

calculadora_rpn.o: calculadora_rpn.cpp rpn.hpp
	g++ -Wall -std=c++17 -c calculadora_rpn.cpp

c_rpn.o: c_rpn.cpp rpn.hpp
	g++ -Wall -std=c++17 -c c_rpn.cpp

test: calculadora_rpn
	./calculadora_rpn "8 9 + 13 5 - *"
#	./calculadora_rpn "10 2 8 * + 3 -"
#    ./calculadora_rpn "3 4 + 2 *"

clean:
	rm -f calculadora_rpn *.o

