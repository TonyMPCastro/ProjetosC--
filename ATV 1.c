#include <stdio.h>
#include <stdlib.h>

int main(){
int A,B,C, ss;

do{

  system("cls");

printf("Digite o valor do lado 1:\t");
scanf("%d",&A);

printf("Digite o valor do lado 2:\t");
scanf("%d",&B);

printf("Digite o valor do lado 3:\t");
scanf("%d",&C);

if(A < (B+C) & B < (A+C) & C < (A+B)){

if(A == B && B == C){
    printf("\n\t Equilatero ");
}else if(A == B || A == C || B == C){
    printf("\n\t Isosceles ");

}else{
    printf("\n\t Escaleno  ");
}

}else{
    printf("\n\t Nao e triangulo! ");
}
printf("\n\n Digite 0 para SAIR ou 1 para Continuar:\t");
scanf("%d",&ss);

}while(ss != 0);

return 0;
}
