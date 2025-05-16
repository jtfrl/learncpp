[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/K2pKH6YN)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=19545590)
# Lab #05 - Sobrecarga de operadores

Neste laboratório iremos explorar os aspectos e conceitos relacionados a sobrecarga de operadores em C++, além de diversos outras funcionalidades e conceitos vistos em sala de aula.

## Números complexos

Um número complexo qualquer $z$ possui a forma $z = a+bi$, em que $a$ e $b$ são números reais e $i$ é a unidade imaginária. Considere os números complexos $z_{1} = a+bi$ e $z_{2}=c+di$ e as seguintes operações:

* Criação de um número complexo qualquer $z$ à partir de dois números reais $a$ e $b$
* Adição: $z_{1}+z_{2}=a+c+(b+d)i$
* Subtração: $z_{1}-z_{2}=a-c+(b-d)i$
* Multiplicação: $z_{1}*z_{2} = (ac-bd) + (ad + bc)i$
* Negação: $-z_{1} = -a - bi$
* Módulo: $|z|=\sqrt{a^{2}+b^{2}}$

## Atividade

Implemente um programa em C++ chamado `complexo` que permita criar e operar dois números complexos. O programa deverá receber, por meio da linha de comando, os valores de $a$, $b$, $c$ e $d$, nesta ordem, todos eles precedidos de um símbolo que indica a operação desejada: `soma` ( $+$ ), `subtração` ( $-$ ), `multiplicação` ( $*$ ), `negação` ( $-$ ) e `módulo` ( $!$ ). O programa deve exibir o resultado da operação, de acordo com os exemplos abaixo:

**Exemplos de entrada e saída**

* Exemplo 1: criação do número complexo $z_{1}=1+2i$ e $z_{2}=3+4i$ e operação de `soma`
  + Entrada: `./complexo + 1 2 3 4`
  + Saída: `4+6i`

* Exemplo 2: criação do número complexo $z_{1}=1+2i$ e $z_{2}=3+4i$ e operação de `subtração`
  + Entrada: `./complexo - 1 2 3 4`
  + Saída: `-2-2i`

* Exemplo 3: criação do número complexo $z_{1}=1+2i$ e $z_{2}=3+4i$ e operação de `multiplicação`
  + Entrada: `./complexo '*' 1 2 3 4 `
  + Saída: `-5+10i`

* Exemplo 4: criação do número complexo $z_{1}=1+2i$ e $z_{2}=3+4i$ e operação unária de `negação`
  + Entrada: `./complexo - 1 2`
  + Saída: `-1-2i`

* Exemplo 5: criação do número complexo $z_{1}=1+2i$ e $z_{2}=3+4i$ e operação unária de `módulo`
  + Entrada: `./complexo '!' 1 2`
  + Saída: `2.23607`

### Orientações gerais

+ Para essa atividade, construa uma classe que permita representar e operar números complexos. Essa classe deve ser chamada `ComplexNumber`, com construtor parametrizado `ComplexNumber(double a, double b)`.
+ Você deve utilizar, **OBRIGATORIAMENTE**, **sobrecarga de operadores** para todas as operações acima descritas, conforme os operadores descritos nas entradas. Para a apresentação de números complexos no terminal, você deve utilizar a sobrecarga do operador de inserção em *stream* ( $<<$ ).  
+ Inclua seus arquivos nas pastas `src` (arquivos `.cpp`) e `include` (arquivos `.h`). Não modifique a pasta `.github`.
+ O arquivo Makefile já foi disponibilizado. Abra-o e compreenda as instruções.
+ O arquivo `main.cpp` com a função `main()` já foi disponibilizado com todas as instruções para gerenciar a entrada e saída do programa.
+ O arquivo executável será direcionado para a pasta `bin` (não é preciso adicionar o executável ao repositório).
