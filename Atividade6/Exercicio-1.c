#include <stdio.h>

/* Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores: 

61 - Brasília 
71 - Salvador 
11 - São Paulo 
21 - Rio de Janeiro 
32 - Juiz de Fora 
19 - Campinas 
27 - Vitória 
31 - Belo Horizonte 

Qualquer outro - uma cidade no Brasil sem identificação */

int main () {

    int ddd;

    //recebimento do dado
    printf ("insira o DDD e saiba qual a cidade referente: ");
    scanf ("%d", &ddd);

    //possibilidades
    switch (ddd) {

        case 61:
            printf ("A cidade referente ao DDD (%d) inserido e - BRASILIA", ddd);
            break;

        case 71:
            printf ("A cidade referente ao DDD (%d) inserido e - SALVADOR", ddd);
            break;

        case 11:
            printf ("A cidade referente ao DDD (%d) inserido e - SAO PAULO", ddd);
            break;

        case 21:
            printf ("A cidade referente ao DDD (%d) inserido e - RIO DE JANEIRO", ddd);
            break;

        case 32:
            printf ("A cidade referente ao DDD (%d) inserido e - JUIZ DE FORA", ddd);
            break;

        case 19:
            printf ("A cidade referente ao DDD (%d) inserido e - CAMPINAS", ddd);
            break;

        case 27:
            printf ("A cidade referente ao DDD (%d) inserido e - VITORIA", ddd);
            break;

        case 31:
            printf ("A cidade referente ao DDD (%d) inserido e - BELO HORIZONTE", ddd);
            break;
        
        default:
            printf ("A cidade referente ao DDD (%d) inserido NAO POSSUI IDENTIFICACAO", ddd);

    }

    return 0;


}