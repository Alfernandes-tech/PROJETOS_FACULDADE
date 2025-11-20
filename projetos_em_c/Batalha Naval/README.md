# 🚢 Batalha Naval com Habilidades (Projeto em C)

Projeto de console desenvolvido como exercício para a disciplina de Lógica de Programação, focado na prática de conceitos fundamentais da linguagem C.

O programa evolui de uma simples Batalha Naval para um sistema tático, onde o usuário pode aplicar "habilidades especiais" (Cruz, Cone e Octaedro) sobre o tabuleiro, visualizando a área de efeito e os acertos em navios.

## ✨ Funcionalidades Principais

* **Tabuleiro 10x10:** O estado do jogo (água, navios, efeitos) é gerenciado por uma matriz bidimensional.
* **Posicionamento de Navios:** Quatro navios de 3 posições são posicionados (horizontal, vertical e diagonais).
* **Menu Interativo:** O usuário pode escolher qual habilidade deseja visualizar, mantendo o tabuleiro original intacto.
* **Sistema de Habilidades:**
    * **Moldes Dinâmicos:** As matrizes das habilidades (Cruz, Cone, Octaedro) são criadas dinamicamente usando lógica condicional.
    * **Lógica de Sobreposição:** As habilidades são aplicadas em uma *cópia* do tabuleiro, permitindo visualização não-destrutiva.
    * **Detecção de Acerto:** O sistema diferencia se a habilidade atingiu a água (`5`) ou um navio (`8`).

## 🛠️ Conceitos Praticados

Este projeto foi essencial para treinar:

* Laços de repetição (`for`) e estruturas aninhadas.
* Manipulação de Matrizes bidimensionais.
* Lógica condicional (`if/else`, `switch/case`).
* Modularização com Funções (separação de responsabilidades).
* Ponteiros básicos (passagem de matrizes para funções).
* Uso de bibliotecas (`stdio.h`, `stdlib.h`).
* Lógica matemática para criar formas (ex: `abs()` para o losango).

## 🚀 Como Compilar e Executar

1.  **Pré-requisito:** Você precisa de um compilador C (como o GCC) instalado.
2.  **Clone ou baixe** este repositório.
3.  **Compile o arquivo:** Abra um terminal na pasta do projeto e execute:
    ```bash
    gcc nome_do_arquivo.c -o batalha_naval
    ```
    *(Substitua `nome_do_arquivo.c` pelo nome do seu arquivo, ex: `main.c`)*

4.  **Execute o programa:**
    * No Linux/Mac: `./batalha_naval`
    * No Windows: `batalha_naval.exe`