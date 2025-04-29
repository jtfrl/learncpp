#include <iostream>
#include <string>
#include <vector>

/*
VIP: 20 seats
Premium: 30 seats
Regular: 50 seats

Attributes: seatType (string), price (double), 
availableSeats (int). Methods: bookTickets(int numTickets), getAvailableSeats().

*/

//adaptação de função: será adaptada com uma classe (criada em bookTick.hpp)
int bookTick(int numTick){
    std::cout << "Ingressos disponíveis: " << TOTAL_ING - numTick<< std::endl;
    std::cout << "VIP: " << MAX_TICK_VIP - numTick<< std::endl;
    std::cout << "Premium: " << MAX_TICK_PREMIUM - numTick<< std::endl;
    std::cout << "Regular" << MAX_TICK_REGULAR - numTick<< std::endl;

    //necessário adaptar linha acima
    //as constantes devem mudar a cada vez que o número de ingressos mudar
    //verificar se deve ser numTick em cada
    std::cout << "Quantos ingressos você gostaria de reservar? ";

    std::vector<std::string> bookTick(numTick);
    int size=bookTick.size();

    std::cout << "Você pediu "<<size<<" ingressos."<< std::endl;
    if(size == 0){
        std::cout << "Nenhum ingresso foi solicitado." << std::endl;
        return 0;
    }else if(size > 0 && size <= MAX_TICK_REGULAR){
        std::cout << "Você pediu " << size << " ingressos." << std::endl;
        return size;
    }

    return 0; //retorna 0 se não houver ingressos disponíveis
    //a definir como vai ser trabalhado o vetor e o retorno dessa função
}


//classe para adaptação

