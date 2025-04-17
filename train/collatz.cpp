#include <iostream>
/****
CONJECTURA DE COLLATZ
::> A conjectura de Collatz é uma sequência de números inteiros positivos,
onde, a partir de um número n, a sequência é gerada da seguinte forma:
- Se n é par, o próximo número é n/2
- Se n é ímpar, o próximo número é 3n + 1
A sequência termina quando n chega a 1.

O código conta quantas operações são necessárias para chegar a 1.
*/
int count = 0;

int collatz(int n) {
    if(n!=1){
       std::cout << n << " ->" <<" ";
       if(n==2){ //a conjectura atinge 2 antes de chegar em 1, não importa o n
        std::cout<<1<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Passos necessários: ";
       }
    }
    //mostra todas as operações até chegar em 1
     if (n == 1) {
        return 0;
    } else {
        if (n % 2 == 0) {
            return 1 + collatz(n / 2);
            count++;
        } else {
            return 1 + collatz((3 * n) + 1);
            count++;
        }
    }
}

int main() {
    int k = collatz(888888);
    std::cout << k << std::endl;
    std::cout << std::endl;
    return 0;
}
