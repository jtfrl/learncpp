#include <iostream>
#include "mdc.hpp"

#ifndef MDC_H
#define MDC_H

int mdc(int x, int y, int n);

#endif 

int mdc(int x, int y, int n){
    int rest, temp;
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
        return y;
    }
    return y; //linha adicionada para evitar erro de compilação
}