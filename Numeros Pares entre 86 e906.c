# include <stdio.h>
#include<locale.h>
//Autor:Antonio Marcos Patricio Castro

int main()
{
   int i,soma=0;
    setlocale(LC_ALL,"Portuguese_Brazil");
   for (i=86;i>85 && i<907;i++){

    if(i%2==0){
    printf("%d\t",i);
    soma+=i;

    }
   }
   printf("\nSoma dos números pares entre 85 e 907= %d",soma);

   return 0;
}
