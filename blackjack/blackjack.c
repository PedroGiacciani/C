#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Declaração de variavéis
    int c1 = 0, c2 = 0, fim = 0;
    srand(time(NULL));

    for (int i = 0; i < 21 && fim == 0; i++){
        system("cls");

        printf("BLACK JACK\nClique Enter para jogar!");
        getchar();

        printf("Sua carta: %d", c1);
        getchar();
    }
    
}