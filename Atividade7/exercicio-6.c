#include <stdio.h>

/*
    Elabore um algoritmo que permita o usuario realizar a compra de frutas. Assim, apresente a lista de frutas disponiveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuario retornar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra.

    1 => abacaxi - 5,00 a unidade / 2 => maça - 1,00 a unidade / 3 => pera - 4,00 a unidade.
*/

int main () {

    //variavies
    int codigo, opcao, valorFrutas = 0, quantidade, valorQuantidade;

    do {
        printf ("\nFeira de Frutas");
        printf ("\n| Codigo | Fruta | Valor |");
        printf ("\n1 - Abacaxi  = R$ 5,00");
        printf ("\n2 - Maca  = R$ 1,00");
        printf ("\n3 - Pera = R$ 4,00");

        scanf ("%d", &codigo);

        switch (codigo) {
            case 1:
                valorFrutas += 5;
                printf ("Quantidade?");
                scanf ("%d", quantidade);
                valorQuantidade = valorFrutas * quantidade;
                break;

            case 2:
                valorFrutas += 1;
                printf ("Quantidade?");
                scanf ("%d", quantidade);
                valorQuantidade = valorFrutas * quantidade;
                break;

            case 3:
                valorFrutas += 4;
                printf ("Quantidade?");
                scanf ("%d", quantidade);
                valorQuantidade = valorFrutas * quantidade;
                break;
        }

        printf ("\nDeseja continuar comprando frutas? \n1 = SIM / 0 = NAO");
        scanf ("%d", &opcao);


    } while (opcao != 0); 

    printf ("Aqui esta o valor total de sua compra: R$ %d", valorFrutas);



    return 0;
}