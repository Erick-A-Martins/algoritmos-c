#include <stdio.h>

/*

Ler dois conjuntos de numeros reais, armazendo-os em vetores e calcular o produto escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o produto escalar, sendo que o produto escalar e dado por: x1 * y1 + y2 * y2 + ... + xn * yn.

*/


int main() {
    double vetor1[5], vetor2[5], produto_escalar = 0.0;

    
    printf("Digite os 5 elementos do primeiro conjunto:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &vetor1[i]);
    }

    
    printf("Digite os 5 elementos do segundo conjunto:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &vetor2[i]);
    }

    //calculo do escalar
    for (int i = 0; i < 5; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }


    printf("Primeiro conjunto:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", vetor1[i]);
    }
    printf("\n");

    printf("Segundo conjunto:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", vetor2[i]);
    }
    printf("\n");

    printf("Produto escalar: %.2lf\n", produto_escalar);

    return 0;
}
