#include <iostream>
#include <cmath>

void moveDisk(char fonte, char dest, int disk){
    std::cout<<"Mova o disco "<<disk<<" da torre "<<fonte<<" para a torre "<<dest<<std::endl;
}//função auxiliar de moveHannoi

void moveHannoi(int d, char fonte, char aux, char dest){
    //char torre='A';
    int count=0;
    if(d==1){
        moveDisk(fonte, dest, d);
        return;
    }else{
       moveHannoi(d-1, fonte, dest, aux);
       moveDisk(fonte, dest, d);
       moveHannoi(d-1, aux, fonte, dest);
     }
}


int main(){
    int d;
    
    std::cout<<"Insira a quantidade de discos a serem movidos"<<std::endl;
    std::cin>>d;
    
    moveHannoi(d, 'A', 'B', 'C');
    int mov=pow(2, d)-1;
    std::cout<<"Movimentos (total): "<<mov<<std::endl; //mostra o total de movimentos
    
    return 0;
}
