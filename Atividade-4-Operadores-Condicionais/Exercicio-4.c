#include <stdio.h>

/* Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descrescente (Do maior para o menor) */

int main () {

    //variaveis
    int A, B, C;

    printf ("\n Insira o primeiro valor: ");
    scanf ("%d", &A);
    printf ("\n Insira o primeiro valor: ");
    scanf ("%d", &B);
    printf ("\n Insira o primeiro valor: ");
    scanf ("%d", &C);

    // A = maior numero
    if ((A > B) && (A > C)) {
        
        printf ("\n O maior numero e: %d", A);
        // B = menor numero
        if (B < C)  {

            printf (" \n O numero do meio e: %d", C);
            printf (" \n O menor numero e: %d", B);
        // C = menor numero
        } else {

            printf (" \n O numero do meio e: %d", B);
            printf (" \n O menor numero e: %d", C);

        }

    // B = maior numero
    } else if ((B > A) && (B > C)) {

        printf ("\n O maior numero e: %d", B);
        
        // C = menor numero
        if (C < A) {

            printf (" \n O numero do meio e: %d", A);
            printf (" \n O menor numero e: %d", C);

        // A = menor numero    
        } else {

            printf (" \n O numero do meio e: %d", C);
            printf (" \n O menor numero e: %d", A);
        }

    // C = maior numero 
    } else if ((C > A) && (C > B)) {

        printf (" O maior numero e: %d", C);

        // A = menor numero
        if (A < B) {

            printf (" \n O numero do meio e: %d", B);
            printf (" \n O menor numero e: %d", A);

        // B = menor numero
        } else {
            
            printf (" \n O numero do meio e: %d", A);
            printf (" \n O menor numero e: %d", B);
        }

    } 


}