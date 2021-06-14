//Autor:Antonio Marcos Patricio Castro
#include <stdio.h>
int main( ){
    char cont;
int op;
float num,resul,est;
   do{ printf("\nDigite o valor do produto: ");
    scanf("%f",&num);
    printf("\nESCOLHA SEU ESTADO\n 1- MG\n 2- SP\n 3- RJ\n 4- MS\n");
    scanf("%i",&op);
if(op==1)
    est= 0.07;
if (op==2)
    est= 0.12;
if(op==3)
    est= 0.15;
if(op==4)
    est= 0.08;
if (op>=5){
        num = 0;
        printf("ERRO\n");}

    resul= num + (num*est);
    printf("\nRESULTADO: %.1f",resul) ;

   printf("\n\nDIGITE 0 PARA REPITIR OU 1 PARA FECHAR :");
   scanf("%i",&op);
  } while (op==0);

return 0;
}

