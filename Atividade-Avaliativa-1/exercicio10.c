#include <stdio.h>

/*
    Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:  

    - código da cidade

    - estado (RS, SC, PR, SP, RJ, ...)

    - número de veículos de passeio (em 1992)

    - número de acidentes de trânsito com vítimas (em 1992)

    Deseja-se saber:

    a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem

    b) qual a média de veículos nas cidades brasileiras

    c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.
*/

int main (){

    int codigos[200], i, qtdVeiculo[200], qtdAcidentes[200], maior, menor, pMaior, pMenor;
    char estados[200];


    maior = 0;
    menor = 0;
    pMaior = 0;
    pMenor = 0;

    for (i = 0; i < 200; i++){
        printf ("\nQual o codigo da cidade? ");
        scanf ("%d", &codigos[i]);
        fflush (stdin);
        printf ("\nQual estado? ");
        scanf (" %c", &estados[i]);
        fflush (stdin);
        printf ("\nQual a quantidade de veiculos de passeio? (em 1992) ");
        scanf ("%d", &qtdVeiculo[i]);
        fflush (stdin);
        printf ("\nQual o numero de acidentes de transito com vitimas (em 1992) ");
        scanf ("%d", &qtdAcidentes[i]);
        fflush (stdin);

    
    }

    maior = qtdAcidentes[0];
    menor = qtdAcidentes[0];


    for (int i = 0; i < 200; i++){
            if (qtdAcidentes[i] > maior){
                maior = qtdAcidentes[i];
                pMaior = i;
            }
            if (qtdAcidentes[i] < menor){
                menor = qtdAcidentes[i];
                pMenor = i; 
            }
        }


    printf ("\nO maior indice de acidentes de transito e de: %d", maior);
    printf ("\nA cidade a qual o pertence e a %d cidade inserida com o codigo: %d", pMaior, codigos[pMaior]);
    printf ("\nO menor indice de acidentes de transito e de: %d", menor);
    printf ("\nA cidade a qual o pertence e a %d cidade inserida com o codigo: %d", pMenor, codigos[pMenor]);



    return 0;
}


