#include "../include/complexNumber.h"
#include <cmath>
#include <iostream>

    ComplexNumber::ComplexNumber(double a, double b): m_a(a), m_b(b){}

    ComplexNumber ComplexNumber::operator+(const ComplexNumber&varPlus) const{
        ComplexNumber r1; //resultado
        r1.m_a=m_a+varPlus.m_a;
        r1.m_b=m_b+varPlus.m_b;
        return r1;
    }

    ComplexNumber ComplexNumber::operator-(const ComplexNumber&varMin) const{
        ComplexNumber r2;
        r2.m_a=m_a-varMin.m_a;
        r2.m_b=m_b-varMin.m_b;
        return r2;
    }
    ComplexNumber ComplexNumber::operator*(const ComplexNumber&varMt) const{
        ComplexNumber r3;
        r3.m_a=m_a*varMt.m_a-m_b*varMt.m_b;
        r3.m_b=m_a*varMt.m_b+m_b*varMt.m_a;
        //ComplexNumber r3final=r3.m_a + r3.m_b;
        return r3;
    }
    ComplexNumber ComplexNumber::operator-() const{
        ComplexNumber r4;
        r4.m_a=-m_a;
        r4.m_b=-m_b;
        return r4;
    }
    //acima: unário
   double ComplexNumber::operator!() const{
       return std::sqrt(std::pow(m_a, 2) + std::pow(m_b, 2));
    }

    std::istream& operator>> (std::istream &in, ComplexNumber &varIn){
        in>>varIn.m_a>>varIn.m_b;
        return in;
    }

    std::ostream& operator<<(std::ostream& out, const ComplexNumber& varOut) {
     //   return out << varOut.m_a << " + " << varOut.m_b << "i";
    
    out << varOut.m_a;
        if (varOut.m_b >= 0) {
            out << "+" << varOut.m_b << "i";
        } else {
            out << "-" << -varOut.m_b << "i";
        }
        return out; //garante que o retorno não fique com operador + no meio, 
        //em caso de m_b negativo
    
    }
    //no lugar de var é objeto da classe