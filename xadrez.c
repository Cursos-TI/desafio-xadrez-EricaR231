#include <stdio.h>

// === TORRE (recursividade simples) ===
void mover_torre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        mover_torre(casas - 1);
    }
}

// === BISPO (recursividade + loops aninhados) ===
void mover_bispo(int casas) {
    while (casas > 0) {
        printf("Cima\n");
        for (int i = 0; casas > 0; casas--) {
            printf("Direita\n");
            mover_bispo(casas - 1);
            casas = 0;
            }
        }
    }


// === RAINHA (recursividade simples) ===
void mover_rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        mover_rainha(casas - 1);
    }
}

// === CAVALO (loops + condicional) ===
void mover_cavalo() {
    int opcao;
    int i, j;

    printf("Escolha o movimento do cavalo que deseja:\n");
    printf("1. Para Baixo e para à Esquerda\n");
    printf("2. Para Cima e para à Direita\n");
    printf("Digite o número de sua opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            for (i = 1; i <= 2; i++)
                printf("Baixo, ");
            for (j = 1; j <= 1; j++)
                printf("Esquerda\n");
            break;

        case 2:
            for (i = 1; i <= 2; i++)
                printf("Cima, ");
            for (j = 1; j <= 1; j++)
                printf("Direita\n");
            break;

        default:
            printf("Opção inválida!\n");
    }
}

// === MAIN ===
int main() {

    printf("=== Movimentando a Torre ===\n");
    mover_torre(5);

    printf("\n=== Movimentando o Bispo ===\n");
    mover_bispo(5);

    printf("\n=== Movimentando a Rainha ===\n");
    mover_rainha(8);

    printf("\n=== Movimentando o Cavalo ===\n");
    mover_cavalo();

    return 0;
}
