#include <stdio.h>
#include<stdlib.h>
#define VAZIO ' '
void interface(){
    char Corpo[3][3]= {
       {' ', ' ', ' '},
       {' ', ' ', ' '}, 
       {' ', ' ', ' '}};
   int partida = 1;
   char jogador='X'; 
   int vezes_jogadas = 0;
    while(partida == 1){
       int  jogada;
       inicio:
      printf("\n\x1b[35m<JOGO DA VELHA>\x1b[0m\n");
      printf("| [%c] [%c] [%c] |\n",Corpo[0][0], Corpo[0][1], Corpo[0][2]);
      printf("| [%c] [%c] [%c] |\n", Corpo[1][0], Corpo[1][1], Corpo[1][2]);
      printf("| [%c] [%c] [%c] |\n", Corpo[2][0], Corpo[2][1], Corpo[2][2]);
      int vez;
         if(vez == 0){
            if (jogador == 'X'){
          jogador = 'O';}
          else{
             jogador = 'X';};} 
             printf("Escolha uma casa Jogador %c: ", jogador);
             scanf("%d", &jogada);

             switch(jogada){
                case 1:
                case 2:
                case 3:
                     if (Corpo[0][jogada - 1] == VAZIO){
                     Corpo[0][jogada - 1] = jogador;
                     if (jogada > 0 || jogada <4){
                     vezes_jogadas++; 
                     vez=0;
                     system("cls");}
                     else{
                        if (jogada > 0 || jogada <4){
                             vez=1;
                        vezes_jogadas--; }
                     system("cls");
                     printf("casa invalida\n");
                       }}
                break;
                case 4:
                case 5:
                case 6:
                     if (Corpo[1][jogada -4] == VAZIO){
                     Corpo[1][jogada -4] = jogador;
                     if (jogada > 3 || jogada <7){
                     vezes_jogadas++; 
                     vez =0;
                     system("cls");}
                     else{
                     if (jogada > 3 || jogada <7){
                         vez=1;
                     vezes_jogadas--; }
                     system("cls");
                     printf("casa invalida\n");}}
                break;
                case 7:
                case 8:
                case 9:
                     if (Corpo[2][jogada-7] == VAZIO){
                     Corpo[2][jogada -7] = jogador; 
                     if (jogada > 6 || jogada < 10){
                     vezes_jogadas++; 
                     vez=0;
                     system("cls");}
                     else{
                        if (jogada > 6 || jogada <10){
                        vezes_jogadas--; }
                        vez=1;
                     system("cls");
                     printf("casa invalida\n");}}
                break;
                default:
                   system("cls");
                   printf("\033[1;33mJogada fora do intervalo (1-9).\033[0m\n");
                   jogada = 0;

                break;
        } for(int validador=0; validador<3; validador++ ){
      if (Corpo[validador][0] == jogador && Corpo[validador][1]==jogador && Corpo[validador][2]== jogador ){
         printf("\n\x1b[35m<JOGO DA VELHA>\x1b[0m\n");
         printf("| [%c] [%c] [%c] |\n",Corpo[0][0], Corpo[0][1], Corpo[0][2]);
         printf("| [%c] [%c] [%c] |\n", Corpo[1][0], Corpo[1][1], Corpo[1][2]);
         printf("| [%c] [%c] [%c] |\n", Corpo[2][0], Corpo[2][1], Corpo[2][2]);
         printf("\x1b[1;32mvitoria do jogador: %c\x1b[0m\n", jogador);
         partida = 0;
         break;
      }  
            else
               if (Corpo[0][validador] == jogador && Corpo[1][validador]== jogador&& Corpo[2][validador] == jogador ){
               printf("\n\x1b[35m<JOGO DA VELHA>\x1b[0m\n");
               printf("| [%c] [%c] [%c] |\n",Corpo[0][0], Corpo[0][1], Corpo[0][2]);
               printf("| [%c] [%c] [%c] |\n", Corpo[1][0], Corpo[1][1], Corpo[1][2]);
               printf("| [%c] [%c] [%c] |\n", Corpo[2][0], Corpo[2][1], Corpo[2][2]);
               printf("\x1b[1;32mvitoria do jogador: %c\x1b[0m\n", jogador);
               partida = 0;
               break;
               }}
                  if (Corpo[0][0] == jogador && Corpo[1][1]== jogador && Corpo[2][2] == jogador ){
                  printf("\n\x1b[35m<JOGO DA VELHA>\x1b[0m\n");
                  printf("| [%c] [%c] [%c] |\n",Corpo[0][0], Corpo[0][1], Corpo[0][2]);
                  printf("| [%c] [%c] [%c] |\n", Corpo[1][0], Corpo[1][1], Corpo[1][2]);
                  printf("| [%c] [%c] [%c] |\n", Corpo[2][0], Corpo[2][1], Corpo[2][2]);
                  printf("\x1b[1;32mvitoria do jogador: %c\x1b[0m\n", jogador);
                  partida = 0;
                  }
                  else
                     if (Corpo[0][2] == jogador  && Corpo[1][1] == jogador && Corpo[2][0] == jogador ){
                        printf("\n\x1b[35m<JOGO DA VELHA>\x1b[0m\n");
                        printf("| [%c] [%c] [%c] |\n",Corpo[0][0], Corpo[0][1], Corpo[0][2]);
                        printf("| [%c] [%c] [%c] |\n", Corpo[1][0], Corpo[1][1], Corpo[1][2]);
                        printf("| [%c] [%c] [%c] |\n", Corpo[2][0], Corpo[2][1], Corpo[2][2]);
                        printf("\x1b[1;32mvitoria do jogador: %c\x1b[0m\n", jogador);
                     partida = 0;
                     }
                     else if (vezes_jogadas == 18 && partida == 1){
                     printf("\n\x1b[35m<JOGO DA VELHA>\x1b[0m\n");
                     printf("| [%c] [%c] [%c] |\n",Corpo[0][0], Corpo[0][1], Corpo[0][2]);
                     printf("| [%c] [%c] [%c] |\n", Corpo[1][0], Corpo[1][1], Corpo[1][2]);
                     printf("| [%c] [%c] [%c] |\n", Corpo[2][0], Corpo[2][1], Corpo[2][2]);
                     printf("Empate\n");
                     partida = 0;
                  }
            int novo_jogo;
        if(partida == 0){
         printf("\n============================\n");
         printf("       FIN DE JOGO       \n");
         printf("============================\n");
         printf("1. Nova rodada\n");
         printf("2. Sair\n");
         printf("------------------------------\n");
         scanf("%d", &novo_jogo);
          if (novo_jogo == 1){
            partida = 1;
                 for(int r = 0; r < 3; r++){
                for(int c = 0; c < 3; c++){
                    Corpo[r][c] = VAZIO;}
                }
           vezes_jogadas = 0;
            jogador = 'X';
            system("cls");
            goto inicio;
          }
               if (novo_jogo == 2){
                  system("cls");
                  system("pause");
               }
        }}}
int main (){
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
            interface();}
          else if(opcao =='2'){
            opcao ='1';
            system("cls");
          printf("\n\x1bsaindo...\x1b[0m");
          system("pause");}
           else{
            opcao ='0';
            system("cls");
            printf("\x1b[1;31mEscolha uma opcao valida!!\x1b[0m");
          
        }}
         return 0;

      }
