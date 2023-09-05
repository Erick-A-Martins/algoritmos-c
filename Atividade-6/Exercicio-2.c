#include <stdio.h>

/*
    O cardápio de uma lanchonete é o seguinte:
    100 - cachorro quente  / R$ 10,10
    101 - bauru simple  / R$ 8,30
    102 - bauru c/ ovo  / R$ 8,50
    103 - hamburguer  / R$ 12,50
    104 - cheeseburguer  / R$ 13,25

    Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item.
*/

int main () {

    int codPedido, quantidade;
    float valorPedido, valorFinal;

    printf ("Insira o codigo do seu pedido: ");
    scanf ("%d", &codPedido);
    printf ("Insira agora quantas quantidades deseja: ");
    scanf ("%d", &quantidade);

    switch (codPedido) {

        //possibilidades
        case 100:
        valorPedido = 10.10;
        valorFinal = (valorPedido * quantidade);
        printf ("\nVoce escolheu cachorro quente R$ %.2f", valorPedido);
        printf ("\nQuantidades pedidas: %d", quantidade);
        printf ("\nValor total da compra: R$ %.2f", valorFinal);
        break;

        case 101:
        valorPedido = 8.30;
        valorFinal = (valorPedido * quantidade);
        printf ("\nVoce escolheu bauru simple R$ %.2f", valorPedido);
        printf ("\nQuantidades pedidas: %d", quantidade);
        printf ("\nValor total da compra: R$ %.2f", valorFinal);
        break;

        case 102:
        valorPedido = 8.50;
        valorFinal = (valorPedido * quantidade);
        printf ("\nVoce escolheu bauru com ovo R$ %.2f", valorPedido);
        printf ("\nQuantidades pedidas: %d", quantidade);
        printf ("\nValor total da compra: R$ %.2f", valorFinal);
        break;

        case 103:
        valorPedido = 12.50;
        valorFinal = (valorPedido * quantidade);
        printf ("\nVoce escolheu hamburguer R$ %.2f", valorPedido);
        printf ("\nQuantidades pedidas: %d", quantidade);
        printf ("\nValor total da compra: R$ %.2f", valorFinal);
        break;

        case 104:
        valorPedido = 13.25;
        valorFinal = (valorPedido * quantidade);
        printf ("\nVoce escolheu cheeseburguer R$ %.2f", valorPedido);
        printf ("\nQuantidades pedidas: %d", quantidade);
        printf ("\nValor total da compra: R$ %.2f", valorFinal);
        break;

        default:
        printf ("Esse numero de pedido nao esta incluso em nosso cardapio!");

    }





    return 0;
}