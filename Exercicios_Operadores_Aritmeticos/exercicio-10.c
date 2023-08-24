#include <stdio.h>

int main () {
    /* carro novo = custo de fabrica (+ custo de impostos aplicados no custo de fabrica ) + porcentagem do distribuidor */

    /* percentual do distribuidor = 28% e impostos = 45% */

    float custoCarro, custoDeFabrica, custoDeFabricaFinal, percentualDistribuidor, custoFinal;

    printf ("Insira o Custo de fabrica do carro: ");
    scanf ("%f", &custoDeFabrica);

    custoDeFabricaFinal = (custoDeFabrica * 45) / 100;
    percentualDistribuidor = (custoDeFabrica * 28) / 100;
    custoFinal = custoDeFabrica + custoDeFabricaFinal + percentualDistribuidor;

    printf ("\n--------------------------------------------------------------------");
    printf ("\nO custo de fabrica do seu carro igual a: R$ %.2f", custoDeFabrica);
    printf ("\nO custo final de fabrica com impostos e igual a: R$ %.2f", custoDeFabricaFinal);
    printf ("\nO percentual do distribuidor equivale a: R$ %.2f", percentualDistribuidor);
    printf ("\nE o custo final para o seu carro e de: R$ %.2f", custoFinal);
    printf ("\n--------------------------------------------------------------------");

return 0;
    
}