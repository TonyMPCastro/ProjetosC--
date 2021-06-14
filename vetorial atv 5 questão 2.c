# include <stdio.h>
#include<locale.h>
//Autor: Antonio Marcos Patricio Castro

int main()
{
int i,num[10],num2[10];
setlocale(LC_ALL,"Portuguese_Brazil");
for(i=0;i<10;i++){
    num[i]=1+i;
    }
    for(i=0;i<10;i++){
        num2[i]=num[i];
    }
    printf("Vetor 2:\n");
    for (i=0;i<10;i++){
        printf("%d\t",num2[i]);
    }



   return 0;
}
