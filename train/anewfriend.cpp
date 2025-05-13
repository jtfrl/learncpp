//BASEADO EM SCHILDT, H. p. 298
#include <iostream>
#include <cmath>

//n_ -> means new value

class Smthg{
    int a, b;
    public:
    Smthg();
    Smthg(int a,int b); //necessário usar as próprias variáveis da classe
    int get_a();
    int get_b();
    void set_ab(int n_a, int n_b);

    friend int pwr(Smthg value); //power function
};

Smthg::Smthg():
    a(0), b(0)
{}

Smthg::Smthg(int a, int b): a(a), b(b){}
//logo acima: construtores

int Smthg::get_a(){
        return a;
    }
void Smthg::set_ab(int n_a, int n_b){
    a=n_a;
    b=n_b;
    }
int Smthg::get_b(){
        return b;
    }

int pwr(Smthg value){
    int k=pow(value.a, value.b);
    return k;
}

int main(){
    Smthg powValue(5, 3);
    std::cout<<pwr(powValue)<<std::endl; //pwr acessa o objeto criado na linha acima
    return 0;
}

