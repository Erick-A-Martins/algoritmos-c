#include <stdio.h>


int main () {

    int vetor [5], num, contador = 0;

    //incluindo somente valores pares no vetor
    do{
        printf ("\nDigite um numero par: ");
        scanf ("%d", &num);
        if (num % 2 == 0) {
            vetor [contador] = num;
            contador++;

        } else {
            printf ("\nNumero invalido, digite novamente!");
        }
    } while (contador <= 5);

    //orcem crescente
    for (int i = 0; i < 5; i++) {
        printf ("\nOrdem crescente: %d", vetor[i]);
    }

    //ordem descrescente
    for (int i = 4; i >= 0; i--) {
        printf ("\nOrdem decrescente: %d", vetor[i]);
    }

    return 0;
}