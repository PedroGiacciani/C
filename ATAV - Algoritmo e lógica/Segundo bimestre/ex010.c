#include <stdio.h>

int main(){
    int N, fatorial;
    printf("Digite um valor\n");
    scanf("%d", &N);
    fatorial = N;
    
    for(int i = N - 1; i > 0; i--){
        fatorial *= i;
    }

    printf("O Fatorial de %d vale %d\n", N, fatorial);
    return 0;
}