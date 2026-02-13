#include <stdio.h>

float n1, n2;

int main(){
    printf("Digite 2 numeros \n");
    scanf("%f%f", &n1, &n2);

    if (n1 == n2)
    {
        printf("Os numeros sao iguais");
    } else if (n1 > n2)
    {
        printf("O numero 1 e maior");
    } else{
        printf("O numero 2 e maior");
    }
    
    return 0;
}