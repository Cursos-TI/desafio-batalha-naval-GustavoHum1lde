
//Desafio Novato
//Objetivo: Posicionar os navios no tabuleiro

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
    
    int navio1[3] = {
        tabuleiro[0][5] = 3, //Marcação do navio
        tabuleiro[0][6] = 3, //Marcação do navio
        tabuleiro[0][7] = 3  //Marcação do navio
    };
    
    int navio2[2] = {
        tabuleiro[3][0] = 3, //Marcação do navio
        tabuleiro[4][0] = 3, //Marcação do navio
    };
    
    for (int i = 0; i < 10; i++) { //Imprimir as linhas
    for (int j = 0; j < 10; j++) { //Imprimir as colunas
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
    }
    

    return 0;
}