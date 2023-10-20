#include <stdio.h>

/*
Faca um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que nao sao multiplos de 7 ou que terminam com 7
*/


int main() {
    int vetor[100], num = 1;


    for (int i = 0; i < 100; ) {
        
        if (num % 7 != 0 && num % 10 != 7) {
            vetor[i] = num;
            i++; 
        }
        num++; 
    }

   
    printf("Vetor com os 100 primeiros naturais que não são multiplos de 7 ou não terminam com 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
