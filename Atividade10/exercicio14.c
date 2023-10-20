#include <stdio.h>

// Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva na tela.

int main() {
    int vetor[10], i, j;
    
    for (i = 0; i < 10; i++) {
        printf("Digite o valor na posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores iguais no vetor: ");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d ", vetor[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}
