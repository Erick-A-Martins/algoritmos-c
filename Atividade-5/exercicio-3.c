#include <stdio.h>

/*
    Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou nao se aposentar. As condicoes para aposentadoria sao: 1- ter pelo menos 65 anos; 2- Ou ter trabalhado pelo menos 30 anos; 3- Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

int main () {
    //variaveis
    char nome [40];
    int idade, tempoServico;


    printf("_______________________________________________");
    printf ("\n      PROGRAMA DE APOSENTADORIA 2023\n");
    printf("_______________________________________________");
    printf ("\nInsira seu nome: ");
    fgets (nome, 40, stdin);
    printf ("\nInsira a sua idade: ");
    scanf ("%d", &idade);
    printf ("\nInforme quantos anos trabalhou: ");
    scanf ("%d", &tempoServico); 

    if ((idade >= 65) || ((idade >= 60) && (tempoServico >= 25)) || (tempoServico >= 30)) {
        printf("_______________________________________________");
        printf ("\nNome: %s", nome);
        printf ("\nIdade: %d", idade);
        printf ("\nTempo de servico: %d", tempoServico);
        printf ("\nSituacao de Aposentadoria: APROVADO");
        printf("\n_______________________________________________");

    } else {
        printf("_______________________________________________");
        printf ("\nNome: %s", nome);
        printf ("\nIdade: %d", idade);
        printf ("\nTempo de servico: %d", tempoServico);
        printf ("\nSituacao de Aposentadoria: REPROVADO");
        printf("\n_______________________________________________");

    }

    return 0;

}