#include <iostream>
#include <vector>
    
class Num{
    int m_x;
    int m_y;
    public:
    Num();
    Num(int m_x, int m_y);
    friend class MDC;

};

Num::Num(): m_x(0), m_y(0){}

Num::Num(int a, int b): m_x(a),m_y(b){}

class MDC{
  public:
  std::vector<int> calcMDC(Num a, Num b); //inicaliza fornecendo dois valores  
};

int mdc(int x, int y){
    int rest, temp;
 
        if(y>x){
            temp = y; 
            y = x;
            x = temp;
        }
        while(x%y!=0){
            rest = x%y;
            x = y;
            y = rest;
        } 
        return y;
   
    return y; //linha adicionada para evitar erro de compilação
}

std::vector <int> MDC::calcMDC(Num a, Num b){
    int x=a.m_x;
    int y=a.m_y;
    int w=b.m_x;
    int z=b.m_y;

    int XY= mdc(x,y);
    int WZ= mdc(w,z);

    std::vector<int> rlt={XY, WZ};

    return rlt; //vetor vem com chaves
}

int main(){
    
    Num numMDC1(385, 25);
    Num numMDC2(50, 25);
    MDC p;

    std::vector<int> rlts=p.calcMDC(numMDC1, numMDC2);

   
    int i=1;
    for (const auto& rlt: rlts){
       std::cout<<"Valor do MDC do par "<<i<<": "<<rlt<<" ";
       std::cout<<std::endl;
     i++;
    }
    //antes era algo como 
    /*
    for (size_t s=0;s<rlts.size();++s){
            std::cout<<"Valor do MDC do par "<<s+1<<": "<<rlts[s]<<" ";
            std::cout<<std::endl;
        }
    }

    */
    return 0;
}