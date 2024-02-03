#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavras[15];
    char chute[26];
    int acertou=0;
    int enforcou=0;
    int tentativa=0;
    char palpite;


    puts("==============");
    puts("JOGO DE FORCA");
    puts("==============");


    sprintf(palavras, "Jurema");
    
    do
    {
        for(int i=0; i<(sizeof(palavras))/4;i++)
        {

            int acertou=0;
            for(int j=0; j<tentativa;j++)
            {
                if(palavras[i]==chute[j])
                {
                    acertou=1;
                    break;
                }
            }
            if(acertou)
            {
                printf("%c", palavras[i]);
                break;
            }
            
            else
            {
                printf("_ ");
                break;
            }
        }

            printf("\n");

            printf("DIGITE AQUI:");
            scanf(" %c", palpite);
            chute[tentativa]=palpite;
            tentativa++; 
                
    } while (!acertou && !enforcou);

    

    

    
    return 0;
}