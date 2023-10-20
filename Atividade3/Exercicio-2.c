#include <stdio.h>

int main () {

    int salario, salarioMinimo = 1000;

    printf ("Insira seu salario: ");
    scanf ("%d", &salario);

    if (salario > salarioMinimo){
        printf ("Parabens seu salario e maior que o minimo");
        
    } else {
        printf ("Voce nao ganha mais que o minimo");
    }

return 0;
}