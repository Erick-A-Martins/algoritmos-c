/*
2. Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade de filmes retirados por seus clientes durante o ano de 2020. Agora, esta locadora está fazendo uma promoção e, para cada 15 filmes retirados, o cliente tem direito a uma locação grátis. Faça um procedimento que receba o vetor A por parâmetro e retorna um vetor contendo a quantidade de locações gratuitas a que cada cliente tem direito. 
*/

#include <stdio.h>

void calcularLocacoesGratuitas(int vetorA[], int vetorLocacoes[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetorLocacoes[i] = vetorA[i] / 15;
    }
}

int main() {
    int tamanho = 500;
    int vetorA[tamanho];
    int vetorLocacoes[tamanho];


    for (int i = 0; i < tamanho; i++) {
        printf("Insira a quantidade de filmes retirados pelo cliente %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }


    calcularLocacoesGratuitas(vetorA, vetorLocacoes, tamanho);


    for (int i = 0; i < tamanho; i++) {
        printf("Cliente %d tem direito a %d locacoes gratuitas.\n", i + 1, vetorLocacoes[i]);
    }

    return 0;
}
