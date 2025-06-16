#include <fstream>
#include <iostream>

int main(){
    std::ofstream outf("letra.txt", std::ios::app);
    //ofstream é para escrita

    if(!outf){
        std::cerr<<"Não há arquivo 'letra.txt'!"<<std::endl;
        return 1;
    }

    outf<<"Teste\n";
    //sobreescreve na última linha do arquivo

    return 0;
}