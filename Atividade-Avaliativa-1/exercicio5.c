#include <stdio.h>
#include <math.h>

/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula: 
    distancia: raiz de (x2 - x1)^2 + (y2 - y1)^2
*/

int main () {

    //variaveis
    float x1, x2, y1, y2, distancia;

    //requisicao
    printf ("Insira o valor de X do primeiro plano: ");
    scanf ("%f", &x1);
    printf ("Insira o valor de Y do primeiro plano: ");
    scanf ("%f", &y1);
    printf ("Insira o valor de X do segundo plano: ");
    scanf ("%f", &x2);
    printf ("Insira o valor de Y do segundo plano: ");
    scanf ("%f", &y2);


    distancia = sqrt ((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));

    printf ("O Valor da distancia entre os pontos e de: %.4f", distancia);

    return 0;
}