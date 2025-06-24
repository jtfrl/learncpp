#include "showVector.hpp"

int main(){
    int d;
    sVetor vetor;
    vetor.inVetor();
    vetor.contaV();
    vetor.avV();
    vetor.getMaxMin();
    vetor.s_Vector();

    std::cout<<"Digite um número para ser buscado: "<<std::endl;
    std::cin>>d;
    vetor.seqSearch(d);


    return 0;
}