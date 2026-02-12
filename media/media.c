#include <stdio.h>

float p1, p2, r1, r2, r3, r4;

int main(){
    printf("Digite um numero");
    scanf("%f", & p1);
    printf("Digite outro numero");
    scanf("%f", & p2);
    
    r1 = p1 + p2;
    r2 = p1 - p2;
    r3 = p1 * p2;
    r4 = p1/p2;

    printf("A soma e = %f", r1); 
    printf("A subtracao e = %f", r2);
    printf("A multiplicacao e = %f", r3);
    printf("A divisao e = %f", r4);

    return (0);
}