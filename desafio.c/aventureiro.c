#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definição da estrutura para representar um país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para calcular a densidade demográfica
float calcularDensidade(int populacao, float area) {
    if (area > 0) {
        return (float)populacao / area;
    } else {
        return 0; // Evitar divisão por zero
    }
}

// Função para cadastrar uma nova carta
void cadastrarCarta(Carta *carta) {
    printf("\nCadastro da Carta:\n");
    printf("Nome do país: ");
    scanf(" %[^\n]s", carta->nome); // Lê a linha inteira, incluindo espaços

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em trilhões de $): ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->num_pontos_turisticos);

    carta->densidade_demografica = calcularDensidade(carta->populacao, carta->area);

    printf("Carta de %s cadastrada com sucesso!\n", carta->nome);
}

// Função para exibir o menu de atributos
void exibirMenu() {
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("0 - Sair\n");
    printf("Digite sua escolha: ");
}

// Função para comparar as cartas com base no atributo escolhido
void compararCartas(Carta carta1, Carta carta2, int escolha) {
    printf("\nComparando: %s vs %s\n", carta1.nome, carta2.nome);

    switch (escolha) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d\n", carta1.nome, carta1.populacao);
            printf("%s: %d\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta2.populacao > carta1.populacao) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f\n", carta1.nome, carta1.area);
            printf("%s: %.2f\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta2.area > carta1.area) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", carta1.nome, carta1.pib);
            printf("%s: %.2f\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta2.pib > carta1.pib) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4: // Número de Pontos Turísticos
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("%s: %d\n", carta1.nome, carta1.num_pontos_turisticos);
            printf("%s: %d\n", carta2.nome, carta2.num_pontos_turisticos);
            if (carta1.num_pontos_turisticos > carta2.num_pontos_turisticos) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta2.num_pontos_turisticos > carta1.num_pontos_turisticos) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5: // Densidade Demográfica
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f\n", carta1.nome, carta1.densidade_demografica);
            printf("%s: %.2f\n", carta2.nome, carta2.densidade_demografica);
            if (carta1.densidade_demografica < carta2.densidade_demografica) {
                printf("%s venceu!\n", carta1.nome);
            } else if (carta2.densidade_demografica < carta1.densidade_demografica) {
                printf("%s venceu!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}

int main() {
    Carta carta1, carta2;
    int escolha;
    int num_cartas_cadastradas = 0;

    printf("Bem-vindo ao Super Trunfo!\n");

    // Cadastra a primeira carta
    printf("\n--- Cadastrando a primeira carta ---\n");
    cadastrarCarta(&carta1);
    num_cartas_cadastradas++;

    // Cadastra a segunda carta
    printf("\n--- Cadastrando a segunda carta ---\n");
    cadastrarCarta(&carta2);
    num_cartas_cadastradas++;

    if (num_cartas_cadastradas == 2) {
        do {
            exibirMenu();
            scanf("%d", &escolha);

            if (escolha >= 1 && escolha <= 5) {
                compararCartas(carta1, carta2, escolha);
            } else if (escolha != 0) {
                printf("Por favor, digite uma opção válida do menu.\n");
            }
        } while (escolha != 0);
    } else {
        printf("\nNão há cartas suficientes para jogar.\n");
    }

    printf("\nObrigado por jogar Super Trunfo!\n");

    return 0;
}