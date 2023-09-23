#include <stdio.h>


/*
    Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. 
*/


#include <stdio.h>

int main() {

    //variaveis
    int num;
    int primeiro = 0;
    int segundo = 1;
    int resultado;


    printf("Digite um valor para encontrar o enésimo termo da sequencia de Fibonacci: ");
    scanf("%d", &num);

    
    //condicao
    if (num == 0) {
        resultado = primeiro;
    } else if (num == 1) {
        resultado = segundo;
    } else {
        for (int i = 2; i <= num; i++) {
            resultado = primeiro + segundo;
            primeiro = segundo;
            segundo = resultado;
        }
    }

    printf("O %d termo da sequencia de Fibonacci e: %d\n", num, resultado);

    return 0;
}
