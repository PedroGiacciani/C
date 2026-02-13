#include <stdio.h>

int i;

int main(){
    printf("Digite sua idade \n");
    scanf("%d", &i);

    if (i <= 12){

        printf("Voce e uma crianca");

    } else if (i <= 19){
        
        printf("Voce e um adolescente");

    } else if(i <= 60){

        printf("Voce e um adulto");

    } else{

        printf("Voce e um idoso");

    }

    return 0;
}