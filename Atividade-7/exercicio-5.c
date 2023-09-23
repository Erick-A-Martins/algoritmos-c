    #include <stdio.h>

    
    //Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
    

int main () {
    int contador, soma = 0;

    for (contador = 2; contador <= 100; contador += 2) {
        soma += contador;
        printf ("\nPares: %d", contador);
    }

    printf ("\nSoma: %d", soma);

    

    return 0;
} 


