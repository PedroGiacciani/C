#include <stdio.h>

int n1;

int main(){
    printf("Digite um numero impar\n");
    scanf("%d", &n1);

    if (n1%2 != 0)
    {
        printf("Seu numero eh impar");
    } else{
        printf("Seu numero nao eh impar");
    }

    return 0;
}