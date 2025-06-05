#ifndef v2D_H
#define v2D_H

#include <cmath>
#include <iostream>
#include <locale>

class Vetor2D{
    protected:
        int x, y;

    public:

    //colocar implementações em cpp
        Vetor2D(){
            x=0;
            y=0;
        }
        Vetor2D(int u_x, int u_y):x(u_x),y(u_y){}

        int getXValue(){
            return x; 
        }

        int getYValue(){
            return y; 
        }

        void setXValue(int u_x){
            x=u_x;
        }

        void setYValue(int u_y){
            y=u_y;
        }
       
};

//interface
class Desenhavel : public Vetor2D{
    public: 
        virtual void desenhar() const =0; //virtual puro
        virtual Vetor2D getCentro() const=0;
        virtual ~Desenhavel()=default; //destrutor
};

class Forma : public Desenhavel{
    public:
        virtual double area() const{
            return 0;
        } //vai haver override em retangulo
        virtual double perimetro() const{
            return 0;
        }
        Vetor2D getCentro() const override = 0;
};



#endif //v2D_H