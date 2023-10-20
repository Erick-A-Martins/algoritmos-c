#include <stdio.h>

main (){

    //declaracao de variaveis
    float larg, comp, area;

    //entrada de dados
    printf ("\nInsira a medida da largura da sala: ");
    scanf ("%f", &larg);
    printf ("\nInsira a medida do comprimento da sala: ");
    scanf ("%f", &comp);

    //operacao
    area = (float)larg * comp;

    //saida de dados

    printf ("\nA area da sala e: %.1fm2", area);



}