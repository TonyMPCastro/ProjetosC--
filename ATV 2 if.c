//Autor: Antonio Marcos Patricio Castro
// poligonos regulares com If
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int qlados, ss;
float lado,base,altura;

do{

 printf("\n##Calcular a area dos poligonos regulares com IF##\n\n");
    printf("\nDigite a quantidade de lados:\t");
    scanf("%d",&qlados);

        if(qlados == 3){
            printf("\n*Calcular a area do triangulo*\n\n");
            printf("\nDigite o valor da base:\t");
            scanf("%f",&base);
            printf("\nDigite o valor da altura:\t");
            scanf("%f",&altura);
            printf("\n\n Area e : %.2f\t",(base*altura)/2);
        }else if (qlados == 4){
            printf("\n*Calcular a area do quadrilatero*\n\n");
            printf("\nDigite o valor dos lados:\t");
            scanf("%f",&lado);
            printf("\n\n Area e : %.2f\t",lado*lado);
        }else if (qlados == 5){
            printf("\n*Calcular a area do pentagono*\n\n");
            printf("\nDigite o valor dos lados:\t");
            scanf("%f",&lado);
            printf("\nDigite o valor do apotema:\t");
            scanf("%f",&altura);
            printf("\n\n Area e : %.2f\t",qlados*lado*altura);
        }else if (qlados == 6){
            printf("\n*Calcular a area do hexagono *\n\n");
            printf("\nDigite o valor dos lados:\t");
            scanf("%f",&lado);
            printf("\n\n Area e : %.2f\t",(3*(lado*lado)*sqrt(3))/2);
        }else{
           printf("\nNumero de lados e invalido");
        }

    printf("\n\n Digite 0 para SAIR ou 1 para Continuar:\t");
    scanf("%d",&ss);

    system("cls");


}while(ss != 0);

return 0;
}
