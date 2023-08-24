#include <stdio.h>

main () {
    //variaveis
    int ano, mes, dia, idadeDias;

    printf ("Quantos anos voce tem?: ");
    scanf ("%d", &ano);
    printf ("Digite o mes: ");
    scanf ("%d", &mes);
    printf ("Digite o dia: ");
    scanf ("%d", &dia);

    //calcular idade em dias

    idadeDias = (ano * 365) + (mes * 30) + (dia);

    printf ("dias vividos: %d", idadeDias);
    

}