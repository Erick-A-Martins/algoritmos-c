#include <stdio.h>

main (){
    //declaracao de variaveis
    float real, cotacaoDolar, valorDolar;

    printf ("\nInsira o valor em real para ser convertido: ");
    scanf ("%f", &real);

    printf ("\nDigite a cotacao do dolar: ");
    scanf ("%f", &cotacaoDolar);
    

    //operacao

    valorDolar = (float)real / cotacaoDolar;

    printf ("O valor em dolar e: %.2f", valorDolar);
    




}