#include <stdio.h>

main () {
    //declaracao de variaveis
    float numCarros, totalVendas, salarioFixo, valorPorCarro, salarioFinal, porcentagemVendas = 0.05;

    printf ("Digite quantos carros vendeu: ");
    scanf ("%f", &numCarros);

    printf ("Digite o total das vendas: ");
    scanf ("%f", &totalVendas);

    printf ("Digite o salario fixo: ");
    scanf ("%f", &salarioFixo);

    printf ("Digite a comissao por carro vendido: ");
    scanf ("%f", &valorPorCarro);

    salarioFinal = (numCarros * valorPorCarro) + (totalVendas * porcentagemVendas) + salarioFixo;

    printf ("O salario final e: R$%.2f", salarioFinal);

    
}