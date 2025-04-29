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

//adaptação: será adaptada com uma classe (criada em bookTick.hpp)
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

    return 0;

    void getAvailableSeats(){
        std::cout<<"INGRESSOS DISPONÍVEIS: "<<std::endl;
        std::cout<<vip;
        std::cout<<pre;
        std::cout<<reg;
        //testar pra ver se exibe
    }
    int bookTickets(int numTickets){
        std::cout<<"Que tipo(s) de ingresso(s) você gostaria de reservar? "<<std::endl;
        std::cout<<"V - VIP | P - PREMIUM | R - REGULAR"<<std::endl;
        if((std::cin>>seatType)){
            //só segue se o usuário digitar uma das letras; a definir implementação
        }


    }
}


//classe para adaptação

