#include <stdio.h>
#include <string.h>

// Definindo a estrutura da carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para comparar as cartas
void compararCartas(Carta carta1, Carta carta2, int opcao) {
    printf("\n=== Comparação ===\n");
    printf("País 1: %s\n", carta1.nome);
    printf("País 2: %s\n", carta2.nome);

    switch (opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %d\n", carta1.nome, carta1.populacao);
            printf("%s: %d\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.populacao < carta2.populacao)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n", carta1.nome, carta1.area);
            printf("%s: %.2f km²\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.area < carta2.area)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB:\n");
            printf("%s: %.2f trilhões\n", carta1.nome, carta1.pib);
            printf("%s: %.2f trilhões\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.pib < carta2.pib)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos turísticos:\n");
            printf("%s: %d\n", carta1.nome, carta1.pontos_turisticos);
            printf("%s: %d\n", carta2.nome, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.pontos_turisticos < carta2.pontos_turisticos)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade demográfica:\n");
            printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidade_demografica);
            printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidade_demografica);
            if (carta1.densidade_demografica < carta2.densidade_demografica)
                printf("Vencedor: %s (menor densidade)\n", carta1.nome);
            else if (carta1.densidade_demografica > carta2.densidade_demografica)
                printf("Vencedor: %s (menor densidade)\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
    }
}

int main() {
    // Cartas de exemplo
    Carta carta1 = {"Brasil", 213000000, 8515767.0, 1.44, 35, 25.0};
    Carta carta2 = {"Japão", 125800000, 377975.0, 5.06, 50, 332.9};

    int escolha;

    printf("=== Super Trunfo: Países ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (vence o menor)\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    compararCartas(carta1, carta2, escolha);

    return 0;
}
