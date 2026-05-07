#include <stdio.h>

int op;

int main(){
    printf("Escolha uma opcao de sombremesa\n 1 - Mousse\n 2 - Pudim\n 3 - Sorvete\n 4 - Pave\n");
    scanf("%d", &op);

    switch (op){
    case 1:
        printf("Voce escolheu um Mousse, tambem eh meu favorito");
        break;
    case 2:
        printf("Voce escolheu um Pudim, minha vo faz um pudim delicioso");
        break;
    case 3:
        printf("Voce escolheu um Sorvete, otima escolha");
        break;
    case 4:
        printf("Voce escolheu um Pave, e pave ou pacume?");
        break;
    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}