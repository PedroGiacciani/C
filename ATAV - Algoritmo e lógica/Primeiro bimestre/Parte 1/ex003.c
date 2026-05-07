#include <stdio.h>

float C, F, K;

int main(){
    printf("Digite a temperatura em graus celsius \n");
    scanf("%f", &C);

    F = ((9*C)+160)/5;
    K = C + 273;

    printf("A temperatura em Fahrenheit: %.2f \nA temperatura em Kelven: %.2f", F, K);

    return 0;
}
