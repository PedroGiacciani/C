#include <stdio.h>

int main(){
    int i, j, m[5][5], menor = 100000;

    for(i  = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite o valor da posicao m[%d][%d]\n", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    int maior = m[0][0];

    printf("\n===SUA MATRIZ===\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%4d", m[i][j]);
            if(m[i][j] > maior){
                maior = m[i][j];
            }
            if(m[i][j] < menor){
                menor = m[i][j];
            }
        }
        printf("\n");
    }

    printf("\nMaior elemento da matriz: %d\nMenor elemento da matriz: %d\n", maior, menor);

    return 0;
}