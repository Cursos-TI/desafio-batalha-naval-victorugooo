#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

void inicializar_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

void posicionar_navio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int navio[TAMANHO_NAVIO], int linha_inicial, int coluna_inicial, int orientacao) {
    // Orientacao: 0 - horizontal, 1 - vertical
    if (orientacao == 0) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_inicial][coluna_inicial + i] = navio[i];
        }
    } else {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_inicial + i][coluna_inicial] = navio[i];
        }
    }
}

void exibir_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int navio1[TAMANHO_NAVIO] = {3, 3, 3};
    int navio2[TAMANHO_NAVIO] = {3, 3, 3};

    inicializar_tabuleiro(tabuleiro);

    // Posicionando navio 1 horizontalmente
    posicionar_navio(tabuleiro, navio1, 2, 3, 0);

    // Posicionando navio 2 verticalmente
    posicionar_navio(tabuleiro, navio2, 5, 1, 1);

    exibir_tabuleiro(tabuleiro);

    return 0;
}