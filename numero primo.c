# include <stdio.h>
#include<locale.h>
//Autor: Antonio Marcos Patricio Castro

int main(){
int num,i,cont=0;
do{
 printf("Digite um numero:");
 scanf("%d",&num);
 if(num==0){
    printf("Numero Invalido");
    return 0;
           }
for (i=2;i<num;i++){

    if(num%i==0){
    printf("\nNumero nao e primo\n");
    cont++;
    return 0;
}}
    if(cont==0){
    printf("\nnumero primo\n");
    }
 printf("Digite 1 para continuar e 0 para encerrar:");
 scanf("%d",&i);
}while(i==1);
return 0;
}
