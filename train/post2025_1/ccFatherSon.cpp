/*
ESSE CÓDIGO SERVE DE UM TESTE ÚTIL PARA UM OUTRO PROGRAMA (JOGO RETROCA)
*/

#include <iostream>
#include <map>
#include <string>
#include <utility>


class Father{
       protected:
    
    std::string data;

        public:
        
    Father(){
        std::cout<<"construtor padrão chamado\n";
    }
        
    Father(std::string d): data(d){
        std::cout<<"teste de classe pai"<<std::endl;
    }
    
    std::string seeData() const{ //?? porque é importante ter um const aqui?
        return data;
    }
    
    
    //função que vai ajudar na ordenação de map
    bool operator<(const Father& v) const{
        return this-> data < v.data; //v é um objeto de classe Father
    }
};

class Son : public Father{
 private:
        
    std::map<Father, int> t;
    
 public:
    
    Son(std::map<Father, int> newtest) : Father(), t(std::move(newtest)){
    //construtor padrão ajuda na declaração e atribuição (linha 42)    
        std::cout<<"teste da classe filha"<<std::endl;
    }
    
    void printMap() const{
        std::cout<<"\n ### chamada de construtor"<<std::endl;
        for(const auto& pair:t){
            std::cout<<"Chave: '"<<pair.first.seeData()<<"', Value: "<<pair.second<<std::endl;
        }
        
        std::cout<<"****************"<<std::endl;
    }
    
};

int main(){

std::map<Father, int> dado={{Father("Nome A"), 90}}; //teste de classe pai (imprime duas vezes)
std::map<Father, int> dado2={{Father("Nome B"), 820}};


//construtor padrão é chamado; objeto com base na classe filha então vem
Son teste1(dado);
Son teste2(dado2);

teste1.printMap();
teste2.printMap();



    return 0;
}


/* SAÍDA (início)
teste de classe pai 
teste de classe pai 


construtor padrão chamado 
teste da classe filha 
construtor padrão chamado 
teste da classe filha

*/