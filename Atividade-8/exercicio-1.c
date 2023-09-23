#include <stdio.h>

/*
    Um cinema possui capacidade de 100 lugares e está sempre com ocupação total. Certo dia, cada espectador respondeu a um questionário, no qual constava:

    - sua idade;
    - sua opinião em relação ao filme, segundo as seguintes notas:

    Nota        Significado
    A              Ótimo
    B              Bom
    C             Regular
    D             Ruim
    E              Péssimo

    Elabore um algoritmo que, lendo estes dados, calcule e imprima:

    a quantidade de respostas ótimo;
    a diferença percentual entre respostas bom e regular; 
    a média de idade das pessoas que responderam ruim; 
    a percentagem de respostas péssimo e a maior idade que utilizou esta opção;  
    a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.
*/

int main () {


    //variaveis
    int nota, idade, otimo, bom, regular, ruim, pessimo, quantidadeIdades, somaIdades, totalPessimo, maiorIdadePessimo, maiorIdadeOtimo, maiorIdadeRuim, diferencaIdade;
    float mediaIdades, diferencaPercentual, percentagemPessimo;
    char avaliacao;

    //contadores das avaliacoes iniciados
    otimo = 0;
    bom = 0;
    regular = 0;
    ruim = 0;
    pessimo = 0;
    quantidadeIdades = 0;
    somaIdades = 0;
    totalPessimo = 0;
    maiorIdadePessimo = 0;
    maiorIdadeOtimo = 0;
    maiorIdadeRuim = 0;
    

    printf ("\n---------------------------");
    printf ("\nQuestionario Avaliativo do cinema");
    printf ("\n---------------------------");
    


    do {

        printf ("\nInsira a sua idade: ");
        scanf ("%d", &idade);

        //fflush aqui pra limpar o buffer e o codigo funcionar sem rodar tudo direto
        fflush (stdin);
        printf ("\nAgora insira a sua nota de acordo com seu grau de satisfacao: ");
        printf ("\nNota        Significado");
        printf ("\nA             Otimo");
        printf ("\nB               Bom");
        printf ("\nC             Regular");
        printf ("\nD             Ruim");
        printf ("\nE             Pessimo");
        scanf ("%c", &avaliacao);

        //Recebimento de avaliacoes por opcao no switch
        switch (avaliacao) {
            case 'A':
                otimo++;
                break;
                if (idade > maiorIdadeOtimo) {
                    maiorIdadeOtimo = idade;
                }

            case 'B':
                bom++;
                break;

            case 'C':
                regular++;
                break;

            case 'D':
                ruim++;
                quantidadeIdades ++;
                somaIdades += idade;
                if (idade > maiorIdadeRuim) {
                    maiorIdadeRuim = idade;
                }
                break;

            case 'E':
                pessimo++;
                totalPessimo++;
                if (idade > maiorIdadePessimo) {
                    maiorIdadePessimo = idade;
                }
                break;

            default:
                printf ("Opcao de avaliacao invalida!");
                break;
        }

        printf ("Deseja avaliar o cinema denovo? ");
        printf ("1 - SIM");
        printf ("2 - NAO");
        scanf ("%d", &nota);
        if (nota == 1) {
            nota++;
        }
    } while (nota != 0); 

    //media de idades que votaram em ruim
    mediaIdades = somaIdades / quantidadeIdades;
    printf ("\nMedia de idade de pessoas que responderam RUIM: %.2f", mediaIdades);

    //Quantidade de respostas de otimo
    printf ("\nQuantidade de respostas de OTIMO: %d", otimo);

    //Diferenca percentual de resposta BOM e REGULAR
    if (bom > regular) {
        diferencaPercentual = ((bom - regular) / regular) * 100;
        printf ("\nA diferenca percentual entre respostas BOM e REGULAR e de: %.2f", diferencaPercentual);

    } else {
        diferencaPercentual = ((regular - bom) / bom) * 100;
        printf ("\nA diferenca percentual entre respostas BOM e REGULAR e de: %.2f %%", diferencaPercentual);
    }

    //Calculo da percentagem de respostas PESSIMO
    percentagemPessimo = (float)totalPessimo / (otimo + bom + regular + ruim + pessimo) * 100;
    printf("\nPercentagem de respostas PESSIMO: %.2f%%", percentagemPessimo);
    printf("\nMaior idade que escolheu PESSIMO: %d", maiorIdadePessimo);


    // Cálculo da diferença de idade entre a maior idade "ótimo" e a maior idade "ruim"
    diferencaIdade = maiorIdadeOtimo - maiorIdadeRuim;
    printf("\nDiferenca de idade entre OTIMO e RUIM: %d", diferencaIdade);

    


    return 0;
}