#include <stdio.h>
#include <math.h>

double volumeEsfera (double raio){
    double volume = 4 / (3 * 3.1414592) * (pow(raio, 3));
    return volume;
}

int main (){
    double valorRaio, resultado;

    printf ("Insira o valor do raio da sua esfera, para calcular o Volume dela: ");
    scanf ("%lf", &valorRaio);

    resultado = volumeEsfera(valorRaio);

    printf ("Volume: %.2lf", resultado);

    return 0;
}