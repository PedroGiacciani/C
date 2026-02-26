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
        printf("O primeiro numero e maior");
    } else{
        printf("O segundo numero e maior");
    }
    
    return 0;
}
