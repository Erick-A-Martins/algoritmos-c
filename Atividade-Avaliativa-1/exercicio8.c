#include <stdio.h>

/*
    A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

    a) média do salário da população;

    b) média do número de filhos;

    c) maior salário;

    d) percentual de pessoas com salário até R$100,00.

    O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .
*/

int main() {
    float salario, totalSalario = 0, mediaSalario, maiorSalario = 0;
    int numFilhos, totalFilhos = 0, totalPessoas = 0, percentualAte100 = 0;

    do {
        printf("Digite o salario (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario >= 0) {
            totalSalario += salario;

            printf("Digite o número de filhos: ");
            scanf("%d", &numFilhos);

            totalFilhos += numFilhos;
            totalPessoas++;

            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            if (salario <= 100) {
                percentualAte100++;
            }
        }
    } while (salario >= 0);

    if (totalPessoas > 0) {
        mediaSalario = totalSalario / totalPessoas;
        printf("Media do salario da populacao: %.2f\n", mediaSalario);
        printf("Media do numero de filhos: %.2f\n", (float)totalFilhos / totalPessoas);
        printf("Maior salario: %.2f\n", maiorSalario);
        printf("Percentual de pessoas com salario ate R$100,00: %.2f%%\n", (float)percentualAte100 / totalPessoas * 100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
