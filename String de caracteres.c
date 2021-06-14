#include <stdio.h>
#include<locale.h>
#include <stdlib.h>
//Autor: Antonio Marcos Patricio Castro

int main()
{
setlocale(LC_ALL,"Portuguese_Brazil");
char nome[50];
printf("Digite seu nome:");
fgets(nome,50,stdin);



printf("nome: %s",nome);



return 0;
}
