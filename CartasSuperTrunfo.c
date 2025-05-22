#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1,populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    //Inclusão de variável do Desafio Aventureiro
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    //Inclusão de variável do Desafio Mestre
    float superpoder1, superpoder2;

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

    //Inclusão de dados do Desafio Aventureiro
    densidade1 = (float) populacao1 / area1;

    pibpercapita1 = (float) pib1 / populacao1;

    //Inclusão de dados do Desafio Mestre
    superpoder1 = (float) populacao1 + area1 + pib1 + pontos1 + densidade1 + pibpercapita1;

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

    //Inclusão de dados do Desafio Aventureiro
    densidade2 = (float) populacao2 / area2;

    pibpercapita2 = (float) pib2 / populacao2;

    //Inclusão de dados do Desafio Mestre
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos2 + densidade2 + pibpercapita2;

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

    printf("\n-----------------------------------------------------\n");
    //Exibição do resultado da comparação das cartas
    printf("\n**Resultado da comparação das cartas**\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 > densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}