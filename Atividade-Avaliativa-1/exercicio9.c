#include <stdio.h>

/*
    Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

    - 1,2,3,4 = voto para os respectivos candidatos;

    - 5 = voto nulo;

    - 6 = voto em branco;

    Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:

    - total de votos para cada candidato;

    - total de votos nulos;

    - total de votos em branco;

    Como finalizador do conjunto de votos, tem-se o valor 0.
*/

int main() {
    int codigo, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, votosNulos = 0, votosBrancos = 0;

    while (codigo != 0) {
        printf("Digite o codigo do voto (de [1] a [6] e [0] para encerrar): ");
        scanf("%d", &codigo);

        switch (codigo) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosBrancos++;
                break;
            default:
                printf("Codigo invalido e nao.\n");
        }
    }

    printf("\nTotal de votos para o Candidato 1: %d", candidato1);
    printf("\nTotal de votos para o Candidato 2: %d", candidato2);
    printf("\nTotal de votos para o Candidato 3: %d", candidato3);
    printf("\nTotal de votos para o Candidato 4: %d", candidato4);
    printf("\nTotal de votos nulos: %d", votosNulos);
    printf("\nTotal de votos em branco: %d", votosBrancos);

    return 0;
}
