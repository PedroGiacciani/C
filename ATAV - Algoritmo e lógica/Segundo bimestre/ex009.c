#include <stdio.h>

int main(){
    int medida[3], mult = 1;

    for(int i = 0; i < 3; i++){
        printf("Digite o valor do lado %d do retangulo\n", i + 1);
        scanf("%d", &medida[i]);
        if(medida[i] <= 0){
            printf("Valor invalido! Digite novamente\n");
            i--;
        } else{
            mult *= medida[i];
        }
    }
    printf("O volume do retangulo: %d\n", mult);
    return 0;
}   