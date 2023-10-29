/*
Faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:

a linha 2 com a linha 8;
a coluna 4 com a coluna 10;
a diagonal principal com a secundária;
a linha 5 com a coluna 10;
O procedimento deve retornar a matriz alterada.
*/


#include <stdio.h>

//troca a linha 2 com a linha 8
void trocarLinhas(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = temp;
    }
}

//troca a coluna 4 com a coluna 10
void trocarColunas(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp;
    }
}

//troca a diagonal principal com a diagonal secundária
void trocarDiagonais(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = temp;
    }
}

//troca a linha 5 com a coluna 10
void trocarLinhaComColuna(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = temp;
    }
}

int main() {
    int matrizA[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    };

    trocarLinhas(matrizA);
    trocarColunas(matrizA);
    trocarDiagonais(matrizA);
    trocarLinhaComColuna(matrizA);

    // Exiba a matriz alterada
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d ", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}
