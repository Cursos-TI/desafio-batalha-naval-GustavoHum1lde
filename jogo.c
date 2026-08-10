#include <stdio.h>

int main() {

    //Desafio: Mestre
    //Objetivo: criação de habilidades e matrizes condicionais
    
    // =====================================================
    // TABULEIRO
    // =====================================================

    int tabuleiro[10][10] = {0};

    // Navio 1 - horizontal
    tabuleiro[0][5] = 3;
    tabuleiro[0][6] = 3;
    tabuleiro[0][7] = 3;

    // Navio 2 - vertical
    tabuleiro[3][0] = 3;
    tabuleiro[4][0] = 3;
    tabuleiro[5][0] = 3;

    // Navio 3 - diagonal
    tabuleiro[2][3] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[4][5] = 3;

    // Navio 4 - diagonal
    tabuleiro[8][5] = 3;
    tabuleiro[7][6] = 3;
    tabuleiro[6][7] = 3;


    // =====================================================
    // MATRIZES DAS HABILIDADES
    // =====================================================

    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];


    // =====================================================
    // CRIAR CONE
    // =====================================================

    for (int linha = 0; linha < 5; linha++) {

        for (int coluna = 0; coluna < 5; coluna++) {

            cone[linha][coluna] = 0;

            if (linha == 0 && coluna == 2) {
                cone[linha][coluna] = 1;
            }

            else if (linha == 1 &&
                     coluna >= 1 && coluna <= 3) {
                cone[linha][coluna] = 1;
            }

            else if (linha == 2 &&
                     coluna >= 0 && coluna <= 4) {
                cone[linha][coluna] = 1;
            }
        }
    }


    // =====================================================
    // CRIAR CRUZ
    // =====================================================

    for (int linha = 0; linha < 5; linha++) {

        for (int coluna = 0; coluna < 5; coluna++) {

            if (linha == 2 || coluna == 2) {
                cruz[linha][coluna] = 1;
            }
            else {
                cruz[linha][coluna] = 0;
            }
        }
    }


    // =====================================================
    // CRIAR OCTAEDRO / LOSANGO
    // =====================================================

    for (int linha = 0; linha < 5; linha++) {

        for (int coluna = 0; coluna < 5; coluna++) {

            octaedro[linha][coluna] = 0;

            if (linha == 0 && coluna == 2) {
                octaedro[linha][coluna] = 1;
            }

            else if (linha == 1 &&
                     coluna >= 1 && coluna <= 3) {
                octaedro[linha][coluna] = 1;
            }

            else if (linha == 2 &&
                     coluna >= 0 && coluna <= 4) {
                octaedro[linha][coluna] = 1;
            }

            else if (linha == 3 &&
                     coluna >= 1 && coluna <= 3) {
                octaedro[linha][coluna] = 1;
            }

            else if (linha == 4 && coluna == 2) {
                octaedro[linha][coluna] = 1;
            }
        }
    }


    // =====================================================
    // ORIGENS DAS HABILIDADES
    // =====================================================

    int origemConeLinha = 3;
    int origemConeColuna = 4;

    int origemCruzLinha = 6;
    int origemCruzColuna = 3;

    int origemOctaedroLinha = 6;
    int origemOctaedroColuna = 7;


    // =====================================================
    // APLICAR CONE
    // =====================================================

    for (int linha = 0; linha < 5; linha++) {

        for (int coluna = 0; coluna < 5; coluna++) {

            if (cone[linha][coluna] == 1) {

                int linhaTabuleiro =
                    origemConeLinha + (linha - 2);

                int colunaTabuleiro =
                    origemConeColuna + (coluna - 2);


                if (linhaTabuleiro >= 0 &&
                    linhaTabuleiro < 10 &&
                    colunaTabuleiro >= 0 &&
                    colunaTabuleiro < 10) {

                    if (tabuleiro[linhaTabuleiro][colunaTabuleiro] == 3) {

                        printf("COLISAO DO CONE em [%d][%d]\n",
                               linhaTabuleiro,
                               colunaTabuleiro);

                    }
                    else {

                        tabuleiro[linhaTabuleiro][colunaTabuleiro] = 5;
                    }
                }
            }
        }
    }


    // =====================================================
    // APLICAR CRUZ
    // =====================================================

    for (int linha = 0; linha < 5; linha++) {

        for (int coluna = 0; coluna < 5; coluna++) {

            if (cruz[linha][coluna] == 1) {

                int linhaTabuleiro =
                    origemCruzLinha + (linha - 2);

                int colunaTabuleiro =
                    origemCruzColuna + (coluna - 2);


                if (linhaTabuleiro >= 0 &&
                    linhaTabuleiro < 10 &&
                    colunaTabuleiro >= 0 &&
                    colunaTabuleiro < 10) {

                    if (tabuleiro[linhaTabuleiro][colunaTabuleiro] == 3) {

                        printf("COLISAO DA CRUZ em [%d][%d]\n",
                               linhaTabuleiro,
                               colunaTabuleiro);

                    }
                    else {

                        tabuleiro[linhaTabuleiro][colunaTabuleiro] = 5;
                    }
                }
            }
        }
    }


    // =====================================================
    // APLICAR OCTAEDRO
    // =====================================================

    for (int linha = 0; linha < 5; linha++) {

        for (int coluna = 0; coluna < 5; coluna++) {

            if (octaedro[linha][coluna] == 1) {

                int linhaTabuleiro =
                    origemOctaedroLinha + (linha - 2);

                int colunaTabuleiro =
                    origemOctaedroColuna + (coluna - 2);


                if (linhaTabuleiro >= 0 &&
                    linhaTabuleiro < 10 &&
                    colunaTabuleiro >= 0 &&
                    colunaTabuleiro < 10) {

                    if (tabuleiro[linhaTabuleiro][colunaTabuleiro] == 3) {

                        printf("COLISAO DO OCTAEDRO em [%d][%d]\n",
                               linhaTabuleiro,
                               colunaTabuleiro);

                    }
                    else {

                        tabuleiro[linhaTabuleiro][colunaTabuleiro] = 5;
                    }
                }
            }
        }
    }


    // =====================================================
    // EXIBIR TABULEIRO
    // =====================================================

    printf("\nTABULEIRO:\n\n");

    for (int linha = 0; linha < 10; linha++) {

        for (int coluna = 0; coluna < 10; coluna++) {

            printf("%d ", tabuleiro[linha][coluna]);
        }

        printf("\n");
    }


    return 0;
}