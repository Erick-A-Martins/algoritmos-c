#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// definindo struct
typedef struct Produto {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
    struct Produto *prox;
} Produto;

// prototipos das funções
Produto *inicializarEstoque();
Produto *adicionarProduto(Produto *estoque);
void listarProdutos(Produto *estoque);
void pesquisarProduto(Produto *estoque, int codigo);
Produto *removerProduto(Produto *estoque, int codigo);
void liberarEstoque(Produto *estoque);

int main() {
    Produto *estoque = inicializarEstoque();
    int opcao;

    printf ("\n----------------------------------");
    printf ("\n       CONTROLE DE ESTOQUE");
    printf ("\n----------------------------------");

    do {
        printf("\n1 - Adicionar Produto");
        printf("\n2 - Listar Produtos");
        printf("\n3 - Pesquisar Produto");
        printf("\n4 - Remover Produto");
        printf("\n0 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
            case 1:
                estoque = adicionarProduto(estoque);
                break;
            case 2:
                listarProdutos(estoque);
                break;
            case 3: {
                int codigo;
                printf("Insira o codigo do produto: ");
                scanf("%d", &codigo);
                pesquisarProduto(estoque, codigo);
                break;
            }
            case 4: {
                int codigo;
                printf("Insira o codigo do produto a ser removido: ");
                scanf("%d", &codigo);
                estoque = removerProduto(estoque, codigo);
                break;
            }
        }
    } while (opcao != 0);


    liberarEstoque(estoque);

    return 0;
}

Produto *inicializarEstoque() {
    return NULL;
}

Produto *adicionarProduto(Produto *estoque) {
    Produto *novoProduto = (Produto *)malloc(sizeof(Produto));
    if (novoProduto == NULL) {
        printf("Erro de alocacao de memoria");
        exit(EXIT_FAILURE);
    }

    printf("Insira o codigo do produto: ");
    scanf("%d", &novoProduto->codigo);

    printf("Insira a descricao do produto: ");
    getchar(); 
    fgets(novoProduto->descricao, sizeof(novoProduto->descricao), stdin);
    novoProduto->descricao[strcspn(novoProduto->descricao, "\n")] = '\0'; 

    printf("Insira a quantidade do produto: ");
    scanf("%d", &novoProduto->quantidade);

    printf("Insira o valor do produto: ");
    scanf("%f", &novoProduto->valor);


    novoProduto->prox = estoque;
    estoque = novoProduto;

    return estoque;
}


// funcao que lista os produtos
void listarProdutos(Produto *estoque) {
    Produto *atual = estoque;
    while (atual != NULL) {
        printf("\n-------------------");
        printf("\nCodigo: %d", atual->codigo);
        printf("\nDescricao: %s", atual->descricao);
        printf("\nQuantidade: %d", atual->quantidade);
        printf("\nValor: %.2f", atual->valor);
        printf("\n-------------------");
        printf("\n");
        atual = atual->prox;
    }
}


// funcao que pesquisa um produto pelo codigo
void pesquisarProduto(Produto *estoque, int codigo) {
    Produto *atual = estoque;
    while (atual != NULL) {
        if (atual->codigo == codigo) {
            printf("\n-------------------");
            printf("\nProduto Encontrado:");
            printf("\nCodigo: %d", atual->codigo);
            printf("\nDescricao: %s", atual->descricao);
            printf("\nQuantidade: %d", atual->quantidade);
            printf("\nValor: %.2f", atual->valor);
            printf("\n-------------------");
            printf("\n");
            return;
        }
        atual = atual->prox;
    }
    printf("\nProduto nao encontrado.");
}


// funcao que remove um produto
Produto *removerProduto(Produto *estoque, int codigo) {
    Produto *atual = estoque;
    Produto *anterior = NULL;

    while (atual != NULL && atual->codigo != codigo) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual != NULL) {
        if (anterior != NULL) {
            anterior->prox = atual->prox;
        } else {
            estoque = atual->prox;
        }
        free(atual);
        printf("Produto removido com sucesso!");
        printf("\n");
    } else {
        printf("Produto nao esta cadastrado.");
        printf("\n");
    }

    return estoque;
}

void liberarEstoque(Produto *estoque) {
    Produto *atual = estoque;
    Produto *proximo;
    while (atual != NULL) {
        proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
}
