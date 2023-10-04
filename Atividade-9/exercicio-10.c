#include <stdio.h>
#define TAM 15


int main () {

    float notas [TAM], soma, media;

    for (int i = 0; i < TAM; i++){
        printf ("Inserir as notas: ");
        scanf ("%f", &notas[i]);
        soma += notas [i];

    }

    media = soma / TAM;

    printf ("Media geral: %.2f", media);


    return 0;
}