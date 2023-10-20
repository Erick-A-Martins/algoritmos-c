#include <stdio.h>

/*
    Em um prédio, com 50 moradores, há três elevadores denominados A, B e C. Para otimizar o sistema de controle dos elevadores, foi realizado um levantamento no qual cada usuário respondia: 

    o elevador que utilizava com mais frequência; 
    o período que utilizava o elevador, entre:
    “M” = matutino; 
    "V” = vespertino; 
    “N” = noturno. 
    Construa um algoritmo que calcule e imprima:

    qual o período mais usado de todos e a que elevador pertence; (feito)
    qual é o elevador mais frequentado e em que período se concentra o maior fluxo; (feito)
    qual a diferença percentual entre o mais usado dos horários e o menos usado; (feito)
    qual a percentagem sobre o total de serviços prestados do elevador de média utilização
*/

int main () {

    //variaveis
    int opcao, elevadorA, elevadorB, elevadorC, matutino, vespertino, noturno, elevadorAperiodo, elevadorBperiodo, elevadorCperiodo, calculoDiferenca;
    float calculoPercentual;
    char elevador, periodo;


    elevadorA = 0;
    elevadorB = 0;
    elevadorC = 0;
    matutino = 0;
    vespertino = 0;
    noturno = 0;
    elevadorAperiodo = 0;
    elevadorBperiodo = 0;
    elevadorCperiodo = 0;

    //repeticao

    do {

        //fflush aqui porque estava imprimindo tudo direto
        fflush (stdin);


        //recebimento do elevador pelo usuario
        do {
            fflush (stdin);
            printf ("\nQual o elevador do predio voce usa com mais frequencia? (A, B ou C) -> ");
            scanf ("%c", &elevador);
            if ((elevador != 'A') && (elevador != 'B') && (elevador != 'C')) {
                printf ("\nEsse elevador nao existe no predio, insira uma opcao valida!");
            }
        } while ((elevador != 'A') && (elevador != 'B') && (elevador != 'C'));


        //switch para guardar os valores dos elevadores
        switch (elevador){
            case 'A':
                elevadorA ++;
                break;

            case 'B':
                elevadorB ++;
                break;

            case 'C':
                elevadorC ++;
                break;

            default:
                printf ("\nOpcao de elevador invalida!");
                break;
        }


        //recebimento do horario pelo usuario
        do { 
            fflush (stdin);
            printf ("\nQual o periodo que utiliza com mais frequencia? (M, V ou N) -> ");
            scanf ("%c", &periodo);

            //caso o usuario erre o PERIODO ou insira um errado
            if ((periodo != 'M') && (periodo != 'V') && (periodo != 'N')) {
                printf ("\nPeriodo incorreto, insira uma opcao valida!");
            }
        } while ((periodo != 'M') && (periodo != 'V') && (periodo != 'N'));


        //switch para guardar os valores dos horarios
        switch (periodo){
            case 'M':
                matutino ++;
                if (elevador == 'A'){
                    elevadorAperiodo ++;
                } else if (elevador == 'B') {
                    elevadorBperiodo ++;
                } else {
                    elevadorCperiodo ++;  
                }
                break;

            case 'V':
                vespertino ++;
                if (elevador == 'A'){
                    elevadorAperiodo ++;
                } else if (elevador == 'B') {
                    elevadorBperiodo ++;
                } else {
                    elevadorCperiodo ++;  
                }
                break;

            case 'N':
                noturno ++;
                if (elevador == 'A'){
                    elevadorAperiodo ++;
                } else if (elevador == 'B') {
                    elevadorBperiodo ++;
                } else {
                    elevadorCperiodo ++;  
                }
                break;
        }



        printf ("\nDeseja continuar opinando? (1-SIM/0-NAO)");
        scanf ("%d", &opcao);
    } while (opcao != 0);

    //verificacao do matutino como periodo mais usado
    if ((matutino > vespertino) && (matutino > noturno)) {
        printf ("\nO perIodo mais usado de todos e o Matutino com: -> %d acessos", matutino);

        //verificacao do elevador A como mais usado
        if ((elevadorAperiodo > elevadorBperiodo) && (elevadorAperiodo > elevadorCperiodo)) {
            printf ("\nE o elevador que pertence o com mais acesso e o elevador A com: -> %d acessos", elevadorAperiodo);
        //verificacao do elevador B como mais usado
        } else if ((elevadorBperiodo > elevadorAperiodo) && (elevadorBperiodo > elevadorCperiodo)) {
            printf ("\nE o elevador que pertence o com mais acesso e o elevador B com: -> %d acessos", elevadorBperiodo);
        //verificacao do elevador C como mais usado
        } else {
            printf ("\nE o elevador que pertence o com mais acesso e o elevador C com: -> %d acessos", elevadorCperiodo);
        }
        
    //verificacao do vespertino como periodo mais usado
    } else if ((vespertino > matutino) && (vespertino > noturno)) {
        printf ("\nO periodo mais usado de todos e o Vespertino com: -> %d acessos", vespertino); 

        //verificacao do elevador A como mais usado
        if ((elevadorAperiodo > elevadorBperiodo) && (elevadorAperiodo > elevadorCperiodo)) {
            printf ("\nE o elevador que pertence o com mais acesso e o elevador A com: -> %d acessos", elevadorAperiodo);
        //verificacao do elevador B como mais usado
        } else if ((elevadorBperiodo > elevadorAperiodo) && (elevadorBperiodo > elevadorCperiodo)) {
            printf ("\nE o elevador que pertence o com mais acesso e o elevador B com: -> %d acessos", elevadorBperiodo);
        //verificacao do elevador C como mais usado
        } else {
            printf ("\nE o elevador que pertence o com mais acesso e o elevador C com: -> %d acessos", elevadorCperiodo);
        }
        

    //verificacao do noturno como periodo mais usado
    } else {
        printf ("\nO periodo mais usado de todos e o Noturno com: -> %d acessos", noturno);

        //verificacao do elevador A como mais usado
        if ((elevadorAperiodo > elevadorBperiodo) && (elevadorAperiodo > elevadorCperiodo)) {
            printf ("\nE o elevador que pertence o com mais acesso e o elevador A com: -> %d acessos", elevadorAperiodo);
        //verificacao do elevador B como mais usado
        } else if ((elevadorBperiodo > elevadorAperiodo) && (elevadorBperiodo > elevadorCperiodo)) {
            printf ("\nE o elevador que pertence o com mais acesso e o elevador B com: -> %d acessos", elevadorBperiodo);
        //verificacao do elevador C como mais usado
        } else {
            printf ("\nE o elevador que pertence o com mais acesso e o elevador C com: -> %d acessos", elevadorCperiodo);
        } 

    }


    //elevador mais frequentado
    if ((elevadorA > elevadorB) && (elevadorA > elevadorC)) {
        printf ("\nO elevador mais frequentado e o A, com: -> %d acessos", elevadorA);

        //periodo mais usado do elevador A
        if ((matutino > vespertino) && (matutino > noturno)) {
            printf ("\nO perIodo mais usado do elevador A e o Matutino com: -> %d acessos", matutino);
        } else if ((vespertino > matutino) && (vespertino > noturno)) {
            printf ("\nO perIodo mais usado do elevador A e o Vespertino com: -> %d acessos", vespertino);
        } else {
            printf ("\nO perIodo mais usado do elevador A e o Noturno com: -> %d acessos", noturno);  
        }
    } else if ((elevadorB > elevadorA) && (elevadorB > elevadorC)) {
        printf ("\nO elevador mais frequentado e o B, com: -> %d acessos", elevadorB);

        //periodo mais usado do elevador B
        if ((matutino > vespertino) && (matutino > noturno)) {
            printf ("\nO perIodo mais usado do elevador B e o Matutino com: -> %d acessos", matutino);
        } else if ((vespertino > matutino) && (vespertino > noturno)) {
            printf ("\nO perIodo mais usado do elevador B e o Vespertino com: -> %d acessos", vespertino);
        } else {
            printf ("\nO perIodo mais usado do elevador B e o Noturno com: -> %d acessos", noturno);  
        }
    } else {
        printf ("\nO elevador mais frequentado e o C, com: -> %d acessos", elevadorC);  

        //periodo mais usado do elevador c
        if ((matutino > vespertino) && (matutino > noturno)) {
            printf ("\nO perIodo mais usado do elevador C e o Matutino com: -> %d acessos", matutino);
        } else if ((vespertino > matutino) && (vespertino > noturno)) {
            printf ("\nO perIodo mais usado do elevador C e o Vespertino com: -> %d acessos", vespertino);
        } else {
            printf ("\nO perIodo mais usado do elevador C e o Noturno com: -> %d acessos", noturno);  
        }
    }


    //diferenca percentual entre o horario com mais fluxo e o com menos fluxo

    //matutino como maior e noturno como menor
    if ((matutino > vespertino) && (matutino > noturno)) {
        if (noturno < vespertino) {
            calculoDiferenca = (matutino - noturno);
            calculoPercentual = (calculoDiferenca / noturno) * 100;
            printf ("\nA diferenca percentural do periodo maior (A) entre o periodo menor (N) e: -> %.2f", calculoPercentual);
        //matutino como maior e vespertino como menor
        } else {
            calculoDiferenca = (matutino - vespertino);
            calculoPercentual = (calculoDiferenca / vespertino) * 100;
            printf ("\nA diferenca percentural do periodo maior (A) entre o periodo menor (V) e: -> %.2f", calculoPercentual);
        }
    //vespertino como maior e matutino como menor
    } else if ((vespertino > matutino) && (vespertino > noturno)) {
        if (matutino < noturno) {
            calculoDiferenca = (vespertino - matutino);
            calculoPercentual = (calculoDiferenca / matutino) * 100;
            printf ("\nA diferenca percentural do periodo maior (V) entre o periodo menor (M) e: -> %.2f", calculoPercentual);
        //vespertino como maior e noturno como menor
        } else {
            calculoDiferenca = (vespertino - noturno);
            calculoPercentual = (calculoDiferenca / noturno) * 100;
            printf ("\nA diferenca percentural do periodo maior (V) entre o periodo menor (N) e: -> %.2f", calculoPercentual);
        }
    //noturno como maior e matutino como menor
    } else {
        if (matutino < vespertino) {
            calculoDiferenca = (noturno - matutino);
            calculoPercentual = (calculoDiferenca / matutino) * 100;
            printf ("\nA diferenca percentural do periodo maior (N) entre o periodo menor (M) e: -> %.2f", calculoPercentual);
        //noturno como maior e vespertino como menor
        } else {
            calculoDiferenca = (noturno - vespertino);
            calculoPercentual = (calculoDiferenca / vespertino) * 100;
            printf ("\nA diferenca percentural do periodo maior (N) entre o periodo menor (V) e: -> %.2f", calculoPercentual);
        }

    }

    }


    

    

