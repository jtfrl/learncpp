#include <iostream>
#include <cmath>
#include <iomanip> // Biblioteca para manipulação de precisão decimal


float media(int num1, int num2, int num3){
    float notaMedia=(num1+num2+num3)/3.0f;
    //divisão garantindo que gera um float
    std::cout<<"Média: "<<std::fixed<<std::setprecision(2)<<notaMedia<<std::endl;
    // Verifica se o aluno foi aprovado ou reprovado; usa precisão de duas casas.
    return notaMedia;
}

int main(){

int n1, n2, n3;

    std::cin>>n1>>n2>>n3; // Leitura das notas diretamente da entrada padrão, separadas por espaço


    if (n1< 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10) {
        std::cerr<<"Notas invalidas! As notas devem estar entre 0 e 10."<<std::endl;
        return 1; // Encerra o programa com erro caso o usuário insira notas inválidas
    }

    media(n1,n2,n3);

    return 0;

}
