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
        return "Mes invalido. Insira um numero entre 1 e 12.";
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

/*
#include <stdio.h>
#include <string.h>

//muita funcao coloca os prototipos das funcoes antes do main pra ele n ficar muito embaixo e as funcoes apos ele

//prototipo da funcao
//void = funcao que nao retorna/entrega o valor

void mostraMes (int valor);
int main (){
    int opcao = 4;
    mostraMes (opcao);
    return 0;
}

void mostraMes (int valor){
    int qtdDias;
    char nomeMes[20];

    switch (valor){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            qtdDias = 31;
            if (valor == 1){
                strcpy(nomeMes, "Janeiro");
            } else if (valor == 3){
                strcpy(nomeMes, "Marco")
            } else if (valor == 5){
                strcpy(nomeMes, "Maio")
            } else if (valor == 7){
                strcpy(nomeMes, "Julho")
            } else if (valor == 8){
                strcpy(nomeMes, "Agosto")
            } else if (valor == 10){
                strcpy(nomeMes, "Outubro")
            } else {
                strcpy(nomeMes, "Dezembro")
            } 
            break;
        case 4: case 6: case 9: case 11: 
            if (valor == 4){
                strcpy(nomeMes, "Abril");
            } else if (valor == 6){
                strcpy(nomeMes, "Junho")
            } else if (valor == 9){
                strcpy(nomeMes, "Setembro")
            } else {
                strcpy(nomeMes, "Novembro")
            } 
            break;
        case 2:
            qtdDias = 28;
            strcpy (nomeMes, "Fevereiro");
            break;
        default:
            printf ("Opcao invalida para mes");
    }
    printf ("Quantidade de dias: %d e mes: %s", qtdDias, nomeMes);
}
*/