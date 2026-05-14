#include <stdio.h>

int main(){
    int N = 1;
    for(int i = 0; i < 9; i++){
        printf("Digite um valor entre 2 e 10\n");
        scanf("%d", &N);

        if(N == 0){
            return 0;
        } else if(N < 2 || N > 10){
            i--;
        } else{
            for(int j = 1; j <= 10; j++){
                printf("%d X %d = %d\n", N, j, N * j);
            }
        }
    }
    return 0;
}

/*
    OUTRA FORMA
    
    while(N != 0){
        printf("Digite um valor entre 2 e 10\n");
        scanf("%d", &N);
        if(N == 0){
            return 0;
        } else if(N == 1){
            i--;
        } else{
            for(int i = 1; i <= 10; i++){
                printf("%d X %d = %d\n", N, i, N * i);
            }   
        }
    }
*/