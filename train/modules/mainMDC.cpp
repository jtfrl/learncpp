#include <iostream>
#include "mdc.hpp"
#ifndef MDC_H
#define MDC_H

int mdc(int x, int y, int n);

#endif 


int main(){
    int x, y, n;
    std::cout<<"Digite o valor de n: ";
    std::cin>>n;

    std::cout << "Digite dois números inteiros: ";
    std::cin >> x >> y;

    std::cout << "MDC: " << mdc(x, y, n) << "\n";
    return 0;
}