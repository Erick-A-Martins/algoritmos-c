#include <stdio.h>

int main (){
    //declaracao de variaveis
    float altura;

    printf ("Insira sua altura em metros: ");
    scanf ("%f", &altura);

    if (altura > 1.8){
        printf ("Parabens voce e maior que 1.8m e sua altura e %.1f", altura);    

    } else {
        printf ("Voce nao e tao alto assim amigao");
    }

return 0;
}