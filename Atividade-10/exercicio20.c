#include <stdio.h>

/*
escreva um programa que leia numeros inteiros no intervalo [0, 50]  e os armazene em um vetor de 10 posicoes. Preencha um segundo vetor apenas com os numeros impares do primeiro vetor. Imprima os dois vetores, 2 elementos por linha
*/


int main() {
    int vetor1[10], vetor2[10], contador = 0;


   
    for (int i = 0; i < 10; i++) {
        int num;
        do {
            printf("Digite um numero no intervalo [0, 50]: ");
            scanf("%d", &num);
        } while (num < 0 || num > 50);
        vetor1[i] = num;
    }

    
    for (int i = 0; i < 10; i++) {
        if (vetor1[i] % 2 != 0) {
            vetor2[contador] = vetor1[i];
            contador++;
        }
    }

    printf("Vetor 1:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
        if (i % 2 != 0) {
            printf("\n"); 
        }
    }

    printf("\nVetor 2 (Apenas numeros impares do Vetor 1):\n");
    for (int i = 0; i < contador; i++) {
        printf("%d ", vetor2[i]);
        if (i % 2 != 0) {
            printf("\n");
        }
    }

    return 0;
}
