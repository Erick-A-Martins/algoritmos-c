#include <stdio.h>

/* Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente */

int main () {

    //variaveis
    int num, contador;

    contador = 0;

    //requisicao

    printf ("Insira seu numero inteiro positivo: ");
    scanf ("%d", &num);

    //estruturacao
    while (contador <= num) {
        printf ("\n%d", contador);
        contador++;
    }


return 0;
}