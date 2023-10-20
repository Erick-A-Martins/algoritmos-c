#include <stdio.h>
#include <math.h>

/*
    Calcule as raízes da equação de 2º grau. Lembrando que:

    X = -b +- √delta / 2a
    delta = b ao quadrado (**) - 4ac

    equacao 2º grau = ax**2 + bx + c == 0


    A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não e equação de segundo grau”. 

    • Se ∆ < 0, não existe real. Imprima a mensagem: Não existe raiz. 
    • Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz única.
    • Se ∆ ≥ 0, imprima as duas raízes reais. 
*/

int main () {
    // variaveis
    double a, b, c, delta, x1, x2;

    printf ("Insira o valor de A: ");
    scanf ("%lf", &a);

    if (a == 0) {
        printf ("Nao e uma equacao do segundo grau.");

    } else {
        printf ("Insira o valor de B: ");
        scanf ("%lg", &b);
        printf ("Insira o valor de C: ");
        scanf ("%lf", &c);

        delta = pow (b, 2) - (4 * a * c);

        if (delta < 0) {
            printf ("Nao existe raiz");

        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf ("\nRaiz unica: x = %.2lf\n", x1);

        } else {
            x1 = (-b + sqrt (delta)) / 2 * a;
            x2 = (-b - sqrt (delta)) / 2 * a;
            printf("Duas raizes reais: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
        }

    }

    return 0;
}