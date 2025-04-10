#include <iostream>

#include "mdc.hpp"

int main(){
    int x, y, n;
    std::cout<<"Digite o valor de n: ";
    std::cin>>n;
    
    std::cout << "Digite dois números inteiros: ";
    std::cin >> x >> y;

    std::cout << "MDC: " << mdc(x, y) << "\n";
    return 0;
}