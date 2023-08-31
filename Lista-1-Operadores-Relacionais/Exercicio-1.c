#include <stdio.h>

int main (){

    int idade;

    printf ("Insira sua idade: ");
    scanf ("%d", &idade);

    if (idade >= 18){
        printf ("\nVoce e maior de idade!");

    }else{
        printf ("\nVoce nao e maior de idade");

    }

return 0;
}