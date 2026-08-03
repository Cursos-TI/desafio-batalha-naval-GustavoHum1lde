
//Desafio Aventureiro
//Objetivo: Posicionar os navios diagonais no tabuleiro

#include <stdio.h>

int main() {
    
    int tabuleiro[10][10] = {
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };
    
    //Navios Horizonatais e Verticais
    
    // Navio 1
    tabuleiro[0][5] = 3;
    tabuleiro[0][6] = 3;
    tabuleiro[0][7] = 3;

    // Navio 2
    tabuleiro[3][0] = 3;
    tabuleiro[4][0] = 3;
    tabuleiro[5][0] = 3;
    
    //Navios Diagonais

    // Navio 3
    tabuleiro[2][3] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[4][5] = 3;

    // Navio 4
    tabuleiro[8][5] = 3;
    tabuleiro[7][6] = 3;
    tabuleiro[6][7] = 3;
    
    for (int i = 0; i < 10; i++) { //Imprimir as linhas
    for (int j = 0; j < 10; j++) { //Imprimir as colunas
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
    }
    

    return 0;
}