#include <stdio.h>

/* Dados três valores A, B, C, construa um algoritmo, que imprime os valores de forma crescente (do menor para o maior) */


int main () {

    //variaveis
    int A, B, C;

    printf ("\n Insira o primeiro valor: ");
    scanf ("%d", &A);
    printf ("\n Insira o primeiro valor: ");
    scanf ("%d", &B);
    printf ("\n Insira o primeiro valor: ");
    scanf ("%d", &C);

    // A = menor numero
    if ((A < B) && (A < C)) {
        
        printf ("\n O menor numero e: %d", A);

        // B = maior  numero
        if (B > C)  {

            printf (" \n O numero do meio e: %d", C);
            printf (" \n O maior numero e: %d", B);

        // C = maior numero
        } else {

            printf (" \n O numero do meio e: %d", B);
            printf (" \n O maior numero e: %d", C);

        }

    // B = menor numero
    } else if ((B < A) && (B < C)) {

        printf ("\n O menor numero e: %d", B);
        
        // C = maior numero
        if (C > A) {

            printf (" \n O numero do meio e: %d", A);
            printf (" \n O maior numero e: %d", C);

        // A = maior numero   
        } else {

            printf (" \n O numero do meio e: %d", C);
            printf (" \n O maior numero e: %d", A);
        }

    // C = menor numero
    } else if ((C < A) && (C < B)) {

        printf (" O menor numero e: %d", C);

        // A = maior numero
        if (A > B) {

            printf (" \n O numero do meio e: %d", B);
            printf (" \n O maior numero e: %d", A);

        // B = maior numero
        } else {
            
            printf (" \n O numero do meio e: %d", A);
            printf (" \n O maior numero e: %d", B);
        }

    } 


}