#include <stdio.h>

int op;

int main(){
    printf("Escolha uma vogal\n 1 - A\n 2 - E\n 3 - I\n 4 - O\n 5 - U\n");
    scanf("%d", &op);

    switch (op){
    case 1:
        printf("Ariranha");
        break;
    case 2: 
        printf("Estrada");
        break;
    case 3:
        printf("Indio");
        break;
    case 4:
        printf("Ovo");
        break;
    case 5:
        printf("Urso");
        break;
    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}