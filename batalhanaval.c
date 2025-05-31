#include <stdio.h>

int main() {
    
    //Para definir a nomenclatura das colunas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 

    //Definindo o tamanho da matriz
    int tabuleiro[10][10] =
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    //Para desenhar a cruz na matriz
    tabuleiro[0][2] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[2][0] = 3;
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[3][2] = 3;
    tabuleiro[4][2] = 3;

    //Para desenhar o cone na matriz
    tabuleiro[6][2] = 3;
    tabuleiro[7][1] = 3;
    tabuleiro[7][2] = 3;
    tabuleiro[7][3] = 3;
    tabuleiro[8][0] = 3;
    tabuleiro[8][1] = 3;
    tabuleiro[8][2] = 3;
    tabuleiro[8][3] = 3;
    tabuleiro[8][4] = 3;

    //Para desenhar o octaedro na matriz
    tabuleiro[3][7] = 3;
    tabuleiro[4][6] = 3;
    tabuleiro[4][7] = 3;
    tabuleiro[4][8] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[5][6] = 3;
    tabuleiro[5][7] = 3;
    tabuleiro[5][8] = 3;
    tabuleiro[5][9] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[6][8] = 3;
    tabuleiro[7][7] = 3;

    //Para imprimir na tela a linha das colunas
    for (int j = 0; j < 10; j++)
    {
        printf(" %c", linha[j]);
    }
    
    printf("\n");

    //Para imprimir na tela a matriz tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
return 0;
}