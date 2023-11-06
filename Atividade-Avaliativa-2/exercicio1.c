#include <stdio.h>

//Prototipos
int solicitaDados ();
float validaQuantidade ();
float calculaSalario ();
void mostraFinal ();

int main (){
    int opcao;
    printf ("\n=======================================");
    printf ("\n     SISTEMA DE CALCULO DE PECAS");
    printf ("\n=======================================");
    printf ("\n");
    //repeticao para numero desconhecido de funcionarios
    do {
        mostraFinal();
        printf ("\nDeseja inserir mais dados?: [1]-SIM [0]-NAO ");
        scanf ("%d", &opcao);
    } while (opcao != 0);
        
    return 0;
}

//funcao para solicitacao da quantidade de pecas
int solicitaDados (){
    int quantidadePecas;
    printf ("\nInsira aqui a quantidade de pecas vendidas: ");
    scanf ("%d", &quantidadePecas);

    return quantidadePecas;
} 

//funcao que verifica e armazena o calculo das pecas
float validaQuantidade (){
    float numPecas = solicitaDados();

    if (numPecas <= 50){
        numPecas = 0;
        printf ("\n=======================================");
        printf ("\nVoce nao possui adicional de produtividade");
    } else if (numPecas > 50 && numPecas <= 80){
        numPecas = (numPecas * 0.50);
        printf ("\n=======================================");
        printf ("\nVoce possui um BOM adicional de produtividade!");
        printf ("\nValor total de pecas: R$%.2f", numPecas);
    } else {
        numPecas = (numPecas * 0.75);
        printf ("\n=======================================");
        printf ("\nVoce possui um OTIMO adicional de produtividade!");
        printf ("\nValor total de pecas: R$%.2f", numPecas);
    }

    return numPecas;
}

//funcao que calcula o salario com o valor referente a quantidade de pecas
float calculaSalario (){
    float salarioFinal = validaQuantidade ();
    salarioFinal += 600;

    return salarioFinal;
}

//funcao que printa na tela o salario base 600 mais o adicional de pecas
void mostraFinal (){
    float mostraDados = calculaSalario ();

    printf ("\nSalario bruto: R$600,00");
    if (mostraDados == 600) {
        printf ("\nSalario com adicional de pecas: R$600,00");
    } else {
        printf ("\nSalario com adicional de pecas: R$%.2f", mostraDados);
    }
    printf ("\n=======================================");
    printf ("\n");
}
