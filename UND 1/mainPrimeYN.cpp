#include <iostream>
#include "primeyn.h"

int main() {

    int n, dvr=2;
    std::cout << "Entre com um número inteiro positivo: ";
    std::cin >> n;

    primeyn(n, dvr); 
    std::cout << "O número " << n << (primeyn(n) ? " é primo." : " não é primo.") << std::endl;

    return 0;

}
