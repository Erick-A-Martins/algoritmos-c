#include <stdio.h>

int main () {


    int vetor [5], maior, menor, soma, media;
    soma = 0;


    for (int i = 0; i < 5; i++){
        printf ("Inserir as notas: ");
        scanf ("%d", &vetor[i]);
        soma += vetor [i];

    }

    media = soma / 5;

    maior = vetor [0];
    menor = vetor [0];

    for (int i = 0; i < 5; i++){
        if (vetor[i] > maior){
            maior = vetor [i];
        }
        if (vetor [i] < menor){
            menor = vetor[i];  
        }
    }

    printf ("\nMedia: %d", media);
    printf ("\nMaior: %d", maior);
    printf ("\nMenor: %d", menor);

    return 0;
}