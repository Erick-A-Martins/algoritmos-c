#include <stdio.h>

/*
    Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovacao deve ser igual ou superior a 7.0 pontos.
*/

int main () 
{
    //variaveis
    float nota1, nota2, nota3, media;

    printf ("-------------------------------------------");
    printf ("\nInsira a nota da sua primeira prova: ");
    scanf ("%f", &nota1);
    printf ("-------------------------------------------");

    printf ("\nInsira a nota da sua segunda prova: ");
    scanf ("%f", &nota2);
    printf ("-------------------------------------------");

    printf ("\nInsira a nota da sua terceira prova: ");
    scanf ("%f", &nota3);
    printf ("-------------------------------------------");

    //calculo da media ponderada

    media = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2)) / 4;

    if (media >= 7)
    {

        printf ("\nMedia: %.1f pts", media);
        printf ("\nParabens voce esta APROVADO!");
        printf ("\n-------------------------------------------");
    } 
    else
    {
        printf ("\nMedia: %.1f pts", media);
        printf ("\nSuas notas nao atingiram a pontuacao necessaria.");
        printf ("\nVoce esta REPROVADO!");
        printf ("\n-------------------------------------------");
    }

    return 0;
}