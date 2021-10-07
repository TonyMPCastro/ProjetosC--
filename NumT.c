
#include <stdio.h>

#define n 5
#define g 15

int testeT(int num1, int num2){
    int i = 0;
    if(num1 > num2){
        i = 1;
    }

return i;
}

int main() {

  int vet[n]={0,1,3,5,7},vet1[5]={2,4,6,8,9},vet2[n]={-5,-4,-3,-2,-1},vet3[g],vetT,j =0, parada = 0;




    printf("Vet: ");
    for(int i= 0;i<n;i++){
        printf("\t%d",vet[i]);
        }
     printf("\nVet1: ");
    for(int i= 0;i<n;i++){
        printf("\t%d",vet1[i]);
        }
     printf("\nVet2: ");
    for(int i= 0;i<n;i++){
        printf("\t%d",vet2[i]);
        }
        //Imprime os vetores

        for(int i= 0;i<n;i++){
            vet3[i] =  vet1[i];
            vet3[i+5] =  vet[i];
            vet3[i+10] =  vet2[i];
        }//copia os vetores menores para o maior

          printf("\n\n");
    for(int i= 0;i<g;i++){
        printf("\t%d",vet3[i]);
        }//imprime o vetor maior
   while(parada != g){
       j++;
      if(j == g){
            j = 0;
            if(parada < (g-1)){
              parada = 0;
            }
        }
        if(testeT(vet3[j],vet3[j+1]) == 1 && j+1 != g){
            vetT = vet3[j] ;
            vet3[j] = vet3[j+1];
            vet3[j+1] = vetT;
            parada--;
        }else if(j+1 != g){
            parada++;
        }
    }//Ordena o vetor maior em ordem cresente

        printf("\n\n");
    for(int i= 0;i<g;i++){
        printf("\t%d",vet3[i]);
        }


  return 0;
}
