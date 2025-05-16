#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <iostream>
#include <cmath>

class ComplexNumber {

    private:    

    double m_a;
    double m_b; //coef. do imaginário

    public:
    //ComplexNumber();
    ComplexNumber(double a=0, double b=0);

    ComplexNumber operator+(const ComplexNumber&varPlus) const; 
    //const garante que não vai alterar o objeto    
    ComplexNumber operator-(const ComplexNumber&varMin) const;

    ComplexNumber operator*(const ComplexNumber&varMt) const;

    ComplexNumber operator-() const;

    double operator!() const;

    friend std::istream& operator>>(std::istream &in, ComplexNumber &varIn);
    friend std::ostream& operator<<(std::ostream& out, const ComplexNumber& varOut);

    // var é objeto da classe
    // friend não é tipo, não precisa ser chamado


};

#endif