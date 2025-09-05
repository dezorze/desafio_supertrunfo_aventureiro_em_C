#include <stdio.h>

int main() {
    char estado1[50], codigo1[20], cidade1[50];
    char estado2[50], codigo2[20], cidade2[50];
    int populacao1, pontosTuristicos1;
    int populacao2, pontosTuristicos2;
    float pib1, area1, densidade1, pibpercapita1;
    float pib2, area2, densidade2, pibpercapita2;

    // Leitura da Carta 1
    printf("=== CARTA 1 - NÍVEL AVENTUREIRO ===\n");
    printf("Digite o Estado da carta 1:\n");
    scanf("%49s", estado1);

    printf("Digite o Código da carta 1:\n");
    scanf("%19s", codigo1);

    printf("Digite a Cidade da carta 1:\n");
    scanf("%49s", cidade1);

    printf("Digite a Populacao da carta 1:\n");
    scanf("%d", &populacao1);

    printf("Digite o Número de pontos turisticos da carta 1:\n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite o PIB da carta 1:\n");
    scanf("%f", &pib1);

    printf("Digite a Área da carta 1:\n");
    scanf("%f", &area1);

    // Leitura da Carta 2
    printf("\n=== CARTA 2 - NÍVEL AVENTUREIRO ===\n");
    printf("Digite o Estado da carta 2:\n");
    scanf("%49s", estado2);

    printf("Digite o Código da carta 2:\n");
    scanf("%19s", codigo2);

    printf("Digite a Cidade da carta 2:\n");
    scanf("%49s", cidade2);

    printf("Digite a Populacao da carta 2:\n");
    scanf("%d", &populacao2);

    printf("Digite o Número de pontos turisticos da carta 2:\n");
    scanf("%d", &pontosTuristicos2);

    printf("Digite o PIB da carta 2:\n");
    scanf("%f", &pib2);

    printf("Digite a Área da carta 2:\n");
    scanf("%f", &area2);

    // Exibição das duas cartas
    printf("\n--- Dados da carta 1 - NÍVEL AVENTUREIRO ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Área: %.2f Km2\n", area1);
    printf("PIB per capita: R$ %.2f\n", (pib1 / populacao1));
    printf("Densidade Populacional: %.2f hab/Km2\n", (populacao1 / area1));

    printf("\n--- Dados da carta 2 - NÍVEL AVENTUREIRO ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Área: %.2f Km2\n", area2);
    printf("PIB per capita: r$ %.2f\n", (pib2 / populacao2));
    printf("Densidade Populacional: %.2f hab/Km2\n", (populacao2 / area2));

    return 0;
}

