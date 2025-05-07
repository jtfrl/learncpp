#include "cubo.h"
#include <cmath>

int Cubo::c_count=0;

Cubo::Cubo(){
    m_aresta=0;
    c_count++; //conta as execuções
}

Cubo::Cubo(double aresta){
    m_aresta=aresta;
    c_count++; //para contagem das atribuições
}

double Cubo::area(){
    return 6*(pow(m_aresta, 2));
}
double Cubo::volume(){
    return pow(m_aresta, 3);
}
void Cubo::setAresta(int aresta){
    m_aresta=aresta;

}
int Cubo::getAresta(){
    return m_aresta;
}

int Cubo::getTotal(){
    return c_count;
}