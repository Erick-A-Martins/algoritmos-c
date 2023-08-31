/* Operadores Relacionais

    == (igual)
    > (maior que)
    > (menor que)
    >= (maior ou igual)
    <= (menor ou igual)
    != (diferente)


*/

/* Operadores Condicionais

    if ( x > y ){
        executa aqui se for verdadeiro
    }

*/

#include <stdio.h>

int main() {
    // declaracao de variaveis
    int x = 20, y = 10, resultado;

    /* condicao = se x for maior que y entao sera realizada a soma dos valores e a apresentada a som. Senao apresentar uma mensagem informando que nao podera ser realizada a soma. */

    if (x > y) {
        // executar este trecho
        int soma;
        soma = x + y;

        printf("Soma: %d\n", soma);
    }
    else {
        printf("A expressao e falsa por isso isto esta sendo impresso");
    }

    printf("Continua a execucao do algoritmo");
    
    return 0;
}