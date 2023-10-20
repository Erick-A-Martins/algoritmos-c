#include <stdio.h>
#include <math.h>

    /* Escreva um algoritmo que leia um numero e imprima a raiz quadrada do numero caso ele seja positivo ou igual a zero e o quadrado do numero caso ele seja negativo */

int main () {

    //variaveis
    float raizQuadrada, num1, quadrado;

    printf ("Insira um numero para o calculo: ");
    scanf ("%f", &num1);

    //condicoes

    if (num1 >= 0) {
        //Calculo da raiz quadrada

        raizQuadrada = (sqrt(num1));

        printf ("A raiz quadrada de %.2f = %.2f", num1, raizQuadrada);


    }  else if (num1 < 0 ) { 
        //Calculo do quadrado do numero

        quadrado = num1 * num1;
        //ou { quadrado = pow(numero, 2); }
        printf ("O quadrado do numero e %.2f = %.2f", num1, quadrado);


    } 
    


    return 0;
}