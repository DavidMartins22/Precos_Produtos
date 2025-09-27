# SuperClassificador de Preços: A Organização que Você Precisa! 🛒✨

Cansado de ver preços bagunçados? O **SuperClassificador de Preços** é o seu assistente pessoal no terminal para colocar ordem no caos financeiro! Ele recebe uma lista de preços e os organiza magicamente em ordem crescente e decrescente.

---

## Sobre o Projeto

Este projeto é uma **aplicação de console** desenvolvida para praticar o uso de **vetores** e **algoritmos de ordenação** na linguagem **C**. 

O objetivo é simples: o usuário insere **10 preços** de produtos, e o sistema exibe a lista original, a lista ordenada do mais barato para o mais caro (**crescente**) e do mais caro para o mais barato (**decrescente**).

> 🎓 **Missão Acadêmica:** Este trabalho foi criado como um exercício prático para a disciplina de Programação Estruturada da faculdade de **Análise e Desenvolvimento de Sistemas (ADS)**, focado em implementar e demonstrar o funcionamento do algoritmo **Bubble Sort**.

---

## Tecnologias

A organização do supermercado foi construída com a base sólida de:

* **C (Linguagem de Programação)**: Usada para toda a lógica do programa, desde a leitura de dados até a manipulação dos vetores e a implementação do algoritmo de ordenação.

---

## Como Usar

É simples como passar no caixa!

1.  **Compile o código C** em sua máquina usando um compilador como o GCC:
    ```bash
    gcc -o classificador classificador.c
    ```
    *(Assumindo que o nome do seu arquivo seja `classificador.c`)*

2.  **Execute o programa** no terminal:
    ```bash
    ./classificador
    ```

3.  O programa irá solicitar que você **digite o preço de 10 produtos**.

4.  Após inserir os 10 preços, o sistema exibirá:
    * A lista original.
    * A lista ordenada em **Crescente** (do menor para o maior preço).
    * A lista ordenada em **Decrescente** (do maior para o menor preço).

---

## Funcionalidades Chave

* **Entrada de Dados**: Lê 10 preços de produtos fornecidos pelo usuário.
* **Ordenação Crescente**: Utiliza o algoritmo **Bubble Sort** para organizar os preços do mais barato ao mais caro.
* **Ordenação Decrescente**: Utiliza uma variação do **Bubble Sort** para organizar os preços do mais caro ao mais barato.
* **Localização (Locale)**: Usa `setlocale(LC_ALL, "Portuguese")` para garantir a exibição correta de caracteres e formatação em português.

---

## Contribua!

Quer sugerir a implementação de outros algoritmos de ordenação (como Quick Sort ou Selection Sort) para comparação de desempenho? Ou melhorar a interface do terminal? Suas contribuições são muito bem-vindas!

## "Deixe que o código separe o caro do barato para você!" 🤓
