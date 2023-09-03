#include <stdio.h>

main () {
    //variaveis
    float custo, frete, despesa, valorVenda, valorBruto, lucro;

    printf ("\nDigite o custo do produto: ");
    scanf ("%f", &custo);

    printf ("\nDigite o valor do frete: ");
    scanf ("%f", &frete);

    printf ("\nDigite a despesa do produto: ");
    scanf ("%f", &despesa);

    //calcular o valor bruto do produto
    //valor bruto = custo + frete + despesa

    valorBruto = custo + frete + despesa;

    //informar o valor bruto para o usuario

    printf ("\nO valor bruto do produto e: R$ %.2f", valorBruto);
    printf ("\nPor quanto deseja vende-lo?: R$");
    scanf ("%f", &valorVenda);

    //calculo do lucro

    lucro = ((valorVenda - valorBruto) * 100) / valorBruto;

    //apresentacao do lucro

    printf ("Sua porcentagem de lucro e: %.2f%%", lucro);



}