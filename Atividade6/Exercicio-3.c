#include <stdio.h>

/*
    Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir). 
    Enumere cada opção de prato, sobremesa e bebida.

    |    prato    | calorias |    sobremesa    | calorias |      bebibas      | calorias |
    | vegetariano |  180cal  |     abacaxi     |   75cal  |        cha        |   20cal  |
    |    peixe    |  230cal  |   sorvete diet  |  110cal  |  suco de laranja  |   70cal  |
    |    frango   |  250cal  |    mouse diet   |  170cal  |   suco de melao   |  100cal  | 
    |    carne    |  350cal  | mouse chocolate |  200cal  | refrigerante diet |   75cal  |

*/

int main () {

    //variaveis
    int prato, sobremesa, bebida, calPrato, calSobremesa, calBebida, calTotais;
    const char *nomePrato, *nomeSobremesa, *nomeBebida;

    //entrada de dados por escolha de prato
    printf ("\n                                    CARDAPIO                                          ");
    printf ("\n|    prato    | calorias |    sobremesa    | calorias |      bebibas      | calorias |");
    printf ("\n| vegetariano |  180cal  |     abacaxi     |   75cal  |        cha        |   20cal  |");
    printf ("\n|    peixe    |  230cal  |   sorvete diet  |  110cal  |  suco de laranja  |   70cal  |");
    printf ("\n|    frango   |  250cal  |    mouse diet   |  170cal  |   suco de melao   |  100cal  |");
    printf ("\n|    carne    |  350cal  | mouse chocolate |  200cal  | refrigerante diet |   75cal  |");

    printf ("\nDigite o numero do prato que deseja: ");
    scanf ("%d", &prato);

    switch (prato) {
        //possibilidades de pratos

        case 1:
            nomePrato = "vegetariano";
            calPrato = 180;
            break;
        case 2:
            nomePrato = "peixe";
            calPrato = 230;
            break;
        case 3:
            nomePrato = "frango";
            calPrato = 250;
            break;
        case 4:
            nomePrato = "carne";
            calPrato = 350;
            break;

        default:
            printf ("\nEste prato nao esta incluso no cardapio!");
    }

    //entrada de dados por escolha de sobremesa
    printf ("\nDigite o numero da sobremesa que deseja: ");
    scanf ("%d", &sobremesa);

    switch (sobremesa) {
        //possibilidades de sobremesas

        case 1:
            nomeSobremesa = "abacaxi";
            calSobremesa = 75;
            break;
        case 2:
            nomeSobremesa = "sorvete diet";
            calSobremesa = 110;
            break;
        case 3:
            nomeSobremesa = "mouse diet";
            calSobremesa = 170;
            break;
        case 4:
            nomeSobremesa = "mouse chocolate";
            calSobremesa = 200;
            break;

        default:
            printf ("\nEsta sobremesa nao esta inclusa no cardapio!");

    }

    //entrada de dados por escolha de bebida
    printf ("\nDigite o numero da bebida que deseja: ");
    scanf ("%d", &bebida);

    switch (bebida) {
        //possibilidades de bebidas

        case 1:
            nomeBebida = "cha";
            calBebida = 20;
            break;
        case 2:
            nomeBebida = "suco de laranja";
            calBebida = 70;
            break;
        case 3:
            nomeBebida = "suco de melão";
            calBebida = 100;
            break;
        case 4:
            nomeBebida = "refrigerante diet";
            calBebida = 75;
            break;

        default:
            printf ("\nEsta bebida nao esta inclusa no cardapio!");

    }

    calTotais = (calPrato + calSobremesa + calBebida);

    printf ("\nSua escolha de prato foi: %s, com %d calorias!", nomePrato, calPrato);
    printf ("\nSua escolha de sobremesa foi: %s, com %d calorias!", nomeSobremesa, calSobremesa);
    printf ("\nSua escolha de bebida foi: %s, com %d calorias!", nomeBebida, calSobremesa);
    printf ("\n\nNo total voce consumiu: %d calorias!", calTotais);

    return 0;
}