#include <stdio.h>

int main(){
    int i, j, m[2][2];

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite o valor da posicao m[%d][%d]\n", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    printf("MATRIZ DIGITADA\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }

    printf("MATRIZ DIAGONAL\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            if(i != j){
                m[i][j] = 0;
            }
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}