#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10 
#define TAMANHO_NAVIO 3
#define TAMANHO_HABILIDADES 5

void imprimirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
	int linha, coluna;
	for (linha = 0; linha < TAMANHO; linha++) {
		for (coluna = 0; coluna < TAMANHO; coluna++) {
			printf("%d ", tabuleiro[linha][coluna]);
		}
		printf("\n");
	}
}

void aplicarHabilidadeCruz(int tabuleiro_original[TAMANHO][TAMANHO], int habilidade_cruz[TAMANHO_HABILIDADES][TAMANHO_HABILIDADES], int origem_linha, int origem_coluna) {
	int centro = 2; 
	int linha, coluna;

	int tabuleiro_copia[TAMANHO][TAMANHO];

	for (linha = 0; linha < TAMANHO; linha++) {
		for (coluna = 0; coluna < TAMANHO; coluna++) {
			tabuleiro_copia[linha][coluna] = tabuleiro_original[linha][coluna];
		}
	}

	for (linha = 0; linha < TAMANHO_HABILIDADES; linha++) {
		for (coluna = 0; coluna < TAMANHO_HABILIDADES; coluna++) {
			if (habilidade_cruz[linha][coluna] == 1) {
				int linha_no_tabuleiro = origem_linha + (linha - centro);
				int coluna_no_tabuleiro = origem_coluna + (coluna - centro);

				if (linha_no_tabuleiro >= 0 && linha_no_tabuleiro < TAMANHO && coluna_no_tabuleiro >= 0 && coluna_no_tabuleiro < TAMANHO) {

						int valor_atual = tabuleiro_copia[linha_no_tabuleiro][coluna_no_tabuleiro];

						if (valor_atual ==3) {
							tabuleiro_copia[linha_no_tabuleiro][coluna_no_tabuleiro] = 8;
						} else if (valor_atual == 0) {
							tabuleiro_copia[linha_no_tabuleiro][coluna_no_tabuleiro] = 5;
						}

				}
			}
		}
	}
	printf("Visualizando 'Cruz' em (%d, %d):\n", origem_linha, origem_coluna);
	imprimirTabuleiro(tabuleiro_copia);
}

void aplicarHabilidadeCone (int tabuleiro_original[TAMANHO][TAMANHO],
	int habilidade_cone[TAMANHO_HABILIDADES][TAMANHO_HABILIDADES],
	int origem_linha, int origem_coluna) {

		int centro = 2;
		int linha, coluna;

		int tabuleiro_copia[TAMANHO][TAMANHO];
		for (linha = 0; linha < TAMANHO; linha++) {
			for (coluna = 0; coluna < TAMANHO; coluna++) {
				tabuleiro_copia[linha][coluna] = tabuleiro_original[linha][coluna];
			}
		}
		for (linha = 0; linha < TAMANHO_HABILIDADES; linha++) {
			for (coluna = 0; coluna < TAMANHO_HABILIDADES; coluna++) {
				if (habilidade_cone[linha][coluna] == 1) {
					int linha_no_tabuleiro = origem_linha + (linha - centro);
					int coluna_no_tabuleiro = origem_coluna + (coluna - centro);

					if (linha_no_tabuleiro >= 0 && linha_no_tabuleiro < TAMANHO && coluna_no_tabuleiro >= 0 && coluna_no_tabuleiro < TAMANHO) {

						int valor_atual = tabuleiro_copia[linha_no_tabuleiro][coluna_no_tabuleiro];

						if (valor_atual ==3) {
							tabuleiro_copia[linha_no_tabuleiro][coluna_no_tabuleiro] = 8;
						} else if (valor_atual == 0) {
							tabuleiro_copia[linha_no_tabuleiro][coluna_no_tabuleiro] = 5;
						}

					}
				}
			}
		}
		printf("Visualizando 'Cone' em (%d, %d):\n", origem_linha, origem_coluna);
		imprimirTabuleiro(tabuleiro_copia);

}

