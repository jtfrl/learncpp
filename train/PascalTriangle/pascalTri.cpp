#include <iostream>
#include <vector>
#include <iomanip>
#include "pascalTri.hpp"

using namespace std;

/*
//função que calcula fatorial
int fact(int num){
    if(num==1 || num==0) return 1; //evita estouro de pilha
    else
        return num*(fact(num-1));
}
    */

/*
FORMULA DO COEFICIENTE DO TRIANGULO DE PASCAL
pascCoef=fact(num)/(fact(r)*(fact(num-r))
*/

int biCoef(int n, int k){
    if(k==0 || k==n) return 1;
    return biCoef(n-1, k-1) + biCoef(n-1, k);
} //calcula coeficientes sem precisar de fact(num)


std::vector<int> linePascal(int n) {  // toma apenas o número de linhas
    vector<int> line;
    for(int k = 0; k <= n; k++) {
        line.push_back(biCoef(n, k));
    }
    return line;
}


std::vector<std::vector <int>> pascalTri(int numRows){ //valor zero para r não serve aqui
    if(numRows<=0) return std::vector<std::vector<int>>();
    if(numRows==1) return {{1}};
    
    //mostra o triângulo anterior
  std::vector<std::vector<int>> prevTri=pascalTri(numRows-1);
    //nova linha
  prevTri.push_back(linePascal(numRows-1));

  return prevTri;
 
}
    

//mais em: https://www.geeksforgeeks.org/pascal-triangle/
/* versão com triangulo retangulo
void printTriangle(const std::vector<std::vector<int>>& triangle) {
    for (const auto& row : triangle) {
        for (int val : row) {
            std::cout<<" "<<val<<" ";
        }
        std::cout << std::endl;
    }
}
*/

void printTriangle(const std::vector<std::vector<int>>& triangle) {
    int maxRow=triangle.size();
    for (size_t i=0; i<triangle.size();i++){
        for(long unsigned int space=0;space<(maxRow-i-1)*2;space++){
            std::cout<<" ";
        }
    

        for (size_t j=0; j<triangle[i].size(); j++){
            std::cout<<std::setw(3)<<triangle[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

}



