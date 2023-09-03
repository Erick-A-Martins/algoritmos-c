#include <stdio.h>

main () {
    //variaveis
    float salarioAtual, porcentReajuste, novoSalario, reajusteFinal;

    printf ("Digite o salario atual: ");
    scanf ("%f", &salarioAtual);

    printf ("Digite a porcentage de reajuste: ");
    scanf ("%f", &porcentReajuste);

    //calculo
    reajusteFinal = porcentReajuste / 100;

    //calcular  o novo salario
    novoSalario = (salarioAtual * reajusteFinal) + salarioAtual;

    printf ("Novo salario: R$%.2f", novoSalario);

}