#include <stdio.h>
#include <stdlib.h>

int main (){
    char p1 = '1',p2 = '2', p3 = '3', p4 = '4', p5 = '5', p6 = '6', p7 = '7', p8 = '8', p9 = '9';
    char jogador = 'X';
    int ganhou = 0;
    int jogadas = 0;
    int escolha;

    while (jogadas < 9 && ganhou != 0){
        system('cls');

        printf("[%c] [%c] [%c]", p1, p2, p3);
        printf("[%c] [%c] [%c]", p4, p5, p6);
        printf("[%c] [%c] [%c]", p7, p8, p9);

        printf("Escolha uma casa\n");
        scanf("%d", &escolha);

        if(p1 == 1 && escolha == 1){p1 = jogador;}
        if(p2 == 2 && escolha == 2){p2 = jogador;}
        if(p2 == 3 && escolha == 3){p3 = jogador;}
        if(p2 == 4 && escolha == 4){p4 = jogador;}
        if(p2 == 5 && escolha == 5){p5 = jogador;}
        if(p2 == 6 && escolha == 6){p6 = jogador;}
        if(p2 == 7 && escolha == 7){p7 = jogador;}
        if(p2 == 8 && escolha == 8){p8 = jogador;}
        if(p2 == 9 && escolha == 9){p9 = jogador;}
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
        
        if (ganhou == 1)
        {
            printf("O %d venceu. Parabens!", jogador);
        } else{
            if (jogador =='X')
            {
                jogador = 'O';
            }else{
                jogador = 'X';
            }
        }
        
        jogadas++;
    }
    
}