#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int escolhaJogador, escolhaComputador;

    srand(time(0));

    printf("Bem vindo ao jogo de Jokenpô!\n");
    printf("Pense na sua jogada:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Faça sua escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador) {
        case 1:
            printf("Você escolheu Pedra \n");
            break;
        case 2:
            printf("Você escolheu Papel \n");
            break;
        case 3:
            printf("Você escolheu Tesoura \n");
            break;
        default:
            printf("A sua escolha não é válida!\n");
        }

            switch (escolhaComputador) {
        case 1:
            printf("O computador escolheu Pedra \n");
            break;
        case 2:
            printf("O computador escolheu Papel \n");
            break;
        case 3:
            printf("O computador escolheu Tesoura \n");
            break;
            }

    if (escolhaJogador == escolhaComputador) {
        printf(" ### EMPATE! ### \n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
               (escolhaJogador == 2 && escolhaComputador == 1) ||
               (escolhaJogador == 3 && escolhaComputador == 2)) 
               { printf(" ### O JOGADOR VENCEU! ### \n"); 

                } else { 
                    printf(" ### COMPUTADOR VENCEU! ### \n");
                }


            return 0;
    }
