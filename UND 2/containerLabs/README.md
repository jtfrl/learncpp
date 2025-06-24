[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/OCm7T2N3)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=19805385)
# Roteiro de Laboratório 08

## Atividade 8.1. Manipulando Dados — Uso do container `std::vector`

Nesta atividade você irá praticar o uso do container `std::vector` da biblioteca padrão (STL). O `vector` é uma estrutura que permite armazenar uma lista de elementos de tamanho dinâmico, sendo amplamente utilizado quando não se sabe previamente quantos elementos serão manipulados.

### 🎯 Objetivo

O objetivo é criar um programa que receba uma lista de números inteiros positivos, calcule estatísticas básicas e permita ordenação e busca.

### ✅ Requisitos

Implemente um programa que:

1. Permita que o usuário digite uma sequência de números inteiros positivos (digitar qualquer número negativo encerra a entrada).
2. Exiba:
- A quantidade de números digitados.
- A média dos valores.
- O menor e o maior valor.
3. Exiba os números em ordem crescente.
4. Permita que o usuário pesquise um único número e informe se ele está na lista.
5. Encerre o programa.

### 💡 Observações

- **IMPORTANTE!** Deve ser incluído um `Makefile`, no diretório da atividade (`/atividade_1`), que ao executar `make` gere um binário chamado `estatistica`.

### 📜 Exemplo de entrada e saída

Dentro de `/atividade_1`:

```bash
# ./estatistica
Digite números inteiros (-1 para sair):
5
8
3
10
-1
```

A saída esperada:

```
Quantidade de números: 4
Média: 6.5
Menor valor: 3
Maior valor: 10
Números ordenados: 3 5 8 10
Digite um número para buscar: 8
O número 8 está na lista.
```

## Atividade 8.2. Organizando Dados — Frequência de palavras usando `std::map`

Nesta atividade você irá desenvolver um programa que conta a frequência de palavras em um texto fornecido pelo usuário. O objetivo é praticar o uso da biblioteca padrão (STL), em especial o container `std::map`, que permite armazenar dados em pares chave-valor de forma ordenada.

### 🎯 Objetivo

Dado um texto obtido através de um arquivo de entrada, o programa deve contar quantas vezes cada palavra aparece (frequência).

### ✅ Requisitos

1. Ler um arquivo de texto contendo uma única linha e armazena-la em uma `string`. Este arquivo deve ser passado como [parâmetro posicional](#dicas) da execução do programa **que deve se chamar** `frequencia`.
2. Separar o texto em palavras (usando espaço como separador).
3. Armazenar as palavras e suas respectivas quantidades em um `std::map<std::string, int>`.
4. Exibir as palavras e suas quantidades ordenadas pela chave (ordem alfabética).

### 💡 Observações

- Foram incluídos 3 arquivos de exemplo no diretório `/data`.
- Considere que as palavras estão separadas por espaços.
- Não é necessário tratar pontuação ou diferenciação entre maiúsculas e minúsculas.
- O uso do `std::map` garante que as palavras serão armazenadas e exibidas em ordem alfabética, portanto basta iterar sobre a estrutura de dados.
- **IMPORTANTE!** Deve ser incluído um `Makefile`, no diretório da atividade (`/atividade_2`), que ao executar `make` gere um binário chamado `frequencia`.

### 📜 Exemplo de entrada e saída

Dentro de `/atividade_2`:

```bash
# ./frequencia data/entrada1.txt
cachorro: 3
gato: 2
passarinho: 1
```

## Atividade 8.3. Pilha de Números — Calculadora reversa (RPN) usando `std::stack`

Neste atividade você irá implementar uma calculadora que utiliza a Notação Polonesa Reversa (RPN - _Reverse Polish Notation_), também conhecida como notação pós-fixada. Ao invés da notação convencional `((3 + 4) * 2)`, a expressão é escrita como `3 4 + 2 *`. 

Em RPN, os operadores aparecem após os valores sobre os quais operam. Por exemplo, a expressão `3 + 5` seria escrita como `3 5 +` em RPN. Da mesma forma, `(3 + 5) * (7 - 2)` seria escrita como `3 5 + 7 2 - *` em RPN.

Esse tipo de notação elimina a necessidade de parênteses para definir precedência, sendo muito utilizada em calculadoras científicas e interpretadores. O principal objetivo deste laboratório é praticar o uso da estrutura de dados `std::stack` da STL (_Standard Template Library_).

### 🎯 Objetivo

Dado uma expressão matemática na notação polonesa reversa, o programa deve calcular e exibir o resultado. 

### ✅ Requisitos

1. Ler uma expressão RPN como uma única linha de texto como [parâmetro posicional](#dicas) da execução do programa, **que deve se chamar** `calculadora_rpn`.
2. Utilizar uma pilha (`std::stack<double>`) para processar a expressão.
3. Suportar as quatro operações básicas: `+`, `-`, `*`, `/`.
4. Exibir o resultado final.

### 💡 Observações

- Os números e operadores são separados por espaços.
- A expressão deve ser bem formada. (você pode, opcionalmente, tratar erros como número insuficiente de operandos.)
- A pilha funciona no modelo LIFO (_Last In, First Out_): os últimos elementos inseridos são os primeiros a serem removidos.
- **IMPORTANTE!** Deve ser incluído um `Makefile`, no diretório da atividade (`/atividade_3`), que ao executar `make` gere um binário chamado `calculadora_rpn`.

### 📜 Exemplo de entrada e saída

Dentro de `/atividade_3`:

```bash
# ./calculadora_rpn "3 4 + 2 *"
Resultado: 14

# ./calculadora_rpn "10 2 8 * + 3 -"
Resultado: 23
```

## Dicas

### Parâmetros posicionais

Em C++, é possível passar parâmetros diretamente pela linha de comando quando executamos um programa. Esses parâmetros são chamados de **parâmetros posicionais** ou **argumentos de linha de comando**. Eles permitem que um programa receba informações externas no momento da execução, como nomes de arquivos, números ou opções.

A função `main()` pode ser definida de duas formas em C++:

```c++
int main() {
    // Sem parâmetros
}
```

Ou, utilizando parâmetros posicionais:

```c++
int main(int argc, char* argv[]) {
    // Com parâmetros
}
```

#### ✅ Explicação dos parâmetros:

- `argc` (_Argument Count_) — inteiro que indica quantos argumentos foram passados pela linha de comando, incluindo o nome do programa.
- `argv` (_Argument Vector_) — vetor de strings (`char*`) que armazena cada argumento.

O primeiro argumento (`argv[0]`) sempre é o nome do programa executado. Os demais (`argv[1]`, `argv[2]`...) são os parâmetros passados pelo usuário.

#### 💻 Exemplo de Código

```c++
#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Quantidade de argumentos: " << argc << std::endl;

    for (int i = 0; i < argc; ++i) {
        std::cout << "Argumento " << i << ": " << argv[i] << std::endl;
    }

    return 0;
}
```

Executando o código dessa forma:

```
./programa arquivo.txt 123 teste
``` 

Teremos a seguinte saída:

```
Quantidade de argumentos: 4
Argumento 0: ./programa
Argumento 1: arquivo.txt
Argumento 2: 123
Argumento 3: teste
```