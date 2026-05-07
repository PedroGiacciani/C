#include <stdio.h>

float n1, n2, R, Q;
int op;

int main(){
    printf("Digite dois numeros\n");
    scanf("%f%f", &n1, &n2);
    printf("Escolha uma operacao:\n 1-Soma\n 2-Potenciacao\n 3-Multiplicacao\n 4-Divisao\n");
    scanf("%d", &op);

    switch (op){
    case 1:
        R = n1 + n2;
        printf("A soma deu: %.2f", R);
        break;
    case 2:
        R = n1 * n1;
        Q = n2 * n2;
        printf("O quadrado deles eh: %.2f e %.2f", R, Q);
        break;
    case 3:
        R = n1 * n2;
        printf("A multiplicacao deu: %.2f", R);
        break;
    case 4:
        if (n2 == 0){
            printf("Eh impossivel dividir por 0");
        } else{
            R = n1/n2;
            printf("A divisao deu: %.2f", R);
        }
        break;
    default:
        printf("Opcao invalida");
    }

    return 0;
}