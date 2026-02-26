#include <stdio.h>

float a, b, c;

int main(){
    printf("Digite 3 números\n");
    scanf("%f%f%f", &a, &b, &c);
    
    if (a > b && b > c)
    {
        printf("A ordem eh %.2f %.2f %.2f", c, b, a);       
    } else if (a > b && b < c && c < a)
    {
        printf("A ordem eh %.2f %.2f %.2f", b, c, a);
    } else if (a < b && b > c && c < a)
    {
        printf("A ordem eh %.2f %.2f %.2f", c, a, b);
    } else if (a < b && b > c && c > a)
    {
        printf("A ordem eh %.2f %.2f %.2f", a, c, b);
    } else if (a > b && b < c && c > a)
    {
        printf("A ordem eh %.2f %.2f %.2f", b, a, c);
    } else if (a < b && b < c && c > a)
    {
        printf("A ordem eh %.2f %.2f %.2f", a, b, c);
    }

    return 0;
}