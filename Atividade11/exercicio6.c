#include <stdio.h>

float imc (float peso, float altura){
    float calculoIMC = peso / (altura * altura);
    return calculoIMC;
}

int main (){
    float valorPeso, valorAltura, resultado;

    printf ("---------------------------------\n");
    printf ("         CALCULO DE IMC          ");
    printf ("\n---------------------------------");
    printf ("\nInsira qual o seu peso: ");
    scanf ("%f", &valorPeso);
    printf ("\nInsira qual a sua altura: ");
    scanf ("%f", &valorAltura);

    resultado = imc (valorPeso, valorAltura);

    printf ("Seu Indice de Massa Corporal: %.2f", resultado);


    return 0;
}