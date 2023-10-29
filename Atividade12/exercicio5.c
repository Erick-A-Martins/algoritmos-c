/*
Faça uma função que recebe a data de nascimento de uma pessoa em apresente sua idade expressa em dias, meses e anos.
*/

#include <stdio.h>

int idadeEmDias ();

int main (){
    int resultado;
    resultado = idadeEmDias();
    return 0;
}

int idadeEmDias (){
    int ano, mes, dia, anos, anosEmDias, meses, mesesEmDias, dias, totalFinal;
    printf ("\nEm que ANO nasceu?: ");
    scanf ("%d", &ano);
    printf ("\nEm que MES nasceu?: ");
    scanf ("%d", &mes);
    printf ("\nEm que DIA nasceu?: ");
    scanf ("%d", &dia);

    //Calculo dos anos
    anos = 2023 - ano;
    anosEmDias = anos * 365;

    //Calculo dos meses
    meses = 12 - mes; 
    mesesEmDias = meses * 30;

    //Calculo dos dias
    dias = 31 - dia;

    //CalculoTotal
    totalFinal = anosEmDias + mesesEmDias + dias;

    printf ("\nSera usado como base o ultimo dia do ano atual de 2023");
    printf ("\nDATA USADA: 2023/12/31");
    printf ("\n-------------------------------------------------------");
    printf ("\nVoce ja viveu: ");
    printf ("\nanos: %d", anos);
    printf ("\nmeses: %d", meses);
    printf ("\ndias: %d", dias);
    printf ("\nTotal em dias vividos: %d", totalFinal);
    printf ("\n-------------------------------------------------------");


    return totalFinal;
}
