#include <iostream>
#include <vector>
#include "pascalTri.hpp"

using namespace std;

#ifndef PASCAL
#define PASCAL

int fact(int num);
//vector<int> pascalTri(int num, int r=0);
std::vector<std::vector<int>> printPascal(int num);

#endif

/*
PROBLEMAS
:> necesssária uma função recursiva que exiba cada linha do triangulo
:>> triangulo só está funcionando para o valor num, mas não para o intervalo
de 1 até num

*/

//função que calcula fatorial
int fact(int num){
    if(num==1 || num==0) return 1; //evita estouro de pilha
    else
        return num*(fact(num-1));
} //num=n

/*
FORMULA DO COEFICIENTE DO TRIANGULO DE PASCAL

pascCoef=fact(num)/(fact(r)*(fact(num-r))
 
*/


int biCoef(int n, int k){
    if(k==0 || k==n) return 1;
    return biCoef(n-1, k-1) + biCoef(n-1, k);
}

//gerador de linha 
vector <int> linePascal(int num, int r){
    vector<int> line;
    for(int x=0;x<=r;x++){
        line.push_back(biCoef(r, x));
    }
    return line;
}

vector <int> pascalTri(int num, int r){ //valor zero para r não serve aqui
    vector <int> line;
    int count=0;
    if (r>num){
        count++;
        return vector<int>(); //precisa vir abaixo
    }

    if (num==r){
        return{};
    }
    
    vector <int> baseVect(1,1); //velor com um elemento e o elemento é 1. 

    if(num==1){
        count++;
        return baseVect;
    }
     
    //parte restante do triângulo

    //em ajuste a partir daqui

    vector<int> current=linePascal(num, r);
    vector<vector<int>> triRes=pascalTri(num, r+1);
    triRes.insert(triRes.begin(), current);

    return triRes;
 
}


//quase lá: erro para alocar cada linha aqui
//mais em: https://www.geeksforgeeks.org/pascal-triangle/

vector<vector <int>> nPascalTri(int num){ //vetor de vetores
    vector<vector <int>> mat; //vai abrigar os coeficientes

    for (int l=0; l<num; l++){ //l é linha
        vector <int> arr;

        for (int k=0; k<=l; k++){
            int pt=fact(num);
            arr.push_back(pt);
        }
        mat.push_back(arr);
    }

    return mat;
}

void printPTri(vector<vector <int>> mat, int num){
    mat=nPascalTri(num);
    for(int m=0;m<mat.size();m++){
        for(int n=0;n<mat.size();n++){
            std::cout<<mat[m][n]<<" ";
        }
        std::cout<<std::endl;
    }
}