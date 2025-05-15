//by @danilocurvelo-ufrn
//usa overloading no fluxo de stream (output)

#include <iostream>
class Tempo {
	private:
		short horas;
		short minutos;
		short segundos;
public:
    Tempo();
	Tempo(short h, short m, short s);
	friend std::ostream& operator<<(std::ostream &out, Tempo const &t);
};

//em cpp
Tempo::Tempo (short h, short m, short s): horas(h), minutos(m), segundos(s){
}

std::ostream& operator<<(std::ostream &out, Tempo const &t) {
out << t.horas << ":" << t.minutos << ":" << t.segundos;
return out;
}

//em cpp (main)
int main() {
    Tempo r(12, 30, 0); // OUTPUT: 12h 30min 0s
    std::cout << r;
    return 0;
}
