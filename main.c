#include <stdio.h>


#define TAMANHO 10
#define NAVIO_TAMANHO_H 4
#define NAVIO_TAMANHO_V 3

void inicializartabuleiro(int tabuleiro[TAMANHO][TAMANHO]){
    for(int i = 0; i < TAMANHO; i++){
        for(int j = 0; j < TAMANHO; j++){
            tabuleiro[i][j] = 0;
        }
    }
}

void posicionarnaviohorizontal(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna){
    printf("Coordenadas do Navio Horizontal:\n");
    for(int i = 0; i < NAVIO_TAMANHO_H; i++){
        if(coluna + i < TAMANHO){
            tabuleiro[linha][coluna + i] = 1;
            printf("(%d, %d)\n", linha, coluna + i);
        }
    }
}

void posicionarnaviovertical(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna){
    printf("Coordenadas do Navio Vertical:\n");
    for(int i = 0; i < NAVIO_TAMANHO_V; i++){
        if(linha + i < TAMANHO){
            tabuleiro[linha + i][coluna] = 2;
            printf("(%d, %d)\n", linha + i, coluna);
        }
    }
}

void exibirtabuleiro(int tabuleiro[TAMANHO][TAMANHO]){
    printf("\nTabuleiro:\n");
    for(int i = 0; i < TAMANHO; i++){
        for(int j = 0; j < TAMANHO; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int tabuleiro[TAMANHO][TAMANHO];
    inicializartabuleiro(tabuleiro);

    int linhaH = 2, colunaH = 4;
    int linhaV = 5, colunaV = 7;

    posicionarnaviohorizontal(tabuleiro, linhaH, colunaH);
    posicionarnaviovertical(tabuleiro, linhaV, colunaV);

    exibirtabuleiro(tabuleiro);

    return 0;
}

