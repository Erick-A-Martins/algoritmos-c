#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// definindo struct dos veiculos
typedef struct Veiculo {
    char proprietario[50];
    char combustivel[20];
    char modelo[50];
    char cor[20];
    char chassi[20];
    int ano;
    char placa[10];
    struct Veiculo *prox;
} Veiculo;

// prototipos
Veiculo* criarVeiculo();
Veiculo* cadastrar(Veiculo *lista);
void listarDiesel2010(Veiculo *lista);
void listarPlacasJ(Veiculo *lista);
void listarModeloCor(Veiculo *lista);
void trocarProprietario(Veiculo *lista, char chassiTroca[]);

// main
int main() {
    Veiculo *lista = NULL;
    int opcao;
    printf ("\n----------------------------------------------");
    printf("\n           SECRETARIA DE TRANSPORTE");
    printf ("\n----------------------------------------------");

    do {
        printf("\n1 - Cadastrar Veiculo");
        printf("\n2 - Listar Diesel 2010");
        printf("\n3 - Listar Placas J");
        printf("\n4 - Listar Modelo e Cor");
        printf("\n5 - Trocar Proprietario");
        printf("\n0 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
        printf ("\n");

        switch (opcao) {
            case 1:
                lista = cadastrar(lista);
                break;
            case 2:
                listarDiesel2010(lista);
                break;
            case 3:
                listarPlacasJ(lista);
                break;
            case 4:
                listarModeloCor(lista);
                break;
            case 5:
                {
                    char chassiTroca[20];
                    printf("Digite o numero do chassi para troca de proprietario: ");
                    scanf("%s", chassiTroca);
                    trocarProprietario(lista, chassiTroca);
                }
                break;
        }
    } while (opcao != 0);

    Veiculo *atual = lista;
    Veiculo *proximo;
    while (atual != NULL) {
        proximo = atual->prox;
        free(atual);
        atual = proximo;
    }

    return 0;
}

Veiculo* criarVeiculo() {
    Veiculo *novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));
    if (novoVeiculo == NULL) {
        printf("Erro de alocacao de memoria");
        exit(EXIT_FAILURE);
    }
    novoVeiculo->prox = NULL;
    return novoVeiculo;
}

Veiculo* cadastrar(Veiculo *lista) {
    Veiculo *novoVeiculo = criarVeiculo();

    printf("\nProprietario: ");
    fflush(stdin);
    fgets(novoVeiculo->proprietario, sizeof(novoVeiculo->proprietario), stdin);
    novoVeiculo->proprietario[strcspn(novoVeiculo->proprietario, "\n")] = '\0'; // Remover o caractere de nova linha

    printf("\nCombustivel (alcool, diesel, gasolina): ");
    fflush(stdin);
    fgets(novoVeiculo->combustivel, sizeof(novoVeiculo->combustivel), stdin);
    novoVeiculo->combustivel[strcspn(novoVeiculo->combustivel, "\n")] = '\0';

    printf("\nModelo: ");
    fflush(stdin);
    fgets(novoVeiculo->modelo, sizeof(novoVeiculo->modelo), stdin);
    novoVeiculo->modelo[strcspn(novoVeiculo->modelo, "\n")] = '\0';

    printf("\nCor: ");
    fflush(stdin);
    fgets(novoVeiculo->cor, sizeof(novoVeiculo->cor), stdin);
    novoVeiculo->cor[strcspn(novoVeiculo->cor, "\n")] = '\0';

    printf("\nNumero do chassi: ");
    fflush(stdin);
    fgets(novoVeiculo->chassi, sizeof(novoVeiculo->chassi), stdin);
    novoVeiculo->chassi[strcspn(novoVeiculo->chassi, "\n")] = '\0';

    printf("\nAno: ");
    scanf("%d", &novoVeiculo->ano);

    printf("\nPlaca: ");
    fflush(stdin);
    fgets(novoVeiculo->placa, sizeof(novoVeiculo->placa), stdin);
    novoVeiculo->placa[strcspn(novoVeiculo->placa, "\n")] = '\0';

    
    novoVeiculo->prox = lista;
    lista = novoVeiculo;

    return lista;
}

// funcao de listar proprietários cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel
void listarDiesel2010(Veiculo *lista) {
    Veiculo *atual = lista;
    while (atual != NULL) {
        if (atual->ano >= 2010 && strcmp(atual->combustivel, "diesel") == 0) {
            printf ("\n----------------------------");
            printf("\nProprietario: %s", atual->proprietario);
            printf ("\n----------------------------");
        }
        atual = atual->prox;
    }
}

// funcao que mostra as placas que comeca com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietários.
void listarPlacasJ(Veiculo *lista) {
    Veiculo *atual = lista;
    while (atual != NULL) {
        if (atual->placa[0] == 'J' && (atual->placa[6] == '0' || atual->placa[6] == '2' || atual->placa[6] == '4' || atual->placa[6] == '7')) {
            printf ("\n---------------------------------------");
            printf("\nPlaca: %s, Proprietario: %s", atual->placa, atual->proprietario);
            printf ("\n---------------------------------------");
        }
        atual = atual->prox;
    }
}

// função que lista o modelo e a cor dos veículos
void listarModeloCor(Veiculo *lista) {
    Veiculo *atual = lista;
    while (atual != NULL) {
        // verifica se a segunda letra da placa e uma vogal
        char segundaLetra = atual->placa[1];
        if (strchr("aeiouAEIOU", segundaLetra) != NULL) {
            // caçlcula a soma dos valores numericos da placa
            int somaNumerosPlaca = 0;
            for (int i = 2; i < 9; i++) {
                somaNumerosPlaca += atual->placa[i] - '0';
            }
            
            // verifica se a soma e um número par
            if (somaNumerosPlaca % 2 == 0) {
                printf ("\n----------------------------------");
                printf("\nModelo: %s, Cor: %s", atual->modelo, atual->cor);
                printf ("\n----------------------------------");
            }
        }
        atual = atual->prox;
    }
}


// função que troca de proprietário
void trocarProprietario(Veiculo *lista, char chassiTroca[]) {
    Veiculo *atual = lista;
    while (atual != NULL) {
        if (strcmp(atual->chassi, chassiTroca) == 0 && strchr(atual->placa, '0') == NULL) {
            printf("Digite o novo proprietario para o veiculo com chassi %s: ", chassiTroca);
            scanf("%s", atual->proprietario);
            printf("Proprietario atualizado com sucesso!\n");
            printf ("\n---------------------------------");
            return;
        }
        atual = atual->prox;
    }
    printf("Veiculo com chassi %s nao encontrado ou possui digito zero na placa.\n", chassiTroca);
}
