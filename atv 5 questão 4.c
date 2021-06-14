# include <stdio.h>
#include<locale.h>
//Autor: Antonio Marcos Patricio Castro

int main()
{
int i,a=9,num[10],num2[10],result[10];
setlocale(LC_ALL,"Portuguese_Brazil");
printf("digite 10 números:");

for(i=0;i<10;i++){
    scanf("%d",& num[i]);
    }
    for (i=0 
	;i<10;i++){
    num2[i]=num[a];
    a--;
    }
    printf("Vetor B igual ao vetor A invertido:\n");
    for(i=0;i<10;i++){
    printf("%d\t",num2[i]);
    }

return 0;
}
