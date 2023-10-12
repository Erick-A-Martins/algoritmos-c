#include <stdio.h>

/*faca um programa que leia um vetor de 10 numeros. Leia um numero x. Conte os multiplos de um numero inteiro x num vetor e mostre-os na tela */



int main() {
    int vetor[10], x, contagem = 0;


    for (int i = 0; i < 10; i++) {
        printf("Digite um numero na posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    printf("Digite um numero inteiro x: ");
    scanf("%d", &x);


    printf("Multiplos de %d no vetor: ", x);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
            contagem++;
        }
    }

    if (contagem == 0) {
        printf("Nenhum multiplo encontrado.");
    }

    printf("\n");

    return 0;
}
