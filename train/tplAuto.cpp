#include <iostream>
#include <cmath>

int somar (int x, int y){ return x+y;}
//auto somar (auto x, auto y){ return x+y;} auto não é permitido no campo de parâmetro
auto somar (long long int x, long long int y){ return x+y;} 
float somar (float x, float y){ return x+y;}
double somar (double x, double y){ return x+y;}
//auto somar(int x, float y){ return x+y;} //tipos diferentes podem ser usados


template <typename T>
    T somar(T a, T b){
        return a+b;
    }

auto somar(int x, float y){ return x+y;}
 //deve vir abaixo para funcionar com template

int main(){

    int b=somar(4,5);
	std::cout<<b<<std::endl;
    auto c=somar(4, 4.8f);
	std::cout<<c<<std::endl;

    somar(45988895, 66966652);

    return 0;
}