#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int idd, maior, menor;
    printf("Digite a idade do primeiro filho:\n");
    scanf("%d", &idd);
    maior = idd;
    menor = idd;

    for(int i = 1; i <= 4; i++){
        printf("Digite a idade do proximo filho\n");
        scanf("%d", &idd);
        
        if (idd > maior){
            maior = idd;
        }
        
        if (idd < menor){
            menor = idd;
        }   
    }

    printf("O filho mais velho tem %d anos, e o mais novo tem %d anos", maior, menor);

    return 0;
}