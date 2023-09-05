#include <stdio.h>

int main () {
    //variaveis
    int peso;

    printf ("Quanto voce pesa? ");
    scanf ("%d", &peso);

    //condicao
    if (peso < 60) {
        printf ("Voce pesa %.1dkg e pesa menos que 60 quilos", peso);
    }
return 0;
}