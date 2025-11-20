# 🃏 Super Trunfo - Cidades (Projeto em C)

Este é um programa de console simples, escrito em C, que simula uma rodada do clássico jogo "Super Trunfo" (Top Trumps).

O programa compara os atributos de duas cartas pré-definidas (representando as cidades de São Paulo e Rio de Janeiro) e permite ao usuário escolher qual atributo será usado para a disputa, declarando um vencedor para a rodada.

## ✨ Funcionalidades Principais

* **Cartas Estáticas:** Os dados das duas cidades (População, Área, PIB, etc.) são "hard-coded" (definidos diretamente no código) utilizando uma variedade de tipos de dados.
* **Cálculos Derivados:** O programa calcula automaticamente novos atributos, como **Densidade Populacional** e **PIB per capita**, com base nos dados brutos.
* **Exibição de Cartas:** Ambas as cartas são exibidas de forma clara e formatada no console.
* **Menu Interativo:** O usuário vê um menu para escolher qual atributo (População, Área, PIB, etc.) deseja comparar.
* **Lógica de Comparação:** Utilizando uma estrutura `switch-case` e blocos `if/else if/else`, o programa compara o atributo selecionado e declara a carta vencedora da rodada.

## 🛠️ Conceitos Praticados

Este projeto foi um ótimo exercício para praticar:

* **Variáveis e Tipos de Dados:** Uso de `int`, `float`, `char[]` (strings) e `char*` (ponteiros de char).
* **Operações Aritméticas:** Cálculo de novos valores a partir de variáveis existentes.
* **Entrada e Saída (I/O):** Uso de `printf` com formatação (`%.2f`, `%d`, `%s`) e `scanf` para capturar a entrada do usuário.
* **Estruturas de Controle:** Implementação clara de um menu com `switch-case`.
* **Lógica Condicional:** Uso de `if/else if/else` para tomar decisões e determinar o resultado da comparação.

## 🚀 Como Compilar e Executar

1.  **Pré-requisito:** Um compilador C (como o GCC) instalado.
2.  **Compile o arquivo:** Salve o código como `supertrunfo.c` e, em um terminal, execute:
    ```bash
    gcc supertrunfo.c -o supertrunfo
    ```
3.  **Execute o programa:**
    * No Linux/Mac: `./supertrunfo`
    * No Windows: `supertrunfo.exe`