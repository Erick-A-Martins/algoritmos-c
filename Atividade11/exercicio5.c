#include <stdio.h>
#include <math.h>

double volumeEsfera (double raio){
    double volume = 4 / (3 * 3.1415) * (pow(raio, 3));
    return volume;
}

int main (){
    double valorRaio, resultado;

    printf ("Insira o valor do raio da sua esfera, para calcular o Volume dela: "); //criar funcao para essa requisicao para tirar da funcao main e apenas chama-la
    scanf ("%lf", &valorRaio);

    resultado = volumeEsfera(valorRaio);

    printf ("Volume: %.2lf", resultado);

    return 0;
}


/*
void calcularVolumeE (double r){
    double PI = 3.1415, volume;
    volume = (4 * PI * pow (r, 3))/3;
    printf ("O volume da esfera> %.2lf", volume);
}

int main (){
    double raio = 2;
    calcularVolumeE (raio);
    return 0;
}
*/