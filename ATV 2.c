//Autor: Antonio Marcos Patricio Castro
// poligonos regulares com switch
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int qlados, ss;
float lado,base,altura;

do{

 printf("\n##Calcular a area dos poligonos regulares com Switch##\n\n");
    printf("\nDigite a quantidade de lados:\t");
    scanf("%d",&qlados);

        switch(qlados){
        case 3:
             printf("\n*Calcular a area do triangulo*\n\n");
            printf("\nDigite o valor da base:\t");
            scanf("%f",&base);
            printf("\nDigite o valor da altura:\t");
            scanf("%f",&altura);
            printf("\n\n Area e : %.2f\t",(base*altura)/2);
            break;
        case 4:
            printf("\n*Calcular a area do quadrilatero*\n\n");
            printf("\nDigite o valor dos lados:\t");
            scanf("%f",&lado);
            printf("\n\n Area e : %.2f\t",lado*lado);
            break;
        case 5:
            printf("\n*Calcular a area do pentagono*\n\n");
            printf("\nDigite o valor dos lados:\t");
            scanf("%f",&lado);
            printf("\nDigite o valor do apotema:\t");
            scanf("%f",&altura);
            printf("\n\n Area e : %.2f\t",qlados*lado*altura);
            break;
        case 6:
            printf("\n*Calcular a area do hexagono *\n\n");
            printf("\nDigite o valor dos lados:\t");
            scanf("%f",&lado);
            printf("\n\n Area e : %.2f\t",(3*(lado*lado)*sqrt(3))/2);
            break;

        default:
            printf("\nNumero de lados e invalido");
        }

    printf("\n\n Digite 0 para SAIR ou 1 para Continuar:\t");
    scanf("%d",&ss);
     system("cls");

}while(ss != 0);

return 0;
}
