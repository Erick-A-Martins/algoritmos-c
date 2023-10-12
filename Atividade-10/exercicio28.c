#include <stdio.h>

/*
Leia 10 numeros inteiros e armazene em um vetor v. Crie dois vetores v1 e v2. Copie os valores impares de v para v1, e os valores pares de v para v2. Note que cada um dos vetores v1 e v2 tem no maximo 10 elementos, mas nem todos os elementos sao utilizados. No final escreva os elementos UTILIZADOS de v1 e v2
*/

int main() {
    int v[10], v1[10], v2[10];
    int contadorV1 = 0, contadorV2 = 0;

   
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 != 0) {
            v1[contadorV1] = v[i];
            contadorV1++;
        } else {
            v2[contadorV2] = v[i];
            contadorV2++;
        }
    }

   
    printf("Elementos UTILIZADOS de v1 (valores impares):\n");
    for (int i = 0; i < contadorV1; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

 
    printf("Elementos UTILIZADOS de v2 (valores pares):\n");
    for (int i = 0; i < contadorV2; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}
