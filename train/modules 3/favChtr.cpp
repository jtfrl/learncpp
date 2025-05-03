#include <iostream>
#include "favChtr.hpp"

favorite::favorite(std::string character, std::string series, int age, int seriesYear):
     m_character(character), m_series(series), m_age(age), m_seriesYear(seriesYear)
{}

void favorite::setCharacter(std::string novoChtr){
    m_character=novoChtr;
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