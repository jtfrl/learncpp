#ifndef RET_H
#define RET_H
#include "vetor2D.h"
class Retangulo : public Forma {
    private:
        double largura;
        double altura;
    public:
        Retangulo(){
            largura=0;
            altura=0;
        };
        Retangulo(double a, double l):largura(l), altura(a){
            setXValue(x);
            setYValue(y);
        }

        Vetor2D getCentro() const override{
            return Vetor2D(largura/2,altura/2);
        }

        double area() const override{
            return largura*altura;
        }
        double perimetro() const override{
            double p=2*(largura+altura);
            return p;
        }

        void desenhar() const override{
             //permite usar caracteres especiais
            std::locale::global(std::locale("en_US.UTF-8"));
            std::wcout.imbue(std::locale());

            for(int i=0; i<largura; i++){
                for(int j=0; j<altura; j++){
                      std::cout<<(i==0||i==largura-1||j==0||j==altura-1 ? "▄ " : "▄ ");
                }

                std::cout<<std::endl;
            }
            std::cout<<std::endl;
        }
        

};


/*
▲ (alt+30)
◄ (alt+17)
◘ (alt+520)
*/

#endif //RET_H
