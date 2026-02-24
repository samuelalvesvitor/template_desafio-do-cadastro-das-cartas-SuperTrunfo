#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    printf("Bem-vindo ao Desafio Super Trunfo - Países!\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char nomeCidade[100];
  int populacao;
  float area;
  float densidade;

  // Área para entrada de dados
  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade);
  printf("Digite a população da cidade: ");
  scanf("%d", &populacao);
  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area);
  densidade = populacao / area;

  // Área para exibição dos dados da cidade
  printf("\nInformações da Cidade:\n");
  printf("Nome: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("Densidade Demográfica: %.2f habitantes/km²\n", densidade);

return 0;
} 
