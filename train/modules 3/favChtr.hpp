#include <iostream>
#include "favChtr.hpp"


int favorite::m_chtr=0; //inicializa o contador de personagens
int favorite::m_sCount=0;
std::vector<std::string> favorite::m_allSeries; //inicializa o estático de nomes

//inicializa para m_allSeries


favorite::favorite(std::string character, std::string series, int age, int seriesYear):
     m_character(character), m_series(series), m_age(age), m_seriesYear(seriesYear)
{
    m_chtr++;
    m_sCount++;
    m_allSeries.push_back(series); //as series vão para o vetor m_allSeries
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
    m_sCount++;
}

std::string favorite::getSeries(){
    return m_series;
}

void favorite::displaySeries(){
    std::cout<<"Series Names"<<std::endl;

    for (const auto& series: m_allSeries) std::cout<<series<<std::endl;
} //função estática: pode usar m_series
//utiliza referência e tipo auto

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

int favorite::countSeries(){
    return m_sCount;
}
