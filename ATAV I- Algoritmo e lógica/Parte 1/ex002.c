#include <stdio.h>

float n1, n2, r1, r2, r3, r4;

int main(){
    printf("Digite 2 números \n");
    scanf("%f%f", &n1, &n2);

    r1 = n1 + n2;
    r2 = n1 - n2;
    r3 = n1 * n2;
    r4 = n1/n2;

    printf("A soma deu: %.0f \n" "A subtracao: %.0f \n" "A mutiplicacao: %.0f \n" "E a divisao: %.2f", r1, r2, r3, r4);
    return 0;
}