#include <stdio.h>

/*
 faca um programa que leia dois vetores de 10 posicoes e calcule outro vetor contendo, nas posicoes pares os valores do primeiro e nas posicoes impares os valores do segundo
*/


int main() {
    int vetor1[10], vetor2[10], vetor3[20];

  
    printf("Digite os 10 elementos do primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

 
    printf("Digite os 10 elementos do segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    
    for (int i = 0; i < 20; i++) {
        if (i % 2 == 0) {
            vetor3[i] = vetor1[i / 2];
        } else {
            vetor3[i] = vetor2[i / 2];
        }
    }


    printf("Terceiro vetor:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}
