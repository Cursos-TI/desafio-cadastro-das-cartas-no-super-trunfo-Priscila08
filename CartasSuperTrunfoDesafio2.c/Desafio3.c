#include <stdio.h>

int main() {
    // Dados da carta 1
    char codigo1[10], nome1[30], estado1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Dados da carta 2
    char codigo2[10], nome2[30], estado2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada - Carta 1
    printf("Digite o codigo da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade 1 (sem espacos): ");
    scanf("%s", nome1);

    printf("Digite o estado da cidade 1 (sem espacos): ");
    scanf("%s", estado1);

    printf("Digite a populacao da cidade 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade 1 (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1 (em bilhoes de dolares): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade 1: ");
    scanf("%d", &pontos1);

    // Entrada - Carta 2
    printf("\nDigite o codigo da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2 (sem espacos): ");
    scanf("%s", nome2);

    printf("Digite o estado da cidade 2 (sem espacos): ");
    scanf("%s", estado2);

    printf("Digite a populacao da cidade 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade 2 (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2 (em bilhoes de dolares): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade 2: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    // Saída de dados das cartas
    printf("\nCarta 1:\n");
    printf("Codigo: %s\nCidade: %s\nEstado: %s\n", codigo1, nome1, estado1);
    printf("Populacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes USD\n", populacao1, area1, pib1);
    printf("Pontos turisticos: %d\nDensidade Populacional: %.2f hab/km²\n", pontos1, densidade1);
    printf("PIB per Capita: %.2f USD\nSuper Poder: %.2f\n", pibPerCapita1, superPoder1);

    printf("\nCarta 2:\n");
    printf("Codigo: %s\nCidade: %s\nEstado: %s\n", codigo2, nome2, estado2);
    printf("Populacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes USD\n", populacao2, area2, pib2);
    printf("Pontos turisticos: %d\nDensidade Populacional: %.2f hab/km²\n", pontos2, densidade2);
    printf("PIB per Capita: %.2f USD\nSuper Poder: %.2f\n", pibPerCapita2, superPoder2);

    // Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}

