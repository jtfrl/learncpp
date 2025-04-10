#include "mdc.hpp"

void mdc(){
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
        } 
        std::cout<<"MDC: "<<y<<"\n";
    }
}