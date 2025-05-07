[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/dc9tBC7_)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=19448292)
# Lab #04 - Orientação a objetos

Neste laboratório iremos explorar os aspectos e conceitos relacionados a orientação a objetos em programas escritos em C++. 

## Atividade 1

A Geometria é fundamental para resolver problemas em agricultura, astronomia, arquitetura e engenharia. Dentre as divisões da Geometria, encontram-se as chamadas Geometria Plana e Geometria Espacial. A Geometria Plana refere-se ao estudo das figuras geométricas definidas em um plano de duas dimensões, enquanto que a Geometria Espacial se encarrega do estudo das figuras geométricas (também chamadas de sólidos geométricos) definidas no espaço, ou seja, aquelas que possuem mais de duas dimensões e ocupam um lugar no espaço. 

Hoje vamos focar nas figuras geométricas espaciais, como cubo, a esfera e o paralelepípedo. As principais características destas figuras são, além dos seus atributos elementares, a área da superfície e o seu volume.

Para o cubo, a área ($A$) e o volume ($V$) são calculados por:

$$
A = 6 \times aresta^2
$$

$$
V = aresta^3
$$

Para a esfera, a área ($A$) e o volume ($V$) são calculados por:

$$
A = 4 * \pi \times raio^2
$$

$$
V = \frac{4}{3} \times \pi \times raio^3
$$

Para o paralelepípedo, a área ($A$) e o volume ($V$) são calculados por:

$$
A = (2 \times aresta1 \times aresta2) + (2 \times aresta1 \times aresta3) + (2 \times aresta2 \times aresta3)
$$

$$
V = aresta1 \times aresta2 \times aresta3
$$

Implemente um programa responsável por modelar estes três diferentes volumes geométricos usando conceitos de POO. As classes a serem criadas:

`Cubo` com construtor parametrizado recebendo `(double aresta)`. Esse atributo deve ser privado.

`Esfera` com construtor parametrizado recebendo `(double raio)`. Esse atributo deve ser privado.

`Paralelepipedo` com construtor parametrizado recebendo `(double aresta1, double aresta2, double aresta3)`. Esses atributos devem ser privados.

Todas as classes devem ter *getters* e *setters* públicos definidos para todos os seus parâmetros definidos no construtor parametrizado, seguindo a conveção de nomes para esses métodos. Todas as classes também deverão ter os métodos públicos `double area()` e `double volume()` para retornar os valores de área da superfície e do volume da figura. Use modularizacao externa, com um arquivo de cabecalho (`.h`) e corpo (`.cpp`) para cada classe criada.

Para todas as formas geométricas, inclua um contador como atributo estático privado que armazena a quantidade total de instâncias daquela classe já criadas. Inclua um método estático chamado `int getTotal()` que retorna esse valor.

> Dica: Utilize a bibliteca `<cmath>` para incluir funções e constantes matemáticas. Por exemplo `M_PI` representa a constante $\pi$. A função `pow(a, b)` representa a potência $a^b$.
