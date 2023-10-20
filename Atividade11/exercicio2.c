#include <stdio.h>

const char* mes(int num) {
    //vetor armazenando todos os meses do ano
    const char* meses[] = {
        "JANEIRO", "FEVEREIRO", "MARCO", "ABRIL", "MAIO", "JUNHO",
        "JULHO", "AGOSTO", "SETEMBRO", "OUTUBRO", "NOVEMBRO", "DEZEMBRO"
    };

    //verifica o valor do usuario e busca dentro do vetor o mes de acordo ao valor
    if (num >= 1 && num <= 12) {
        //busca o parametro com -1 porque o vetor começa a contar da posicao zero, e dezembro é considerado a 11 posicao dentro do vetor
        return meses[num - 1];
    } else {
        return "Mes invalido. Insira um número entre 1 e 12.";
    }
}

int main() {
    int num1;
    const char* resultado;

    printf("Digite um numero entre 1 e 12 para saber seu mes correspondente: ");
    scanf("%d", &num1);

    resultado = mes(num1);

    printf("\nSeu mes inserio e: %s", resultado);

    return 0;
}