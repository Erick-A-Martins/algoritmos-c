#include <stdio.h>

//Registro para armazenamento de cada usuario
typedef struct{
    char nome[20];
    char sexo[20];
    float salario;
    int quantidadeAcima;
    int quantidadeAbaixo;
} Assalariado;



//Prototipos das funcoes
Assalariado cadastroAssalariado (Assalariado pessoa);
void classificaSalario (float salario);
Assalariado mostraClassifica ();




//Funcoes
int main (){
    int opcao;
    int totalAcima = 0, totalAbaixo = 0; //variaveis para armazenar quantidade da media salarial

    printf ("\n==============================");
    printf ("\n    MINISTERIO DA FAZENDA");
    printf ("\n==============================");
    printf ("\n");

    do {
        Assalariado pessoa = mostraClassifica();
        totalAcima += pessoa.quantidadeAcima;
        totalAbaixo += pessoa.quantidadeAbaixo;
        printf ("\n");
        printf ("\nDeseja Cadastrar outro Asssalariado?: [1] - SIM, [0] - NAO");
        scanf ("%d", &opcao);
        printf ("\n");
        fflush(stdin);
    }while (opcao != 0); //repetidor de cadastro de assalariado

    //Quantidade das medias mostradas apos armazenamento de cada repeticao
    printf ("\n==============================");
    printf("\nSALARIOS ACIMA DA MEDIA: %d", totalAcima);
    printf("\nSALARIOS ABAIXO DA MEDIA: %d", totalAbaixo);
    printf ("\n==============================");

    return 0;
}

//Funcao que  recebe os dados do struct e da media
Assalariado cadastroAssalariado (Assalariado pessoa){

    printf ("Insira o nome: ");
    fgets (pessoa.nome, sizeof(pessoa.nome), stdin);
    printf ("Insira o sexo: ");
    fgets (pessoa.sexo, sizeof(pessoa.sexo), stdin);
    do {
        printf ("Insira o salario: ");
        scanf ("%f", &pessoa.salario);
    } while (pessoa.salario <= 1);

    pessoa.quantidadeAcima = 0;
    pessoa.quantidadeAbaixo = 0;

    if (pessoa.salario > 1400){
        pessoa.quantidadeAcima++;
    } else if (pessoa.quantidadeAbaixo < 1400){
        pessoa.quantidadeAbaixo++;
    }
    
    printf ("\n");

    return pessoa;
}

//Funcao que verifica e imprime o salario inserido
void classificaSalario(float numero1){
    if (numero1 > 1400.00) {
        printf ("\nCLASSIFICACAO: Acima do salario minino (R$1400,00)");
    }else if (numero1 == 1400.00) {
        printf ("\nCLASSIFICACAO: Igual ao salario minino (R$1400,00)");
    }else {
        printf ("\nCLASSIFICACAO: Abaixo do salario minino (R$1400,00)");
    }
}

//Funcao que imprime os dados na tela apos cada repeticao
Assalariado mostraClassifica (){
    Assalariado pessoa;
    pessoa = cadastroAssalariado(pessoa);

    printf ("NOME: %s", pessoa.nome);
    printf ("SEXO: %s", pessoa.sexo);
    printf ("SALARIO: %.2f", pessoa.salario);
    classificaSalario(pessoa.salario);

    return pessoa;
}