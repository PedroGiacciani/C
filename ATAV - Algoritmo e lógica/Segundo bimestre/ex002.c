#include <stdio.h>

int main(){
    int i, j, m1[2][2], m2[2][2];

    printf("PRIMEIRA MATRIZ\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Qual o valor de m1[%d][%d]\n", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nSEGUNDA MATRIZ\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Qual o valor de m2[%d][%d]\n", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }

    printf("\n==MATRIZ 1==\n\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%4d", m1[i][j]);
        }
        printf("\n");
    }

    printf("\n==MATRIZ 2==\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%4d", m2[i][j]);
        }
        printf("\n");
    }

    printf("\n==SUBTRACAO DELAS==\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%4d", m1[i][j] - m2[i][j]);
        }
        printf("\n");
    }

    return 0;
}