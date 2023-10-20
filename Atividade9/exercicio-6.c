#include <stdio.h>

int main () {
    //variaveis
    int vetor [10], maior, menor;

    //recebimento dos valores do vetor
    for (int i = 0; i < 10; i++) {
        printf ("\nDigite os numeros: ");
        scanf ("%d", &vetor[i]);
    }

    //iniciando variaveis do menor e maior numero do vetor
    maior = vetor [0];
    menor = vetor [0];

    //armazenando o menor e maior numero
    for (int i = 0; i < 10; i++){
        if (vetor[i > maior]) {
            maior = vetor [i];
        }
        if (vetor [i] < menor) {
            menor = vetor [i];
        }
    }

    printf ("O \nmaior valor = %d, e o menor valor = %d", maior, menor);
    return 0;
}