#include <stdio.h>

//leia um vetor com 20 numeros inteiros, escreva os elementos do vetor eliminando elementos repetidos

int main() {
    int vetor[20], i, j, k;
    
    for (i = 0; i < 20; i++) {
        printf("Digite o valor na posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 20; i++) {
        for (j = i + 1; j < 20; ) {
            if (vetor[i] == vetor[j]) {

                for (k = j; k < 19; k++) {
                    vetor[k] = vetor[k + 1];
                }
    
                j--;
            } else {
                j++;
            }
        }
    }
    printf("Vetor sem elementos repetidos: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
