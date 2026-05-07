#include <stdio.h>

int main(){
    int valores[50];

    for(int i = 0; i < 50; i++){
       printf("Digite o valor do produto %d\n", i + 1); 
       scanf("%d", &valores[i]);
    }

    for(int i = 0; i < 50; i++){
        printf("Valor do produto %d: %d\n", i + 1, valores[i]);
    }
    
    return 0;
}