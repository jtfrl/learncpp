#include <iostream>
#include "favChtr.hpp"

int main(){
    favorite td("Rust Cohle", "True Detective", 29, 2014); //cria uma variavel para a classe favorite
    favorite fb("The Priest", "Fleabg", 35, 2016); //cria uma variavel para a classe favorite
    
    std::cout<<"Personagem favorito: "<<td.getCharacter()<<std::endl;
    std::cout<<"Série favorita: "<<td.getSeries()<<std::endl;
    std::cout<<"Idade do personagem: "<<td.getcAge()<<std::endl;
    std::cout<<"Ano (série): "<<td.getsYear()<<std::endl;

    std::cout<<std::endl;
  //chama com a instância da classe: td

  std::cout<<"Personagem favorito: "<<fb.getCharacter()<<std::endl;
  std::cout<<"Série favorita: "<<fb.getSeries()<<std::endl;
  std::cout<<"Idade do personagem: "<<fb.getcAge()<<std::endl;
  std::cout<<"Ano (série): "<<fb.getsYear()<<std::endl;

  std::cout<<"Personagens adicionados: "<<favorite::countFav()<<std::endl;
  std::cout<<"******************************"<<"\n";
  std::cout<<"Séries adicionadas: "<<std::endl;
  std::cout<<"Total: "<<favorite::countSeries()<<std::endl;
  favorite::displaySeries();
  //adicionar contagem filtrada por série 


    return 0;

}
