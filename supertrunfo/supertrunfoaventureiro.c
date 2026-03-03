#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    //int populacao1, populacao2;alteração para nivel aventureiro
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    //inclusão de variáveis para o nível aventureiro

    float Denspop1, pibper1, Denspop2, pibper2;
  
    // Área para entrada de dados
      printf("--- Cadastro da Carta 1 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c é importante!

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê nomes com espaços

    printf("População: ");
    //scanf("%d", &populacao1);alteração para float
    scanf("%f", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

        printf("--- Cadastro da Carta 2 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); // O espaço antes de %c é importante!

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lê nomes com espaços

    printf("População: ");
    //scanf("%f", &populacao2); alteração para float
    scanf("%f", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //calculo de densidade populacional e pib per capita 

    Denspop1 = populacao1/area1; 
    Denspop2 = populacao2/area2;

    pibper1 = pib1/populacao1;
    pibper2 = pib2/populacao2;

    // Área para exibição dos dados da cidade
      printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    //printf("População: %d\n", populacao1); alteração para float
    printf("População: %f\n", populacao1);
    printf("Área: %.2f km²\n", area1); // .2f limita a 2 casas decimais
    printf("Densidade Populacional: %.2f Habitante/km²\n", Denspop1);//inclusão do calculo 
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("PIB per capita: %.2f bilhões de reais\n", pibper1); //inclusão do calculo 
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

        printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    //printf("População: %d\n", populacao2); alteração para float
    printf("População: %f\n", populacao2); 
    printf("Área: %.2f km²\n", area2); // .2f limita a 2 casas decimais
    printf("Densidade Populacional: %.2f Habitante/km²\n", Denspop2);//inclusão do calculo 
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("PIB per capita: %.2f bilhões de reais\n", pibper1); //inclusão do calculo 
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);


return 0;
} 

