

//     #######  Questão 1:  #######

#include <stdio.h>

int main(){

    int num[3],i, maior, menor;

    printf("Digite tres numeros inteiros:\n");
    printf("\nPrimeiro: ");
    scanf("%d",&num[0]);
    printf("\nSegundo: ");
    scanf("%d",&num[1]);
    printf("\nTerceiro: ");
    scanf("%d",&num[2]);

    maior = num[0];
    menor = num[0];
    for(i=1; i < 3; i++){
      if (num[i] > maior){
         maior = num[i];
      }

       if (num[i] < menor){
         menor = num[i];
      }
    }

    if(maior%2 == 0 || menor%2 != 0){
        printf("\n\nVerdadeiro\n\n");
    }else{
        printf("\n\nFalso\n\n");
    }

    return(0);
}

//     #######  Questão 2:  #######

#include <stdio.h>

int main(){
    char vogais[]= "aeiou", consoantes[]= "bcdfghjklmnpqrstvwxyz", letra;
    int i,j,cont;

    printf("Digite um caractere qualquer: ");
    scanf("%c",&letra);

   // if(letra > 64 && letra < 91)
   //     letra += 32;
    for(i=0; i<22;i++){
    if(letra == vogais[i] || letra == consoantes[i]){
       for(j=0; j<22;j++){
        if(letra == vogais[j]){
            printf("\n\n\tE uma vogal!\n\n\n");
            i = 22;
            break;
        }
         if(letra == consoantes[j]){
            printf("\n\n\tE uma consoante!\n\n\n");
            i = 22;
            break;
         }
    }
    }else{
    cont++;
    }
    }
    if(cont == 22){
        printf("\n\n\tCaractere nao e uma letra\n\n\n");
    }


    return 0;
}

//     #######  Questão 3:  #######

#include <stdio.h>

int main(){

    int pgols, sgols;

    printf("Digite o placar do jogo:\n");
    printf("\nGols do Primeiro Time: ");
    scanf("%d",&pgols);
    printf("\nGols do Segundo time: ");
    scanf("%d",&sgols);

    if (sgols == pgols){
        printf("\n\n\nEmpate");
    }else if( pgols > sgols){
        printf("\n\n\nVitoria do Primeiro");
    }else{
        printf("\n\n\nVitoria do Segundo");
}

    return 0;
}

//     #######  Questão 4:  #######


#include <stdio.h>

int main(){

   int num[4],i;

    printf("Digite quatro numeros inteiros:\n");
    printf("\nPrimeiro: ");
    scanf("%d",&num[0]);
    printf("\nSegundo: ");
    scanf("%d",&num[1]);
    printf("\nTerceiro: ");
    scanf("%d",&num[2]);
    printf("\nQuarto: ");
    scanf("%d",&num[3]);

    for(i=0;i<4;i++){
        if(num[i] >= 1 && num[i] <= 25){
            printf("\n\n%d º no intervalo 1 e 25\n\n",num[i]);
        }else if(num[i] <= 50){
            printf("\n\n%d º no intervalo 26 e 50\n\n",num[i]);
        }else if( num[i] <= 75){
            printf("\n\n%d º no intervalo 51 e 75\n\n",num[i]);
        }else if(num[i] <= 100){
            printf("\n\n%d º no intervalo 76 e 100\n\n",num[i]);
        }

    }
    return 0;
}

//     #######  Questão 5:  #######

//Teste de String na unha

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
        }else if(a >=4 && b >=4 || a >=4 && c >=4 || c >=4 && b >=4){
                printf("\n\nVerdadeiro\n\n");
        }else{
                printf("\n\nFalso\n\n");
     }
        }else{
             printf("\n\nFalso\n\n");
     }

    return 0;
}


//     #######  Questão 6:  #######

#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int vencedor(int t1, int t2){
    int i =0;
    if(t1==t2){
        i = 3; //Empate
    }else if(t1>t2){
        i = 2; //Vitora P1
    }else{
        i = 1; //Vitora P2
        }

return i;
}

