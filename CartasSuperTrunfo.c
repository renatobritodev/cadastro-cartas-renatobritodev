#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Declaração de variáveis (Carta 1)
  char estado1;
  char codigo1[4];
  char nomeCidade1[100];
  int populacao1, pontosTuristicos1;
  float area1, pib1;

  // Declaração de variáveis (Carta 2)
  char estado2;
  char codigo2[4];
  char nomeCidade2[100];
  int populacao2, pontosTuristicos2;
  float area2, pib2;

  // Área para entrada de dados

  printf("-------------------------------------\n");
  printf("--- Desafio Super Trunfo - Países ---\n");
  printf("-------------------------------------\n");
  printf("\n  Cadastro da 2ª carta\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado1);
  while ((getchar()) != '\n'); // Limpa o buffer antes

  printf("Digite o código da carta (Ex.: F01) ");
  scanf("%s", codigo1);
  while ((getchar()) != '\n');

  printf("Digite o nome da cidade: ");
  scanf(" %s", nomeCidade1);
  while ((getchar()) != '\n');

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao1);
  while ((getchar()) != '\n');

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area1);
  while ((getchar()) != '\n');

  printf("Digite o PIB da cidade (em bilhões de R$): R$");
  scanf("%f", &pib1);
  while ((getchar()) != '\n');

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);
  while ((getchar()) != '\n');

  printf("\n  Cadastro da 2ª carta\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado2);
  while ((getchar()) != '\n');

  printf("Digite o código da carta (Ex.: F01) ");
  scanf("%s", codigo2);
  while ((getchar()) != '\n');

  printf("Digite o nome da cidade: ");
  scanf(" %s", nomeCidade2);
  while ((getchar()) != '\n');

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao2);
  while ((getchar()) != '\n');

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area2);
  while ((getchar()) != '\n');

  printf("Digite o PIB da cidade (em bilhões de R$): R$");
  scanf("%f", &pib2);
  while ((getchar()) != '\n');

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);
  while ((getchar()) != '\n');

  // Área para exibição dos dados da cidade

  printf("\n#Carta: 1 \n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

  printf("\n# Carta: 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

  return 0;
}
