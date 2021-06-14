#include<stdio.h>
int main(){
float s,valorP,sc;
printf("Digite o valor do salario: ");
scanf("%f",&s);
printf("Valor da prestacao do emprestimo: ");
scanf("%f",&valorP);
sc = s * 0.2;
if(valorP > sc){
    printf("-----------------------------------------------------\n");
    printf("Emprestimo nao concedido \n");
    printf("-----------------------------------------------------\n");
}else {
    printf("-----------------------------------------------------\n");
    printf("Emprestimo Aprovado \n");
    printf("-----------------------------------------------------\n");

}

return 0;
}
