/*
1. Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).

a) Opção: a vista com 10% de desconto

b) Opção: em duas vezes (preço da etiqueta)

c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida. No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção). 
*/

#include <stdio.h>

float solicitacao() {
    float valorGasto;

    printf("--------------------------");
    printf("\nInsira o total do seu gasto: ");
    printf("\n--------------------------");
    scanf("\n%f", &valorGasto);

    return valorGasto;
}

int solicitacaoOpcao() {
    int valorOpcao;

    printf("\nAgora selecione qual opcao deseja: ");
    printf("\nOpcao 1: a vista com 10%% de desconto");
    printf("\nOpcao 2: em duas vezes (preco da etiqueta)");
    printf("\nOpcao 3: de 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)");
    scanf("\n%d", &valorOpcao);

    return valorOpcao;
}

float opcoes() {
    float armazenaGasto = solicitacao();
    int armazenaOpcao = solicitacaoOpcao();
    int armazenaAvista;

    switch (armazenaOpcao) {
        case 1:
            armazenaAvista = (armazenaGasto * 10)/100;
            armazenaGasto = armazenaGasto - armazenaAvista;
            printf ("\nO valor a vista com 10%% de desconto e igual a: ");
            break;
        case 2:
            armazenaGasto = armazenaGasto / 2;
            printf ("\nO valor em duas vezes fica igual a: ");
            break;
        case 3:
            if (armazenaGasto >= 100){
                int prestacoes;
                float juros;
                juros = (armazenaGasto * 3)/100;
                do {
                    printf ("Quantas prestacoes?: ");
                    scanf ("%d", &prestacoes);
                } while ((prestacoes < 3) && (prestacoes > 10));
                armazenaGasto = armazenaGasto/prestacoes;
                armazenaGasto = armazenaGasto + juros;

                printf ("\nO valor divido em vezes + 3%% de juros e de : ");
            }  
            break;
    }
    return armazenaGasto;
}

int main() {
    float resultado;

    resultado = opcoes();

    printf("\nResultado: R$%.2f", resultado);

    return 0;
}

//RESOLUÇÃO EM SALA DE AULA
/*
#include <stdio.h>

//prototipos
int opcoesPagamento();
void precoAvista(float totalCompra);
void precoDuasVezes (float totalCompra);
void precoMaisTresVezes (float totalCompra);


int main (){
    int opcao;
    float totalCompra;
    printf ("\nDigite o total da compra: ");
    scanf ("%f", &totalCompra);

    opcao = opcaoPagamento();

    switch(opcao){
        case1:
            precoAvista(totalCompra);
            break;
        case2:
            precoDuasVezes(totalCompra);
            break;
        case3:
            precoMaisTresVezes(totalCompra);
            break;
    }
}

int opcoesPagamento (){ ESSE MENU VAI TER NO PROJETO FINAL
    int opcaoEscolhida;
    do {
        printf ("\n1- A vista - 10%% de desconto");
        printf ("\n2- Duas vezes - preco etiqueta");
        printf ("\n3-  3 a 10 vezes com jutos de 3%%");

        printf ("\nDigite a opcao escolhida: ");
        scanf ("%d", &opcaoEscolhida);

        if (opcaoEscolhida < 1 || opcaoEscolhida > 3){
            printf ("Opcao inválida");
        }
    } while (opcaoEscolhida < 1 || opcaoEscolhida > 3);

    return opcaoEscolhida;
}


 void precoAvista(float totalCompra){
    float desconto = totalCompra * 0.10;
    float valorFinal = totalCompra - desconto;
    printf ("\nTotal do desconto: %.2f", deconto);
    printf ("\nTotal final da compra: %.2f", valorFinal);
 }

 void precoDuasVezes (float totalCompra){
    float valorParcela = totalCompra / 2;
    printf ("\nTotal da compra: %.2f", totalCompra);
    printf ("\nTotal final de cada parcela: %.2f", valorParcela);
 }

 void totalMaisTresVezes (float totalCompra){
    int parcelas;
    float jutos, valorFinal, totalParcelas;
    if (totalCompra < 100){
        printf ("Valor invalido para parcelar em mais de tres vezes");
        return;
    }
    do `{
        printf ("Digite a quantidade de parcelas: ");
        scanf("%d", &parcelas);
        if (parcelas < 3 || parcelas > 10){
            printf ("Quantidade de parcelas invalida");
        }

    } while (parcelas < 3 || parcelas > 10);

    //calcular jutos
    jutos = totalCompra * 0.03;
    valorFinal = totalCompra + juros;
    totalParcela = valorFinal/parcelas;

    printf ("total do jutos: %.2f", juros);
    printf ("total de cada parcela: %.2f", totalParcela);
    printf ("Total da compra com juros: %.2f", valorFinal);
 }
 */