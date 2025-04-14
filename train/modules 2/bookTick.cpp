#include <iostream>
#include <string>
#include <vector>


//Função para tomar o número de ingressos do usuário
int bookTick(int numTick){
    std::vector<std::string> bookTick(numTick);
    /*
    for (int i = 0; i < numTick; ++i) {
        std::cout << "Insira o número de ingressos " << i + 1 << ": ";
        std::cin >> bookTick[i];
    } //armazena o numero de ingressos em um vetor
    */

    int size=bookTick.size();

    std::cout << "Você pediu "<<size<<" ingressos."<< std::endl;
    /*
    for (const auto& book : bookTick) {
        std::cout << book << std::endl;
    }
    */

    return 0;

    //a definir como vai ser trabalhado o vetor e o retorno dessa função
}