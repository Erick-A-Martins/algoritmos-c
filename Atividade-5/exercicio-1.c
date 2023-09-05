#include <stdio.h>

/*
    Codifique um programa que lê um numero inteiro. A seguir o programa deve imprimir uma mensagem para o usuario dizendo se o numero digitado for par. Se o numero nao for par, o programa nao deve fazer nada.
*/

int main()
{

    // variaveis
    int num1;
    float par;

    printf("Insira seu numero para descobrir se e par ou nao: ");
    scanf("%d", &num1);

    //calculo
    par = num1 % 2;

    //condicao
    if (par == 0)
    {
        printf("Seu numero e: %d, e ele e par!", num1);
    }
    else
    {
        printf ("Seu numero: %d, nao e par!", num1);
    }

    return 0;
}