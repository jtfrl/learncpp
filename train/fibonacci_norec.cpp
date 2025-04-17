#include <iostream>


//desafio: exibir todas as os números de 0 a n


void fib(int n) {
    if (n == 1 || n == 0) {
        std::cout<<n<<" ";
        return;
    } 
    /*
    //else {
         //entra em laço infinito
          return fib(n - 1) + fib(n - 2);
   }
*/
   int a=0, b=1, c;
   std::cout<<0<<" ";
   std::cout<<1<<" ";
    for(int i=2; i<=n; i++){
         c=a+b; //c recebe a soma dos dois primeiros números da sequencia
         std::cout<<c<<" ";
         a=b; //antepenultimo recebe o valor de b;
         b=c; //penultimo recebe o valor de c -
         /* 
         seguindo o padrão fib(n)=fib(n-1)+fib(n-2)
      */
     }
}


int main() {
    fib(10); //std::cout aqui não é necessário; 
    return 0;
}
