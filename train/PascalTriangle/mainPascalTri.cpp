#include <iostream>
#include "pascalTri.hpp"
#include <vector>


//INCLUIR PRINT PASCAL
int main(){
    int n;// r=0;
    std::cout<<"Digite um número inteiro: "<<std::endl;
    std::cin>>n;
    vector<vector <int>> mat;
    

    //iteração com os elementos
    /*
    std::cout<<"Coeficiente(s): "<<std::endl;
    for (int i_cf : cf){
        std::cout<<i_cf<<" ";
    }
    std::cout<<std::endl;
    */
   printPTri(mat, n);



    return 0;
}