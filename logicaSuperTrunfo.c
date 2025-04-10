#include <stdio.h>

int main()
{
    // Variáveis para a primeira carta
    char estado1[2], cidade1[50], codigo_carta1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    
    // Variáveis para a segunda carta
    char estado2[2], cidade2[50], codigo_carta2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    
        // Leitura da primeira carta
    printf("Digite uma letra de A a H (representando um dos oito estados) para a Carta 1: ");
    scanf("%s", estado1);  // Leitura do estado (letra A a H) para a carta 1

    printf("Digite o código da carta (a letra do estado seguida de um número de 01 a 04) para a Carta 1: ");
    scanf("%s", codigo_carta1);  // Leitura do código da carta para a carta 1 (estado + número)

    printf("Digite o nome da cidade para a Carta 1: ");
    scanf(" %[^\n]%*c", cidade1);  // Leitura do nome da cidade, permitindo espaços (utilizando %[^\n]%*c)

    printf("Digite o número de habitantes da cidade para a Carta 1: ");
    scanf("%d", &populacao1);  // Leitura do número de habitantes da cidade para a carta 1

    printf("Digite a área da cidade em quilômetros quadrados para a Carta 1: ");
    scanf("%f", &area1);  // Leitura da área da cidade para a carta 1 (em km²)

    printf("Digite o produto interno bruto (PIB) da cidade para a Carta 1: ");
    scanf("%f", &pib1);  // Leitura do PIB da cidade para a carta 1 (em reais)

    printf("Digite o número de pontos turísticos da cidade para a Carta 1: ");
    scanf("%d", &pontos_turisticos1);  // Leitura do número de pontos turísticos da cidade para a carta 1

    // Leitura da segunda carta
    printf("Digite uma letra de A a H (representando um dos oito estados) para a Carta 2: ");
    scanf("%s", estado2);  // Leitura do estado (letra A a H) para a carta 2

    printf("Digite o código da carta (a letra do estado seguida de um número de 01 a 04) para a Carta 2: ");
    scanf("%s", codigo_carta2);  // Leitura do código da carta para a carta 2 (estado + número)

    printf("Digite o nome da cidade para a Carta 2: ");
    scanf(" %[^\n]%*c", cidade2);  // Leitura do nome da cidade, permitindo espaços (utilizando %[^\n]%*c)

    printf("Digite o número de habitantes da cidade para a Carta 2: ");
    scanf("%d", &populacao2);  // Leitura do número de habitantes da cidade para a carta 2

    printf("Digite a área da cidade em quilômetros quadrados para a Carta 2: ");
    scanf("%f", &area2);  // Leitura da área da cidade para a carta 2 (em km²)

    printf("Digite o produto interno bruto (PIB) da cidade para a Carta 2: ");
    scanf("%f", &pib2);  // Leitura do PIB da cidade para a carta 2 (em reais)

    printf("Digite o número de pontos turísticos da cidade para a Carta 2: ");
    scanf("%d", &pontos_turisticos2);  // Leitura do número de pontos turísticos da cidade para a carta 2
    
    // Calculo da densidade populacional
    
    float densidade1 = populacao1/area1;
    float densidade2 = populacao2/area2;
    
    // Calculo do PIB per capita
    float pib_per_capita1 = pib1/populacao1;
    float pib_per_capita2 = pib2/populacao2;
    
    // Determinação da carta vencedora através da comparação do atributo "população"
    if (populacao1 > populacao2) {
        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s (%s): %d\nCarta 2 - %s (%s): %d\n", cidade1, estado1, populacao1, cidade2, estado2, populacao2);
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s (%s): %d\nCarta 2 - %s (%s): %d\n", cidade1, estado1, populacao1, cidade2, estado2, populacao2);
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s (%s): %d\nCarta 2 - %s (%s): %d\n", cidade1, estado1, populacao1, cidade2, estado2, populacao2);
        printf("Empate!\n");
    }
 
    return 0;
}
