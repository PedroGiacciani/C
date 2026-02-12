#include <stdio.h>

char n[40];
float p1, p2, m;

int main(){
    printf("Qual o seu nome? \n");
    scanf("%s", n);
    printf("Digite suas notas \n");
    scanf("%f%f", &p1, &p2);
    
    m = (p1+p2)/2;

    printf("Aluno: %s \n" "Media: %f \n", n, m);

    if (m < 5.0){
        printf("Estado: Reprovado");
    }
    else if (m >= 5.0 && m<= 6.9)
    {
        printf("Estado: Recuperar");
    }
    else
    {
        printf("Estado: Aprovado");
    }
    
    
}