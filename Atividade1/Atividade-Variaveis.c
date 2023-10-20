#include <stdio.h>

int main() {
    //passo 1 - declaracao das variaveis
    char nome [40];
    int idade;
    char matricula [15];
    char endereco [60];
    char curso [40];
    int periodo;
    char disciplinas [100];
    float mensalidade;

    //passo 2 - receber e armazenar os dados nas variaveis
    printf("____________________________");
    printf("Cadastro de Aluno");
    printf("____________________________");
    printf ("\nNome: \n");
    fgets (nome, 40, stdin);
    fflush (stdin);

    printf ("\nIdade: ");
    scanf ("%d", &idade);
    fflush (stdin);

    printf ("\nMatricula: ");
    fgets (matricula, 15, stdin);
    fflush (stdin);

    printf ("\nEndereco: ");
    fgets (endereco, 60, stdin);
    fflush (stdin);

    printf ("\nCurso: ");
    fgets (curso, 40, stdin);
    fflush (stdin);

    printf ("\nPeriodo: ");
    scanf ("%d", &periodo);
    fflush (stdin);

    printf ("\nDisciplinas: ");
    fgets (disciplinas, 100, stdin);
    fflush (stdin);

    printf ("\nMensalidade: ");
    scanf ("%f", &mensalidade);
    fflush (stdin);


    //passo 3 - apresentacao dos dados
    printf ("____________________________");
    printf("Dados registrados");
    printf("____________________________");

    printf ("\nNome: %s", nome);
    printf ("Idade: %d", idade);
    printf ("\nMatricula: %s", matricula);
    printf ("Endereco: %s", endereco);
    printf ("Curso: %s", curso);
    printf ("Periodo: %d", periodo);
    printf ("\nDisciplinas: %s", disciplinas);
    printf ("Mensalidade: %.0f", mensalidade);

    printf ("\n____________________________");
    printf("Fim da ficha de dados!");
    printf("____________________________");

}