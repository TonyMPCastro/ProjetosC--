# include <stdio.h>
#include<locale.h>
//Autor: Antonio Marcos Patricio Castro

int main()
{
   int i,v1,v2,v3=0,n;
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("digite o primeiro n�mero:");
    scanf("%d",&v1);
    printf("digite o segundo n�mero:");
    scanf("%d",&v2);
    printf("digite quantidade de n�meros que deseja apresentar:");
    scanf("%d",&n);
    printf("%d\t%d\t",v1,v2);
    n=n-2;
   for (i=0;i<n;i++){

    v3=v1+v2;
      v1= v2;
      v2= v3;
    printf("%d\t",v3);
   }

   return 0;
}
