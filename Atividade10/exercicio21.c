#include <stdio.h>

/*
faca um programa que receba do usuario dois vetores, A e B, com 10 numeros inteiros cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.
*/



int main() {
    int A[10], B[10], C[10];

    
    printf("Digite os 10 elementos do vetor A:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os 10 elementos do vetor B:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }

    
    printf("Vetor C (C = A - B):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
