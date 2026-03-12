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
        printf("Digite a idade do proximo filho");
        scanf("%d", &idd);
        
        if (idd > maior){
            maior = idd;
        } else if (idd < menor){
            idd = menor;
        }   
    }

    printf("O filho mais velho tem %d, e o mais novo tem %d", maior, menor);

    return 0;
    
}