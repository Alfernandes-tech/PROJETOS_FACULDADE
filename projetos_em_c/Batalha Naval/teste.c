#include <stdio.h>
 
int main() {
    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int matrizSoma[2][2];
 
    // Somando as duas matrizes
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
 
    // Exibindo a matriz resultante
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matrizSoma[%d][%d] = %d\n", i, j, matrizSoma[i][j]);
        }
    }
 
    return 0;
}





O if se torna: "Marque 1 se abs(linha - centro) + abs(coluna - centro) <= centro".

Vamos testar:



Ponto [0][2]: abs(0-2) + abs(2-2) = 2 + 0 = 2. (2 <= 2 é Verdadeiro). Marca 1.

Ponto [0][1]: abs(0-2) + abs(1-2) = 2 + 1 = 3. (3 <= 2 é Falso). Marca 0.

Ponto [1][1]: abs(1-2) + abs(1-2) = 1 + 1 = 2. (2 <= 2 é Verdadeiro). Marca 1.

Ponto [2][0]: abs(2-2) + abs(0-2) = 0 + 2 = 2. (2 <= 2 é Verdadeiro). Marca 1.

A lógica funciona perfeitamente para criar a forma de um losango.





Entendo que funcione mas não consegui entender como é que funciona ainda, não estou conseguindo compreender a lógica do negócio
