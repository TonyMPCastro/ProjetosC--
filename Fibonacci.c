# include <stdio.h>
#include<locale.h>
//Autor: Antonio Marcos Patricio Castro

int main()
{
   int i,v1=0,v2=0,v3=0,n;
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("digite um número:");
    scanf("%d",&n);
    n=n-1;
   for (i=0;i<n;i++){

    v3=v1+v2;
      v1= v2;
      v2= v3;
    printf("%d\t",v3);
    if(v1==0){
        v1=1;
    }
    if(v3==0){
       printf("1\t");
    }
   }

   return 0;
}
