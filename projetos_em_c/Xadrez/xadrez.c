#include <stdio.h>


void moverRainha(int casas, char direcao[]) {
    if (casas <= 0) {
        printf("Rainha terminou o movimento!\n");
        return;
    }
    printf("Rainha andou 1 casa para %s\n", direcao);
    moverRainha(casas - 1, direcao);
}


void moverTorre( int casas, char direcao[]) {
    if (casas ==0) {
        printf("Torre terminou o movimento!\n");
        return; 
    }

    printf("Torre  andou 1 casa para %s\n", direcao);
    moverTorre(casas - 1, direcao);
}


void moverBispo(int casas, char direcao[]) {
    if (casas == 0) {
        printf("Bispo terminou o movimento!\n");
        return;
    }

    for (int vertical = 0; vertical < 1; vertical++) {
        for (int horizontal = 0; horizontal <1; horizontal++){
            printf("Bispo andou 1 casa para %s\n", direcao);
        }
    }

    moverBispo(casas - 1, direcao);

}


int main() {

    int casas, pecaEscolhida;
    char direcao[50];
    char direcaoPrimaria[50];
    char direcaoSecundaria[50];

    printf("Escolha com qual peça quer andar: \n");
    printf("1 - Rainha\n");
    printf("2 - Torre\n");
    printf("3 - Bispo\n");
    printf("4 - Cavalo\n");
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

            moverRainha (casas, direcao);

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

            int k = 0;
            do {
                printf("Bispo andou 1 casa para %s\n", direcao);
                k++;
            } while (k < casas);
            printf("Bispo terminou o movimento!\n");

            break;

            case 4:
            printf("O cavalo anda em 'L', ou seja, 2 casas em uma direção e 1 casa em outra direção.\n");
            printf("Escolha em qual direção o cavalo deve andar: \n");
            printf("para_frente\n");
            printf("para_trás\n");
            printf("para_direita\n");
            printf("para_esquerda\n");
            scanf("%s", direcaoPrimaria);
            printf("Agora escolha a segunda direção do 'L': \n");
            printf("para_direita\n");
            printf("para_esquerda\n");
            scanf("%s", direcaoSecundaria);

            
            for (int m = 1; m <= 2; m++) {
                    printf("Cavalo andou %dª casa para %s.\n", m, direcaoPrimaria);
                }

                int n = 1;
                while (n <= 1) {
                    printf("Cavalo andou %dª casa para %s.\n", n, direcaoSecundaria);
                    n++;
                }
            printf("Cavalo terminou o movimento!\n");
            break;

        default:
            printf("Peça inválida!\n");
            
    }
    return 0;

}