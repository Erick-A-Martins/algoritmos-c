#include <stdio.h>

/*
    Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, referentes a cada habitante:

    a) sexo (m e f);
    b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));
    c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));
    d) idade em anos.
    e) valor do salário.

    Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, serão aceitos somente as opções ‘m’ e ‘f’; para cor de olhos, apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’; para cor dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’; para idade, apenas valores entre 10 e 100 anos, inclusive estes e para o salário, não aceitar valores negativos.

    Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade igual a –1.

    Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos.
*/

int main () {

    char olhos, cabelos, sexo;
    int idade, totalHabitantes, totalEspecifico, continuar, totalM, totalF;
    float salario, porcentagem;

    totalHabitantes = 0;
    totalEspecifico = 0;
    totalM = 0;
    totalF = 0;

    do {

        totalHabitantes ++;

        //validacao do sexo
        do {
            fflush (stdin);
            printf ("\nDigite o sexo: M/F");
            scanf ("%c", &sexo);
            if (sexo == 'm') {
                totalM ++;
            } else {
                totalF ++;
            }
            if (sexo != 'm' && sexo != 'f') {
                printf ("\nOpcao invalida digite novamente!");
            }
        } while (sexo != 'm' && sexo != 'f');


        //validacao da cor dos olhos
        do {
            fflush (stdin);
            printf ("\nDigite a cor dos olhos: v - (VERDE) / p - (PRETO) / a - (AZUIS) / c - (CASTANHOS)");
            scanf ("%c", &olhos);
            if (olhos != 'a' && olhos != 'v' && olhos != 'p' && olhos != 'c') {
                printf ("\nOpcao invalida digite novamente!");
            }
        } while (olhos != 'a' && olhos != 'v' && olhos != 'p' && olhos != 'c');

        //validacao da cor do cabelo

        do {
            fflush (stdin);
            printf ("\nDigite a cor dos cabelos: l - (LOIRO) / c - (CASTANHO) / p - (PRETO) / r - (RUIVO)");
            scanf ("%c", &cabelos);
            if (cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r') {
                printf ("\nOpcao invalida digite novamente!");
            }
        } while (cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r');

        //validacao do salario 
        do {
            printf ("\nDigite o salario: ");
            scanf ("%f", &salario);
            if (salario < 0) {
                printf ("\nValor invalido!");
            }
        } while (salario < 0);

        //validacao da idade
        do {
            printf ("\nDigite a idade: ");
            scanf ("%d", &idade);
            if (idade < 10 || idade > 100) {
                printf ("\nValor invalido!");
            }
        } while (idade < 10 || idade > 100);


        //conta a pessoa com caracteristicas especificas

        if (sexo == 'f' && cabelos == 'c' && olhos == 'c' && (idade > 18 && idade < 35)) {
            totalEspecifico ++;

        }

        printf ("\nDeseja registrar um novo habitante? \n 1- SIM 0- NAO");
        scanf ("%d", &continuar);


    } while (continuar != 0);

    porcentagem = (float)totalEspecifico / totalHabitantes * 100;

    printf ("\nTotal de habitantes cadastrados: %d", totalHabitantes);
    printf ("\nTotal de homens cadastrados: %d", totalM);
    printf ("\nTotal de mulheres cadastrados: %d", totalF);
    printf ("\nTotal de pessoas com caracteristicas especificas: %d", totalEspecifico);
    printf ("\nTotal porcentagem de pessoas com caracteristicas especificas: %f", porcentagem);

    



    return 0;
}