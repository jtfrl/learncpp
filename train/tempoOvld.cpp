#include <iostream>
class Tempo {
  private:
     short horas;
     short minutos;
     short segundos;
  public:
	  Tempo();
     Tempo(short h, short m, short s);
      friend std::istream& operator>> (std::istream &in, Tempo &t);
      friend std::ostream& operator<< (std::ostream &out, Tempo &t);
};

//em cpp
Tempo::Tempo() : horas(0),  minutos(0), segundos(0) {}//construtor deve ser definido


Tempo::Tempo (short h, short m, short s): horas(h), minutos(m), segundos(s){
}

std::istream& operator>> (std::istream &in, Tempo &t) {
   in >> t.horas >> t.minutos >> t.segundos;
   return in;
}

std::ostream& operator<< (std::ostream &out, Tempo &t){
    out << t.horas << ":" << t.minutos << ":" << t.segundos;
    return out;
}

int main() {
  Tempo t(12,39,21); //quando só essa linha é acionada, chama-se apenas o overload
  //em 'out'
  Tempo t;  //se essa linha ficar disponível, ela vai ter que receber uma entrada do 
  //usuário
  std::cin >> t;
  std::cout << t;
  std::cout << std::endl;
  return 0;
}
