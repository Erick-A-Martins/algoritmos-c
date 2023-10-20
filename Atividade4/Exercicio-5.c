#include <stdio.h>

/* 
    Construir um algoritmo que leia um numero e imprima se ele é igual a 5, a 200, a 400, se esta no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores.
*/

int main () {

    //variaveis
    int num1;
    
    printf ("Insira o valor: ");
    scanf ("%d", &num1);

    //condicoes

    // igual a 5
    if (num1 == 5) {
        printf("Seu numero e igual: 5");

    // igual a 200
    } else if (num1 == 200) {
        printf("Seu numero e igual a: 200");

    // igual a 400
    } else if (num1 == 400) {
        printf("Seu numero e igual a: 400");

    // entre 500 e 1000
    } else if ((num1 >= 500) && (num1 <= 1000)) {
        printf("Seu numero esta entre o intervalo de 500 e 100: %d", num1);

    // sem parametro
    } else { 
        printf("Esta fora dos parametros!");

    }
    

    return 0;
}