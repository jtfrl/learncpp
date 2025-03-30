#include <iostream>
using namespace std;


int fact(int num){
    if(num==1) return 1;
    else
        return num*(fact(num-1));
}

int main(){
    int n;

    cout<<"Digite um número \n";
    cin>>n;
    cout<<"Fatorial de "<<n<<" é "<<fact(n)<<"\n";

}