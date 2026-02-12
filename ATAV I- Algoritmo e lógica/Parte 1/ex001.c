#include <stdio.h>

int i1, i2;

int main(){
    printf("Digite duas idades \n");
    scanf("%d%d", &i1, &i2);

    if (i1 > i2)
    {
        printf("A pessoa que tem %d anos, é mais velha", i1);
    } else{
        printf("A pessoa que tem %d anos, é mais velha", i2);
    }
    
    return 0;
}