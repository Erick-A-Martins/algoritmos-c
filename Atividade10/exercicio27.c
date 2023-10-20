#include <stdio.h>

/*
 "leia 10 numeros inteiros e armazene em um vetor. Em seguida escreva os elementos que sao primos e suas respectivas posicoes no vetor
*/


int main() {
    int vetor[10];
    int primos[10];
    int qtd_primos = 0;

   
    for (int i = 0; i < 10; i++) {
        printf("Digite o %do numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    for (int i = 0; i < 10; i++) {
        int num = vetor[i];
        int valorPrimo = 1; 

        if (num <= 1) {
            valorPrimo = 0; 
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    valorPrimo = 0;
                    break; 
                }
            }
        }

        if (valorPrimo) {
            primos[qtd_primos] = num;
            qtd_primos++;
            printf("Primo: %d (posicao: %d)\n", num, i);
        }
    }

    if (qtd_primos == 0) {
        printf("Nenhum numero primo encontrado.\n");
    }

}