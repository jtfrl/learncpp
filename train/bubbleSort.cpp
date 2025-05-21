#include <iostream>

template <typename T>
void troca(T &a, T &b){ 
    //passagem por referencia aqui 
    //evita a cópia com dados complexos
    T temp=a;
    a=b;
    b=temp;
}

template <typename T>
void printArray(T* v, int n){
    for (int i=0; i<n; i++) std::cout<<v[i]<<","<<" ";
    std::cout<<std::endl;
} //sem uso de <vector>


void bubbleSort(int *v, int n){
    for (int i=0; i<n-1; i++) //garante execução do 
    //processo no array v
        for (int j=0; j<n-i-1; j++)
            if(v[j]>v[j+1]) troca(v[j], v[j+1]);
}

int main(){
    const int tam=8;
    int arr[tam]={59, 32, 27, -115, -48, -3, 443, 29};
    bubbleSort(arr, tam);
    printArray(arr, tam);
}