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

/*
#include <stdio.h>

float calcularIMC (){
    float inserirDados (peso, altura);
    float imc = peso / (altura * altura);
    return imc;
}

void mostrarSituacao (float imc){
    if (imc < 16){
        printf ("Abaixo do peso");
    } else if (imc >= 16 && imc < 25) {
        printf ("normal");
    } else {
        printf ("Acima do peso");
    }
}

float inserirDados (){
    float peso, altura;
    printf ("Insira peso");
    scanf ("%f", &peso);
    printf ("Insira a altura");
    scanf ("%f", &altura);
    return peso, altura;
}

int main (){
    inserirDados ();
    float imc = calcularIMC(peso, altura);
    mostrarSituacao (imc);

    return 0;
}
*/