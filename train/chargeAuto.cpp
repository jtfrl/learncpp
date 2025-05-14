#include <iostream>

int somar (int x, int y){ return x+y;}
//auto somar (auto x, auto y){ return x+y;} auto não é permitido no campo de parâmetro
auto somar (long long int x, long long int y){ return x+y;} 
float somar (float x, float y){ return x+y;}
double somar (double x, double y){ return x+y;}
auto somar(int x, float y){ return x+y;} //tipos diferentes podem ser usados


int main(){
    
    std::cout<<somar(13,12)<<std::endl;
    std::cout<<somar(13233636, 2556669)<<std::endl; //deve haver f para reforçar que são dados em float
    std::cout<<somar(25.22f, 27.35f)<<std::endl;
    std::cout<<somar(25.22, 13.56)<<std::endl;
    std::cout<<somar(25, 13.56f)<<std::endl;

    return 0;
}

/*
OUTRAS RESTRIÇÕES
:> auto não pode ser usado em parâmetros de funções, apenas em variáveis locais;
:> retornos de funções não podem ser auto, pois o compilador não consegue deduzir o tipo;
:> como o compilador precisa deduzir o tipo, não pode haver ambiguidade entre os tipos.
*/