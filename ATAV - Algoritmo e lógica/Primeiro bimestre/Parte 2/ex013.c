#include <stdio.h>

int main(){
    int n, s;
    s = 0;

    for (int i = 1; i <= 10; i++){
        printf("Digite um numero:\n");
        scanf("%d", &n);
        s += n;
    }

    printf("A soma de todos esses numeros deu: %d", s);

    return 0;
}