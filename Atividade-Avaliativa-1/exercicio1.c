#include <stdio.h>
#include <math.h>

/*
Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x). 
f(x) = 5x + 3 / raiz de x^2 - 16
*/


int main () {

    //variaveis
    double num, formula;

    //repeticao pra validar a equação com um numero acima de 4
    do {   
        printf ("\nInsira o valor de X maior que 4 para calcular f(x): ");
        scanf ("%lf", &num);
        if (num <= 4) {
            printf ("\nEsse valor nao e valido!");
        }
    } while (num <= 4);

    //formula e execucao da equacao
    formula = ((5 * num) + 3) / sqrt (num * num - 16);

    //resultado apresentado
    printf ("\nO valor de f(x) = (5x + 3 / raiz de x^2 - 16) e de: %.2lf", formula);

    return 0;
}