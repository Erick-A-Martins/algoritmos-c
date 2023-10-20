#include <stdio.h>

/* Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. */

int main () {

    //variaveis
    int num;

    //requisicao

    printf ("Insira seu numero inteiro positivo: ");
    scanf ("%d", &num);

    //estruturacao
    while (num >= 0) {
        printf ("\n%d", num);
        num--;
    }


return 0;
}