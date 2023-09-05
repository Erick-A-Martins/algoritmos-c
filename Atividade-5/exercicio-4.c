#include <stdio.h>

/*
    Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:

    • o valor do salario atual do funcionário; 
    • o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

    Use as tabelas abaixo para calcular o salario reajustado deste funcionário e imprima o valor do salario final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento. 

    |Salario Atual | Reajuste(%) | Tempo de Servico | Bonus |
    |Até 500,00    |    25%      | Abaixo de 1 ano  | NDA   |
    |Até 1000,00   |    20%      |  De 1 a 3 anos   | 100   |
    |Até 1500,00   |    15%      |  De 4 a 6 anos   | 200   |
    |Até 2000,00   |    10%      |  De 7 a 10 anos  | 300   |
    |Acima de 2000,00 | NDA      |  Mais de 10 anos | 500   |
*/

int main () {
    //variaveis

    float salarioAtual, reajuste, novoSalario;
    int tempoServico;

    printf ("Insira seu salario atual: R$ ");
    scanf ("%f", &salarioAtual);
    printf ("Insira seu tempo de servico em anos: ");
    scanf ("%d", &tempoServico);

    if (salarioAtual <= 500) {

        reajuste = (salarioAtual * 25) / 100;
        novoSalario = salarioAtual + reajuste;
        printf ("\nSeu salario atual e: R$ %.2f,", salarioAtual);
        printf ("\nSeu ganho de reajuste e de: R$ %.2f", reajuste);
        printf ("\nSeu Bonus por tempo de servico e: R$ 0");
        printf ("\nSeu novo salario e de: R$ %.2f", novoSalario);

    } else if ((salarioAtual > 500) && (salarioAtual <= 1000) ) {

        reajuste = (salarioAtual * 20) / 100;
        novoSalario = salarioAtual + reajuste + 100;
        printf ("\nSeu salario atual e: R$ %.2f,", salarioAtual);
        printf ("\nSeu ganho de reajuste e de: R$ %.2f", reajuste);
        printf ("\nSeu Bonus por tempo de servico e: R$ 100,00");
        printf ("\nSeu novo salario e de: R$ %.2f", novoSalario);

    } else if ((salarioAtual > 1000) && (salarioAtual <= 1500)) {

        reajuste = (salarioAtual * 15) / 100;
        novoSalario = salarioAtual + reajuste + 200;
        printf ("\nSeu salario atual e: R$ %.2f,", salarioAtual);
        printf ("\nSeu ganho de reajuste e de: R$ %.2f", reajuste);
        printf ("\nSeu Bonus por tempo de servico e: R$ 200,00");
        printf ("\nSeu novo salario e de: R$ %.2f", novoSalario);

    } else if ((salarioAtual > 1500) && (salarioAtual <= 2000)) {

        reajuste = (salarioAtual * 10) / 100;
        novoSalario = salarioAtual + reajuste + 300;
        printf ("\nSeu salario atual e: R$ %.2f,", salarioAtual);
        printf ("\nSeu ganho de reajuste e de: R$ %.2f", reajuste);
        printf ("\nSeu Bonus por tempo de servico e: R$ 300,00");
        printf ("\nSeu novo salario e de: R$ %.2f", novoSalario);

    } else if (salarioAtual > 2000) {

        novoSalario = salarioAtual + 500;
        printf ("\nSeu salario atual e: R$ %.2f,", salarioAtual);
        printf ("\nSeu Bonus por tempo de servico e: R$ 500,00");
        printf ("\nSeu novo salario e de: R$ %.2f", novoSalario);

    } else {

        printf ("\nSeu salario atual e: R$ %.2f,", salarioAtual);
        printf ("\nSeu ganho de reajuste e de: R$ 0");
        printf ("\nSeu Bonus por tempo de servico e: R$ 0");
        printf ("\nVoce nao tem direito a aumento nenhum.");
        printf ("\nSeu salario final e de: R$ %.2f", salarioAtual);

    }
    
    return 0;
}