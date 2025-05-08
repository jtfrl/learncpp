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
::: valores altos para 14! não são possíveis com os tipos usados aqui
:> tratar caso base OK
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
 


  if(n!=1){
       std::cout << n << " ->" <<" ";
       if(n==2){ //a conjectura atinge 2 antes de chegar em 1, não importa o n
        std::cout<<1<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Passos necessários: ";
       }
    }
*/

vector <int> pascalTri(int num, int r){ //valor zero para r não serve aqui
    //ja indicado em hpp
    /*
    vector<int> nextCoef;
    if(num!=1){
        std::cout<<nextCoef=pascalTri(num, r+1)<<std::endl;
    }
    */
    
    int count=0;
    if (r>num){
        return vector<int>();
       // std::cout<<vector<int>();
        count++;
    }
    

    vector <int> baseVect(1,1); //velor com um elemento e o elemento é 1. 

    if(num==1){
        return baseVect;
        //std::cout<<1;
    }

    else{
        vector<int> coef; //coeficientes
        int pascCoef=fact(num)/(fact(r)*(fact(num-r)));
        coef.push_back(pascCoef); //acrescenta elementos no vetor

      vector<int> nextCoef=pascalTri(num, r+1); //cálculo recursivo
      coef.insert(coef.end(), nextCoef.begin(), nextCoef.end());
      count++;
        return coef;
        //como a chamada é recursiva, r vai iterar até chegar em num
      //pascalTri(num, r+1);

    }
}





