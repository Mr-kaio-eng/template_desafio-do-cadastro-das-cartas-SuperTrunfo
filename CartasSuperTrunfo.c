#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;

  // Área para entrada de dados
printf("\n=== Cadastro da Carta ===\n\n");

    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);

    printf("Digite a populacao (sem pontos): ");
    scanf("%lu", &populacao);

    printf("Digite a area em km2 (sem pontos): ");
    scanf("%f", &area);

    printf("Digite o PIB (sem pontos): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos (sem pontos): ");
    scanf("%d", &pontosTuristicos);
 
  // Área para exibição dos dados da cidade
printf("\n\n--- Carta Cadastrada ---\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
  
return 0;
} 
