#include "freqText.hpp"

int main(int argc, char* argv[]){
    //argc conta parâmetro
    //argv aramazena os argumentos em si


    if(argc!=2){
        std::cerr<<"Uso: "<<argv[0]<<" <arquivo>\n";
        return 1;
    }

    std::string filename=argv[1];
    std::string l=readFile(filename);
    std::vector<std::string> data=splitSpace(filename);
    std::map<std::string, int> a=countW(filename);

    //todas usam filename, mas mas cada um a seu modo, para
    //que cada uma, em cadeia, realize as funções. 

    for (const auto&pair: a){
        std::cout<<pair.first<<": "<<pair.second<<std::endl;
    }


    return 0;
    
}