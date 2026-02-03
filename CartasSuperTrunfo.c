#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Comparação de Cartas com Menu Interativo
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  char estado1, estado2;
  char codigo1[4], codigo2[4], nomeAtributo1[20], nomeAtributo2[20];
  char nomeCidade1[100], nomeCidade2[100];
  unsigned int pontosTuristicos1, pontosTuristicos2, opcao1, opcao2;
  unsigned long int populacao1, populacao2;
  double pib1, pibPerCapita1, superPoder1, pib2, pibPerCapita2, superPoder2;
  float areaTotal1, densidade1, areaTotal2, densidade2, valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;

  // Área para entrada de dados
  printf("-------------------------------------\n");
  printf("--- DESAFIO SUPER TRUNFO - PAÍSES ---\n");
  printf("-------------------------------------\n");
  printf(" Cadastro da 1ª carta\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado1);
  while ((getchar()) != '\n')
    ; // Limpa o buffer antes

  printf("Digite o código da carta (Ex.: F01) ");
  scanf("%s", codigo1);
  while ((getchar()) != '\n')
    ;

  printf("Digite o nome da cidade: ");
  scanf("%[^\n]", nomeCidade1);
  while ((getchar()) != '\n')
    ;

  printf("Digite a população da cidade: ");
  scanf("%lu", &populacao1);
  while ((getchar()) != '\n')
    ;

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &areaTotal1);
  while ((getchar()) != '\n')
    ;

  printf("Digite o PIB da cidade (em bilhões de R$): R$");
  scanf("%lf", &pib1);
  while ((getchar()) != '\n')
    ;

  printf("Digite o número de pontos turísticos: ");
  scanf("%u", &pontosTuristicos1);
  while ((getchar()) != '\n')
    ;

  printf("\n Cadastro da 2ª carta\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado2);
  while ((getchar()) != '\n')
    ;

  printf("Digite o código da carta (Ex.: F01) ");
  scanf("%s", codigo2);
  while ((getchar()) != '\n')
    ;

  printf("Digite o nome da cidade: ");
  scanf("%[^\n]", nomeCidade2);
  while ((getchar()) != '\n')
    ;

  printf("Digite a população da cidade: ");
  scanf("%lu", &populacao2);
  while ((getchar()) != '\n')
    ;

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &areaTotal2);
  while ((getchar()) != '\n')
    ;

  printf("Digite o PIB da cidade (em bilhões de R$): R$");
  scanf("%lf", &pib2);
  while ((getchar()) != '\n')
    ;

  printf("Digite o número de pontos turísticos: ");
  scanf("%u", &pontosTuristicos2);
  while ((getchar()) != '\n')
    ;

  densidade1 = (float)populacao1 / areaTotal1;
  densidade2 = (float)populacao2 / areaTotal2;

  pibPerCapita1 = (float)(pib1 * 1e9) / populacao1;
  pibPerCapita2 = (float)(pib2 * 1e9) / populacao2;

  superPoder1 = (double)populacao1 + areaTotal1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
  superPoder2 = (double)populacao2 + areaTotal2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

  // Área para escolha do atributo a comparar
  printf("\nESCOLHA O PRIMEIRO ATRIBUTO\n");
  printf("1. População\n2. Área\n3. PIB\n4. Densidade Demográfica\n5. Pontos Turísticos\nOpção: ");
  scanf("%d", &opcao1);
  while ((getchar()) != '\n')
    ;

  switch (opcao1)
  {
  case 1:
    valor1_carta1 = populacao1;
    valor1_carta2 = populacao2;
    sprintf(nomeAtributo1, "População");
    break;
  case 2:
    valor1_carta1 = areaTotal1;
    valor1_carta2 = areaTotal2;
    sprintf(nomeAtributo1, "Área Total");
    break;
  case 3:
    valor1_carta1 = pib1;
    valor1_carta2 = pib2;
    sprintf(nomeAtributo1, "PIB");
    break;
  case 4:
    valor1_carta1 = densidade1;
    valor1_carta2 = densidade2;
    sprintf(nomeAtributo1, "Densidade Populacional");
    break;
  case 5:
    valor1_carta1 = pontosTuristicos1;
    valor1_carta2 = pontosTuristicos2;
    sprintf(nomeAtributo1, "Pontos Turísticos");
    break;
  default:
    printf("Opção inválida.");
  }

  printf("\nESCOLHA O SEGUNDO ATRIBUTO (diferente do primeiro): ");
  scanf("%d", &opcao2);

  if (opcao1 == opcao2)
  {
    printf("Erro: Você não pode escolher o mesmo atributo duas vezes!\n");
    return 0; // Finaliza o programa
  }

  // Definindo o segundo atributo (Lógica similar ao primeiro switch)
  switch (opcao2)
  {
  case 1:
    valor2_carta1 = populacao1;
    valor2_carta2 = populacao2;
    sprintf(nomeAtributo2, "População");
    break;
  case 2:
    valor2_carta1 = areaTotal1;
    valor2_carta2 = areaTotal2;
    sprintf(nomeAtributo2, "Área Total");
    break;
  case 3:
    valor2_carta1 = pib1;
    valor2_carta2 = pib2;
    sprintf(nomeAtributo2, "PIB");
    break;
  case 4:
    valor2_carta1 = densidade1;
    valor2_carta2 = densidade2;
    sprintf(nomeAtributo2, "Densidade Demográfica");
    break;
  case 5:
    valor2_carta1 = pontosTuristicos1;
    valor2_carta2 = pontosTuristicos2;
    sprintf(nomeAtributo2, "Pontos Turísticos");
    break;
  default:
    printf("Opção inválida.");
  }

  // SOMA DOS ATRIBUTOs
  float valorSoma1_Attr1 = (opcao1 == 4) ? -valor1_carta1 : valor1_carta1;
  float valorSoma1_Attr2 = (opcao2 == 4) ? -valor2_carta1 : valor2_carta1;

  float valorSoma2_Attr1 = (opcao1 == 4) ? -valor1_carta2 : valor1_carta2;
  float valorSoma2_Attr2 = (opcao2 == 4) ? -valor2_carta2 : valor2_carta2;

  float soma1 = valorSoma1_Attr1 + valorSoma1_Attr2;
  float soma2 = valorSoma2_Attr1 + valorSoma2_Attr2;

  // EXIBIÇÃO E RESULTADO
  printf("\n--- RESULTADO DA RODADA ---\n");
  printf("Cidade 1: %s | Cidade 2: %s\n", nomeCidade1, nomeCidade2);

  // Usando operador ternário para decidir o vencedor de cada atributo na tela
  printf("%s: %s venceu!\n", nomeAtributo1,
         (opcao1 == 4) ? (valor1_carta1 < valor1_carta2 ? "Carta 1" : "Carta 2") : (valor1_carta1 > valor1_carta2 ? "Carta 1" : "Carta 2"));

  printf("%s: %s venceu!\n", nomeAtributo2,
         (opcao2 == 4) ? (valor2_carta1 < valor2_carta2 ? "Carta 1" : "Carta 2") : (valor2_carta1 > valor2_carta2 ? "Carta 1" : "Carta 2"));

  printf("Soma Total: %.2fpts vs %.2fpts\n", soma1, soma2);

  // Vencedor Final
  if (soma1 > soma2)
  {
    printf("VENCEDOR FINAL: CARTA 1!\n");
  }
  else if (soma2 > soma1)
  {
    printf("VENCEDOR FINAL: CARTA 2!\n");
  }
  else
  {
    printf("EMPATE NA RODADA!\n");
  }

  // Área para exibição dos dados da cidade
  printf("\n*** DADOS INFORMADOS ***\n");

  printf("\n### Carta 1 ###\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", nomeCidade1);
  printf("População: %lu hab\n", populacao1);
  printf("Área: %.0f km²\n", areaTotal1);
  printf("PIB: R$%.0f bilhões\n", pib1);
  printf("Número de Pontos Turísticos: %u\n", pontosTuristicos1);
  printf("Densidade Demográfica: %.0f hab/km²\n", densidade1);
  printf("PIB Per Capita: R$%.2f\n", pibPerCapita1);
  printf("Super Poder: %.0fpts\n", superPoder1);

  printf("\n### Carta 2 ###\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nomeCidade2);
  printf("População: %lu hab\n", populacao2);
  printf("Área: %.0f km²\n", areaTotal2);
  printf("PIB: R$%.0f bilhões\n", pib2);
  printf("Número de Pontos Turísticos: %u\n", pontosTuristicos2);
  printf("Densidade Demográfica: %.0f hab/km²\n", densidade2);
  printf("PIB Per Capita: R$%.2f\n", pibPerCapita2);
  printf("Super Poder: %.0fpts\n", superPoder2);

  return 0;
}