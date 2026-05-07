#include <stdio.h>

char n[30];
float p1, p2, M;

int main(){
    printf("Digite seu nome \n");
    scanf("%s", n);
    printf("Digite suas notas \n");
    scanf("%f%f", &p1, &p2);

    M = (p1 + p2)/2;

    printf("Aluno: %s \n" "Nota: %.2f \n", n, M);

    if (M < 5.0)
    {
        printf("Estado: Reprovado");
    } else if (M >= 5.1 && M <= 6.9)
    {
        printf("Estado: Recuperar");
    } else{
        printf("Estado: Aprovado");
    }

    return 0;
}