void aplicarHabilidadeOctaedro(int tabuleiro_original[TAMANHO][TAMANHO],
	int habilidade_octaedro[TAMANHO_HABILIDADES][TAMANHO_HABILIDADES],
	int origem_linha, int origem_coluna) {

		int centro = 2;
		int linha, coluna;

		int tabuleiro_copia[TAMANHO][TAMANHO];
		for (linha = 0; linha < TAMANHO; linha++) {
			for (coluna = 0; coluna < TAMANHO; coluna++) {
				tabuleiro_copia[linha][coluna] = tabuleiro_original[linha][coluna];
			}
		}
		for (linha = 0; linha < TAMANHO_HABILIDADES; linha++) {
			for (coluna = 0; coluna < TAMANHO_HABILIDADES; coluna++) {
				if (habilidade_octaedro[linha][coluna] == 1) {
					int linha_no_tabuleiro = origem_linha + (linha - centro);
					int coluna_no_tabuleiro = origem_coluna + (coluna - centro);

					if (linha_no_tabuleiro >= 0 && linha_no_tabuleiro < TAMANHO && coluna_no_tabuleiro >= 0 && coluna_no_tabuleiro < TAMANHO) {

						int valor_atual = tabuleiro_copia[linha_no_tabuleiro][coluna_no_tabuleiro];

						if (valor_atual ==3) {
							tabuleiro_copia[linha_no_tabuleiro][coluna_no_tabuleiro] = 8;
						} else if (valor_atual == 0) {
							tabuleiro_copia[linha_no_tabuleiro][coluna_no_tabuleiro] = 5;
						}

					}
				}
			}
		}
		printf("Visualizando 'Octaedro' em (%d, %d):\n", origem_linha, origem_coluna);
		imprimirTabuleiro(tabuleiro_copia);

}


int main() {

  
    int tabuleiro[TAMANHO][TAMANHO];
    int habilidadeCruz[TAMANHO_HABILIDADES][TAMANHO_HABILIDADES];
    int linha, coluna;
    int centro = 2;


    for (linha = 0; linha < TAMANHO; linha++) {
        for(coluna = 0; coluna < TAMANHO; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }


    for (coluna = 1; coluna < 1 + TAMANHO_NAVIO; coluna++) { tabuleiro[4][coluna] = 3; }
    for(linha = 5; linha < 5 + TAMANHO_NAVIO; linha++) { tabuleiro[linha][7] = 3; }
    for(linha = 0; linha < TAMANHO_NAVIO; linha++) { tabuleiro[linha][linha] = 3; }
    for(linha = 0; linha < TAMANHO_NAVIO; linha++) { tabuleiro[linha][TAMANHO - 1 - linha] = 3; }
    
    printf("Tabuleiro e navios configurados.\n");


    for (linha = 0; linha < TAMANHO_HABILIDADES; linha++) {
        for (coluna = 0; coluna < TAMANHO_HABILIDADES; coluna++) {
            if (linha == centro || coluna == centro) {
                habilidadeCruz[linha][coluna] = 1;
            } else {
                habilidadeCruz[linha][coluna] = 0;
            }
        }
    }
    printf("Molde da habilidade 'Cruz' criado.\n\n");


	int habilidadeCone[TAMANHO_HABILIDADES][TAMANHO_HABILIDADES];
    
    for (linha = 0; linha < TAMANHO_HABILIDADES; linha++) {
        for (coluna = 0; coluna < TAMANHO_HABILIDADES; coluna++) {
            if (coluna >= centro - linha && coluna <= centro + linha) {
                habilidadeCone[linha][coluna] = 1;
            } else {
                habilidadeCone[linha][coluna] = 0;
            }
        }
    }
    printf("Molde da habilidade 'Cone' criado.\n\n");


	int habilidadeOctaedro[TAMANHO_HABILIDADES][TAMANHO_HABILIDADES];
	for (linha = 0; linha < TAMANHO_HABILIDADES; linha++) {
		for (coluna = 0; coluna < TAMANHO_HABILIDADES; coluna++) {
			if (abs(linha - centro) + abs(coluna - centro) <= centro) {
				habilidadeOctaedro[linha][coluna] = 1;
			} else {
				habilidadeOctaedro[linha][coluna] = 0;
			}
		}
	}
	printf("Molde da habilidade 'Octaedro' criado.\n\n");


    int escolha = -1;
    while (escolha != 0) {
        printf("--- MENU DE HABILIDADES ---\n");
        printf("1. Visualizar Habilidade 'Cruz'\n");
        printf("2. Visualizar Habilidade 'Cone'\n");
        printf("3. Visualizar Habilidade 'Octaedro'\n");
        printf("9. Ver tabuleiro original (limpo)\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolha);
        printf("\n");

        switch (escolha) {
            case 1:
                aplicarHabilidadeCruz(tabuleiro, habilidadeCruz, 5, 4);
                break;
            
            case 2:
                aplicarHabilidadeCone(tabuleiro, habilidadeCone, 3, 3);
                break;

			case 3:
				aplicarHabilidadeOctaedro(tabuleiro, habilidadeOctaedro, 2, 2);
				break;

            case 9:
                printf("Mostrando tabuleiro original:\n");
                imprimirTabuleiro(tabuleiro);
                break;
            
            case 0:
                printf("Saindo...\n");
                break;
            
            default:
                printf("Opção inválida.\n");
                break;
        }
        printf("\n"); 
    }

    return 0;
}