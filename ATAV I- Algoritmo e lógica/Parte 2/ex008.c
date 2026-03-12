#include <stdio.h>

int main(){
    int n, s;

    for (int i = 1; i <= 3; i++){
        printf("Digite um numero:\n");
        scanf("%d", &n);
        s += n;
    }

    printf("A soma desses 3 numeros eh %d", s);
    return 0;

}