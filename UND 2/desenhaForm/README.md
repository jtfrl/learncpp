[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/5E5a1wqQ)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=19703282)
# Lab #07 - Herança

O objetivo deste laboratório é se familiarizar com os conceitos de herança, classes abstratas e interfaces em C++. Ao final deste laboratório, os alunos deverão ser capazes de:

- Implementar a herança em C++;
- Criar classes abstratas;
- Utilizar interfaces (classes com métodos puramente virtuais). 

**Atenção!** Essa atividade não tem correção automática.

## Atividade 

Para esta atividade, ao final, crie um arquivo `Makefile` para compilar o seu programa.

### Classe `Vetor2D`

Crie uma classe chamada `Vetor2D`, que representa uma posição em uma região plana com coordenadas $x$ e $y$, com os seguintes atributos:

- `int x`
- `int y`

Crie métodos _getters_ e _setters_ para esses dois atributos, além de um construtor padrão (definindo os atributos do objeto em 0) e um parametrizado recebendo a posição `(x, y)` como argumento.

### Interface `Desenhavel`

Crie uma interface chamada `Desenhavel` com um único método virtual puro com assinatura `void desenhar() const`. 

### Classe abstrata `Forma`

Crie uma classe abstrata chamada `Forma`, que herda da interface `Desenhavel`, com os seguintes métodos:

- `double area() const`: retorna a área do objeto Forma em questão. Se a Forma não está definida, retorna 0. Faça esse método ser `virtual` (não puro).
- `double perimetro() const`: retorna o perímetro do objeto Forma em questão. Se a Forma não está definida, retorna 0. Faça esse método ser `virtual` (não puro).
- `Vetor2D getCentro() const`: método **virtual puro** para retornar um objeto `Vetor2D` correspondente a posição do centro da forma em questão.

### Classes derivadas: `Quadrado` e `Retangulo`

Crie duas classes: uma chamada `Quadrado` e outra chamada `Retangulo`, onde ambas herdam de `Forma`. 

A classe `Quadrado` deve ter um único atributo:

- `int lado`: lado do quadrado em caracteres

A classe `Retangulo` deve ter os atributos:

- `int largura`: largura do retângulo em caracteres
- `int altura`: altura do retângulo em caracteres

Crie os construtores padrão (definindo os atributos para 0) e também um parametrizado recebendo os atributos de cada uma das classes como argumento.

**Importante!** Implemente todos os métodos herdados necessários para possibilitar a instanciação de objetos das classes `Quadrado` e `Retangulo`. O método herdado `desenhar()` deve imprimir na tela a forma em questão usando caracteres ASCII (faça da forma que achar melhor), de acordo com as características da forma em questão. 

Exemplo `Quadrado`:

```c++
int main() {
    Quadrado quad(10);
    std::cout << "Area: " << quad.area() << std::endl;
    std::cout << "Perimetro: " << quad.perimetro() << std::endl;
    std::cout << "Centro: (" << quad.getCentro().getX() << ", "<< quad.getCentro().getY() << ")" << std::endl;
    std::cout << std::endl;
    quad.desenhar();
}
```

```
Area: 100
Perimetro: 40
Centro: (5, 5)

*  *  *  *  *  *  *  *  *  * 
*                          *
*                          *
*                          *
*                          *
*                          *
*                          *
*                          *
*                          *
*  *  *  *  *  *  *  *  *  * 
```

Exemplo `Retangulo`:

```c++
int main() {
    Retangulo ret(11, 5);
    std::cout << "Area: " << ret.area() << std::endl;
    std::cout << "Perimetro: " << ret.perimetro() << std::endl;
    std::cout << "Centro: (" << ret.getCentro().getX() << ", "<< ret.getCentro().getY() << ")" << std::endl;
    std::cout << std::endl;
    ret.desenhar();
}
```

```
Area: 55
Perimetro: 32
Centro: (5, 2)

*  *  *  *  *  *  *  *  *  *  *
*                             *
*                             *
*                             *
*  *  *  *  *  *  *  *  *  *  *
```

### Arquivo `main.cpp`

Foi fornecido um arquivo `main.cpp` contendo a função `main`. Fique a vontade para alterar o que julgar necessário, além de ajustar eventuais correções necessárias para o funcionamento do mesmo de acordo com sua organização de código.

### Pontuação extra (opcional)


1. Sobrecarregue o operador `<<` para conseguir imprimir na tela a partir de objetos `Retangulo` e `Quadrado`. Escolha a forma mais adequada para representar esses objetos, por exemplo:

```
Retangulo ret(10, 5);
std::cout << ret << std::endl;
```

Por exemplo, poderia resultar em:

```
Retangulo com altura 10 e largura 5.
```

2. Crie outras classes derivadas de `Forma`, como por exemplo `Triangulo` e `Circulo`.
