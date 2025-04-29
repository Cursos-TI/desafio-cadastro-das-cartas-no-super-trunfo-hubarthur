#include <stdio.h>

int main() {
    // Declaração de variáveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontoturistico1;
    
    //Declaração de variáveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;
    
    //Entrada de dados da carta 1
    printf("Digite as informações da carta 1:\n");
    printf("Letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km2: ");
    scanf("%f", &area1);

    print("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontoturistico1);

    //Entrada de dados da carta 2
    printf("Digite as informações da carta 2:\n");
    printf("Letra do estado (A-H): ");
    scanf("%c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontoturistico2);

    // Exibição dos Dados das Cartas:

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d/n", pontoturistico1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);

    return 0;
}
