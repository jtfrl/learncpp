// Altere as importações para funcionar corretamente com sua organização de código.
#include "Quadrado.h"
#include "Retangulo.h"
#include <iostream>

int main() {

    Quadrado quad(28);
    std::cout << "Area: " << quad.area() << std::endl;
    std::cout << "Perimetro: " << quad.perimetro() << std::endl;
    std::cout << "Centro: (" << quad.getCentro().getXValue() << ", "<< quad.getCentro().getYValue() << ")" << std::endl;
    std::cout << quad << std::endl;
    quad.desenhar();

    std::cout << std::endl;

    Retangulo ret(11, 23);
    std::cout << "Area: " << ret.area() << std::endl;
    std::cout << "Perimetro: " << ret.perimetro() << std::endl;
    std::cout << "Centro: (" << ret.getCentro().getXValue() << ", "<< ret.getCentro().getYValue() << ")" << std::endl;
    std::cout << ret << std::endl;
    ret.desenhar();

    return 0;
}