#include <stdio.h>

typedef struct {
    char nome[200];
    int idade;

} Pessoa;


int main(void){

int i,qP, menorIdade, maiorIdade;

    printf(" \nQuantas pessoas para cadastrar: ");
    scanf("%d", &qP);
      Pessoa p[qP];

  for(i=0; i<qP; i++) {
    printf(" \nDigite nome: ");
    scanf("%s", &p[i].nome);
    printf("\n Digite a idade: ");
    scanf("%d", &p[i].idade);
    printf("\n\n");
    }
  menorIdade = p[0].idade ;
     for(i=1; i<qP; i++) {
       if(p[i].idade < menorIdade){
            menorIdade = p[i].idade;
       }
        }//Encontra pessoa mais jovem

    maiorIdade = p[0].idade ;
     for(i=1; i<qP; i++) {
       if(p[i].idade > maiorIdade){
            maiorIdade = p[i].idade;
       }
        }//Encontra pessoa mais idosa

     for(i=0; i<qP; i++) {
       if(p[i].idade == maiorIdade){
            printf("\n\n\n## Maior Idade ##\n");
            printf("\n\nNome: %s",p[i].nome);
            printf("\nIdade: %d",p[i].idade);
        }

       if(p[i].idade == menorIdade){
            printf("\n\n\n## Menor Idade ##\n");
            printf("\n\nNome: %s",p[i].nome);
            printf("\nIdade: %d",p[i].idade);
        }
        }//Mostra maior idade e menor idade
        printf("\n\n\n\n");

return(0);
}

