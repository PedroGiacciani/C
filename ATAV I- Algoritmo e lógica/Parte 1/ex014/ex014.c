#include <stdio.h>
#include <stdlib.h>

int idade;

int main(){
    printf ("Digite a sua idade\n");
    scanf("%d", &idade);

    if(idade <= 12){
        printf("Voce tem %d e eh uma criança\n", idade);
    }
    else if(idade <= 19){
        printf("Voce tem %d e eh um adolescente\n", idade);
    }
    else if(idade <= 60){
        printf("Voce tem %d e eh um adulto\n", idade);
    }
    else {
        printf("Voce tem %d e eh um idoso\n", idade);
    }
    
    return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//main()
//{
//int idade;
//printf ("Digite a sua idade\n");
//scanf("%f", &idade);
//if(idade <= 12){
//printf("Voce tem %f e eh uma criança\n, idade");}
//if(idade <= 19);{
//printf("Voce tem %f e eh um adolescente\n", idade);}
//if(idade <= 60);{
//printf("Voce tem %f e eh um adulto\n", idade);}
//else{
//printf("Voce tem %f e eh um idoso\n, idade");
//}