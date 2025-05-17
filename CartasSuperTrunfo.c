#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1,populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    //Entrada de dados da carta 1
    printf("\nDigite as informações da carta 1:\n");
    printf("Letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Número de Habitantes: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísicos: ");
    scanf("%d", &pontos1);

    densidade1 = (float) populacao1 / area1;

    pibpercapita1 = (float) pib1 / populacao1;

    //Entrada de dados da carta 2
    printf("\nDigite as informações da carta 2:\n");
    printf("Letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Número de Habitantes: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = (float) populacao2 / area2;

    pibpercapita2 = (float) pib2 / populacao2;

     // Exibição dos dados das cartas
     printf("\nCarta 1:\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", cidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2f bilhões de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", pontos1);
     printf("A densidade populacional é: %.2f\n", densidade1);
     printf("O PIB per cabita é: %.2f\n", pibpercapita1);
 
     printf("\nCarta 2:\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontos2);
     printf("A densidade populacional é: %.2f\n", densidade2);
     printf("O PIB per capita é: %.2f\n", pibpercapita2);

    return 0;
}