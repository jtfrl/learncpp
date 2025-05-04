#include <iostream>
/*
#include <iostream>

 Baseado em STROUSTRUP, Bjarne. The C++ Programming Language. 
 4th ed. Boston: Addison-Wesley, 2013.
 P.  456
  
  class Date {
      int d=4, m=5, y=2025;
  public:
      // ...
      Date(int, int, int); //dia, mês, ano
      Date(int, int); //dia, mês
      Date(int); //dia, mês e ano (juntos)
      Date(); //default (para dia de hoje)
     // Date(const char∗ dataStr){}; // data em representação de string

      friend std::ostream& operator<<(std::ostream& os, const Date& date) {
        os << date.d << "/" << date.m << "/" << date.y;
        return os;
    }
  };


  int main(){
    Date today(d,m,y);
    //Date today;
    std::cout<<"Data de hoje: "<<today<<std::endl;

    //data não exibe
  }

*/
class Date {
  int d, m, y;
public:
  Date(int dd = 0, int mm = 0, int yy = 0);
  // Other member functions...

  friend std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << date.d << "/" << date.m << "/" << date.y;
    return os;
/*
_friend: consegue deixar que uma função não membra (como std<<cout) acesse membros
protegidos de classe, principalmente funções que usam operador de inserção
de fluxo -- '<<'

_std::ostream: é o fluxo padrão de output do C++ (output stream); 
o trecho 'std::ostream& os' faz o endereçamento que 
deixa cout imprimir os dados do objeto 

*/

}

};

// Assuming today is a global or static object that holds the current date
Date today = {4, 5, 2025}; // Example values for today's date

Date::Date(int dd, int mm, int yy) {
  d = dd ? dd : today.d;
  m = mm ? mm : today.m;
  y = yy ? yy : today.y;
  // Check that the Date is valid
}

int main() {
  Date date1; // Uses default values from today
  Date date2(9); // Uses 5 for day, default values for month and year from today
  Date date3(9, 5); // Uses 5 for day, 9 for month, default value for year from today
  Date date4(9, 5, 2024); // Uses 5 for day, 9 for month, 2024 for year

  std::cout<<"Data: "<<date1<<std::endl;

  return 0;
}
