#include <stdio.h>

/* Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). */

int main () {

    //variaveis
    int num, impares;

    //requisicao

    printf ("Insira seu numero inteiro: ");
    scanf ("%d", &num);

    printf("Os primeiros %d numeros naturais impares sao:\n", num);
    
    //estruturacao

    for (impares = 1; num > 0; impares += 2, num--) {
        printf ("%d", impares);
    }


return 0;
}