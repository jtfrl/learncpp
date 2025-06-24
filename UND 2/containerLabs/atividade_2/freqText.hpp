#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <map>

std::string readFile(const std::string &fname){
    //no argumento: endereçamento de arquivo de string
 
    std::ifstream inf(fname); 

    if(!inf){
        std::cerr<<"Oops! O arquivo não pode ser aberto para leitura.\n";
        return "";
    }

    std::string l; //tomar a linha

    if(std::getline(inf, l)) return l;

    return "";
    //le todas as linhas do arquivo

   // std::string strIn;
   // while(inf>>strIn){
   //     std::cout<<strIn<<'\n'; 
   // }

    //

}

std::vector<std::string> splitSpace(const std::string &fname){
    std::string line=readFile(fname); //dado em string
    std::istringstream iss(line); //le a string, extraindo os espaços

    std::vector<std::string> data; //vetor de dados
    std::string w;

    while(iss>>w){
        data.push_back(w); //coloca as palavras em data
    }

    return data; //dado separado por espaço

}

std::map<std::string, int> countW(const std::string &fname){
    std::vector<std::string> pal=splitSpace(fname); //array das palavras
    std::map<std::string, int> animal; 
    
    for(const auto &word:pal){
        animal[word]++;
        //word serve como incremento para ajudar na contagem
    }

    return animal;
}


