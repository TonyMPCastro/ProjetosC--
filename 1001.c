#include<stdio.h>
int main(){
float valor,resultado;
int estado;
printf("Digite o valor do produto: ");
scanf("%f",&valor);
printf("# ESTADOS #\n 1- MG \n 2- SP \n 3- RJ \n 4- MS\n Escolha seu Estado: ");
scanf ("%i",&estado);
if(estado >= 5){
    printf("# ERRO #\n Estado ivalido\n");
}
switch(estado){
    case 1:
    resultado = valor * 1.7;
    printf("O valor com Imposto: %.3f \n", resultado);
    break;
    case 2:
    resultado = valor * 1.12;
    printf("O valor com Imposto: %.3f \n", resultado);
    break;
    case 3:
    resultado = valor * 1.15;
    printf("O valor com Imposto: %.3f \n", resultado);
    break;
    case 4:
    resultado = valor * 1.8;
    printf("O valor com Imposto: %.3f \n", resultado);
    break;
}
return 0;
}
