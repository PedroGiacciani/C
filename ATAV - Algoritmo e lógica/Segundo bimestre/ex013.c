#include <stdio.h>

int main(){
    int idade[50], i;
    for(i = 0; i < 50; i++){
        printf("Digite a idade da pessoa %d\n", i + 1);
        scanf("%d", &idade[i]);
    }
    for(i = 0; i < 50; i++){
        printf("Idade da pessoa %d: %d\n", i + 1, idade[i]);
    }

    return 0;
}
