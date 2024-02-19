#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int main()
{
    char palavras[15];
    char chute[26];
    int acertou=0;
    int enforcou=0;
    int tentativa=0;
    char palpite;
    int usuario=0;

    puts("==============");
    puts("JOGO DE FORCA");
    puts("==============");

    puts("Qual tipo de palavra você quer tentar acertar?");
    puts("Para frutas, tecle 1");
    puts("Para estados do Brasil, tecle 2");
    puts("Para profissões, tecle 3");
    scanf("%d", &usuario);

         
   switch(usuario)
   {
        case 1:
        {      

            FILE *p;
            p = fopen ("exa.txt", "r");
            if(p == NULL)
            {
                puts("Erro ao tentar executar o arquivo");
                return 0;
            }   

            int qtddepalavas;
            fscanf(p,"%d", &qtddepalavas);
            srand(time(0));
            int conta = rand() % qtddepalavas;

            for(int i = 0; i <= conta;i++)
            {
                fscanf(p,"%s", palavras);
            } 
            

          fclose(p);
          break;
        }  

        case 2:
        {
            FILE *p = fopen ("exb.txt", "r");
                    
            if(p == NULL)
            {
                puts("Erro ao tentar executar o arquivo");
            }

            else
            {
                int qtddepalavas;
                fscanf(p,"%d", &qtddepalavas);
                srand(time(0));
                int conta = rand() % qtddepalavas;

                for(int i = 0; i <= conta;i++)
                {
                    fscanf(p,"%s", palavras);
                } 
            }

                fclose(p);
                break;
        }  

        case 3:
        {
            FILE *p = fopen ("exc.txt", "r");
                    
            if(p == NULL)
            {
                puts("Erro ao tentar executar o arquivo");
            }

            else
            {
                int qtddepalavas;
                fscanf(p,"%d", &qtddepalavas);
                srand(time(0));
                int conta = rand() % qtddepalavas;

                for(int i = 0; i <= conta;i++)
                {
                    fscanf(p,"%s", palavras);
                } 
            }

                fclose(p);
                break;
        }  

   }
    
    do
    {
        for(int i = 0; i < strlen(palavras); i++)
        {

            int acertou=0;
            for(int j = 0; j < tentativa;j++)
            {
                if(palavras[i]==chute[j])
                {
                    acertou=1;
                    break;
                }
            }

            if(acertou)
            {
                printf("%c ", palavras[i]);
                
            }
            
            else
            {
                printf("_ ");
                
            }
        
        }
            printf("\n");

            
            printf("DIGITE AQUI:");
            scanf(" %c", &palpite);
            chute[tentativa]=palpite;
            tentativa++; 
              
    } while (!acertou && !enforcou);

    return 0;
}