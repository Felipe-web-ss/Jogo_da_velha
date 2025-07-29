#include <stdio.h>
#include <stdlib.h>
#define VAZIO ' '
int vezes_jogadas =0;
char Corpo[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}};
void interface()
{
    printf("\x1b[35m<JOGO DA VELHA>\x1b[0m\n");
    printf("| [%c] [%c] [%c] |\n", Corpo[0][0], Corpo[0][1], Corpo[0][2]);
    printf("| [%c] [%c] [%c] |\n", Corpo[1][0], Corpo[1][1], Corpo[1][2]);
    printf("| [%c] [%c] [%c] |\n", Corpo[2][0], Corpo[2][1], Corpo[2][2]);
}
void Condicao_vitoria(char jogador, int partida )
{ partida =1;
    for (int validador = 0; validador < 3; validador++)
    {
        if (Corpo[validador][0] == jogador && Corpo[validador][1] == jogador && Corpo[validador][2] == jogador)
        { 
            interface();
            printf("\x1b[1;32mvitoria do jogador: %c\x1b[0m\n", jogador);
            partida = 0;
            break;
        }
        else if (Corpo[0][validador] == jogador && Corpo[1][validador] == jogador && Corpo[2][validador] == jogador)
        {
            interface();
            printf("\x1b[1;32mvitoria do jogador: %c\x1b[0m\n", jogador);
            partida = 0;
            break;
        }
    }
    if (Corpo[0][0] == jogador && Corpo[1][1] == jogador && Corpo[2][2] == jogador)
    {
        interface();
        printf("\x1b[1;32mvitoria do jogador: %c\x1b[0m\n", jogador);
        partida = 0;
    }
    else if (Corpo[0][2] == jogador && Corpo[1][1] == jogador && Corpo[2][0] == jogador)
    {
        interface();
        printf("\x1b[1;32mvitoria do jogador: %c\x1b[0m\n", jogador);
        partida = 0;
    }
    else if (vezes_jogadas == 9 && partida == 1)
    {
        interface();
        printf("Empate\n");
        partida = 0;
    }
    int novo_jogo;
    if (partida == 0)
    {
        printf("\n============================\n");
        printf("       FIN DE JOGO       \n");
        printf("============================\n");
        printf("1. Nova rodada\n");
        printf("2. Sair\n");
        printf("------------------------------\n");
        scanf(" %d", &novo_jogo);
        if (novo_jogo == 1)
        {
            partida = 1;
            for (int l = 0; l < 3; l++)
            {
                for (int c = 0; c < 3; c++)
                {
                    Corpo[l][c] = VAZIO;
                }
            }
            vezes_jogadas = 0;
            jogador = 'O';
            system("cls");
        }
        else if (novo_jogo == 2)
        {
            system("cls");
            exit(0);
        }
    }
     
}
void partida()
{ 
    int partida = 1;
    char jogador = 'O';
    int vez=0;
    system("cls");
    while (partida == 1)
    {
        char jogada;
          interface();     
        if (vez == 0)
        {
            if (jogador == 'X')
            {
                jogador = 'O';
            }
            else
            {
                jogador = 'X';
            };
        }

        printf("Escolha uma casa Jogador %c: ", jogador);
        scanf(" %c", &jogada);

        switch (jogada){
        
        case '1':
            if (Corpo[0][0] == VAZIO)
            {
                Corpo[0][0] = jogador;
                vezes_jogadas++;
                vez = 0;
                system("cls");
                Condicao_vitoria(jogador, partida);
                break;
            }
            else if (Corpo[0][0] != VAZIO)
            {
                vez = 1;
                printf("\033[1;33mcasa invalida\033[0m\n");
                break;
            }
        case '2':
            if (Corpo[0][1] == VAZIO)
            {
                Corpo[0][1] = jogador;
                vezes_jogadas++;
                vez = 0;
                 system("cls");
                 Condicao_vitoria(jogador, partida);
                 break;

            }
            else if (Corpo[0][1] != VAZIO)
            {
                vez = 1;
                printf("\033[1;33mcasa invalida\033[0m\n");
                break;
            }
        case '3':
            if (Corpo[0][2] == VAZIO)
            {
                Corpo[0][2] = jogador;
                vezes_jogadas++;
                vez = 0;
                 system("cls");
                 Condicao_vitoria(jogador, partida);
                 break;
            }
            else if (Corpo[0][2] != VAZIO)
            {
                vez = 1;
                printf("\033[1;33mcasa invalida\033[0m\n");
                break;
            }
        case '4':
            if (Corpo[1][0] == VAZIO)
            {
                Corpo[1][0] = jogador;
                vezes_jogadas++;
                vez = 0;
                 system("cls");
                 Condicao_vitoria(jogador, partida);
                 break;
            }
            else if (Corpo[1][0] != VAZIO)
            {
                vez = 1;
                printf("\033[1;33mcasa invalida\033[0m\n");
                break;
            }
        case '5':
            if (Corpo[1][1] == VAZIO)
            {
                Corpo[1][1] = jogador;
                vezes_jogadas++;
                vez = 0;
                 system("cls");
                 Condicao_vitoria(jogador, partida);
                 break;
            }
            else if (Corpo[1][1] != VAZIO)
            {
                vez = 1;
                printf("\033[1;33mcasa invalida\033[0m\n");
                break;
            }
        case '6':
            if (Corpo[1][2] == VAZIO)
            {
                Corpo[1][2] = jogador;
                vezes_jogadas++;
                vez = 0;
                 system("cls");Condicao_vitoria(jogador, partida);
                 break;
                }
            else if (Corpo[1][2] != VAZIO)
            {
                vez = 1;
                printf("\033[1;33mcasa invalida\033[0m\n");
                break;
            }
        case '7':
            if (Corpo[2][0] == VAZIO)
            {
                Corpo[2][0] = jogador;
                vezes_jogadas++;
                vez = 0;
                 system("cls");
                 Condicao_vitoria(jogador, partida);
                 break;
            }
            else if (Corpo[2][0] != VAZIO)
            {
                vez = 1;
                printf("\033[1;33mcasa invalida\033[0m\n");
                break;
            }
        case '8':
            if (Corpo[2][1] == VAZIO)
            {
                Corpo[2][1] = jogador;
                vezes_jogadas++;
                vez = 0;
                 system("cls");
                 Condicao_vitoria(jogador, partida);
                 break;
            }
            else if (Corpo[2][1] != VAZIO)
            {
                vez = 1;
                printf("\033[1;33mcasa invalida\033[0m\n");
                break;
            }
        case '9':
            if (Corpo[2][2] == VAZIO)
            {
                Corpo[2][2] = jogador;
                vezes_jogadas++;
                vez = 0; 
                 system("cls"); 
                 Condicao_vitoria(jogador, partida);
                 break;       
            }
            else if (Corpo[2][2] != VAZIO)
            {
                vez = 1;
                printf("\033[1;33mcasa invalida\033[0m\n");  
            break;
            }
        default:
            if (jogada != '1' && jogada != '2' && jogada != '3' &&
                jogada != '4' && jogada != '5' && jogada != '6' &&
                jogada != '7' && jogada != '8' && jogada != '9')
            {
              
                system("cls");
                printf("\033[1;33mJogadas apenas entre o intervalo (1-9).\033[0m\n");
                vez = 1;
                break;}
            
        
             } } 
            }
    

    
int main( ){
   char opcao ='0';
   system("cls");

   while (opcao == '0'){
      opcao++;
   
        printf("\n============================\n");
        printf("       MENU PRINCIPAL       \n");
        printf("============================\n");
        printf("1. Iniciar Novo Jogo\n");
        printf("2. Sair do Programa\n");
        printf("----------------------------\n");
        printf("Digite sua escolha: ");
        scanf("%c", &opcao);   
   
         if(opcao == '1'){
            opcao = '1';
            system ("cls");
            partida();}
            else if(opcao =='2'){
               opcao ='1';
               system("cls");
               printf("\n\x1bsaindo...\x1b[0m");
               system("pause");}
                else{
                  opcao ='0';
                  system("cls");
                  printf("\x1b[1;31mEscolha uma opcao valida!!\x1b[0m");    }}
         return 0;
      }
