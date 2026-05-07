#include <stdio.h>

int main(){
    int valores[20], menor = 1000000, valorMenor;

    for(int i = 0; i < 20; i++){
        printf("Digite o valor do produto %d\n", i + 1);
        scanf("%d", &valores[i]);

        if(valores[i] < menor){
            menor = valores[i];
            valorMenor = i + 1;
        }
    }
    printf("O produto %d tem o menor valor: %d\n", valorMenor, menor);
    return 0;
}