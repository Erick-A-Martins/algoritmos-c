#include <stdio.h>

/*
    faca um programa que leia um vetor de 5 posicoes para numeros reais e, depois, um codigo inteiro. Se o codigo for zero, finalize o programa, se for 1, mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso o codigo for diferente de 1 e 2, escreva uma mensagem informando que o codigo e invalido
*/

int main() {
    float vetor[5];
    int codigo;


    for (int i = 0; i < 5; i++) {
        printf("Digite um numero real na posicao %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }


    printf("Digite o codigo (0 para sair, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%d", &codigo);

    while (codigo != 0) {
        if (codigo == 1) {
            printf("Vetor na ordem direta: ");
            for (int i = 0; i < 5; i++) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
        } else if (codigo == 2) {
            printf("Vetor na ordem inversa: ");
            for (int i = 4; i >= 0; i--) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
        } else {
            printf("Codigo invalido. Digite 0, 1 ou 2.\n");
        }

    
        printf("Digite o codigo (0 para sair, 1 para ordem direta, 2 para ordem inversa): ");
        scanf("%d", &codigo);
    }

    return 0;
}
