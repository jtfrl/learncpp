#include <iostream>
#include <vector>
#include "pascalTri.hpp"

using namespace std;

#ifndef PASCAL
#define PASCAL

int fact(int num);
vector<int> pascalTri(int num, int r=0);

#endif

/*
PROBLEMAS
:> pascalTri não consegue lidar com valores de n>=14 
:> tratar caso base
:> necesssária uma função recursiva que exiba cada linha do triangulo

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

dessa forma, r também deve ser parâmetro
'num' precisa assumir zero para a execução da próxima função
 
*/

vector<int> pascalTri(int num, int r){ //valor zero para r não serve aqui
    //ja indicado em hpp
    if (r>num){
        return vector<int>(); //fim de linha, caso base
    }

    //vector<int> baseVect[0]={1};
    //if(num==1) baseVect[0];

    else{
        vector<int> coef; //coeficientes
        int pascCoef=fact(num)/(fact(r)*(fact(num-r)));
        coef.push_back(pascCoef); //acrescenta elementos no vetor

      vector<int> nextCoef=pascalTri(num, r+1); //cálculo recursivo
      coef.insert(coef.end(), nextCoef.begin(), nextCoef.end());

        return coef;
        //como a chamada é recursiva, r vai iterar até chegar em num

    }
}



