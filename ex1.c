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
    numerosec = abs (operador % 100);
    int achou=0;
    
    // HEADER 
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
            printf("==================\n");
            printf("[você tem 12 cances]\n");
            printf("==================\n");
            chances=12;
            break;
        }

        case 2: 
        {
            printf("==================\n");
            printf("[você tem 10 cances]\n");
            printf("==================\n");
            chances=10;
            break;
        }

        case 3:
        {   
            printf("=================\n");
            printf("[você tem 7 cances]\n");
            printf("=================\n");
            chances=7;
            break;
        }

        default:
        {
            printf("ERRO!! (NÃO DEI ESSA OPÇÃO)");

            main;
        }

    }
    
    //PEGANDO O CHUTE DO USUARIO

    for(int i=0; i<chances;i++)
    {   
        if(chances!=i+1)
        {
        printf("_________________\n");
        printf("chance %d de %d\n", i+1, chances);
        printf("_________________\n");
        }
        else
        {
            printf("_________________\n");
            printf("ULTIMA CHANCE\n");
            printf("_________________\n");
        }


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
            achou=1;
            break;
        }

        else if(chute<0)
        {
            printf("Chute inválido");
            i--;
            continue;
        }

        else
        {
            printf("NÃO DEI ESTA OPÇÃO");
            i--;
            continue;
        }

    }

    if(achou)
    {
        printf("Na mosca, você acertou!!!\n");
    }
    else
    {
        printf("Perdeu, não foi desta vez!\n");
        printf("O número secreto era %d\n", numerosec);
    }
    return 0;
}