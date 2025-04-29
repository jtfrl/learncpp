#ifndef BTICK_H
#define BTICK_H

class Ticket{
    std::string seatType; 
    double price; 
    int availableSeats 

Ticket (int vip=20, int pre=30, int reg=50){};

public:
void getAvailableSeats();
int bookTickets(int numTickets);
std::string typeTicket(std::string seatType);

};

#endif 
