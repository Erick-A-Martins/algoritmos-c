#include <stdio.h>

/*
    Faça um algoritmo em para ler o nome, o sexo ( M ou m para masculino e F ou f para feminino), a altura e o peso de um grupo de 10 pessoas. O programa de deve calcular e exibir: 

    o número de homens;
    o número de mulheres; 
    a altura média dos homens;
    a altura média das mulheres; a altura média do grupo;
    o peso médio dos homens;
    o peso médio das mulheres;
    e o peso médio do grupo
*/


int main () {

    //variaveis
    int contador, sexoM, sexoF, numAlturaF, numAlturaM, peso, pesoF, pesoM, numPesoF, numPesoM, mediaPesoF, mediaPesoM, mediaPesoG;
    float altura, alturaF, alturaM, mediaAlturaF, mediaAlturaM, mediaAlturaG;
    char nome, sexo;

    sexoM = 0;
    sexoF = 0;
    numAlturaF = 0;
    numAlturaM = 0;
    alturaF = 0;
    alturaM = 0;
    pesoF = 0;
    pesoM = 0;
    numPesoF = 0;
    numPesoM = 0;


    //estrutura

    fflush (stdin);
    for (contador = 0; contador < 5 ; contador ++){
        printf ("\nInsira seu nome: -> ");
        scanf (" %c", &nome);

        //recebendo sexo

        fflush (stdin);
        do {   
            printf("\nInsira seu sexo: (M/F)");
            scanf(" %c", &sexo);
            if (sexo == 'F' || sexo == 'f') {
                sexoF++;
            } else if (sexo == 'M' || sexo == 'm') {
                sexoM++;
            }
        } while (!(sexo == 'F' || sexo == 'f' || sexo == 'M' || sexo == 'm'));


        //recebendo altura

        fflush (stdin);
        do {
            if ((sexo == 'F') || (sexo == 'f')) {
                printf ("\nInsira sua altura: ");
                scanf ("%f", &altura);
                alturaF += altura;
                numAlturaF++;
    
            } else {
                printf ("\nInsira sua altura: ");
                scanf ("%f", &altura);
                alturaM += altura; 
                numAlturaM++;

            }
        } while (altura < 0);


        //recebendo peso

        fflush (stdin);
        do {
            if ((sexo == 'F') || (sexo == 'f')) {
                printf ("\nInsira seu peso: ");
                scanf ("%d", &peso);
                pesoF += peso;
                numPesoF++;
    
            } else {
                printf ("\nInsira seu peso: ");
                scanf ("%d", &peso);
                pesoM += peso; 
                numPesoM++;
            }

        } while (peso < 0);

        while (getchar() != '\n');

    }

    //media da altura das mulheres
        mediaAlturaF = alturaF / numAlturaF;

        //media da altura dos homens
        mediaAlturaM = alturaM / numAlturaM;

        //media da altura do grupo
        mediaAlturaG = (alturaF + alturaM) / (numAlturaF + numAlturaM);

        //media peso das mulheres
        mediaPesoF = pesoF / numPesoF;

        //media peso dos homens
        mediaPesoM = pesoM / numPesoM;

        //media peso do grupo
        mediaPesoG = (pesoF + pesoM) / (numPesoF + numPesoM);


        printf ("\nA quantidade de homens e de: %d", sexoM);
        printf ("\nA quantidade de mulheres e de: %d", sexoF);
        printf ("\nA altura media dos homens e de: %.2f", mediaAlturaM);
        printf ("\nA altura media das mulheres e de: %.2f", mediaAlturaF);
        printf ("\nA altura media do grupo e de: %.2f", mediaAlturaG);
        printf ("\nO peso medio dos homens e de: %d KG", mediaPesoM);
        printf ("\nO peso medio das mulheres e de: %d KG", mediaPesoF);
        printf ("\nO peso medio do grupo e de: %d KG", mediaPesoG);


    return 0;
}

