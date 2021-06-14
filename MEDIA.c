#include<stdio.h>
#include<locale.h>
//Autor:Antonio Marcos Patricio Castro
int main (){
   float nota1,nota2,nota3,nota4,media,nota5,media2;
   int op,i;
  setlocale(LC_ALL,"Portuguese_Brazil");

printf("\n\tDigite a quantidade de alunos que deseja colocar notas:  ");
    scanf("%i",&op);
for(i=1;i<=op;i++){
    printf("\n---------------------------------------------------------------------\n");
    printf("\t## Digite as notas do aluno %i ##\n",i);
    printf("\n\t\t# DIGITE A PRIMEIRA NOTA:\t ");
    scanf("%f",&nota1);
    printf("\t\t# DIGITE A SEGUNDA  NOTA:\t ");
    scanf("%f",&nota2);
    printf("\t\t# DIGITE A TERCEIRA NOTA:\t ");
    scanf("%f",&nota3);
    printf("\t\t# DIGITE A QUARTA   NOTA:\t ");
    scanf("%f",&nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    if (media>=7){

            printf("\n\t## ALUNO %i APROVADO ##\n",i);
            printf("\n\t\t\t\t--------------------------");
            printf("\n\t\t\t\t| MÉDIA DO ALUNO %i : %.1f| \n",i,media);
            printf("\t\t\t\t--------------------------");

    }else{ if(media<7){

        printf("\n\t## ALUNO %i DE RECUPERACAO ##\n",i);

        printf("\n\t\t# DIGITE A NOTA DA RECUPERACAO:\t ");
        scanf("%f",&nota5);
        media2 = (media+nota5)/2;

         if(media2>=7){

            printf("\n\t## ALUNO %i APROVADO ##\n",i);
            printf("\n\t\t\t\t-------------------------");
            printf("\n\t\t\t\t| MÉDIA DO ALUNO %i : %.1f| \n",i,media2);
            printf("\t\t\t\t-------------------------");


                }else{if(media2<7){

            printf("\n\t## ALUNO %i REPROVADO ##\n",i);
            printf("\n\t\t\t\t-------------------------");
            printf("\n\t\t\t\t| MÉDIA DO ALUNO %i : %.1f| \n",i,media2);
            printf("\t\t\t\t-------------------------");

                }}

        }


     }}
    printf("\n---------------------------------------------------------------------\n");
    return 0;
    }

