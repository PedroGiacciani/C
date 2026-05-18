#include <stdio.h>

int main(){
    int i, j, x, y;

    printf("A matriz vai ter quantas linhas e quantas colunas?\n");
    scanf("%d%d", &x, &y);
    int m[x][y];

    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            printf("Digite o valor da posicao m[%d][%d]\n", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\n===MATRIZ COMPLETA===\n");
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}