#include <stdio.h>

float cilindro (float raio, float altura){
    float volume = 3.1414592 * (raio * raio) * altura;
    return volume;
}


int main (){
    float ValorRaio, ValorAltura, resultado;

    printf ("Insira o valor do raio do cilindro: ");
    scanf ("%f", &ValorRaio);

    printf ("Insira o valor da altura do cilindro: "); //criar funcoes para armazenas as entradas fora da mais
    scanf ("%f", &ValorAltura);

    resultado = cilindro (ValorRaio, ValorAltura);

    printf ("O volume do cilindro igual a: %.2f", resultado);
    return 0;
}
/*
#include <stdio.h>

double volumeC (double raio, double altura);
int main (){
    double raio = 2, altura = 5, resultado;
    resultado = volumeC(raio, altura);
    printf ("Volume do cilindro: %f", resultado);
    return 0;
}

double volumeC (double raio, double altura) {
    double PI = 3.1415, volume;
    volume = PI * (raio * raio) * altura;
    return volume;
}
*/