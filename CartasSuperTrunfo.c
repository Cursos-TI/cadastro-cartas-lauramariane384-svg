#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
//Carta 01
char estado1;
char codigo1[4];
char cidade1[50];
int populacao1;
float area1;
float pib1;
int pontos1;
float poder1;
float inverso_densidade1;

//Carta 02
char estado2;
char codigo2[4];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int pontos2;
float poder2;
float inverso_densidade2;

  // Área para entrada de dados
// === ENTRADA CARTA 1 ===
printf("== Cadastro Carta 1 ==\n");

printf("Estado (A a H): ");
scanf(" %c", &estado1);

printf("Codigo: ");
scanf("%s", codigo1);

printf("Nome da cidade: ");
scanf(" %[^\n]", cidade1);

printf("Populacao: ");
scanf("%d", &populacao1);

printf("Area: ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Pontos turisticos: ");
scanf("%d", &pontos1);

float Densidade1 = (float) populacao1 / area1; // Cálculo da densidade populacional para a carta 1
float PIB_per_capita1 = (float) pib1 / populacao1; // Cálculo do PIB per capita para a carta 1
inverso_densidade1 = 1.0f / Densidade1; // Cálculo do inverso da densidade populacional para a carta 1
poder1 = (float) populacao1 + area1 + pib1 + (float) pontos1 + inverso_densidade1; // Cálculo do poder da carta 1

// === ENTRADA CARTA 2 ===
printf("\n== Cadastro Carta 2 ==\n");

printf("Estado (A a H): ");
scanf(" %c", &estado2);

printf("Codigo: ");
scanf("%s", codigo2);

printf("Nome da cidade: ");
scanf(" %[^\n]", cidade2);

printf("Populacao: ");
scanf("%d", &populacao2);

printf("Area: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Pontos turisticos: ");
scanf("%d", &pontos2);

float Densidade2 = (float) populacao2 / area2; // Cálculo da densidade populacional para a carta 2
float PIB_per_capita2 = (float) pib2 / populacao2; // Cálculo do PIB per capita para a carta 2
inverso_densidade2 = 1.0f / Densidade2; // Cálculo do inverso da densidade populacional para a carta 2
poder2 = (float) populacao2 + area2 + pib2 + (float) pontos2 + inverso_densidade2; // Cálculo do poder da carta 2

  // Área para exibição dos dados da cidade
printf("\n\n=== CARTAS CADASTRADAS ===\n");

printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Densidade Populacional: %.2f\n", Densidade1);
printf("PIB per Capita: %.2f\n", PIB_per_capita1);
printf("Poder da Carta: %.2f\n", poder1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Densidade Populacional: %.2f\n", Densidade2);
printf("PIB per Capita: %.2f\n", PIB_per_capita2);
printf("Poder da Carta: %.2f\n", poder2);

// === COMPARAÇÕES ATRIBUTO POR ATRIBUTO ===
  printf("\n\n=== COMPARACAO ENTRE AS CARTAS ===\n");

  // Maior vence (1 = Carta 1 vence, 0 = Carta 2 vence)
  printf("Populacao: %d\n",          populacao1 > populacao2);
  printf("Area: %d\n",               area1 > area2);
  printf("PIB: %d\n",                pib1 > pib2);
  printf("Pontos Turisticos: %d\n",  pontos1 > pontos2);
  printf("PIB per Capita: %d\n",     PIB_per_capita1 > PIB_per_capita2);

  // Densidade: menor vence, então Carta 1 vence se densidade1 < densidade2
  printf("Densidade Populacional: %d\n", Densidade1 < Densidade2);

  printf("Super Poder: %d\n",        poder1 > poder2);

return 0;
} 
