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

dessa forma, r também deve ser parâmetro
'num' precisa assumir zero para a execução da próxima função
 
*/

vector <int> pascalTri(int num, int r){ //valor zero para r não serve aqui
    
    int count=0;
    if (r>num){
        count++;
         return vector<int>(); //precisa vir abaixo
    }
    
    vector <int> baseVect(1,1); //velor com um elemento e o elemento é 1. 

    if(num==1){
        count++;
        return baseVect;
    }

    else{
        vector<int> coef; //coeficientes
        int pascCoef=fact(num)/(fact(r)*(fact(num-r)));
        coef.push_back(pascCoef); //acrescenta elementos no vetor

      vector<int> nextCoef=pascalTri(num, r+1); //cálculo recursivo
      coef.insert(coef.end(), nextCoef.begin(), nextCoef.end());
      count++;
          //como a chamada é recursiva, r vai iterar até chegar em num
    
         if(num!=1){
            for(int j=1;j<num;j++){
                vector<int> pastCoef; //coeficientes
                int pascCoef=fact(num)/(fact(r)*(fact(num-r))); 
                //erro de segmentação caso na linha acima venha j em vez de i
                pastCoef.push_back(pascCoef); 
                    for (int i: pastCoef){
                    std::cout<<i<<" ";
                }
            }
            
            std::cout<<std::endl;
         }



       //necessário estar após; a função deixa de rodar aqui
       count++;
       return coef; 
      
    }
}






