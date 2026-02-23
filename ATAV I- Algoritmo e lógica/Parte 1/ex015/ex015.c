#include <stdio.h>

int n1, p;

int main(){
    printf("Digite um número\n");
    scanf("%d", &n1);

    p = n1%2;

    if (p==0)
    {
        printf("Seu numero eh par");
    } else {
        printf("Seu numero eh impar");
    }
    
    return 0;
}
