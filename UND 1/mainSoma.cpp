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

int main(){ //invoca as funcoes acima
   // int x,y,soma;
    int x=readNumber();
    int y=readNumber();
    int soma=x+y;
    writeAnswer(soma);

    return 0;
}
