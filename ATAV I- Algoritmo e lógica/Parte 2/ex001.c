#include <stdio.h>

float a, b;

int main(){
    printf("Digite uma altura \n");
    scanf("%f", &a);
    printf("Digite outra altura \n");
    scanf("%f", &b);

    if (b > a){
        printf("A altura maior e %.2f", b);
    } else{
        printf("A altura maior e %.2f", a);
    }
    
    return 0;
}