#include <stdio.h>

/*
    Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.
*/

int main () {
    //variaveis
    int contador, multiplos;

    contador = 0;

    printf ("O cinco primeiros multiplos de 3 sao: ");

    //estrutura
    while (contador <= 4) {
        contador++;
        multiplos = (contador * 3); 
        printf ("%d\n", multiplos); 
    }

    return 0;
}