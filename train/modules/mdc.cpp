#include "mdc.hpp"
#ifndef MDC_H
#define MDC_H

int mdc(int x, int y);

#endif 

int mdc(){
    int rest, x, y, n, temp;
    while(n--){
        if(y>x){
            temp = y; 
            y = x;
            x = temp;
        }
        while(x%y!=0){
            rest = x%y;
            x = y;
            y = rest;
        } 
        std::cout<<"MDC: "<<y<<"\n";
    }
    return 0;
}