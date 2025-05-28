[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/yY_X5NoI)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=19651293)
# Lab #06 - Templates

Muitas vezes é útil poder reutilizar os mesmos algoritmos com muitos tipos de dados diferentes. Isso é chamado de **programação genérica**. Neste laboratório iremos explorar os aspectos e conceitos relacionados a *templates* de funções e classes em C++.

## Atividade

Modele a classe `template <class T> class Par` definindo os seguintes métodos: 

1. `Par(T primeiroValor, T segundoValor)`
    - Construtor parametrizado que recebe e inicializa os dois atributos do tipo T.
2. `void saida()`
    - Imprima na tela o par no formato `[primeiroValor, segundoValor]`.
    - Assuma que o tipo `T` passado sobrecarrega o operador de inserção `<<`.
3. `char compararCom(Par& outroPar)`
    - Retorna o caractere `<`, `=` ou `>` dependendo se o Par é menor, igual ou maior que `outroPar`;
    - A precedência das comparações é `primeiroValor` e depois `segundoValor`; ou seja, compara-se primeiro `primeiroValor`, e o `segundoValor` só é comparado caso `primeiroValor` seja igual;
    - Assuma que o tipo `T` passado sobrecarrega os operadores utilizados.
4. `void mostrarComparacao(Par& outroPar)`
    - Compare com `outroPar` chamando `compararCom()`;
    - Imprima os dois pares separados pelo caractere retornado por `compararCom()`. Dica: produza cada par usando o método `saida()`.
    - Por exemplo, espera-se algo no formato: `[4, 6] > [3, 5]`

A saída esperada para o `main()` fornecido é:

```
[4, 6] > [3, 5]
[4.3, 2.1] = [4.3, 2.1]
[one, two] < [three, four]
```

Crie um `Makefile` para que com o comando `make` seja criado um binário `main` na raiz do projeto. Só assim o auto-corretor conseguirá executar o seu programa!

