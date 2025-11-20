# ♟️ Simulador de Movimentos de Xadrez (Projeto em C)

Este é um projeto de console em C, desenvolvido como um exercício de faculdade para praticar diferentes formas de controle de fluxo e lógica de programação.

O programa simula o movimento de várias peças de xadrez (Rainha, Torre, Bispo e Cavalo) com base na entrada do usuário, demonstrando o uso de funções, loops diversos e recursão para controlar o fluxo do programa.

## ✨ Funcionalidades Principais

* **Menu Interativo:** O usuário escolhe qual peça de xadrez deseja mover (Rainha, Torre, Bispo ou Cavalo).
* **Entrada de Usuário:** O programa captura a direção do movimento e o número de casas (ou direções, no caso do Cavalo) usando `scanf`.
* **Lógica de Movimento:** Cada peça utiliza uma técnica de repetição diferente para "andar" pelo tabuleiro:
    * **Rainha:** Utiliza **recursão** para simular o movimento passo a passo.
    * **Bispo:** Utiliza um loop **`do-while`**.
    * **Cavalo:** Utiliza uma combinação de loops **`for`** e **`while`** para simular o movimento em "L".
    * **Torre:** A função está estruturada para usar recursão (embora o `case` no `main` esteja pronto para ser completado).

## 🛠️ Conceitos Praticados

Este projeto foi uma excelente oportunidade para explorar e comparar diferentes abordagens para um mesmo problema (repetição):

* **Funções:** Separação da lógica de movimento (`moverRainha`, `moverTorre`, etc.) da lógica principal (`main`).
* **Recursão:** A função `moverRainha` é um exemplo prático de como usar uma função que chama a si mesma para resolver um problema.
* **Laços de Repetição:** Demonstração da sintaxe e uso de `for`, `while` e `do-while`.
* **Estrutura de Controle `switch-case`:** Utilizada para criar um menu claro e funcional.
* **Entrada e Saída Padrão:** Interação com o usuário via console usando `printf` e `scanf`.
* **Manipulação Básica de Strings:** Captura da direção do movimento em um array de `char`.

## 🚀 Como Compilar e Executar

1.  **Pré-requisito:** Você precisa de um compilador C (como o GCC) instalado.
2.  **Compile o arquivo:** Salve o código como `xadrez.c` e, em um terminal, execute:
    ```bash
    gcc xadrez.c -o xadrez
    ```
3.  **Execute o programa:**
    * No Linux/Mac: `./xadrez`
    * No Windows: `xadrez.exe`