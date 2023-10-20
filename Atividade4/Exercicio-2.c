#include <stdio.h>

//Construa um algoritmo que dado quatro valores, A, B, C e D o algoritmo imprima o maior e o menor valor

int main () {

    int A, B, C, D;

    printf ("\nInsira o primeiro valor: ");
    scanf ("%d", &A);

    printf ("\nInsira o segundo valor: ");
    scanf ("%d", &B);

    printf ("\nInsira o terceiro valor: ");
    scanf ("%d", &C);

    printf ("\nInsira o quarto valor: ");
    scanf ("%d", &D);


    // condicoes

    if ((A > B) && (A > C) && (A > D)) {
        
        printf ("\nO maior numero e o primeiro = %d", A);
        
        if ((B < C) && (B < D)) {

            printf ("\nO menor numero e o segundo = %d", B); 

        }

        if ((C < B) && (C < D)) {
            printf ("\nO menor numero e o terceiro = %d", C);
            
        }

        if ((D < B) && (D < C)) {
            printf ("\nO menor numero e o quarto = %d", D);

        }

    } else if ((B > A) && (B > C) && (B > D)) {
        
        printf ("O maior numero e o segundo = %d", B);

        if ((A < C) && (A < D)) {

            printf ("\nO menor numero e o primeiro = %d", A); 

        }

        if ((C < A) && (C < D)) {
            printf ("\nO menor numero e o terceiro = %d", C);
            
        }

        if ((D < A) && (D < C)) {
            printf ("\nO menor numero e quarto = %d", D);

        }

    } else if ((C > A) && (C > B) && (C > D)) {
        
        printf ("O maior numero e o terceiro = %d", C);

        if ((A < B) && (A < D)) {

            printf ("\nO menor numero e o primeiro = %d", A); 

        }

        if ((B < A) && (B < D)) {
            printf ("\nO menor numero e o segundo = %d", B);
            
        }

        if ((D < A) && (D < B)) {
            printf ("\nO menor numero e quarto = %d", D);

        }

    } else if ((D > A) && (D > B) && (D > C)) {
        
        printf ("O maior numero e o quarto = %d", D);

        if ((A < B) && (A < C)) {
            printf ("\nO menor numero e o primeiro = %d", A); 

        }

        if ((B < A) && (B < C)) {
            printf ("\nO menor numero e o segundo = %d", B);
            
        }

        if ((C < A) && (C < B)) {
            printf ("\nO menor numero e terceiro = %d", C);

        }

    }

    return 0;
}