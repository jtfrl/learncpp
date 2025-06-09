#ifndef QDD_H
#define QDD_H
#include "vetor2D.h"

class Quadrado : public Forma{
    private:
        double lado; //se não, for conferir no README
    public:
        Quadrado() : lado(0){}

        Quadrado (double ld): lado(ld){
            //valores configurados
            setXValue(x);
        }

        Vetor2D getCentro() const override{
            return Vetor2D(lado/2, lado/2);
        }

        double area() const override{
            return lado*lado;
        }

        double perimetro() const override{
            double p=4*lado;
            return p;
        }


        void desenhar() const override{
            //permite usar caracteres especiais
            std::locale::global(std::locale("en_US.UTF-8"));
            std::wcout.imbue(std::locale());


            for(int i=0; i<lado;i++){
                for(int j=0; j<lado;j++){
                    std::cout<<(i==0||i==lado-1||j==0||j==lado-1 ? "▄ " : "▄ ");
                }
                std::cout<<std::endl;
            }
        }

    friend std::ostream& operator<<(std::ostream& out, const Quadrado& varOut);


};

        
    
    std::ostream& operator<<(std::ostream& out, const Quadrado& varOut){
        out<<"Quadrado com lado "<<varOut.lado<<"."<<std::endl;
        return out;
    }














#endif //QDD_H 