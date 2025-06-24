#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>

class sVetor{
    std::vector<int> dados; 

    public:
    sVetor() = default;

    ~sVetor(){
        dados.clear();
    }

    void inVetor(){
        int v;
        std::cout<<"Digite números inteiros (-1 para sair): "<<std::endl;
        while(std::cin>>v){ //enquanto houver input
            if(v==-1){
                break;
            }else{
                dados.push_back(v);
            }
        }
    }

    void contaV(){
        std::cout<<"Quantidade de números: "<<dados.size()<<std::endl;
    }

    void avV(){
        int soma=0;
        for(long unsigned int i=0; i<dados.size(); i++){
            soma+=dados[i];
        }
        double media=static_cast<double>(soma)/dados.size();
        std::cout<<"Média: "<<std::fixed<<std::setprecision(2)<<media<<std::endl;
    }

    std::vector<int> bbsort(std::vector<int> dados){
        int tam=dados.size();
        for(int i=0; i<tam-1; i++){
            for(int j=0;j<tam-1-i; j++){
                if(dados[j+1]<dados[j]){
                    int t=dados[j];
                    dados[j]=dados[j+1];
                    dados[j+1]=t;
                }
            }
        }
        return dados;
    }

    void s_Vector(){ 
        std::vector<int> dadosNovo=bbsort(dados);
        std::cout<<"Números ordenados: ";
        for (int num:dadosNovo){
            std::cout<<num<<" ";
        }
        std::cout<<std::endl;
    }

    
    int seqSearch(int k){
        for(long unsigned int i=0; i<dados.size();i++){
            if(k==dados[i]){
                std::cout<<"O valor "<<dados[i]<<" está na lista."<<std::endl;
                return dados[i];
            }
        }
        return -1;
    }

    void getMaxMin(){
        if(dados.empty()){
            std::cerr<<"Nenhum número foi digitado"<<std::endl;
            return;
        }else{
            std::vector<int> dadosNovo=bbsort(dados);
            int mVal=dados.size()-1;
            std::cout<<"Menor valor: "<<dadosNovo[0]<<"\n";
            std::cout<<"Maior valor: "<<dadosNovo[mVal]<<std::endl;
        }
    }


    /* pode ser útil 

    void sortVector(){
        std::sort(dados.begin(), dados.end());
        std::cout<<"Números em ordem crescente: "<<std::endl;
        for(int num:dados) std::cout<<num<<" "<<std::endl;
        std::cout<<std::endl;
    }
    
    */
    
};

/*
alternativa para inVetor

 while (true) {
        std::cin >> v;
        if (v == -1) break; // Stop input when -1 is entered
        dados.push_back(v);
    }


:> métodos como begin, find, etc, são do algorithm
*/