#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Cadastro das cartas
// Objetivo: No nível aventureiro, o jogador deve cadastrar as cartas do jogo, inserindo as propriedades de cada cidade. O programa deve permitir a entrada de dados para pelo menos 2 cartas, e exibir as informações cadastradas ao final..

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

//Carta 02
char estado2;
char codigo2[4];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int pontos2;

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

float Densidade1 = populacao1 / area1; // Cálculo da densidade populacional para a carta 1

float PIB_per_capita1 = pib1 / populacao1; // Cálculo do PIB per capita para a carta 1

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

float Densidade2 = populacao2 / area2; // Cálculo da densidade populacional para a carta 2

float PIB_per_capita2 = pib2 / populacao2; // Cálculo do PIB per capita para a carta 2

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

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Densidade Populacional: %.2f\n", Densidade2);
printf("PIB per Capita: %.2f\n", PIB_per_capita2);

return 0;
} 
