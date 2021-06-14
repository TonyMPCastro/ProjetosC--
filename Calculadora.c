#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
//Autor:Antonio Marcos Patricio Castro

int main(void){
        float n1, n2, resultado;
       int op;
        do{
                setlocale(LC_ALL,"Portuguese_Brazil");
            system("cls");
                printf("\nDigite o primeiro n�mero: ");
                scanf("%f", &n1);
                printf("\n 1 - SOMA\n 2 - SUBTRA��O\n 3 - MULTIPLICA��O\n 4 - DIVIS�O\n");
                printf("\nEscolha a opreracao: ");
                scanf("%i", &op);
                if(op>=5){
            system("cls");
            printf("opera��o inv�lida\n Comece de novo\n");
                printf("\nDigite o primeiro n�mero: ");
                scanf("%f", &n1);

                 printf("\n 1 - SOMA\n 2 - SUBTRA��O\n 3 - MULTIPLICA��O\n 4 - DIVIS�O\n");
                printf("\nEscolha a oprera��o: ");
                scanf("%i", &op);
                }
                printf("\nDigite o segundo n�mero: ");
                scanf("%f", &n2);
                switch(op){
                        case 1:
                                resultado = n1+n2;
                                break;
                        case 2:
                                resultado = n1-n2;
                                break;
                        case 3:
                                resultado = n1*n2;
                                break;
                        case 4:
                                resultado = n1/n2;
                                break;

                }
                printf("\n O resultado �: %0.2f\n", resultado);
                printf("\n Digite 1 para continuar: ");
                scanf("%i", &op);
        }while(op==1);
return 0;
}
