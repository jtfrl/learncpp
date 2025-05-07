#include "paralelepipedo.h"
#include <cmath>

int Paralelepipedo::p_count=0;

/*
Paralelepipedo::Paralelepipedo(){
    m_aresta1=0;
    m_aresta2=0;
    m_aresta3=0;
    p_count++;
}
*/

Paralelepipedo::Paralelepipedo() : m_aresta1(0), m_aresta2(0), m_aresta3(0) {
    p_count++;
}

Paralelepipedo::Paralelepipedo(double aresta1, double aresta2, double aresta3) 
   : m_aresta1(aresta1), m_aresta2(aresta2),  m_aresta3(aresta3){
    p_count++;
}

double Paralelepipedo::area(){
    double A=(2*m_aresta1*m_aresta2)+(2*m_aresta1*m_aresta3)+(2*m_aresta2*m_aresta3);
    return A;
}

double Paralelepipedo::volume(){
    double V=m_aresta1*m_aresta2*m_aresta3;
    return V;
}


void Paralelepipedo::setAresta1(double aresta1){
    m_aresta1=aresta1;
}

void Paralelepipedo::setAresta2(double aresta2){
    m_aresta2=aresta2;

}
void Paralelepipedo::setAresta3(double aresta3){
    m_aresta3=aresta3;

}
double Paralelepipedo::getAresta1(){
    return m_aresta1;
}
double Paralelepipedo::getAresta2(){
    return m_aresta2;

}
double Paralelepipedo::getAresta3(){
    return m_aresta3;

}

int Paralelepipedo::getTotal(){
    return p_count;
}