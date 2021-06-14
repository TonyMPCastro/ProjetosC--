# include <stdio.h>
#include<locale.h>
//Autor: Antonio Marcos Patricio Castro

int main()
{
   int i,num[6];
    setlocale(LC_ALL,"Portuguese_Brazil");
printf("digite os valores do vetor:");
   for (i=0;i<6;i++){
    scanf("%d",&num[i]);
    }
printf("números na ordem inversa:\n");
for (i=5;i>=0;i--){
    printf("\t%d\t",num[i]);
    }
    
   return 0;
}

