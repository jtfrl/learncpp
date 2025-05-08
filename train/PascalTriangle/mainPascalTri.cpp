#include <iostream>
#include "pascalTri.hpp"

int main(){
    int n, r=0;
    std::cout<<"Digite um número inteiro: "<<std::endl;
    std::cin>>n;

    std::vector<int> cf=pascalTri(n, r);

    //iteração com os elementos
    std::cout<<"Coeficiente(s): "<<std::endl;
    for (int i_cf : cf){
        std::cout<<i_cf<<" ";
    }
    std::cout<<std::endl;

    return 0;
}