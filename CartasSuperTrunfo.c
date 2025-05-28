#include <stdio.h>

// Definição da struct Cidade
struct Cidade {
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    // Carta 1 - Rio de Janeiro
    struct Cidade cidade1 = {
        "C01",
        "Rio de Janeiro",
        6748000,
        1182.3,
        364.5,
        25
    };

    // Carta 2 - Salvador
    struct Cidade cidade2 = {
        "C02",
        "Salvador",
        2887000,
        693.8,
        85.2,
        18
    };

    // Calculando Densidade Populacional e PIB per Capita para cada cidade
    float densidade1 = cidade1.populacao / cidade1.area;
    float pibPerCapita1 = cidade1.pib * 1e9 / cidade1.populacao; // PIB em bilhões convertido para reais

    float densidade2 = cidade2.populacao / cidade2.area;
    float pibPerCapita2 = cidade2.pib * 1e9 / cidade2.populacao; // PIB em bilhões convertido para reais

    // Exibindo carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", cidade1.codigo);
    printf("Nome da Cidade: %s\n", cidade1.nome);
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f bilhões de reais\n", cidade1.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibindo pibPerCapita1 para evitar warning de variável não usada
    // (Já está sendo usada no printf acima)

  // Exibindo carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", cidade2.codigo);
    printf("Nome da Cidade: %s\n", cidade2.nome);
    printf("População: %d\n", cidade2.populacao);
    printf("Número de Pontos Turísticos: %d\n", cidade2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    return 0;
}
