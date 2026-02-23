#include <stdio.h>

int n;

int main(){
    printf("Digite um numero par\n");
    scanf("%d", &n);

    if (n%2==0)
    {
        printf("Seu numero eh par");
    } else{
        printf("Esse numero nao eh par");
    }

    return 0;
}