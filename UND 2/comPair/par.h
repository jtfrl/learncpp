#ifndef NUMPAIR_H
#define NUMPAIR_H

#include <iostream>


template<class T>
class Par{
    T prValor;
    T sgValor;

    public:
    Par(T primeiroValor, T segundoValor);
    void saida();
    char compararCom (Par& outroPar);
    void mostrarComparacao(Par &outroPar);

    template<class U>
    friend std::istream& operator>>(std::istream &in, Par<T> &varIn);

    template<class U>
    friend std::ostream& operator<<(std::ostream& out, const Par<T>& varOut);
    //permitem a formatação [num1, num2]
};
//comparação do segundo valor caso os dois primeiros sejam iguais

template<class T>
Par<T>::Par(T primeiroValor, T segundoValor){
    prValor=primeiroValor;
    sgValor=segundoValor;
}

template<class T>
void Par<T>::saida(){
    std::cout<<"["<<prValor<<", "<<sgValor<<"]";
}


template<class T>
char Par<T>::compararCom(Par& outroPar){
  if(prValor<outroPar.prValor){ //out é instância e pode acessar a classe
    return '<';
  }else if(prValor>outroPar.prValor){
    return '>';
  }else{
    if(sgValor<outroPar.sgValor){ 
        return '<';
    }else if(sgValor>outroPar.sgValor){
        return '>';
    }else{
        return '=';
    }
  }
} 


template<class T>
void Par<T>::mostrarComparacao(Par &outroPar){
    char comp=compararCom(outroPar); //toma a saída de compararCom
    saida();
    std::cout<<" "<<comp<<" "; //onde o sinal da comparação vai ficar
    outroPar.saida();
    std::cout<<std::endl;
}


template<class T>
std::istream& operator>>(std::istream &in, Par<T> &varIn){
    in>>varIn.prValor>>varIn.sgValor;
    return in;
    //idem de l. 65
}

template<class T>
std::ostream& operator<<(std::ostream& out, const Par<T>& varOut){
    out<<"["<<varOut.prValor<<", "<<varOut.sgValor<<"]";
    //linha 65: precisa do parâmetro do template (Par<T>)
    return out;
}   


#endif //dont erase NUMPAIR_H