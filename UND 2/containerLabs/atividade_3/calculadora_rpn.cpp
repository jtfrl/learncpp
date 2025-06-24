#include "rpn.hpp"

int main(int argc, char* argv[]){ 
    if(argc!=2){
        std::cerr<<"Uso"<<argv[0]<<"\"<expression in RPN>\"\n";
        std::cerr << "Exexmplo de uso: " << argv[0] << " \"3 4 + 2 *\"\n";
        return 1;
    }

    try{
      std::vector<std::string> token;
      std::istringstream iss(argv[1]);
      std::string provideToken;
      
      while (iss>>provideToken){
        token.push_back(provideToken);
      }

      numRPN exp;
      //std::string f_exp=exp.strOperation(token);
      //std::cout<<"Expressão em forma comum: "<<f_exp<<std::endl; mostra a expressão
      double r=exp.resStack(token);
      std::cout<<"Resultado: "<<r<<std::endl;

    }
    catch(const std::exception& e){
        std::cerr<<"Erro: "<<e.what()<<std::endl; //what toma a mensagem de erro de função
        return 1;
    }


   return 0;
}