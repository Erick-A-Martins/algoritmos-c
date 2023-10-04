#include <stdio.h>

int main (){
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = 0;

    // i = indice do vetor
    for (int i = 0; i < 6; i++) {
        //somando apenas alguns indices
        // a soma vai receber o vetor com o indice 0, 1 e 5, que correspondem aos valores = 1,0 e 7 do vetor
        if (i == 0 || i == 1 || i == 5) {
            soma += A[i];
        }
        if (i == 4){
            A[i] = 100;

        }
        printf ("\n%d", A[i]);
    }
    printf ("\nA soma entre A[0], A[1] e A[5] e: %d", soma);


return 0;
}