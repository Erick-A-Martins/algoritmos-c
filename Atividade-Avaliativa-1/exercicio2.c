#include <stdio.h>

/*
Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.
*/


int main () {

    //variaveis declaradas e iniciadas com seus valores para verificacao
    int anos;
    float chico, ze;
    anos = 0;
    chico = 1.50;
    ze = 1.10;

    //verificacao ate a condicao ser validada
    while (chico > ze){
        ze += 0.03;
        chico += 0.02;
        anos++;
    }

    //apresentacao de dados
    printf ("\nSerao necessarios %d anos para que Ze fique maior que Chico.", anos);
    printf ("\nZe tera: %.2fm de altura.", ze);
    printf ("\nChico tera: %.2fm de altura.", chico);

    return 0;
}