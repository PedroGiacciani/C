#include <stdio.h>

int main(){
    int soma = 0, limite;
    printf("=== SOMANDO IMPARES===\nDigite um limite\n");
    scanf("%d", &limite);
    
    for(int i = 1; i < limite; i += 2){
        soma += i;
    }
    printf("A soma dos numeros impares ate %d: %d\n", limite, soma);
    return 0;
}