int main(){

int aposta[2], jogo[2], pontos = 0;

    printf("\t\tDigite o placar do Jogo:\n");
    printf("\nGols do Primeiro Time: ");
    scanf("%d",&jogo[0]);
    printf("\nGols do Segundo time: ");
    scanf("%d",&jogo[1]);
    printf("\n\n\n==============================================");
    printf("\n\n\n\t\tDigite o placar da Aposta:\n");
    printf("\nGols do Primeiro Time: ");
    scanf("%d",&aposta[0]);
    printf("\nGols do Segundo time: ");
    scanf("%d",&aposta[1]);

    int vJ = vencedor(jogo[0],jogo[1]), vA  = vencedor(aposta[0],aposta[1]);

    if(vJ == vA){
      pontos = 10;

    }
    if(aposta[0] == jogo[0] && aposta[1] == jogo[1]){
                    pontos += 10;
        }else if(aposta[0] == jogo[0] || aposta[1] == jogo[1]){
                    pontos += 5;
        }
    printf("Resultado: %d ",pontos);
    return 0;
}

//     #######  Questão 7:  #######

#include <stdio.h>

int main() {

 float notas[6],maior=0 , menor=0, soma=0;

 for(int i= 0;i <6;i++){
    printf("Digite a Nota do %d Juiz: ",i+1);
    scanf("%f", &notas[i]);
 }

    maior = notas[0];
    menor = notas[0];

     for(int i=1; i < 6; i++){
      if (notas[i] > maior){
         maior = notas[i];
      }


       if (notas[i] < menor){
         menor = notas[i];
      }
    }

    for(int i=0; i < 6; i++){
      if (notas[i] == maior){
        notas[i] = 0;
        break;
      }
    }

      for(int i=0; i < 6; i++){
      if (notas[i] == menor){
        notas[i] = 0;
        break;
      }
    }

      for(int i=0; i < 6; i++){
          soma += notas[i];
      }

      printf("\n\n\nSoma das Notas: %.2f\n\n",soma);
 return 0;
}

//     #######  Questão 8:  #######

#include <stdio.h>
#include <stdlib.h>

int teste(int num, int num2[5]){
    int i = 0;
     for(int j=0;j<5;j++){
        if(num == num2[j]){
         i++;
    }
}
return i;
}


int main() {

 int num[5],contP =0,num1[5], cont =0;

 for(int i= 0;i <5;i++){
    printf("Digite %d numero: ",i+1);
    scanf("%d", &num[i]);
 }


  for(int i=0;i<5;i++){
   if (teste(num[i],num) > 1 && teste(num[i],num1) < 1){
        num1[cont] = num[i];
        cont++;
        contP++;
   }

    }



     printf("Quantidade de Pares: %d ",contP);


 return 0;
}


//     #######  Questão 9:  #######


#include <stdio.h>

int main() {

  int sorteados[3], aposta[3],cont = 0;


    for(int i=0;i<3;i++){
    printf("\nDigite o %d numero da aposta: ",i+1);
    scanf("%d",&aposta[i]);
  }
    printf("\n\n============================================================\n\n");
  for(int i=0;i<3;i++){
    printf("\nDigite o %d numero Sorteado: ",i+1);
    scanf("%d",&sorteados[i]);
  }


  for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
    if(aposta[i] == sorteados[j]){
      cont++;
    }
  }

  }

  printf("\n\n\nQuantidade de Acertos: %d",cont);
  return 0;
}

//     #######  Questão 10:  #######
#include <stdio.h>

int main() {

  int num[3];


    for(int i=0;i<3;i++){
    do{
          printf("\nDigite o %d numero: ",i+1);
          scanf("%d",&num[i]);

    }while(num[i] < 0);
  }

      if(num[0] == num[1] && num[0] == num[2]){
          printf("\nIguais\n\n");
      }else if(num[0] == num[1] || num[0] == num[2] || num[2] == num[1]){
                printf("\nRepetido\n\n");
            }else{
                printf("\nDiferente\n\n");
            }


  return 0;
}
