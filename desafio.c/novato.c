#include <stdio.h>

struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[100];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;

    // Solicita os dados da primeira carta
    printf("Digite os dados da primeira carta: \n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo (ex: A01): ");
    scanf(" %s", &carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %s", &carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em Km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turisticos: ");
    scanf("%d", &carta1.numPontosTuristicos);

    // Solicita os dados da segunda carta
    printf("\nDigite os dados da segunda carta: \n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo (ex: A01): ");
    scanf(" %s", &carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %s", &carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em Km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turisticos: ");
    scanf("%d", &carta2.numPontosTuristicos);

    // Exibe os dados da primeira carta
    printf("\nDados da primeira carta:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f Km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Número de pontos turisticos: %d\n", carta1.numPontosTuristicos);

    // Exibe os dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f Km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Número de pontos turisticos: %d\n", carta2.numPontosTuristicos);

    return 0;
}