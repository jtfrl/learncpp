#include <iostream>
#include "favChtr.hpp"

int favorite::m_chtr=0; //inicializa o contador de personagens

favorite::favorite(std::string character, std::string series, int age, int seriesYear):
     m_character(character), m_series(series), m_age(age), m_seriesYear(seriesYear)
{
    m_chtr++;
}//construtor que permite adicionar os itens de personagem preferidos.


void favorite::setCharacter(std::string novoChtr){
    m_character=novoChtr;
    m_chtr++;
}

std::string favorite::getCharacter(){
    return m_character;
}

void favorite::setSeries(std::string seriesName){
    m_series=seriesName;
}

std::string favorite::getSeries(){
    return m_series;
}

void favorite::setAge(int age){
    if (age>0) m_age=age;
    std::cout<<"Digite um número válido"<<std::endl;
}

int favorite::getcAge(){
    return m_age;
}

void favorite::setseriesYear(int seriesYear){
    if (seriesYear>0)  m_seriesYear=seriesYear;
    std::cout<<"Digite um número válido"<<std::endl;
}
int favorite::getsYear(){
    return m_seriesYear;
}

int favorite::countFav(){
   return m_chtr;
}
