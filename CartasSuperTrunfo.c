#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Comparação das Cartas
// Continuação do cadastro com implementação da lógica de comparação

int main() {

    // ===== Variáveis Carta 1 =====
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // ===== Variáveis Carta 2 =====
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // ================= Cadastro Carta 1 =================
    printf("\n=== Cadastro da Carta 1 ===\n\n");

    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a populacao (sem pontos): ");
    scanf("%lu", &populacao1);

    printf("Digite a area em km2 (sem pontos): ");
    scanf("%f", &area1);

    printf("Digite o PIB (sem pontos): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos (sem pontos): ");
    scanf("%d", &pontosTuristicos1);

    // ================= Cadastro Carta 2 =================
    printf("\n=== Cadastro da Carta 2 ===\n\n");

    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao (sem pontos): ");
    scanf("%lu", &populacao2);

    printf("Digite a area em km2 (sem pontos): ");
    scanf("%f", &area2);

    printf("Digite o PIB (sem pontos): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos (sem pontos): ");
    scanf("%d", &pontosTuristicos2);

    // ================= Cálculos =================

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // ================= Comparação (Atributo: População) =================

    printf("\n\n=== Comparação de Cartas (Atributo: População) ===\n\n");

    printf("Carta 1 - %s: %lu\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    }
    else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }
    else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}