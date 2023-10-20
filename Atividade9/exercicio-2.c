#include <stdio.h>

int main () {
    int vetor [6];

    for (int i = 0; i < 6; i++) {
        printf ("Digite os numeros do vetor: ");
        scanf ("%d", &vetor[i]);

    }
    printf ("\nOs numeros do seu vetor de V[0] a V[6] sao: ");
    for (int i = 0; i < 6; i++) {
        printf ("\n%d", vetor[i]);

    }

    return 0;
}