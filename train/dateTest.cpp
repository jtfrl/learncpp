#include <iostream>
/**
 Baseado em STROUSTRUP, Bjarne. The C++ Programming Language. 
 4th ed. Boston: Addison-Wesley, 2013.
 P.  456
 */ 
  class Date {
      int d=4, m=5, y=2025;
  public:
      // ...
      Date(int, int, int); //dia, mês, ano
      Date(int, int); //dia, mês
      Date(int); //dia, mês e ano (juntos)
      Date(); //default (para dia de hoje)
      Date(const char∗ dataStr){}; // data em representação de string

      friend std::ostream& operator<<(std::ostream& os, const Date& date) {
        os << date.d << "/" << date.m << "/" << date.y;
        return os;
    }
  };

  

  int main(){
    Date today;
    std::cout<<"Data de hoje: "<<today<<std::endl;

    //data não exibe
  }