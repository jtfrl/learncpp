/*
código de usuário

o programa vai verificar números aleatórios inseridos pelo usuário e concatenar
com as inicais do seu nome 

Ex.: 5 9 6 João Alberto Silva
J5A9S6 (output)
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream> //fluxo de stream
#include <cctype>

//em uma das opções, será feito o padrão letra-número
//na outra, o padrão será letra-símbolo (lista restrita)

//lista restrita a seguir

using restricted = char;

bool isValid(restricted c){
    return (c >= '0' && c <= '9') || 
           (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || 
            c == '&' || c == '*' || c == '(' || c == ')');
}

template <typename N, typename initial=char>
std::basic_string<initial> userCode(
    const std::vector<N>& numOrSymb,
    //N só pode receber 0-9 e um dos símbolos !@#$%&*()
    const std::basic_string<initial>& fullName
){
    std::basic_ostringstream<initial> code;
    std::basic_istringstream<initial> nameStream(fullName);
    std::basic_string<initial> part; //onde fica o nome
    size_t index=0;

    //extração de letras e combinação com número ou símbolo (lista restrita)
    while (nameStream>>part && index < numOrSymb.size()){
        if(!part.empty()){
            code<<static_cast<initial>(std::toupper(part[0]));
            if(isValid(static_cast<restricted>(numOrSymb[index]))){
                code<<numOrSymb[index++];
                //code << static_cast<initial>('0' + numOrSymb[index++]);
            } else {
                throw std::invalid_argument("Invalid character");
            }
        }
            //cadeia que vai verificar se o dado é 
            //número ou do conjunto restrito de caracteres.   
    }

    return code.str();
}


int main(){
    std::vector<char> num = {'1', '8', '2'};
    //caso fosse <int>, os números iriam ser trocados 
    //pelo correspondente em ASCII  
    std::string fname = "Caio Fernando Abreu";
    std::cout<<"Código 1: "<<userCode(num, fname)<<std::endl;

    std::vector<restricted> ns={'&','6','%'};
    std::string fname2 = "Lygia Fagundes Telles";
    std::cout<<"Código 2: "<<userCode(ns, fname2)<<std::endl;

    std::vector<restricted> ns2={'&','9','%'};
    std::string fname3 = "Luís Câmara Cascudo";
    std::cout<<"Código 3: "<<userCode(ns2, fname3)<<std::endl;

    return 0; 
}

/*
output:

Código 1: C1F8A2
Código 2: L&F6T%
Código 3: L&C9C%
*/



