#include <iostream>
#include "pascalTri.hpp"
#include <vector>


int main(){
    int n;// r=0;
    std::cout<<"Digite um número inteiro: "<<std::endl;
    std::cin>>n;
   
   //função de função: usa o valor de pascalTri; n=numRows
     printTriangle(pascalTri(n));



    return 0;
}