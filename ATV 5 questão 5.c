# include <stdio.h>
#include<locale.h>
//Autor: Antonio Marcos Patricio Castro

int main()
{
setlocale(LC_ALL,"Portuguese_Brazil");
int i,A[10],numero,cont=0;
printf("digite os 10 valores do vetor:");
   for (i=0;i<10;i++){
    scanf("%d",&A[i]);   
}
printf("Qual número voçê quer achar?");
scanf("%d",&numero);

   for (i=0;i<10;i++){
   	if(A[i] == numero){
   		printf("\nNúmero encontrado no índici: %d ",i);
   		cont++;
   	}
}
if(cont==0){
	printf("\nNúmero não consta no vetor");
}
return 0;
}
