#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // --- Carta 1 ---
  char estado1;
  char codigo1[4];
  char cidade1[100];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // --- Carta 2 ---
  char estado2;
  char codigo2[4];
  char cidade2[100];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // Área para entrada de dados
  // ====== CARTA 1 ======
  printf("Cadastro da Carta 1\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado1);

  printf("Código da Carta (ex: A01): ");
  scanf(" %3s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %99[^\n]", cidade1);

  printf("População: ");
  scanf(" %d", &populacao1);

  printf("Área (em km2; use ponto como separador decimal, ex.: 123.45): ");
  scanf(" %f", &area1);

  // Importante: use ponto como separador decimal (ex.: 699.28)
  printf("PIB (em bilhões de reais; use ponto como separador decimal, ex.: 123.45): ");
  scanf(" %f", &pib1);

  printf("Número de Pontos Turísticos: ");
  scanf(" %d", &pontosTuristicos1);

  // ====== CARTA 2 ======
  printf("\nCadastro da Carta 2\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado2);

  printf("Código da Carta (ex: A01): ");
  scanf(" %3s", codigo2);

  printf("Nome da Cidade: ");
  scanf(" %99[^\n]", cidade2);

  printf("População: ");
  scanf(" %d", &populacao2);

  printf("Área (em km2; use ponto como separador decimal, ex.: 123.45): ");
  scanf(" %f", &area2);

  // Importante: use ponto como separador decimal (ex.: 1521.11)
  printf("PIB (em bilhões de reais; use ponto como separador decimal, ex.: 123.45): ");
  scanf(" %f", &pib2);

  printf("Número de Pontos Turísticos: ");
  scanf(" %d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade (formatado conforme o exemplo)
  printf("\nCarta 1:\n\n");
  printf("Estado: %c\n\n", estado1);
  printf("Codigo: %s\n\n", codigo1);
  printf("Nome da Cidade: %s\n\n", cidade1);
  printf("Populacao: %d\n\n", populacao1);
  printf("Area: %.2f km2\n\n", area1);
  printf("PIB: %.2f bilhoes de reais\n\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos1);

  printf("Carta 2:\n\n");
  printf("Estado: %c\n\n", estado2);
  printf("Codigo: %s\n\n", codigo2);
  printf("Nome da Cidade: %s\n\n", cidade2);
  printf("Populacao: %d\n\n", populacao2);
  printf("Area: %.2f km2\n\n", area2);
  printf("PIB: %.2f bilhoes de reais\n\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

  return 0;
}