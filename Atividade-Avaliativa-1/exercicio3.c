#include <stdio.h>

/*
    Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.
*/

int main () {

    //variaveis
    int A, B, C;

    //recebimento de dados
    printf ("\nInsira o valore de A: ");
    scanf("%d", &A);
    printf ("\nInsira o valore de B: ");
    scanf("%d", &B);
    printf ("\nInsira o valore de C: ");
    scanf("%d", &C);

    //verificacao dos lados para ser considerado triangulo
    if ((A + B > C) && (A + C > B) && (B + C > A)){
        printf ("\nSeus valores inseridos, formam um triangulo!");
        //validacao de triangulo escanelo
        if ((A != B) && (B != C) && (C != A)) {
            printf ("\nO triangulo e ESCALENO!");
        //validacao de triangulo equilatero
        } else if ((A == B) && (B == C) && (C == A)) {
            printf ("\nO triangulo e EQUILATERO!");
        //validacao de triangulo isosceles
        } else if (((A == B) != C) || ((B == C) != A) || ((C == A) != B)) {
            printf ("\nO triangulo e ISOSCELES!");
        }
    }


/*
Escaleno: Um triângulo é escaleno se todos os seus lados tiverem comprimentos diferentes.

Equilátero: Um triângulo é equilátero se todos os seus lados tiverem o mesmo comprimento.

Isósceles: Um triângulo é isósceles se tiver exatamente dois lados com o mesmo comprimento.*/

    return 0;
}