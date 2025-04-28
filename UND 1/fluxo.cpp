#include <iostream>
#include <iomanip> 
#include <cmath>

int main(){
    double num1, num2;
    while(true){

        std::cout<<"Entre com o primeiro valor: ";
        std::cin>>num1;

        std::cout<<"Entre com o segundo valor: ";
        std::cin>>num2;

        if(num1>num2){
            std::cout<<"Erro! Entre com um primeiro valor menor ou igual ao segundo."<<std::endl;// Mensagem de erro
           continue;
        }

        double p=(num1/num2)*100.0;

        std::cout<<std::fixed<<std::setprecision(2)<<p<<"%"<<std::endl; 
        
        break;
    }
    
    return 0; 

}
