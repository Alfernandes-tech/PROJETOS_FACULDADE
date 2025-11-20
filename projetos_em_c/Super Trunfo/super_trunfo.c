#include <stdio.h>

int main() {
    char *estado1 = "A";
    char *estado2 = "B";  
    char codigo1[5] = "A01";
    char codigo2[5] = "B02";
    char cidade1[50] = "São_Paulo";
    char cidade2[50] = "Rio_de_Janeiro";
    int populacao1 = 12325000;
    int populacao2 = 6748000;
    float area1 = 1521.11;
    float area2 = 1200.25;  
    float PIB1 = 699.28;
    float PIB2 = 300.50;
    int turismo1 = 50;
    int turismo2 = 30;
     //Cálculo de Densidade Populacional e PIB per capita
    float pib_per_capita1 = (PIB1 * 1000000000) / populacao1;
    float pib_per_capita2 = (PIB2 * 1000000000) / populacao2;
    float densidade_populacional1 = populacao1/area1;
    float densidade_populacional2 = populacao2/area2;

    //Exibição da Primeira carta
    int escolha;


    printf("Primeira Carta:\n");

    printf("Estado: %s\n", estado1);

    printf("Codigo do Estado: %s\n", codigo1);

    printf("Cidade: %s\n", cidade1);
    
    printf("Populacao: %d\n", populacao1);
    
    printf("Area: %.2f km²\n", area1);
    
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    
    printf("Numero de Pontos Turisticos: %d\n", turismo1);
    
    printf("Densidade Populacional: %.2f hab/km²\n", (float)densidade_populacional1);

    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    printf("\n");

     //Exibição da Segunda carta  
    printf("Segunda Carta:\n");
    
    printf("Estado: %s\n", estado2);
    
    printf("Codigo do Estado: %s\n", codigo2);
    
    printf("Cidade: %s\n", cidade2);
    
    printf("Populacao: %d\n", populacao2);
    
    printf("Area: %.2f km²\n", area2);
    
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    
    printf("Numero de Pontos Turisticos: %d\n", turismo2);

    printf("Densidade Populacional: %.2f hab/km²\n", (float)densidade_populacional2);

    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    
    printf("\n");



    printf("Vamos agora comparar os atributos das duas cartas: \n");

    printf("Escolha qual atributo quer comparar\n");
    printf("1 - populacao\n");
    printf("2 - area\n");  
    printf("3 - PIB\n");
    printf("4 - numero de pontos turisticos\n");
    printf("5 - Densidade populacional\n");

    printf("Digite o numero correspondente ao atributo: \n");
    scanf("%d", &escolha);


    switch (escolha) {
        case 1:
            if (populacao1 > populacao2) {
                printf("A primeira carta tem maior populacao.\n");
            } else if (populacao2 > populacao1) {
                printf("A segunda carta tem maior populacao.\n");
            } else {
                printf("As duas cartas tem a mesma populacao.\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("A primeira carta tem maior area.\n");
            } else if (area2 > area1) {
                printf("A segunda carta tem maior area.\n");
            } else {
                printf("As duas cartas tem a mesma area.\n");
            }
            break;
        case 3:
            if (PIB1 > PIB2) {
                printf("A primeira carta tem maior PIB.\n");
            } else if (PIB2 > PIB1) {
                printf("A segunda carta tem maior PIB.\n");
            } else {
                printf("As duas cartas tem o mesmo PIB.\n");
            }
            break;
        case 4:
            if (turismo1 > turismo2) {
                printf("A primeira carta tem mais pontos turisticos.\n");
            } else if (turismo2 > turismo1) {
                printf("A segunda carta tem mais pontos turisticos.\n");
            } else {
                printf("As duas cartas tem o mesmo numero de pontos turisticos.\n");
            }
            break;
            case 5:
            if (densidade_populacional1 < densidade_populacional2) {   
                printf("A primeira carta tem menor densidade populacional.\n");
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("A segunda carta tem menor densidade populacional.\n");
            } else {
                printf("As duas cartas tem a mesma densidade populacional.\n");
            }

        default:
            printf("Escolha invalida.\n");
    }



    return 0;
}
