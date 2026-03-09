#include <stdio.h>

int main(){
    printf("Numeros pares de 0 a 200:\n");
    for (int i = 0; i <= 200; i += 2){
        printf("%d ", i);
    }

    printf("\nNumeros impares de 0 a 200:\n");
    for (int i = 1; i <= 200; i += 2){
        printf("%d ", i);
    }
}