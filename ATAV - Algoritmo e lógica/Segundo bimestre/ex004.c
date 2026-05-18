#include <stdio.h>

int main(){
    int i, j, m[3][3], pares = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da posicao m[%d][%d]\n", i + 1, j + 1);
            scanf("%d", &m[i][j]);
            if ((m[i][j]%2) == 0){
                pares += 1;
            }
        }
    }

    printf("\nSUA MATRIZ:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }

    printf("Quantidade de pares na matriz: %d", pares);

    return 0;
}