//Autor:Antonio Marcos Patricio Castro

#include<stdio.h>
int main(){
 int ano,var;
  do
  {
    printf ("Digite o ano: ");
    scanf("%i",&ano);
    if (ano < 1000)
printf("Ano incorreto");
else if(ano%4==0 && ano%100 !=0){
printf("ano bissexto");
    }
else
    printf("ano nao bissexto");


    printf("\nDeseja repetrir o codigo\n Aperte 1 se nao aperte 0: ");
    scanf("%i",&var);

}
while (var==1);

return 0;
  }
