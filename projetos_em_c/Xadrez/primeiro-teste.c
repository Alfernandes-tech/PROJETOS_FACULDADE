#include <stdio.h>

int main() {

    int casas, pecaEscolhida;
    char direcao[50];
    //char frente, tras, direita, esquerda;
    //char *diagonal1, *diagonal2, *diagonal3, *diagonal4;

    printf("Escolha com qual peça quer andar: \n");
    printf("1 - Rainha\n");
    printf("2 - Torre\n");
    printf("3 - Bispo\n");
    scanf("%d", &pecaEscolhida);

    switch (pecaEscolhida) {
        case 1:
            printf("Em qual direção a rainha deve andar? \n");
            printf("Para_frente\n");
            printf("Para_trás\n");
            printf("Para_direita\n");
            printf("Para_esquerda\n");
            printf("Diagonal_superior_esquerda\n");
            printf("Diagonal_superior_direita\n");  
            printf("Diagonal_inferior_esquerda\n");
            printf("Diagonal_inferior_direita\n");
            scanf("%s", direcao);
            printf("Quantas casas a rainha deve andar? \n");
            scanf("%d", &casas);

            printf("A rainha andou %d casas na direção %s\n", casas, direcao);
            break;

        case 2:
            printf("Em qual direção a torre deve andar? \n");
            printf("Para_frente\n");
            printf("Para_trás\n");
            printf("Para_a_direita\n");
            printf("Para_a_esquerda\n");
            scanf("%s", direcao);
            printf("Quantas casas a torre deve andar? \n");
            scanf("%d", &casas);

            printf("A torre andou %d casas na direção %s\n", casas, direcao);
            break;

        case 3:
            printf("Em qual direção o bispo deve andar? \n");
            printf("Diagonal_superior_esquerda\n");
            printf("Diagonal_superior_direita\n");
            printf("Diagonal_inferior_esquerda\n");
            printf("Diagonal_inferior_direita\n");
            scanf("%s", direcao);
            printf("Quantas casas o bispo deve andar? \n");
            scanf("%d", &casas);
            printf("O bispo andou %d casas na direção %s\n", casas, direcao);
            break;
        default:
            printf("Peça inválida!\n");
            
    }
    return 0;

}