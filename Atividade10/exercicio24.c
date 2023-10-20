#include <stdio.h>

/*
Faca um programa que leia 10 conjuntos de dois valores, o primeiro representando o numero do aluno e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais alto. Mostre o numero do aluno mais baixo e do mais alto, juntamente com suas alturas
*/


int main() {
    int numero_aluno, numero_aluno_mais_baixo, numero_aluno_mais_alto;
    double altura_aluno, altura_mais_baixo, altura_mais_alto;

    
    altura_mais_baixo = 9999.0;  
    altura_mais_alto = -1.0;   

    for (int i = 1; i <= 10; i++) {
        printf("Digite o numero do aluno %d: ", i);
        scanf("%d", &numero_aluno);

        printf("Digite a altura do aluno %d em metros: ", i);
        scanf("%lf", &altura_aluno);

        if (altura_aluno < altura_mais_baixo) {
            altura_mais_baixo = altura_aluno;
            numero_aluno_mais_baixo = numero_aluno;
        }

        if (altura_aluno > altura_mais_alto) {
            altura_mais_alto = altura_aluno;
            numero_aluno_mais_alto = numero_aluno;
        }
    }

    printf("O aluno mais baixo e o número %d com %.2lf metros de altura.\n", numero_aluno_mais_baixo, altura_mais_baixo);
    printf("O aluno mais alto e o número %d com %.2lf metros de altura.\n", numero_aluno_mais_alto, altura_mais_alto);

    return 0;
}
