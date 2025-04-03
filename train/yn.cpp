#include <iostream>


bool acceptyorn(){
int tries = 1;
    while (tries<4) {
        std::cout << "Do you want to proceed (y or n)?"<<std::endl; 
        char answer = 0;
        std::cin >> answer; // read answer
            switch (answer) {
            case 'y':
            return true;
            case 'n':
            return false;
            default:
            std::cout << "Sorry, I don't understand that"<<std::endl; 
        ++tries; // increment
        }
    }
    std::cout<<"I'll take that for a no."<<std::endl; 
    /*
    checando se aqui o loop para e vem essa
    */
    return false;/
}

int main(){
    acceptyorn();
    return 0;
}