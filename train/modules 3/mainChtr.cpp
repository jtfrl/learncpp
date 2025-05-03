#include <iostream>
#include "favChtr.hpp"

int main(){
    favorite lista("Shiv Roy", "Succession", 30, 2018); //cria uma variavel para a classe favorite

    std::cout<<"Personagem favorito: "<<lista.getCharacter()<<std::endl;
    std::cout<<"Série favorita: "<<lista.getSeries()<<std::endl;
  //chama com a instância da classe: lista  

    return 0;

}