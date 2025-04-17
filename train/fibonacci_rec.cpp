#include <iostream>

int fib(int n, int at=0, bool print=true) {
    if (n == 1 || n == 0) {
        return n;
    } 
    /*
    :> print como parâmetro
    evita que a função exiba várias vezes a sequencia
    a função vai calcular, mas sem exibir nada, até que a sequência esteja completa
    
    :> at como parâmetro
    controla quantas vezes a função foi chamada
    0 = primeira chamada 1 é a segunda, e assim por diante
    */

    if(print && at==0){
        //at é valor atual
        for (int i=0; i<n; ++i){
            int b=fib(i, i, true);
            std::cout<<b<<" ";//exibe a sequencia atual, em cada posição
        }   
    }

return fib(n-1, at, false) + fib(n-2, at, false);
}

int main(){
    std::cout<<std::endl;
    std::cout<<fib(18)<<std::endl;
    std::cout<<std::endl;
    return 0;
}
