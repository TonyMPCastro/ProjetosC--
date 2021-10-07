#include <stdio.h>
#include<locale.h>
#include <stdlib.h>
//Autor: Antonio Marcos Patricio Castro

#define tamanho 50
int main()
{
setlocale(LC_ALL,"Portuguese_Brazil");
char nome[tamanho];
printf("Digite seu nome:");
fgets(nome,50,stdin);
//scanf("%c",&nome[]);


printf("nome: %s",nome);



return 0;
}
