#include <stdio.h>


float conversao (float n1){
    float celsius = (n1 - 32.0) * (5.0 / 9.0);
    return celsius;
}

int main (){
    float temperatura, resultado;

    printf ("Insira sua temperatura em graus Fahrenheit: ");
    scanf ("%f", &temperatura);

    //armazenando o resultado em uma variavel para depois mostrar na tela
    resultado = conversao(temperatura);

    printf ("%.2f", resultado);

    return 0;

}