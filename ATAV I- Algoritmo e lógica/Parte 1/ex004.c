#include <stdio.h>

float C, L, A, V;

int main(){
    printf("Digite o comprimento, a largura e a altura do cubo \n");
    scanf("%f%f%f", &C, &L, &A);

    V = C*L*A;

    printf("O volume do cubo: %.2f", V);

    return 0;
}