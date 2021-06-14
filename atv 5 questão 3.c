# include <stdio.h>
#include<locale.h>
//Autor: Antonio Marcos Patricio Castro

int main()
{
int i,num[10],num2[10],result[10];
setlocale(LC_ALL,"Portuguese_Brazil");
for(i=0;i<10;i++){
    num[i]=2;
    num2[i]=1+i;
    result[i]=num[i]+num2[i];
    }

    for(i=0;i<10;i++){
        printf("%d\t",result[i]);
    }
return 0;
}
