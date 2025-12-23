#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Declaração de variáveis (Carta 1)
  char estado1;
  char codigo1[4];
  char nomeCidade1[100];
  unsigned long int populacao1, pontosTuristicos1;
  float areaTotal1, pib1, densidade1, pibPerCapita1;
  double somaAtributos1, superPoder1;
  
  // Declaração de variáveis (Carta 2)
  char estado2;
  char codigo2[4];
  char nomeCidade2[100];
  unsigned long int populacao2, pontosTuristicos2;
  float areaTotal2, pib2, densidade2, pibPerCapita2;
  double somaAtributos2, superPoder2;
  
  // Área para entrada de dados
  printf("-------------------------------------\n");
  printf("--- Desafio Super Trunfo - Países ---\n");
  printf("-------------------------------------\n");
  printf("\nCadastro da 1ª carta\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado1);
  while ((getchar()) != '\n'); // Limpa o buffer antes

  printf("Digite o código da carta (Ex.: F01) ");
  scanf("%s", codigo1);
  while ((getchar()) != '\n');

  printf("Digite o nome da cidade: ");
  scanf("%[^\n]", nomeCidade1);
  while ((getchar()) != '\n');

  printf("Digite a população da cidade: ");
  scanf("%lu", &populacao1);
  while ((getchar()) != '\n');

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &areaTotal1);
  while ((getchar()) != '\n');

  printf("Digite o PIB da cidade (em bilhões de R$): R$");
  scanf("%f", &pib1);
  while ((getchar()) != '\n');

  printf("Digite o número de pontos turísticos: ");
  scanf("%lu", &pontosTuristicos1);
  while ((getchar()) != '\n');

  printf("\n  Cadastro da 2ª carta\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado2);
  while ((getchar()) != '\n');

  printf("Digite o código da carta (Ex.: F01) ");
  scanf("%s", codigo2);
  while ((getchar()) != '\n');

  printf("Digite o nome da cidade: ");
  scanf("%[^\n]", nomeCidade2);
  while ((getchar()) != '\n');

  printf("Digite a população da cidade: ");
  scanf("%lu", &populacao2);
  while ((getchar()) != '\n');

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &areaTotal2);
  while ((getchar()) != '\n');

  printf("Digite o PIB da cidade (em bilhões de R$): R$");
  scanf("%f", &pib2);
  while ((getchar()) != '\n');

  printf("Digite o número de pontos turísticos: ");
  scanf("%lu", &pontosTuristicos2);
  while ((getchar()) != '\n');

  densidade1 = (float)populacao1 / areaTotal1;
  densidade2 = (float)populacao2 / areaTotal2;

  pibPerCapita1 = (float)(pib1 * 1000000000.0) / populacao1;
  pibPerCapita2 = (float)(pib2 * 1000000000.0) / populacao2;

  superPoder1 = (double)populacao1 + areaTotal1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
  superPoder2 = (double)populacao2 + areaTotal2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

  // Área para exibição dos dados da cidade
  printf("\n #Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", nomeCidade1);
  printf("População: %lu hab\n", populacao1);
  printf("Área: %.2f km²\n", areaTotal1);
  printf("PIB: R$%.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB Per Capita: R$%.2f\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);
  
  printf("\n # Carta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nomeCidade2);
  printf("População: %lu hab\n", populacao2);
  printf("Área: %.2f km²\n", areaTotal2);
  printf("PIB: R$%.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB Per Capita: R$%.2f\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  printf("\n");
  printf("----------------------------------------------------\n");
  printf("--- RESULTADO DA COMPARAÇÃO (CARTA 1 vs CARTA 2) ---\n");
  printf("----------------------------------------------------\n");
  printf("\n");
  printf("--------------------------------\n");
  printf("--- 1: verdadeiro | 0: falso ---\n");
  printf("--------------------------------\n");


  // Lógica do Nível Mestre: 1 se Carta 1 vence, 0 se Carta 2 vence
  printf("População: %d\n", populacao1 > populacao2);
  printf("Área: %d\n", areaTotal1 > areaTotal2);
  printf("PIB: %d\n", pib1 > pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
  printf("PIB Per Capita: %d\n", pibPerCapita1 > pibPerCapita2);

  // REGRA ESPECIAL: Na Densidade Populacional, o MENOR valor vence!
  printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    
  printf("Super Poder: %d\n", superPoder1 > superPoder2);

  return 0;
}
