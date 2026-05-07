#include <stdio.h>

int main(){
    int numeros[50];
    for(int i = 100; i > 0; i -= 2){
        numeros[i] = i;
        printf("%d\n", numeros[i]);
    }
    return 0;
}