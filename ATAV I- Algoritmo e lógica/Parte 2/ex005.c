#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, res;
    int op1, op2;

    printf("Digite dois numeros: \n");
    scanf("%f%f", &n1, &n2);
    printf("Voce deseja fazer qual tipo de operacao:\n 1 - Basica\n 2- Avancada\n");
    scanf("%d", &op1);

    switch (op1){
    case 1:
        printf("Escolha uma operacao:\n 1- Soma\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\n ");
        scanf("%d", &op2);
        switch (op2){
        case 1:
            res = n1 + n2;
            printf("A soma deu: %.2f", res);
            break;
        case 2:
            res = n1 - n2;
            print("A subtracao deu: %.2f", res);
            break;
        case 3:
            res = n1 * n2;
            printf("A multiplicacao deu: %.2f", res);
            break;
        case 4: 
            if (n2 != 0){
                res = n1/n2;
                printf("A divisao deu: %.2f", res);
            } else {
                printf("Impossivel dividir por 0");
            }
            break;
        default:
            printf("Opcao invalida");
            break;
        }
        break;
    case 2: 
        printf("Escolha uma operacao:\n 1 - Resto da divisao\n 2 - Soma dos quadrados\n 3 - Incremento\n 4 - Decremento\n");
        scanf("%d", &op2);
        switch (op2){
        case 1:
            int n1, n2;
            res = n1%n2;
            printf("O resto da divisao deu: %.2f", res);
            break;
        case 2: 
            res = n1 * n1 + n2 * n2;
            printf("A soma dos quadrados deu: %.2f", res);
            break;
        case 3:
            int i1, i2;
            i1 = ++n1;
            i2 = ++n2;
            printf("O incremento dos dois valores e: %d%d", i1, i2);
            break;
        case 4:
            int i1, i2;
            i1 = --n1;
            i2 = --n2;
            printf("O decremento dos dois valores e: %d%d", i1, i2);
            break;
        default:
            printf("Opcao invalida");
            break;
        }
    default:
        printf("Opcao invalida");
        break;
    }


    return 0;
}