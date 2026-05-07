#include <stdio.h>

int op;

int main(){
    printf("Qual cardarpio voce deseja experimentar\n 1 - Churrascaria\n 2 - Pizzaria\n 3 - Comida japonesa\n 4 - Comida mexicana\n 0 - Sair\n");
    scanf("%d", &op);

    switch (op){
    case 1:
        printf("Cardapio:\n 1 - Rodizio\n 2 - Cupim\n 3 - Picanha\n 4 - Linguica");
        break;
    case 2:
        printf("Cardapio:\n 1 - Mussarela\n 2 - Calabresa\n 3 - Marguerita\n 4 - Frango com Catupiry");
        break;
    case 3: 
        printf("Cardapio:\n 1 - Rodizio\n 2 - Temaki\n 3 - Sashimis\n 4 - Hot Rolls");
        break;
    case 4:
        printf("Cardarpio:\n 1 - Rodizio\n 2 - Tacos\n 3 - Nachos\n 4 - Guacamole");
        break;
    case 0: 
        return 0;
    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}