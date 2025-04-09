#include <iostream>

/***
código não modularizado ainda; baseado em 1028.c
***/

int main() {
   int rest, x, y, n, temp;
   std::cout<<"Digite o valor de n: ";
   std::cin>>n;
    while(n--){
        std::cout<<"Digite dois números inteiros: ";
        std::cin>>x>>y;
        if(y>x){
            temp = y; 
            y = x;
            x = temp;
        }
        while(x%y!=0){
            rest = x%y;
            x = y;
            y = rest;
            /*
            while(true){
                std::cout<<"MDC: "<<x<<"\n"; 
                break;
            }
            */
        } //laço não está executando inteiramente
        //std::cout<<"MDC: "<<x<<"\n";

    }
    std::cout<<"MDC: "<<x<<"\n"; 
    //quando está fora,
    // calcula o do primeiro,
    // mas não os dos demais
    return 0;
}