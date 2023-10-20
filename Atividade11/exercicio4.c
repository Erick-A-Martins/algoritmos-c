#include <stdio.h>

float cilindro (float raio, float altura){
    float volume = 3.1414592 * (raio * raio) * altura;
    return volume;
}


int main (){
    float ValorRaio, ValorAltura, resultado;

    printf ("Insira o valor do raio do cilindro: ");
    scanf ("%f", &ValorRaio);

    printf ("Insira o valor da altura do cilindro: ");
    scanf ("%f", &ValorAltura);

    resultado = cilindro (ValorRaio, ValorAltura);

    printf ("O volume do cilindro igual a: %.2f", resultado);



    return 0;
}