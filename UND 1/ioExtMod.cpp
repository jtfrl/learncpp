#include <iostream>

int readNumber(){
    int x;
    std::cout<<"Digite o numero inteiro: ";
    std::cin>>x;

    return x;
}; //obter inteiro do usuário e retornar esse num

void writeAnswer(int soma){
    std::cout<<"Soma: "<<soma<<std::endl;
}; //mostrar o numero
