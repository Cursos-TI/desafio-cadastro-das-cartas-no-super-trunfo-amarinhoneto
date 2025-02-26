#include <stdio.h>

int main() {
    char estado1[20];
    char estado2[20];
    char id_carta1[3];
    char id_carta2[3];
    char cidade1[20];
    char cidade2[20];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos_turisticos1;
    int pontos_turisticos2;

    // Carta 1
    printf("Digite o estado da carta 1: \n");
    scanf("%s", estado1);

    printf("Digite o id da carta 1: \n");
    scanf("%s", id_carta1);

    printf("Digite a cidade da carta 1: \n");
    scanf("%s", cidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos da carta 1: \n");
    scanf("%d", &pontos_turisticos1);   

    // Carta 2
    printf("Digite o estado da carta 2: \n");
    scanf("%s", estado2);

    printf("Digite o id da carta 2: \n");
    scanf("%s", id_carta2);

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", cidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos da carta 2: \n");
    scanf("%d", &pontos_turisticos2);

    // Imprimindo as cartas

    // Carta 1 - 2 Linhas
    printf("Carta 1:\n Estado: %s - ID: %s - Cidade: %s\n", estado1, id_carta1, cidade1);
    printf(" População: %d - Área: %f Km²- PIB: %f bilhões de reais - Pontos turísticos: %d\n", populacao1, area1, pib1, pontos_turisticos1);

    printf("\n");

    // Carta 2 - 7 linhas
    printf("Carta 2:\n Estado: %s\n ID: %s\n Cidade: %s\n", estado2, id_carta2, cidade2);
    printf(" População: %d\n Área: %f Km²\n PIB: %f bilhões de reais\n Pontos turísticos: %d\n", populacao2, area2, pib2, pontos_turisticos2);


    return 0;
}