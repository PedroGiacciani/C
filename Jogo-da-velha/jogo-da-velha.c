#include <stdio.h>
#include <stdlib.h>

int main (){
    char p1 = '1',p2 = '2', p3 = '3', p4 = '4', p5 = '5', p6 = '6', p7 = '7', p8 = '8', p9 = '9';
    char jogador = 'X';
    int ganhou = 0;
    int jogadas = 0;
    int escolha;

    while(jogadas < 9 && ganhou == 0){
        system("cls");

        printf("JOGO DA VELHA\n");
        printf("[%c] [%c] [%c]\n", p1, p2, p3);
        printf("[%c] [%c] [%c]\n", p4, p5, p6);
        printf("[%c] [%c] [%c]\n", p7, p8, p9);

        printf("Escolha uma casa\n");
        scanf("%d", &escolha);

        if(p1 == '1' && escolha == 1){p1 = jogador;}
        else if(p2 == '2' && escolha == 2){p2 = jogador;}
        else if(p3 == '3' && escolha == 3){p3 = jogador;}
        else if(p4 == '4' && escolha == 4){p4 = jogador;}
        else if(p5 == '5' && escolha == 5){p5 = jogador;}
        else if(p6 == '6' && escolha == 6){p6 = jogador;}
        else if(p7 == '7' && escolha == 7){p7 = jogador;}
        else if(p8 == '8' && escolha == 8){p8 = jogador;}
        else if(p9 == '9' && escolha == 9){p9 = jogador;}
        else{
            printf("[ERRO] Numero invalido ou ocupado. Pressione Enter para continuar");
            getchar(); getchar();
            continue;
        }

        if(p1 == p2 && p2 == p3){ganhou = 1;}
        if(p4 == p5 && p5 == p6){ganhou = 1;}
        if(p7 == p8 && p8 == p9){ganhou = 1;}       
        if(p1 == p4 && p4 == p7){ganhou = 1;}       
        if(p2 == p5 && p5 == p8){ganhou = 1;}       
        if(p3 == p6 && p6 == p9){ganhou = 1;}       
        if(p1 == p5 && p5 == p9){ganhou = 1;}       
        if(p3 == p5 && p5 == p7){ganhou = 1;}       
        
        if (ganhou != 1)
        {
            if (jogador =='X')
            {
                jogador = 'O';
            }else{
                jogador = 'X';
            }
        } else{
            printf("O %c venceu. Parabens!", jogador);
        }

        if (jogadas == 8)
        {
            printf("Deu velha !");
        }
        
        
        jogadas++;
    }
    
}