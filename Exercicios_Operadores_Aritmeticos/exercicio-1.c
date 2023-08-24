#include <stdio.h>

main (){

    //declaracao das variaveis
    int num1, num2, soma, mult;
    float sub, div;

    //entrada de dados
    printf ("\n Insira o primeiro numero: ");
    scanf ("%d", &num1);
    printf ("\n Insira o segundo numero: ");
    scanf ("%d", &num2);

    //operações
    soma = num1 + num2;
    mult = num1 * num2;
    sub = (float)num1 - num2;
    div = (float)num1 / num2;

    printf ("\nO resultado da soma e: %d", soma);
    printf ("\nO resultado da subtracao e: %d", sub);
    printf ("\nO resultaod da multiplicacao e: %.2f", mult);
    printf ("\nO resultado da divisao e: %.2f", div);


    


}