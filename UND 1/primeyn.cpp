#include <cmath>
/*
VERSÃO COM RECURSÃO E SUPORTE

bool ertsns(int n, int dvr){ //suporte
    if (dvr > sqrt(n)) return true; 
    //o teste final é comparado com a raiz de n
    if (n % dvr == 0) return false; 
    return ertsns(n, dvr + 1); // checa o próximo divisor
}

bool primeyn(int n) { //principal
    if (n <= 1) return false; 
    return ertsns(n, 2); // checagem a partir do 2
}

*/


bool primeyn(int n, int dvr=2) {
    if (n <= 1) return false; 
    if (dvr > sqrt(n)) return true; 
    if (n % dvr == 0) return false; 
    return primeyn(n, dvr+1); 
}
