#include <stdio.h>

/*Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*4 ) / 10

Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.
 */

int main (){
    int j, i;
    float notas[3], media, mediaGeral;
    media = 0;

    for (j = 0; j < 3; j++){ 
        
        //recebimento de notas para cada aluno
        for (i = 0; i < 30; i++){
            printf("\nInsira a nota %d do aluno %d: ", i + 1, j + 1);
            scanf ("%f", &notas[i]);
        }

        //media ponderada para cada aluno
        media = ((notas[0] * 2) + (notas[1] * 4) + (notas[2] * 4))/10;

        //media de cada aluno printada aprovado ou reprovado
        if (media >= 7){
            printf ("\nParabens voce esta APROVADO!");
            printf("\nMedia do aluno %d: %.1f\n", j + 1, media);

        } else {
            printf ("\nEstude mais voce esta REPROVADO!");
            printf("\nMedia do aluno %d: %.1f\n", j + 1, media);
        }
            
        mediaGeral += media;
    }

    mediaGeral = mediaGeral / 30;

    printf ("\nA media geral da turma e de: %.1f", mediaGeral);

    return 0;
}