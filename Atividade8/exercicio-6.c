#include <stdio.h>

/*

    Desenvolver um algoritmo que solicita o usuário um determinado um mês/ano, determinar e exibir o número de dias do mês/ano digitado. Considerar a existência de anos bissextos: (ano % 4 = 0 e ano % 100 =/= 0) ou ano % 400 = 0. Ao final do programa deve ser impressa a seguinte mensagem: VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? Se a resposta for S o programa deverá retornar ao começo, caso contrário (qualquer outro caractere) deverá encerrar a sua execução

*/

int main() {

    //variaveis
    char resposta;
    int mes, ano, diasNoMes;


    //repeticao
    do {

        //solicitacao de dados
        printf("Digite o mês (1-12): ");
        scanf("%d", &mes);
        printf("Digite o ano (ex: 2023): ");
        scanf("%d", &ano);

        //verificacao de bissexto
        int bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

        switch (mes) {
            case 2:
                if (bissexto) {
                    diasNoMes = 29;
                } else {
                    diasNoMes = 28;
                }
                break;
            case 4: case 6: case 9: case 11:
                diasNoMes = 30;
                break;
            default:
                diasNoMes = 31;
                break;
        }


        printf("O mês %d/%d tem %d dias.\n", mes, ano, diasNoMes);

        //Persegunta se o usuario quer continuar
        printf("VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
