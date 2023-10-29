#include <stdio.h>


float conversao (float n1){
    float celsius = (n1 - 32.0) * (5.0 / 9.0);
    return celsius;
}

int main (){
    float temperatura, resultado;

    printf ("Insira sua temperatura em graus Fahrenheit: ");
    scanf ("%f", &temperatura);

    //armazenando o resultado em uma variavel para depois mostrar na tela
    resultado = conversao(temperatura);

    printf ("%.2f", resultado);

    return 0;

}

/*
//FUNCAO DE ENTRADA DE DADOS E REQUISICAO DA TEMPERATURA
float entradaTemp (){
    float tempF;
    printf ("Digite a temperatura em F");
    scanf ("%f", &tempF);
    return tempF;
}

float conveterC (){ //nao precisa de parametro de entrada pq é fornecido pelo retorno da funcao entradTemp
    float tempF = entradaTemp ();
    float celcius = (tempF - 32.0) * (5.0 / 9.0);
    return celcius;
}

main (){
    float tempC = converterC(); //sem o parametro entre parenteses porque ele ja esta dentro da funcao em cima
    printf ("Temperatura em celsius: %f", tempC);
}
*/