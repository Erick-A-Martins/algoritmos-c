#include <stdio.h>
//#include <math.h>

main (){
    //declaracao de variaveis
    double raio, area, PI = 3.1415;

    //entrada de dados~
    printf ("Insira o raio do circulo: ");
    scanf ("%lf", &raio);

    //area do circulo = pi * (raio * raio)
    area = PI * (raio * raio);
    //area = PI * (pow(raio,2))

    //apresentacao de resultado 
    printf ("A area do circulo e: %.2lfm", area);
 

}