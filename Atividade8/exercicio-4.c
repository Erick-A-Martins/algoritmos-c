#include <stdio.h>

// Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

/* fazer estrutura de repeticao para contar de 1 ate o numero inserido, e a cada numero da contagem ele verificar fazendo a divisao pelo numero inserido e descobrir qual é divisivel por ele. */


int main (){
    //variaveis
    int num, contador, divisores;


    contador = 0;


    //recebimento de dado
    printf ("---Descubra os Divisores de um numero!---");
    printf ("\nInsira um numero positivo: -> ");
    scanf ("%d", &num);


    //repeticao
    while (contador <= num) {
        contador++;
        divisores = num % contador;

        //condição para verificar os multiplos
        if (divisores == 0){
        printf ("\n%d e divisor do seu numero!", contador);
    }

    }

    return 0;
}