#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int soma1 = 0, soma2 = 0; //Declaração de variavéis
    srand(time(NULL)); //Definindo uma nova sequência de números aleatórios
    printf("BLACKJACK\nClique Enter para jogar");
    getchar();

    //Jogadas do jogador
    for (int i = 0; i < 21; i++){
        system("cls"); //Limpar terminal
    
        int c1 = 0, op; //Variavéis usadas apenas pelo jogador
        printf("BLACKJACK\n");

        c1 = rand() % 11 + 1; //Pegar cartar aleatória
        soma1 += c1; //Armazenar valor de carta aleatória
        
        printf("Carta atual: %d\n", c1);
        printf("Soma das cartas: %d\n", soma1);

        printf("1 - Pegar mais uma carta\n2 - Parar\n");
        scanf("%d", &op);

        //Condicional de parar a jogada
        if (op == 2){
            i = 21;
        }  
    }

    //Jogadas da máquina
    while (soma2 < 20)
    {
        int c2; //Variavéis da máquina
        c2 = rand() % 11 + 1; //Pegar carta aleatória
        soma2 += c2; //Armazenar carta aleatória
    }
    
    printf("Cartas da mesa: %d\n", soma2);

    //Condições de vitória 
    if ((soma1 == 21) || (soma1 < 21 && soma1 > soma2) || (soma1 > 21 && soma1 < soma2) || (soma1 < 21 && soma2 > 21))
    {
        printf("O jogador Venceu. Parabens");
    } else if ((soma2 == 21) || (soma2 < 21 && soma2 > soma1) || (soma2 > 21 && soma2 < soma1) || (soma2 < 21 && soma1 > 21))
    {
        printf("A mesa te superou. Perdedor");
    } else if (soma1 == soma2)
    {
        printf("O jogo empatou");
    }

    return 0;
}