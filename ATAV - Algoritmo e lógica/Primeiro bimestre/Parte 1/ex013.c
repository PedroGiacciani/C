#include <stdio.h>

int d, v;

int main(){
    printf("Serao quantas diarias? \n");
    scanf("%d", &d);

    if (d <= 3)
    {
        v = d * 80;
        printf("O valor sera de: R$%.2d,00", v);
    } else if (d <=5)
    {
        v = d * 100;
        printf("O valor sera de: R$%.2d,00", v);
    } else if (d <= 10)
    {
        v = d * 150;
        printf("O valor sera de: R$%.2d,00", v);
    } else{
        printf("Valor indeterminado");
    }
    
    return 0;
}