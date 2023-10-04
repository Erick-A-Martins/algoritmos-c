#include <stdio.h>

int main () {

    int vetor [10], pares;
    pares = 0;

    for (int i = 0; i < 10; i++) {
        printf ("Digite os numeros: ");
        scanf ("%d", &vetor[1]);

        if (vetor [i] % 2 == 0){
            pares++;
        }
    }
    printf ("A quanrtidade de pares existente no vetor e: %d", pares);

    return 0; 
}