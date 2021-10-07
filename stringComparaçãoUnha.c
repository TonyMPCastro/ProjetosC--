
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int testeA(char c1[10]){
    int cont1 = 0,i;
    char a1[10] = "azul";
	for(i = 0; i < 10; i++){
        if(c1[i] == a1[i]){
            cont1++;
        }else{
        break;
        }
	}

    return cont1;
}

int testeV(char c1[10]){
    int cont1 = 0,i;
    char a1[10] = "vermelho";
	for(i = 0; i < 10; i++){
        if(c1[i] == a1[i]){
            cont1++;
        }else{
        break;
        }
	}

    return cont1;
}
int testeP(char c1[10]){
    int cont1 = 0,i;
    char a1[10] ="preto";
	for(i = 0; i < 10; i++){
        if(c1[i] == a1[i]){
            cont1++;
        }else{
        break;
        }
	}

    return cont1;
}

int main(){

   char c1[10],c2[10],c3[10];

    printf("Digite tres cadeias de caracteres:\n");
    printf("\nPrimeira: ");
    fgets(c1,10,stdin);
    printf("\nSegunda: ");
    fgets(c2,10,stdin);
    printf("\nTerceira: ");
    fgets(c3,10,stdin);

    int a = testeA(c1)+ testeP(c1) + testeV(c1);
    int b = testeA(c2)+ testeP(c2) + testeV(c2);
    int c = testeA(c3)+ testeP(c3) + testeV(c3);

     if((a >=4 && b >=4) || (a >=4 && c >= 4) || (c >=4 && b >=4)){
        if(((a == b) && c >= 4) || ((a == c) && b >=4 ) || ((c == b) && a >=4 )){
                printf("\n\nVerdadeiro\n\n");
        }else if(a >=4 && b >=4 && a != b && a != c){
                printf("\n\nVerdadeiro\n\n");
        }else if(a >=4 && c >= 4 && a != b && a != c){
                printf("\n\nVerdadeiro\n\n");
        }else if(c >=4 && b >=4 && a != b && a != c){
                printf("\n\nVerdadeiro\n\n");
        }else{
                printf("\n\nFalso\n\n");
     }
        }else{
             printf("\n\nFalso\n\n");
     }

    return 0;
}
