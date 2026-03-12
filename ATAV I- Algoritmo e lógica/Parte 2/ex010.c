#include <stdio.h>

int main(){
    int n, r;
    printf("Escolha um numero:\n");
    scanf("%d", &n);
    for (int i = 0; i <= 10; i++){
        r = n * i;
        printf("%d X %d = %d\n", n, i, r);
    }

    return 0;
    
}