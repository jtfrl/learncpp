#include <iostream>

int readNumber();
void writeAnswer(int soma);

int main(){ //invoca as funcoes acima
     int x=readNumber();
     int y=readNumber();
     int soma=x+y;
     writeAnswer(soma);
 
     return 0;
 }
