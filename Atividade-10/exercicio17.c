#include <stdio.h>

// leia um vetor de 10 posicoes e atribua o valor 0 para todos os elementos que possuirem valores negativos

int main() {
    int vetor[10];

    
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor na posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    // Exibição do vetor modificado
    printf("Vetor com valores negativos substituidos por 0: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
