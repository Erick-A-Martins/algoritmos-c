#include <stdio.h>

int main () {

    int vetor [8], x, y, soma = 0;

    for (int i = 0; i < 8; i++){
        printf ("\nDigite os numeros: ");
        scanf ("%d", &vetor[i]);
    }

    do{
        printf ("\nDigite os valores para x e y (entre 0 e 7): ");
        scanf ("%d %d", &x, &y);
        if ((x > 0 && x < 8) && (y >= 0 && y < 8)) {
            for (int i = 0; i < 8; i++) {
                if (i == x) {
                    soma += vetor [i];
                }
                if (y == i) {
                    soma += vetor [i];
                }
            }
        } else {
            printf ("\nValores de X ou Y invalidos!");
        }
    } while ((x < 0 || x > 7) && (y < 0 || y > 7));

    printf ("\nSoma dos valores das posicoes X%d = %d e Y%d = %d e igual a: %d", x, vetor[x], y, vetor[y], soma);

    return 0;
}