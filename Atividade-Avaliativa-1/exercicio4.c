#include <stdio.h>

/*
Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)
*/

int main () {
    //variaveis
    int A, B, C;
    double angulo_bc, angulo_ac, angulo_ab;

    //recebimento de dados
    printf ("\nInsira o valore de A: ");
    scanf("%d", &A);
    printf ("\nInsira o valore de B: ");
    scanf("%d", &B);
    printf ("\nInsira o valore de C: ");
    scanf("%d", &C);

    //verificacao dos lados para ser considerado triangulo
    if ((A + B > C) && (A + C > B) && (B + C > A)){
        printf ("\nSeus valores inseridos, formam um triangulo!");
        
            //Ângulo entre os lados a e b (em graus) 
            angulo_ab = acos((A^2 + B^2 - C^2) / (2 * A * B));
            angulo_ac = acos((A^2 + C^2 - B^2) / (2 * A * C));
            angulo_bc = acos((B^2 + C^2 - A^2) / (2 * B * C));

            angulo_ab = angulo_ab * 57;
        
    }

    //pesquisar melhor depois sobre as formular e conversoes de angulos e RADIANOS



    return 0;
}