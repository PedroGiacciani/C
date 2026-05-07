#include <stdio.h>

int i;

int main(){
    printf("Digite sua idade \n");
    scanf("%d", &i);

    if (i >= 18)
    {
        printf("Voce e maior de idade");
    } else{
        printf("Voce e menor de idade");
    }
    
    return 0;
}