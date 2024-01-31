#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //DEFININDO VARIAVEIS
    int nivel=0;
    int chances=0;
    int chute=0;
    int numerosec;
    srand(time(0));
    int operador = rand;
    numerosec = operador % 100 ;
  



    // HEDER FILE
    printf("===============================\n");
    printf("::   JOGO DE ADIVINHAÇÃO     ::\n");
    printf("===============================\n");

    //MENSAGEM DE INÍCIO
    printf("Estou pensando em um número de 0 a 99 tente adivinhar...\n\n");

    // SELECIONANDO NÍVEL DE JOGO
    printf("NÍVEL FÁCIl? TECLE 1\nNÍVEL MÉDIO? TECLE 2\nNÍVEL DIFÍCIL? TECLE 3\n");
    scanf("%d", &nivel);

    switch(nivel)
    {
        case 1:
        {
            printf("você tem 12 cances\n");
            chances=12;
            break;
        }

        case 2: 
        {
            printf("você tem 10 cances\n");
            chances=10;
            break;
        }

        case 3:
        {
            printf("você tem 7 cances\n");
            chances=7;
            break;
        }

        default:
        {
            printf("ERRO!! (NÃO DEI ESSA OPÇÃO)");
        }

    }
    
    //PEGANDO O CHUTE DO USUARIO

    for(int i=0; i<chances;i++)
    {
        printf("chance %d de %d\n", i, chances);
        printf("DIGITE AQUI:");
        scanf("%d", &chute);


        if(chute<numerosec)
        {
            printf("seu chute foi menor que o número secreto\n");
        }
        else if(chute>numerosec)
        {
            printf ("seu chute foi maior que o número secreto\n");
        }

        else if(chute==numerosec)
        {
            printf("PARABENS VOCÊ ACERTOU!!!");
            break;
        }

        else
        {
            printf("NÃO DEI ESTA OPÇÃO");
            i--;
            continue;
        }

    }
    return 0;
}