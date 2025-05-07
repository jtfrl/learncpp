#include "esfera.h"
#include <cmath>

int Esfera::e_count=0;

Esfera::Esfera(){
    m_raio=0;
    e_count++;
}

Esfera::Esfera(double raio){
    m_raio=raio;
    e_count++;
}

double Esfera::area(){
    return 4*(M_PI)*(pow(m_raio, 2));
}
double Esfera::volume(){
    return (4/3)*(M_PI)*(pow(m_raio, 3));

}
void Esfera::setRaio(double raio){
    m_raio=raio;
}
double Esfera::getRaio(){
    return m_raio;
}

int Esfera::getTotal(){
    return e_count;
}

